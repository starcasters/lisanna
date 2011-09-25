#include "ServiceMgr.h"
#include "BaseService.h"
#include "services/AuthenticationServer.h"

CServiceMgr::CServiceMgr()
{
	AddDefaultServices(); //I assume you want them..
}

void CServiceMgr::AddDefaultServices()
{
	CBaseService* service = CBaseService::New();
	add_service(service); /*(this, 0, string("BaseService"))*/
//	add_service(CServiceAuthenticationServer::New(this, 0x1, string("bnet.protocol.authentication.AuthenticationServer")));
}

void CServiceMgr::add_service(CService* service) {
	m_Services.push_back(service);
}

//
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