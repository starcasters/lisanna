#ifndef _hfile_authservice
#define _hfile_authservice

#include "service.h"
#include "service/authentication/authentication.pb.h"

class CAuthenticationService :
	public CService
{
public:
	CAuthenticationService();
	CAuthenticationService(CServiceMgr* owner,int SID, int sHash, std::string sName);
	bool handle_LogonRequest(TCPSocket *sock, apacket* packet);
	~CAuthenticationService(void);
};

#endif