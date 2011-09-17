#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include "service.h"

CService::CService()
{

}
bool CService::AddMethod(int id, CallbackDelegate cb, google::protobuf::Message* msgType)
{
	amethod* method = new amethod();
	method->id = id;
	method->callback = cb;
	method->msgtype = msgType;
	m_serviceMethods.push_back(method);
	return true;
}

amethod* CService::find_method_by_id(int id)
{
	for (int i = 0; i < m_serviceMethods.size(); i++)
	{
		amethod* itr = m_serviceMethods.at(i);
		if(itr->id == id)
			return itr;
	}
	return (amethod*)-1;
}
bool CService::CallMethod(TCPSocket* socket,int method, apacket* packet)
{
	for (int i = 0; i < m_serviceMethods.size(); i++)
	{
		amethod* itr = m_serviceMethods.at(i);
		if(itr->id == method)
			return itr->callback(socket, packet);
	}
	std::cout << "Invalid Index " << method << std::endl;
	return false; //Fail.
}
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
CService::~CService()
{
	for(vector<amethod*>::iterator i = m_serviceMethods.begin(); i < m_serviceMethods.end(); ++i)
	{
		amethod* itr = *i;
		delete itr;
	}
	std::cout << "Bye from svcmgr";
};