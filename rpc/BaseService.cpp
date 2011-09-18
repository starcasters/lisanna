#include "BaseService.h"

#include <iostream>
#include <time.h>
#include "ServiceMgr.h"
using namespace google::protobuf;
CBaseService::CBaseService()
{

}
CBaseService::CBaseService(CServiceMgr* owner,int SID=0, int sHash=0, std::string serviceName="") : CService(owner,SID, sHash,serviceName)
{
}

bool CBaseService::handle_ConnectRequest(TCPSocket *sock, apacket* packet)
{
	bnet::protocol::connection::ConnectResponse resp;
	resp.mutable_server_id()->set_label(0xAAAA);
	resp.mutable_server_id()->set_epoch(time(NULL));
	resp.mutable_client_id()->set_label(0xBBBB);
	resp.mutable_client_id()->set_epoch(time(NULL));

	//	sock->send(con_response_hardcoded, sizeof(con_response_hardcoded));

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, resp.ByteSize());
	sendmsgdata(sock, &resp);
	return true;
}
int foxhole = 22;
bool CBaseService::handle_BindRequest(TCPSocket *sock, apacket* packet)
{
	bnet::protocol::connection::BindRequest* request = (bnet::protocol::connection::BindRequest*)packet->msg;

	cout << "bind request handler called!" << endl ;
	cout << request->imported_service_hash_size() << endl;
	request->DebugString();
	bnet::protocol::connection::BindResponse bindres;
			CService* svc = 0;
	for (int i = 0; i < request->imported_service_hash_size(); i++) {
			int hash = request->imported_service_hash(i);
			 svc = m_owner->find_service_by_server_hash(hash);
			if(svc == 0) {
			cout << "unknow service hash: " << request->imported_service_hash(i) << endl;
			foxhole++;
			bindres.add_imported_service_id(foxhole);
		}
		else {
			bindres.add_imported_service_id(svc->GetSID());
		}
	}
	cout << "reply size? " << bindres.ByteSize() << endl ;
	printmsgdata(&bindres);

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, bindres.ByteSize());
	sendmsgdata(sock, &bindres);
	return true;
}

CBaseService::~CBaseService(void)
{
	std::cout << "Bye from "<< m_serviceName << std::endl;
}
