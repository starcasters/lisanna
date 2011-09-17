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
#include "service/exchange/exchange.pb.h"
#include "service/channel_invitation/definition/channel_invitation.pb.h"
#include "service/channel/definition/channel.pb.h"
#include "service/toon/toon.pb.h"
#include "service/toon/toon_external.pb.h"
#include "service/followers/definition/followers.pb.h"
#include <time.h>


using namespace std;
using namespace google::protobuf;

//#include "rpc/rpc.h"
#include "rpc/ServiceMgr.h"

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
bool handle_LogonRequest(TCPSocket *sock, bnet::protocol::authentication::LogonRequest* message, rpcheader* pheader);
bool handle_FIXME(TCPSocket *sock, bnet::protocol::connection::ConnectRequest* message, rpcheader* pheader) {
	cout << "FIXME: handle for message " << message->GetDescriptor()->full_name() << " not implemented" << endl;
	return false;
}
bool handle_SubscribeRequest(TCPSocket *sock, bnet::protocol::channel_invitation::SubscribeRequest* message, rpcheader* pheader);
bool handle_ToonListRequest(TCPSocket *sock, bnet::protocol::toon::external::ToonListRequest * message, rpcheader* pheader);
bool handle_FollowersRequest(TCPSocket *sock, bnet::protocol::channel_invitation::SubscribeRequest* message, rpcheader* pheader);

