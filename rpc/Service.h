#ifndef _hfile_service
#define _hfile_service
#include <vector>
#include <algorithm>
#include <utility>

#include "google/protobuf/message.h"
#include "../server/PracticalSocket.h"
#include "FastDelegate.h"
#include "headers.h"


#define SERVICE_RESPONSE 0xFE


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
	CService(CServiceMgr* owner,int sID, int sHash, std::string sName);
	virtual bool DispatchMethod(int method, TCPSocket* socket, apacket* packet);
	virtual google::protobuf::Message* GetMethodMessage(int method, bool request);
	int GetSID() { return m_serviceID; }
	int GetServerHash() { return m_serviceHash; }
	std::string GetServiceName() { return m_serviceName.c_str(); }
	virtual ~CService();
protected:
	//Helper Methods -- Export Somewhere Else?
	void hexdump(char* data, int size);
	void printmsgdata(google::protobuf::Message* message);
	void sendmsgdata(TCPSocket* sock, google::protobuf::Message* message);
	void sendheader(TCPSocket* sock, unsigned int serviceid, unsigned int method, unsigned int reqid, int unknow, unsigned int size);
	//

	int m_serviceID;
	int m_serviceHash;

	CServiceMgr* m_owner;
	std::string m_serviceName; //Easy logging.
};

#endif