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
#include <iomanip>

#include <google/protobuf/message.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/text_format.h>

#include "protoimport.h"

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
bool handle_LogonRequest(TCPSocket *sock, bnet::protocol::authentication::LogonRequest* message, rpcheader* pheader);
bool handle_FIXME(TCPSocket *sock, bnet::protocol::connection::ConnectRequest* message, rpcheader* pheader) {
	cout << "FIXME: handle for message " << message->GetDescriptor()->full_name() << " not implemented" << endl;
	return true;
}

bool handle_CreateToonRequest(TCPSocket *sock, bnet::protocol::toon::external::CreateToonRequest* message, rpcheader* pheader);
bool handle_DeleteToonRequest(TCPSocket *sock, bnet::protocol::toon::external::DeleteToonRequest* message, rpcheader* pheader);
bool handle_SelectToonRequest(TCPSocket *sock, bnet::protocol::toon::external::SelectToonRequest* message, rpcheader* pheader);
bool handle_ToonListRequest(TCPSocket *sock, bnet::protocol::toon::external::ToonListRequest* message, rpcheader* pheader);


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
	services.clear();
	
    //adding a new service?
    service = services.add_service(0, "Connection", 0);
    services.add_method(service, 1, (void*) &handle_ConnectRequest, (Message*) &(bnet::protocol::connection::ConnectRequest::default_instance()));
    services.add_method(service, 2, (void*) &handle_BindRequest, (Message*) &(bnet::protocol::connection::BindRequest::default_instance()));
	
	service = services.add_service(0xfa0796ff, "bnet.protocol.presence.PresenceService");
	service = services.add_service(0x0decfc01, "bnet.protocol.authentication.AuthenticationServer");
    services.add_method(service, 1, (void*) &handle_LogonRequest, (Message*) &(bnet::protocol::authentication::LogonRequest::default_instance()));
    services.add_method(service, 2, (void*) &handle_FIXME, (Message*) &(bnet::protocol::authentication::ModuleLoadRequest::default_instance()));
    services.add_method(service, 3, (void*) &handle_FIXME, (Message*) &(bnet::protocol::authentication::ModuleMessageRequest::default_instance()));
	service = services.add_service(0x71240e35, "bnet.protocol.authentication.AuthenticationClient");
	service = services.add_service(0x0cbe3c43, "bnet.protocol.notification.NotificationService");
	service = services.add_service(0xe1cb2ea8, "bnet.protocol.notification.NotificationListener");
	service = services.add_service(0x83040608, "bnet.protocol.channel_invitation.ChannelInvitationService");
	service = services.add_service(0xf084fc20, "bnet.protocol.channel_invitation.ChannelInvitationNotify");
	service = services.add_service(0x4124c31b, "bnet.protocol.toon.external.ToonServiceExternal");
 services.add_method(service, 3, (void*) &handle_CreateToonRequest, (Message*) &bnet::protocol::toon::external::CreateToonRequest::default_instance());
 services.add_method(service, 4, (void*) &handle_DeleteToonRequest, (Message*) &bnet::protocol::toon::external::DeleteToonRequest::default_instance());
 services.add_method(service, 2, (void*) &handle_SelectToonRequest, (Message*) &bnet::protocol::toon::external::SelectToonRequest::default_instance());
 services.add_method(service, 1, (void*) &handle_ToonListRequest, (Message*) &bnet::protocol::toon::external::ToonListRequest::default_instance());

    service = services.add_service(0xe5a11099, "bnet.protocol.followers.FollowersService");
	service = services.add_service(0x905cdf9f, "bnet.protocol.followers.FollowersNotify");
	service = services.add_service(0x3e19268a, "bnet.protocol.user_manager.UserManagerService");

	service = services.add_service(0xbc872c22, "bnet.protocol.user_manager.UserManagerNotify");
	service = services.add_service(0xa3ddb1bd, "bnet.protocol.friends.FriendsService");
	service = services.add_service(0x6f259a13, "bnet.protocol.friends.FriendsNotify");
	service = services.add_service(0xf4e7fa35, "bnet.protocol.party.PartyService");
	service = services.add_service(0xbf8c8094, "bnet.protocol.channel.ChannelSubscriber");
	service = services.add_service(0xb732db32, "bnet.protocol.channel.Channel");
	service = services.add_service(0x00d89ca9, "bnet.protocol.chat.ChatService");
	service = services.add_service(0x810cb195, "bnet.protocol.game_master.GameMaster");
	service = services.add_service(0x3fc1274d, "bnet.protocol.game_utilities.GameUtilities");
	service = services.add_service(0x060ca08d, "bnet.protocol.channel.ChannelOwner");
	service = services.add_service(0xc6f9ccc5, "bnet.protocol.game_master.GameFactorySubscriber");
	service = services.add_service(0xda6e4bb9, "bnet.protocol.storage.StorageService");
	
	service = services.add_service(0xd750148b, "bnet.protocol.exchange.ExchangeService");
	services.add_method(service, 27, (void*) &handle_FIXME, (Message*) &(bnet::protocol::exchange::GetConfigurationRequest::default_instance()));
	service = services.add_service(0x166fe4a1, "bnet.protocol.exchange.ExchangeNotify");
	service = services.add_service(0x0a24a291, "bnet.protocol.search.SearchService");
	
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
		cout << setw(2) << setfill('0') << hex << next << " ";
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

