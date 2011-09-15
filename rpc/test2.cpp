#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <google/protobuf/message.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/text_format.h>

#include "cpp/lib/rpc/connection.pb.h"
#include "headers.h"
#include "dump1.h"

using namespace std;
using namespace google::protobuf;

Message* getclass(int side, int classid) {
	if (side == 0)
	switch (classid) {
		case 0:
			return new bnet::protocol::connection::ConnectRequest();
		case 1:
			return new bnet::protocol::connection::BindRequest();
		case 2:
			return new bnet::protocol::connection::EchoRequest();
		case 3:
			return new bnet::protocol::connection::DisconnectNotification();
		case 4:
			return new bnet::protocol::connection::NullRequest();
		case 5:
			return new bnet::protocol::connection::EncryptRequest();
		case 6:
			return new bnet::protocol::connection::DisconnectRequest();
		default:
			cerr << "bad method index" << endl;
			return new bnet::protocol::connection::NullRequest();
	}
	if (side == 1)
	switch (classid) {
		case 0:
			return new bnet::protocol::connection::ConnectResponse();
		case 1:
			return new bnet::protocol::connection::BindResponse();
		case 2:
			return new bnet::protocol::connection::EchoResponse();
		case 3:
			return new bnet::protocol::connection::NullRequest();
		case 4:
			return new bnet::protocol::connection::NullRequest();
		case 5:
			return new bnet::protocol::connection::NullRequest();
		case 6:
			return new bnet::protocol::connection::NullRequest();
		default:
			cerr << "bad method index" << endl;		
			return new bnet::protocol::connection::NullRequest();
		
	}
}

void rpcprocpacket(char* data, int size, int side) {
	cout << endl;

	google::protobuf::Message* aconres;
	rpcheader aheader;
	char* packet;
	
	packet = procheader(data, size, &aheader);
	
	printheader(&aheader);
	
	aconres = getclass(side, aheader.method);
	cout << " " << side << " " << aconres->GetDescriptor()->full_name() << endl;
	
	if (!aconres->ParseFromArray(packet, aheader.datasize)) {
		cerr << "error parsing message" << " size: " << aheader.datasize << endl;
	} else {
		cout << aconres->DebugString() << endl;
	}
}

int main(int argc, char* argv[]) {

	
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	
	int i = 1;
    rpcprocpacket(peer0_0, sizeof(peer0_0), i^=1);
    rpcprocpacket(peer1_0, sizeof(peer1_0), i^=1);
    rpcprocpacket(peer0_1, sizeof(peer0_1), i^=1);
    rpcprocpacket(peer1_1, sizeof(peer1_1), i^=1);
    rpcprocpacket(peer0_2, sizeof(peer0_2), i^=1);
    rpcprocpacket(peer1_2, sizeof(peer1_2), i^=1);
    rpcprocpacket(peer0_3, sizeof(peer0_3), i^=1);
    rpcprocpacket(peer1_3, sizeof(peer1_3), i^=1);
    rpcprocpacket(peer0_4, sizeof(peer0_4), i^=1);
    rpcprocpacket(peer1_4, sizeof(peer1_4), i^=1);

	/*
	procheader(peer0_2, sizeof(peer0_2));
	procheader(peer1_2, sizeof(peer1_2), &aheader);
	procheader(peer1_3, sizeof(peer1_3), &aheader);
	procheader(peer1_4, sizeof(peer1_4), &aheader);
	procheader(peer1_5, sizeof(peer1_5), &aheader);
	procheader(peer1_6, sizeof(peer1_6), &aheader);
	procheader(peer1_7, sizeof(peer1_7), &aheader);
	*/
};