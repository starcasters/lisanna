#ifndef _hfile_servicemgr
#define _hfile_servicemgr
#include "service.h"

typedef vector<CService*> service_container;
class CServiceMgr {
public:
	CServiceMgr();
	void AddDefaultServices();
	~CServiceMgr();
	void CServiceMgr::add_service(CService* service);
	CService* add_service(int sID, int sHash, int cHash, std::string sName); //unk service adder
	CService* find_service_by_id(int id);
	CService* find_service_by_server_hash(int cHash);
	CService* find_service_by_client_hash(int sHash);
	void clear();
private:
	service_container m_Services;

};

#endif