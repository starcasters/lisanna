#ifndef _hfile_baseservice
#define _hfile_baseservice

#include "service.h"
#include "lib/rpc/connection.pb.h"

class CBaseService :
	public CService
{
public:
	CBaseService();
	CBaseService(CServiceMgr* const owner,int SID, std::string sName);
	bool handle_ConnectRequest(TCPSocket *sock, apacket* packet);
	bool handle_BindRequest(TCPSocket *sock, apacket* packet);
	bool handle_ConnectResponse(TCPSocket *sock, apacket* packet);
	bool handle_BindResponse(TCPSocket *sock, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int MethodID, bool request);
	bool DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet);

	~CBaseService(void);
};

#endif