CServiceMgr services;

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
  //lets clean the services, fix me: some unhanded memleak?
  services.clear();
  services.AddDefaultServices();
  /*
  //adding a new service?
  service = services.add_service(0, 0);
  services.add_method(service, 1, (void*) &handle_ConnectRequest, (Message*) &(bnet::protocol::connection::ConnectRequest::default_instance()));
  services.add_method(service, 2, (void*) &handle_BindRequest, (Message*) &(bnet::protocol::connection::BindRequest::default_instance()));
  
  service = services.add_service(0xB732DB32, 1);
  service = services.add_service(0xFA0796FF, 2);
  service = services.add_service(0xdecfc01,  3);//Authentication Service
  services.add_method(service, 1, (void*) &handle_LogonRequest, (Message*) &(bnet::protocol::authentication::LogonRequest::default_instance()));
  services.add_method(service, 2, (void*) &handle_FIXME, (Message*) &(bnet::protocol::authentication::ModuleLoadRequest::default_instance()));
  services.add_method(service, 3, (void*) &handle_FIXME, (Message*) &(bnet::protocol::authentication::ModuleMessageRequest::default_instance()));
  service = services.add_service(0xcbe3c43, 4);
  service = services.add_service(0x83040608, 5); //Channel Invitation Authentication
  services.add_method(service, 1, &handle_SubscribeRequest, (Message*)&(bnet::protocol::channel_invitation::SubscribeRequest::default_instance()));
  service = services.add_service(0xd89ca9, 6);
  service = services.add_service(0xd750148b, 7);
  services.add_method(service, 27, (void*) &handle_FIXME, (Message*) &(bnet::protocol::exchange::GetConfigurationRequest::default_instance()));
  service = services.add_service(0x4124c31b, 8); // Toon Service External
  services.add_method(service, 1, &handle_ToonListRequest, (Message*)&(bnet::protocol::toon::external::ToonListRequest::default_instance()));
  service = services.add_service(0xe5a11099, 9); // Followers Service
   services.add_method(service, 1, &handle_FollowersRequest, (Message*)&(bnet::protocol::channel_invitation::SubscribeRequest::default_instance()));
  service = services.add_service(0x3e19268a, 10);
  service = services.add_service(0xa3ddb1bd, 11);
  service = services.add_service(0xf4e7fa35, 12);
  service = services.add_service(0x810cb195, 13);
  service = services.add_service(0xda6e4bb9, 14);
  service = services.add_service(0xa24a291, 16);
  */
  
  while (1) {
	if (RCVBUFSIZE - bufpos == 0) {
		cerr << "buffer got full" << endl;
		break;
	}
	recvMsgSize = sock->recv(echoBuffer+bufpos, RCVBUFSIZE - bufpos);
	
	if (recvMsgSize == 0)
			break;

	bufpos += recvMsgSize; 
	
    
	int consumed = 0;
	while (1)
	{
		procpos = HandleTcpData(sock, echoBuffer+consumed, bufpos-consumed);
		consumed += procpos;
		if (procpos < 1)
			break;
	}
	if (procpos == -1) {
	   cout << "error handling tcp data" << endl;
	   break;
	}
	
	memcpy(echoBuffer, echoBuffer+consumed, bufpos-consumed);
	bufpos -= consumed;
    //sock->send(echoBuffer, recvMsgSize);
  }
  cout << "disconnecting from client" << endl;
  delete sock;
}
	/*
/* to be deleted.
char con_response_hardcoded[] = {
	0xfe, 0x00, 0x00, 0x00, 0x1a, 0x0a, 0x0c, 0x08, 
	0xdd, 0xe9, 0x8e, 0xbb, 0x0e, 0x10, 0x82, 0x89, 
	0xa1, 0xf3, 0x04, 0x12, 0x0a, 0x08, 0xc6, 0xdc, 
	0x03, 0x10, 0x94, 0xcd, 0xa5, 0xf3, 0x04 };	

bool handle_ConnectRequest(TCPSocket *sock, bnet::protocol::connection::ConnectRequest* message, rpcheader* pheader) {
	cout << "conn request handler called!" << endl ;

	bnet::protocol::connection::ConnectResponse resp;
 	resp.mutable_server_id()->set_label(0xAAAA);
 	resp.mutable_server_id()->set_epoch(time(NULL));
 	resp.mutable_client_id()->set_label(0xBBBB);
 	resp.mutable_client_id()->set_epoch(time(NULL));

//	sock->send(con_response_hardcoded, sizeof(con_response_hardcoded));

	sendheader(sock, 0xFE, 0, pheader->reqid, 0, resp.ByteSize());
	sendmsgdata(sock, &resp);

	return true;
}

bool handle_BindRequest(TCPSocket *sock, bnet::protocol::connection::BindRequest* message, rpcheader* pheader) {
	cout << "bind request handler called!" << endl ;
	cout << message->imported_service_hash_size() << endl;
	
	bnet::protocol::connection::BindResponse bindres;
	for (int i = 0; i < message->imported_service_hash_size(); i++) {
		int k = -1;
		for (int j =0; j < services.Items.size(); j++) {
			if (services.Items.at(j)->hash == message->imported_service_hash(i))
				k = j;
		}
		if (k == -1) {
			cout << "unknow service hash: " << message->imported_service_hash(i) << endl;
			return true;
		}
		bindres.add_imported_service_id(services.Items.at(k)->id);
	};
	cout << "reply size? " << bindres.ByteSize() << endl ;
	printmsgdata(&bindres);

	sendheader(sock, 0xFE, 0, pheader->reqid, 0, bindres.ByteSize());
	sendmsgdata(sock, &bindres);
	
	return true;
}

char hc[] = { 0x03,0x01,0x00,0x00,0x02,0xF2,0x02,0x0A,0x2C,0x0D,0x53,0x55,0x00,0x00,0x15,0x68,0x74,0x75,0x61,0x1A,0x20,0x8F,0x52,0x90,0x6A,0x2C,0x85,0xB4,0x16,0xA5,0x95,0x70,0x22,0x51,0x57,0x0F,0x96,0xD3,0x52,0x2F,0x39,0x23,0x76,0x03,0x11,0x5F,0x2F,0x1A,0xB2,0x49,0x62,0x04,0x3C,0x12,0xC1,0x02,0x00,0xC0,0x9E,0x5B,0xDF,0xF5,0x92,0xDD,0xC3,0x8E,0xDC,0x46,0xAE,0xB1,0x57,0x65,0x68,0xD0,0x7A,0x94,0x17,0xD5,0x9C,0xF0,0x70,0x8F,0x00,0x39,0x7D,0xA2,0x3B,0x5B,0x23,0x32,0x8C,0x88,0xCA,0x5B,0x89,0x72,0x22,0xDA,0x43,0x3A,0x32,0xD2,0x8D,0x71,0x0C,0x5C,0xEF,0x2A,0x14,0x46,0xC3,0x4C,0x10,0xF3,0x36,0xEC,0x1B,0x53,0xA8,0x95,0xED,0xE9,0xEB,0x82,0x0C,0xC7,0x94,0x72,0x2E,0x4D,0xF3,0xF4,0x17,0x33,0x63,0x46,0x2A,0x96,0x73,0x59,0xB5,0x70,0x19,0xA3,0x14,0x32,0xD7,0x6D,0xF5,0x33,0x2A,0x77,0x90,0xC3,0x3B,0xCD,0x19,0x65,0xFE,0x13,0x1E,0x4C,0xF2,0x07,0x9F,0xD8,0x74,0x9A,0x57,0xBD,0x22,0xF6,0x1C,0xDF,0x18,0x1E,0xF5,0x1B,0x15,0x23,0x25,0xF7,0x50,0xDD,0x8D,0xAA,0x4D,0xE0,0x9B,0x34,0x83,0xBE,0x78,0xC1,0x45,0x66,0x8D,0x2C,0xB3,0x34,0x39,0x29,0xCD,0x88,0xD1,0x82,0x15,0x13,0xCE,0x8C,0xD4,0x61,0x71,0x0C,0xDC,0x5D,0x6B,0x73,0xE2,0x1C,0x96,0xF5,0xF5,0x39,0x3F,0x23,0x75,0x96,0xA9,0x70,0x5A,0xC0,0xC7,0x01,0x3B,0xBE,0x0E,0x71,0x86,0xFE,0x8B,0xF0,0xF1,0x24,0x66,0x0A,0xE1,0x89,0x86,0x38,0xDA,0xB1,0xEA,0x5E,0xD4,0x03,0xEC,0xF8,0xF2,0x26,0x6D,0xAE,0x2A,0xA0,0x74,0x40,0x60,0x32,0x9F,0x9E,0x54,0x1A,0x39,0x8C,0x3D,0x6B,0x8E,0xE3,0x75,0x09,0xCC,0x46,0xF9,0xD0,0x97,0x74,0xF1,0x6C,0x70,0xEF,0xF9,0xD3,0x78,0x91,0xBD,0x66,0x6F,0xA8,0x0A,0x39,0xD1,0x14,0x79,0x43,0x63,0x60,0x99,0xE5,0x11,0xE6,0x34,0x11,0x58,0x83,0x89,0xF6,0x89,0xE0,0x40,0xC4,0x2E,0xF9,0x31,0xAC,0xE9,0x7F,0xF6,0x01,0x11,0x05,0x92,0xD1,0x3C,0x7F,0xF9,0x20,0xDE,0xEF,0x5A,0xF0,0x37,0xA4,0x96,0x47,0xE8,0x92,0xDD,0x28,0xD0,0xD4,0x91,0x9F,0xE3,0x4B,0x90,0x99,0xDD,0xA8,0x6B,0x2D,0xBA,0x1A,0x9B,0x57,0xFE,0x42,0xEE,0x19,0xF3,0x6F,0x38,0x0D,0xA2,0x04,0x80,0x9F,0x66 };
bool handle_LogonRequest(TCPSocket *sock, bnet::protocol::authentication::LogonRequest* message, rpcheader* pheader) {
	
	bnet::protocol::authentication::LogonResponse log_resp;
	log_resp.mutable_account()->set_high(0x100000000000000);
	log_resp.mutable_account()->set_low(0);
	log_resp.mutable_game_account()->set_high(0x200006200004433); 
	log_resp.mutable_game_account()->set_low(0);


	
	
	std::cout << "Debug Packet Infos: " << log_resp.DebugString();
	printmsgdata(&log_resp);


	sendheader(sock, 0xFE, 0, pheader->reqid, 0, log_resp.ByteSize());
	sendmsgdata(sock, &log_resp);
	
	bnet::protocol::connection::BindRequest breq;
	breq.mutable_imported_service_hash()->Add();
	breq.mutable_imported_service_hash()->Set(0, 0xdeadbeef);
	bnet::protocol::connection::BoundService* svc = breq.mutable_exported_service()->Add();
	svc->set_hash(0x71240e35);
	svc->set_id(19);
	std::cout << breq.DebugString();
	sendheader(sock, 0xFE, 2, 0, 0, breq.ByteSize());
	sendmsgdata(sock, svc);
	*/
	/*
	//Send a module load request
	bnet::protocol::authentication::ModuleLoadRequest* mod = new bnet::protocol::authentication::ModuleLoadRequest();
	mod->ParseFromArray(&hc[7], sizeof(hc)-7);
	sendheader(sock, 3, 1, 0, 0, mod->ByteSize());
	sendmsgdata(sock, mod);
	delete mod;
	
	return true;
}
/*
bool handle_SubscribeRequest(TCPSocket *sock, bnet::protocol::channel_invitation::SubscribeRequest* message, rpcheader* pheader) {
	bnet::protocol::channel_invitation::SubscribeResponse resp;
	cerr << "Got Subscribe Request! Not ready to handle this yet.. Object ID = " << message->object_id() << std::endl;
	sendheader(sock, 0xFE, 0, pheader->reqid, 0, resp.ByteSize());
	sendmsgdata(sock, &resp);
return true;
}
bool handle_FollowersRequest(TCPSocket *sock, bnet::protocol::channel_invitation::SubscribeRequest* message, rpcheader* pheader) {
	bnet::protocol::followers::SubscribeToFollowersResponse resp;
	cerr << "Got Subscribe to Followers Service Request! Not ready to handle this yet.. Object ID = " << message->object_id() << std::endl;
	sendheader(sock, 0xFE, 0, pheader->reqid, 0, resp.ByteSize());
	sendmsgdata(sock, &resp);
	return true;
}
bool handle_ToonListRequest(TCPSocket *sock, bnet::protocol::toon::external::ToonListRequest * message, rpcheader* pheader)
{
	cerr << "Got ToonList Request! Sending Null Response" << std::endl;
	bnet::protocol::toon::external::ToonListResponse resp;

	sendheader(sock, 0xFE, 0, pheader->reqid, 0, resp.ByteSize());
	sendmsgdata(sock, &resp);
	return true;
}
*/
void hexdump(char* data, int size) {
	for (int i=0; i < size; i++) {
		unsigned int next = (unsigned char) *data++;
		cout << showbase << hex << next << " ";
		if ((i+1) % 16 == 0)
			cout << endl ;
	}
	cout << endl ;
}

