#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include "service.h"

int GetServiceHash(const char* name)
{
	int result = 0x811C9DC5;
	for (int i = 0; i < strlen(name); ++i)
		{
			result = 0x1000193 * (name[i] ^ result);
		}
	return result;
}

/*
CService::CService()
{

}
*/
CService* CService::New() const {
}
	/*
CService::CService(CServiceMgr* owner,int sID, std::string sName) : 
 m_owner(owner),m_serviceID(sID), m_serviceName(sName) {
	const char *sname = sName.c_str();
	m_serviceHash = GetServiceHash(sname);
};
	*/
bool CService::DispatchMethod(int method, TCPSocket* socket, apacket* packet) {
	cerr << "error: calling a pure virtual method CService::DispatchMethod" << endl;
	exit(0);
}

google::protobuf::Message* CService::GetMethodMessage(int method, bool request) {
	cerr << "error: calling a pure virtual method CService::GetMethodMessage" << endl;
	exit(0);
}

/*
void CService::hexdump(char* data, int size) {
	for (int i=0; i < size; i++) {
		unsigned int next = (unsigned char) *data++;
		cout << showbase << hex << next << " ";
		if ((i+1) % 16 == 0)
			cout << endl ;
	}
	cout << endl ;
}

void CService::printmsgdata(google::protobuf::Message* message) {
	char buf[2000];
	cout << "packet dump:" << endl;
	if (message->ByteSize() > sizeof(buf)){
		cout << "cant print dump, " << message->ByteSize() << " > " << sizeof(buf) << endl;
		return;
	}
	message->SerializeToArray(buf, sizeof(buf));
	hexdump(buf, message->ByteSize());
}

void CService::sendmsgdata(TCPSocket* sock, google::protobuf::Message* message) {
	char buf[2000];
	if (message->ByteSize() > sizeof(buf)){
		cout << "cant send packet, " << message->ByteSize() << " > " << sizeof(buf) << endl;
		return;
	}
	message->SerializeToArray(buf, sizeof(buf));
	sock->send(buf, message->ByteSize());
}

void CService::sendheader(TCPSocket* sock, unsigned int serviceid, unsigned int method, unsigned int reqid, int unknow, unsigned int size) {
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
*/
CService::~CService()
{
	std::cout << "Bye from svcmgr";
};