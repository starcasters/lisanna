#ifndef _hfile_service
#define _hfile_service
#include <vector>
#include <algorithm>
#include <utility>

#include <google/protobuf/message.h>
#include "../server/PracticalSocket.h"
#include "FastDelegate.h"
#include "headers.h"
class CServiceMgr;
struct apacket
{
	google::protobuf::Message* msg;
	rpcheader* hdr;
};
typedef fastdelegate::FastDelegate2<TCPSocket*, apacket*, bool> CallbackDelegate;

struct amethod {
	int id;
	void* proc;
	google::protobuf::Message* msgtype;
	CallbackDelegate callback;
};


class CService {
public:
	CService();
	CService(CServiceMgr* owner,int sID, int sHash, int cHash, std::string sName) : m_owner(owner),m_serviceID(sID), m_serviceHash(sHash), m_clientHash(cHash), m_serviceName(sName) {};
	bool CallMethod(TCPSocket* socket,int method, apacket* packet);
	int GetSID() { return m_serviceID; }
	int GetClientHash() { return m_clientHash; }
	int GetServerHash() { return m_serviceHash; }
	amethod* find_method_by_id(int id);
	std::string GetServiceName() { return m_serviceName.c_str(); }
	virtual ~CService();
protected:
	bool AddMethod(int id, CallbackDelegate cb, google::protobuf::Message* msgType);

	//Helper Methods -- Export Somewhere Else?
	void hexdump(char* data, int size);
	void printmsgdata(google::protobuf::Message* message);
	void sendmsgdata(TCPSocket* sock, google::protobuf::Message* message);
	void sendheader(TCPSocket* sock, unsigned int serviceid, unsigned int method, unsigned int reqid, int unknow, unsigned int size);
	//
	std::vector<amethod*> m_serviceMethods;
	int m_serviceID;
	int m_serviceHash;
	int m_clientHash;
	CServiceMgr* m_owner;
	std::string m_serviceName; //Easy logging.
};

#endif