bool handle_ConnectRequest(TCPSocket *sock, bnet::protocol::connection::ConnectRequest* message, rpcheader* pheader) {
	cout << "conn request handler called!" << endl ;
	
	bnet::protocol::connection::ConnectResponse resp;
	resp.mutable_server_id()->set_label(0xE463B024);
	resp.mutable_server_id()->set_epoch(1315642580);
	resp.mutable_client_id()->set_label(10682);
	resp.mutable_client_id()->set_epoch(1315660038);
	
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

	sendheader(sock, 0xFE, 0, pheader->reqid, 0, bindres.ByteSize());
	sendmsgdata(sock, &bindres);
	
	return true;
}

bool handle_LogonRequest(TCPSocket *sock, bnet::protocol::authentication::LogonRequest* message, rpcheader* pheader) {
	bnet::protocol::authentication::LogonResponse log_resp;
	log_resp.mutable_account()->set_low(4);
	log_resp.mutable_account()->set_high(5);
	log_resp.mutable_game_account()->set_low(6);
	log_resp.mutable_game_account()->set_high(7); 
	std::cout << "Debug Packet Infos: " << log_resp.DebugString();
	printmsgdata(&log_resp);
	
	
	sendheader(sock, 0xFE, 0, pheader->reqid, 0, log_resp.ByteSize());
	sendmsgdata(sock, &log_resp);
	
	return true;
}

bool handle_CreateToonRequest(TCPSocket *sock, bnet::protocol::toon::external::CreateToonRequest* message, rpcheader* pheader) {
	bnet::protocol::toon::external::CreateToonResponse response;
return true;
}

bool handle_DeleteToonRequest(TCPSocket *sock, bnet::protocol::toon::external::DeleteToonRequest* message, rpcheader* pheader) {
	bnet::protocol::toon::external::DeleteToonResponse response;
return true;
}

bool handle_SelectToonRequest(TCPSocket *sock, bnet::protocol::toon::external::SelectToonRequest* message, rpcheader* pheader) {
	bnet::protocol::toon::external::SelectToonResponse response;
return true;
}

bool handle_ToonListRequest(TCPSocket *sock, bnet::protocol::toon::external::ToonListRequest* message, rpcheader* pheader) {
	bnet::protocol::toon::external::ToonListResponse response;
return true;
}

int HandleTcpData(TCPSocket *sock, char *dataBuffer, int size) {
	rpcheader aheader;
	char* packet;
	g_methods methods;
	packet = procheader(dataBuffer, size, &aheader);
	
	if (packet == NULL) 
	return 0; //not enougth data to read the header
	
	hexdump(dataBuffer, size);
	
	printheader(&aheader);
	
	reply areply; areply.msg = NULL; //fixme use the rigth sintax?
	
	if (aheader.service != 0xFE) {
		int j = -1;
		for (int i = 0; i < services.Items.size(); i++) 
		if (services.Items.at(i)->id == aheader.service) 
		j=i;
		if (j == -1) {
			cout << " service not registered? id " << aheader.service << endl;
			} else {
			cout << " " << services.Items.at(j)->name << " :: " << aheader.method <<  endl;
			
			methods = services.Items.at(j)->methods;
			int k = -1;
			for (int i = 0; i < methods.size(); i++) {
				if (methods.at(i)->id == aheader.method) {
					k = i;
				}
			}
			if (k == -1) {
				cerr << "error: invalid method index: " << aheader.method << endl;
				} else {
				areply.msg = methods.at(k)->msgtype->New();
				
				//fixme:stupid hack so i dont define a typedef?
				*(int*)&(areply.callback) = (int)(methods.at(k)->proc);
			}
		}
		} else {
		cout << "packet isnt a request" << endl;
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