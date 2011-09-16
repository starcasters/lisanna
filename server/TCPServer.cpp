/*
 *   C++ sockets on Unix and Windows
 *   Copyright (C) 2002
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "PracticalSocket.h"  // For Socket, ServerSocket, and SocketException
#include <iostream>           // For cerr and cout
#include <cstdlib>            // For atoi()
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
 
#include <google/protobuf/message.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/text_format.h>

#include "lib/rpc/connection.pb.h"
#include "service/authentication/authentication.pb.h"

using namespace std;
using namespace google::protobuf;

#include "rpc/rpc.h"


const unsigned int RCVBUFSIZE = 2048;    // Size of receive buffer

typedef bool (*msg_handler)(TCPSocket *sock, google::protobuf::Message*, rpcheader* pheader);

struct reply {
	google::protobuf::Message* msg;
	msg_handler callback;
};
typedef reply* pReply;

void HandleTCPClient(TCPSocket *sock); // TCP client handling function
int HandleTcpData(TCPSocket *sock, char *dataBuffer, int size);
bool getclass(bool response, int service, int method, pReply areply);

bool handle_BindRequest(TCPSocket *sock, bnet::protocol::connection::BindRequest* message, rpcheader* pheader);
bool handle_ConnectRequest(TCPSocket *sock, bnet::protocol::connection::ConnectRequest* message, rpcheader* pheader);
bool handle_FIXME(TCPSocket *sock, bnet::protocol::connection::ConnectRequest* message, rpcheader* pheader) {
	cout << "FIXME: handle for message " << message->GetDescriptor()->full_name() << " not implemented" << endl;
	return false;
}

CServices services;

int main(int argc, char *argv[]) {
  if (argc != 2) {                     // Test for correct number of arguments
    cerr << "Usage: " << argv[0] << " <Server Port>" << endl;
    exit(1);
  }

  unsigned short echoServPort = atoi(argv[1]);  // First arg: local port

  try {
    TCPServerSocket servSock(echoServPort);     // Server Socket object
  
    for (;;) {   // Run forever
      HandleTCPClient(servSock.accept());       // Wait for a client to connect
    }
  } catch (SocketException &e) {
    cerr << e.what() << endl;
    exit(1);
  }
  // NOT REACHED

  return 0;
}

// TCP client handling function
void HandleTCPClient(TCPSocket *sock) {
  cout << "Handling client ";
  try {
    cout << sock->getForeignAddress() << ":";
  } catch (SocketException e) {
    cerr << "Unable to get foreign address" << endl;
  }
  try {
    cout << sock->getForeignPort();
  } catch (SocketException e) {
    cerr << "Unable to get foreign port" << endl;
  }
  cout << endl;

  // Send received string and receive again until the end of transmission
  char echoBuffer[RCVBUFSIZE];
  int recvMsgSize;
  int bufpos = 0;
  int procpos = 0;
  
  aservice* service;
  amethod* method;
  
  //lets clean the services, fixme: some unhandled memleak?

  //adding a new service?
  service = services.add_service(0, 0);
  services.add_method(service, 1, (void*) &handle_ConnectRequest, (Message*) &(bnet::protocol::connection::ConnectRequest::default_instance()));
  services.add_method(service, 2, (void*) &handle_BindRequest, (Message*) &(bnet::protocol::connection::BindRequest::default_instance()));
  
  service = services.add_service(0xB732DB32, 1);
  service = services.add_service(0xFA0796FF, 2);
  service = services.add_service(0xdecfc01,  3);//Authentication Service
  services.add_method(service, 1, (void*) &handle_FIXME, (Message*) &(bnet::protocol::authentication::ModuleLoadRequest::default_instance()));
  services.add_method(service, 2, (void*) &handle_FIXME, (Message*) &(bnet::protocol::authentication::ModuleMessageRequest::default_instance()));
  services.add_method(service, 3, (void*) &handle_FIXME, (Message*) &(bnet::protocol::authentication::LogonRequest::default_instance()));
  
  while (1) {
	if (RCVBUFSIZE - bufpos == 0) {
		cerr << "buffer got full" << endl;
		break;
	}
	recvMsgSize = sock->recv(echoBuffer+bufpos, RCVBUFSIZE - bufpos);
	if (recvMsgSize == 0)
		break;

	bufpos += recvMsgSize; 
	
	if ((procpos = HandleTcpData(sock, echoBuffer, bufpos)) == -1)
	{
		cout << "error handling tcp data" << endl;
		break;
	}
	
	memcpy(echoBuffer, echoBuffer+bufpos, bufpos-procpos);
	bufpos -= procpos;
    //sock->send(echoBuffer, recvMsgSize);
  }
  cout << "disconnecting from client" << endl;
  delete sock;
}

char con_response_hardcoded[] = {
	0xfe, 0x00, 0x00, 0x00, 0x1a, 0x0a, 0x0c, 0x08, 
	0xdd, 0xe9, 0x8e, 0xbb, 0x0e, 0x10, 0x82, 0x89, 
	0xa1, 0xf3, 0x04, 0x12, 0x0a, 0x08, 0xc6, 0xdc, 
	0x03, 0x10, 0x94, 0xcd, 0xa5, 0xf3, 0x04 };	
	
void printmsgdata(google::protobuf::Message* message) {
	char buf[2000];
	cout << "packet dump:" << endl;
	if (message->ByteSize() > sizeof(buf)){
		cout << "cant print dump, " << message->ByteSize() << " > " << sizeof(buf) << endl;
		return;
	}
	message->SerializeToArray(buf, sizeof(buf));
	for (int i=0; i < message->ByteSize(); i++) {
		cout << showbase << hex << (unsigned int) buf[i] << " ";
		if ((i+1) % 16 == 0)
		 cout << endl ;
	}
	cout << endl ;
}

void sendmsgdata(TCPSocket* sock, google::protobuf::Message* message) {
	char buf[2000];
	if (message->ByteSize() > sizeof(buf)){
		cout << "cant send packet, " << message->ByteSize() << " > " << sizeof(buf) << endl;
		return;
	}
	message->SerializeToArray(buf, sizeof(buf));
	sock->send(buf, message->ByteSize());
}

bool handle_ConnectRequest(TCPSocket *sock, bnet::protocol::connection::ConnectRequest* message, rpcheader* pheader) {
	cout << "conn request handler called!" << endl ;
	sock->send(con_response_hardcoded, sizeof(con_response_hardcoded));
	return true;
}

char simplereplyheader[] {
	0xfe, 0x00, 0x02, 0x00, 0x03
};


bool handle_BindRequest(TCPSocket *sock, bnet::protocol::connection::BindRequest* message, rpcheader* pheader) {
	cout << "bind request handler called!" << endl ;
	cout << message->imported_service_hash_size() << endl;
	
	bnet::protocol::connection::BindResponse* bindres = new bnet::protocol::connection::BindResponse();
	for (int i = 0; i < message->imported_service_hash_size(); i++) {
		int k = -1;
		for (int j =0; j < services.Items.size(); j++) {
			if (services.Items.at(j)->hash == message->imported_service_hash(i))
				k = j;
		}
		if (k == -1) {
			cout << "unknow service hash: " << message->imported_service_hash(i) << endl;
			delete bindres;
			return false;
		}
		bindres->add_imported_service_id(services.Items.at(k)->id);
	};
	cout << "reply size? " << bindres->ByteSize() << endl ;
	printmsgdata(bindres);

	*(unsigned short*)&(simplereplyheader[2]) = pheader->reqid;
	*(unsigned short*)&(simplereplyheader[4]) = bindres->ByteSize();
	sock->send(simplereplyheader, sizeof(simplereplyheader));
	sendmsgdata(sock, bindres);
	
	delete bindres;

	return true;
}


int HandleTcpData(TCPSocket *sock, char *dataBuffer, int size) {
	rpcheader aheader;
	char* packet;
	g_methods methods;
	packet = procheader(dataBuffer, size, &aheader);
	
	printheader(&aheader);
	
	reply areply; areply.msg = NULL; //fixme use the rigth sintax?
	
	if (aheader.service != 0xFE) {
		int j = -1;
		for (int i = 0; i < services.Items.size(); i++) 
			if (services.Items.at(i)->id == aheader.service) 
				j=i;
		if (j == -1) {
			cout << "service not registered? id " << aheader.service << endl;
		} else {
			cout << "service registed, id " << aheader.service << " " << hex << services.Items.at(j)->hash << endl;

			methods = services.Items.at(j)->methods;
			int k = -1;
			for (int i = 0; i < methods.size(); i++) {
				if (methods.at(i)->id == aheader.method) {
					k = i;
					cout << "method found " << methods.at(i)->id << " " << aheader.method << endl;
				}
			}
			if (k == -1) {
				cerr << "invalid method index: " << aheader.method << endl;
			} else {
				areply.msg = methods.at(k)->msgtype->New();

				//fixme:stupid hack so i dont define a typedef?
				*(int*)&(areply.callback) = (int)(methods.at(k)->proc);
			}
			//getclass(false, g_services.at(j)->hash, aheader.method, &areply);
		}
	} else {
		cout << "packet isnt a request" << endl;
		//getclass(true, g_services.at(j)->hash, aheader.method, &areply);
	}
	
	if (areply.msg != NULL) {
		cout << " " << " " << areply.msg->GetDescriptor()->full_name() << endl;
		if (!areply.msg->ParseFromArray(packet, aheader.datasize)) {
			cerr << "error parsing message" << " size: " << aheader.datasize << endl;
			delete areply.msg;
			return -1;
		} else {
			cout << areply.msg->DebugString() << endl;
		}
		cout << "calling this" << endl;
		if (areply.callback != NULL) 
			if (!areply.callback(sock, areply.msg, &aheader))
				{
					cerr << "error handling packet." << endl;
					delete areply.msg;
					return -1;
				}

		delete areply.msg;
	}
	
	return aheader.datasize + (int)(packet - dataBuffer);
}