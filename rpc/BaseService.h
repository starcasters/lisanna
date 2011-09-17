#ifndef _hfile_baseservice
#define _hfile_baseservice

#include "service.h"
#include "lib/rpc/connection.pb.h"

class CBaseService :
	public CService
{
public:
	CBaseService();
	CBaseService(CServiceMgr* owner,int SID, int sHash, int cHash, std::string sName);
	bool handle_ConnectRequest(TCPSocket *sock, apacket* packet);
	bool handle_BindRequest(TCPSocket *sock, apacket* packet);
	~CBaseService(void);
};

#endif