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
//#include <tuple>
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

#include "rpc/rpc.h"
#include "rpc/headers.h"
#include "lib/rpc/connection.pb.h"
#include "service/authentication/authentication.pb.h"

using namespace std;
using namespace google::protobuf;

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

int servicescount = 1;

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
  servicescount = 2;
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

struct aservice {
	int hash;
	int id;
};
std::vector<aservice*> g_services;


bool handle_BindRequest(TCPSocket *sock, bnet::protocol::connection::BindRequest* message, rpcheader* pheader) {
	cout << "bind request handler called!" << endl ;
	cout << message->imported_service_hash_size() << endl;
	
	bnet::protocol::connection::BindResponse* bindres = new bnet::protocol::connection::BindResponse();
	for (int i = 0; i < message->imported_service_hash_size(); i++) {
		bindres->add_imported_service_id(servicescount++);
		aservice* service = new aservice;
		service->hash = message->imported_service_hash(i);
		service->id = i;
		g_services.push_back(service);
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
	
	packet = procheader(dataBuffer, size, &aheader);
	
	printheader(&aheader);
	
	reply areply; areply.msg = NULL; //fixme use the rigth sintax?
	
	if (aheader.service == 0) {
		getclass(false, 0, aheader.method, &areply);
	} else
	if (aheader.service != 0xFE) {
		int j = -1;
		for (int i = 0; i < g_services.size(); i++) 
			if (g_services.at(i)->id == aheader.service) 
				j=i;
		if (j == -1) {
			cout << "service not registered? id " << aheader.service << endl;
		} else {
			cout << "service registed, id " << aheader.service << " " << g_services.at(j) << endl;

			getclass(false, g_services.at(j)->hash, aheader.method, &areply);
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

bool getclass(bool response, int service, int method, pReply areply) {
	areply->callback = NULL;
	areply->msg = NULL;
	
	switch (service) {
		case 0:
	if (!response)
	switch (method) {
		case 1:
			areply->msg = new bnet::protocol::connection::ConnectRequest();
			areply->callback = (msg_handler) &handle_ConnectRequest;
			return NULL;
		case 2:
			areply->msg = new bnet::protocol::connection::BindRequest();
			areply->callback = (msg_handler) &handle_BindRequest;
			return NULL;
		case 3:
			areply->msg = new bnet::protocol::connection::EchoRequest();
			return NULL;
		case 4:
			areply->msg = new bnet::protocol::connection::DisconnectNotification();
			return NULL;
		case 5:
			areply->msg = new bnet::protocol::connection::NullRequest();
			return NULL;
		case 6:
			areply->msg = new bnet::protocol::connection::EncryptRequest();
			return NULL;
		case 7:
			areply->msg = new bnet::protocol::connection::DisconnectRequest();
			return NULL;
		default:
			cerr << "bad method index" << endl;
			areply->msg = new bnet::protocol::connection::NullRequest();
			return NULL;
	}
	if (response)
	switch (method) {
		case 0:
			areply->msg = new bnet::protocol::connection::ConnectResponse();
			return NULL;
		case 1:
			areply->msg = new bnet::protocol::connection::BindResponse();
			return NULL;
		case 2:
			areply->msg = new bnet::protocol::connection::EchoResponse();
			return NULL;
		case 3:
			areply->msg = new bnet::protocol::connection::NullRequest();
			return NULL;
		case 4:
			areply->msg = new bnet::protocol::connection::NullRequest();
			return NULL;
		case 5:
			areply->msg = new bnet::protocol::connection::NullRequest();
			return NULL;
		case 6:
			areply->msg = new bnet::protocol::connection::NullRequest();
			return NULL;
		default:
			cerr << "bad method index" << endl;		
			areply->msg = new bnet::protocol::connection::NullRequest();
			return NULL;
		
	}
		break;
		macro_service(233634817,
			service_entry(1, bnet::protocol::authentication::ModuleLoadRequest, NULL)
			service_entry(2, bnet::protocol::authentication::ModuleMessageRequest, NULL)
			service_entry(3, bnet::protocol::authentication::LogonRequest, NULL)
			service_entry(4, bnet::protocol::authentication::LogonRequest, NULL)
			service_entry(5, bnet::protocol::authentication::LogonRequest, NULL)
			service_entry(6, bnet::protocol::authentication::LogonRequest, NULL)
			,
			service_entry(1, bnet::protocol::authentication::ModuleLoadResponse, NULL)
			service_entry(2, bnet::protocol::authentication::LogonResponse, NULL)
			service_entry(3, bnet::protocol::authentication::LogonRequest, NULL)
			service_entry(4, bnet::protocol::authentication::LogonRequest, NULL)
			service_entry(5, bnet::protocol::authentication::LogonRequest, NULL)
			service_entry(6, bnet::protocol::authentication::LogonRequest, NULL)
			
		)
	}
}