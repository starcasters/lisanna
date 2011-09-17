#include "ServiceMgr.h"
#include "BaseService.h"
#include "AuthenticationService.h"
CServiceMgr::CServiceMgr()
{
	AddDefaultServices(); //I assume you want them..
}
void CServiceMgr::AddDefaultServices()
{
	add_service(new CBaseService(this,0, 0, 0, "BaseService"));
	add_service(new CAuthenticationService(this,0x1, 0xDECFC01, 0x71240E35, "AuthenticationService"));
}
CService* CServiceMgr::add_service(int sID, int sHash, int cHash, std::string sName) {
	CService *ptr = new CService(this,sID, sHash, cHash, sName);
	m_Services.push_back(ptr);
	return ptr;
}
void CServiceMgr::add_service(CService* service) {
	m_Services.push_back(service);
}

CService* CServiceMgr::find_service_by_id(int id)
{
	for(service_container::iterator i = m_Services.begin(); i < m_Services.end(); i++)
	{
		if((*i)->GetSID() == id)
			return *i;
	}
	return (CService*)-1;
}
CService* CServiceMgr::find_service_by_client_hash(int cHash)
{
	for(service_container::iterator i = m_Services.begin(); i < m_Services.end(); i++)
	{
		if((*i)->GetClientHash() == cHash)
			return *i;
	}
	return 0;
}
CService* CServiceMgr::find_service_by_server_hash(int sHash)
{
	for(service_container::iterator i = m_Services.begin(); i < m_Services.end(); i++)
	{
		if((*i)->GetSID() == sHash)
			return *i;
	}
	return 0;
}
void CServiceMgr::clear()
{
	for(service_container::iterator i = m_Services.begin(); i < m_Services.end(); i++)
	{
		CService* s = *i;
		delete s;
	}
	//Hope you know what you doing.
}
CServiceMgr::~CServiceMgr()
{
	clear();
}