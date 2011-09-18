#include "ServiceMgr.h"
#include "BaseService.h"
#include "services/AuthenticationServer.h"
CServiceMgr::CServiceMgr()
{
	AddDefaultServices(); //I assume you want them..
}
void CServiceMgr::AddDefaultServices()
{
	int hash = GetServiceHash("bnet.protocol.authentication.AuthenticationServer");
	add_service(new CBaseService(this,0, 0, "BaseService"));
	add_service(new CServiceAuthenticationServer(this,0x1, GetServiceHash("bnet.protocol.authentication.AuthenticationServer"),  "bnet.protocol.authentication.AuthenticationServer"));
}
CService* CServiceMgr::add_service(int sID, int sHash, std::string sName) {
	CService *ptr = new CService(this,sID, sHash, sName);
	m_Services.push_back(ptr);
	return ptr;
}
void CServiceMgr::add_service(CService* service) {
	m_Services.push_back(service);
}

//
int CServiceMgr::GetServiceHash(char* name)
{
	int result = 0x811C9DC5;
	for (int i = 0; i < strlen(name); ++i)
		{
			result = 0x1000193 * (name[i] ^ result);
		}
	return result;
}
CService* CServiceMgr::find_service_by_id(int id)
{
	
	for (int i = 0; i < m_Services.size(); i++)
	{
		CService* svc = m_Services.at(i);
		if(svc->GetSID() == id)
			return svc;
	}
	return (CService*)-1;
}

CService* CServiceMgr::find_service_by_server_hash(int sHash)
{
	for (int i = 0; i < m_Services.size(); i++)
	{
		CService* svc = m_Services.at(i);
		if((svc)->GetServerHash() == sHash)
			return svc;
	}
	return 0;
}
void CServiceMgr::clear()
{
	for (int i = 0; i < m_Services.size(); i++)
	{
		CService* s = m_Services.at(i);
		delete s;
	}
	m_Services.clear();
	//Hope you know what you doing.
}
CServiceMgr::~CServiceMgr()
{
	clear();
}