#ifndef _hfile_servicemgr
#define _hfile_servicemgr
#include "service.h"

typedef vector<CService*> service_container;

class CServiceMgr {
public:
	CServiceMgr();
	int GetServiceHash(char* name);
	void AddDefaultServices();
	~CServiceMgr();
	void add_service(CService* service);
	CService* add_service(int sID, int sHash, std::string sName); //unk service adder
	CService* find_service_by_id(int id);
	CService* find_service_by_server_hash(int sHash);
	void clear();
private:
	service_container m_Services;

};

#endif