void printmsgdata(google::protobuf::Message* message) {
	char buf[2000];
	cout << "packet dump:" << endl;
	if (message->ByteSize() > sizeof(buf)){
		cout << "cant print dump, " << message->ByteSize() << " > " << sizeof(buf) << endl;
		return;
	}
	message->SerializeToArray(buf, sizeof(buf));
	hexdump(buf, message->ByteSize());
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

void sendheader(TCPSocket* sock, unsigned int serviceid, unsigned int method, unsigned int reqid, int unknow, unsigned int size) {
	char buf[2000];
	char* pos = &(buf[0]);
	*(unsigned char*)pos = serviceid; pos++;
	pos = add_varint(pos, method);
	*(unsigned short*)pos = reqid; pos+=2;
	if (serviceid != 0xFE) {
		pos = add_varint(pos, unknow);
	}
	pos = add_varint(pos, size);

	hexdump(buf, (int)(pos - &(buf[0])));

	sock->send(buf, (int)(pos - &(buf[0])));

}
int HandleTcpData(TCPSocket *sock, char *dataBuffer, int size) {
	rpcheader aheader;
	char* packet;
	apacket pktData;
	pktData.hdr = &aheader;
	packet = procheader(dataBuffer, size, &aheader);
	if (packet == NULL) 
		return 0; //not enough data to read the header
	 
	hexdump(dataBuffer, size);
	
	printheader(&aheader);
	
	reply areply; areply.msg = NULL; //fixme use the rigth sintax?
	CService* svc = services.find_service_by_id(aheader.service);
	svc->CallMethod(sock, aheader.method, &pktData);		 
		if ((int)svc == -1) {
			cout << "service not registered? id " << aheader.service << endl;
		} else {
			cout << "service registered, id " << aheader.service << " " << hex << svc->GetServerHash() << endl;
			areply.msg = svc->find_method_by_id(aheader.method)->msgtype->New();
		//getclass(true, g_services.at(j)->hash, aheader.method, &areply);
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
			if (!svc->CallMethod(sock, aheader.method, &pktData))
				{
					cerr << "error handling packet." << endl;
					delete areply.msg;
					return -1;
				}

		delete areply.msg;
	}
		}	
	return aheader.datasize + (int)(packet - dataBuffer);

}