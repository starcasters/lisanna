/*
	* C++ sockets on Unix and Windows
	* Copyright (C) 2002
	*
	* This program is free software; you can redistribute it and/or modify
	* it under the terms of the GNU General Public License as published by
	* the Free Software Foundation; either version 2 of the License, or
	* (at your option) any later version.
	*
	* This program is distributed in the hope that it will be useful,
	* but WITHOUT ANY WARRANTY; without even the implied warranty of
	* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	* GNU General Public License for more details.
	*
	* You should have received a copy of the GNU General Public License
	* along with this program; if not, write to the Free Software
	* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include "PracticalSocket.h" // For Socket, ServerSocket, and SocketException
#include <iostream> // For cerr and cout
#include <cstdlib> // For atoi()
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

const unsigned int RCVBUFSIZE = 2048; // Size of receive buffer

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
	if (argc != 2) { // Test for correct number of arguments
		cerr << "Usage: " << argv[0] << " <Server Port>" << endl;
		exit(1);
	}
	
	unsigned short echoServPort = atoi(argv[1]); // First arg: local port
	
	try {
		TCPServerSocket servSock(echoServPort); // Server Socket object
		
		for (;;) { // Run forever
			HandleTCPClient(servSock.accept()); // Wait for a client to connect
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
	if ((int)svc == -1) {
		cout << "service not registered? id " << aheader.service << endl;
		} else {
		cout << "service registered, id " << aheader.service << " " << hex << svc->GetServerHash() << endl;
		pktData.msg = svc->GetMethodMessage(aheader.method, aheader.service != SERVICE_RESPONSE)->New();
		//getclass(true, g_services.at(j)->hash, aheader.method, &areply);
		if (pktData.msg != NULL) {
			cout << " " << " " << pktData.msg->GetDescriptor()->full_name() << endl;
			if (!pktData.msg->ParseFromArray(packet, aheader.datasize)) {
				cerr << "error parsing message" << " size: " << aheader.datasize << endl;
				delete pktData.msg;
				return -1;
				} else {
				cout << pktData.msg->DebugString() << endl;
			}
			cout << "calling this" << endl;
			if (!svc->DispatchMethod(aheader.method, sock, &pktData))
			{
				cerr << "error handling packet." << endl;
				delete pktData.msg;
				return -1;
			}
			delete pktData.msg;
		}
	}
	return aheader.datasize + (int)(packet - dataBuffer);
	
}


