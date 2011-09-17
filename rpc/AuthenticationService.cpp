#include "AuthenticationService.h"

#include <iostream>
using namespace google::protobuf;
CAuthenticationService::CAuthenticationService()
{
	
}
CAuthenticationService::CAuthenticationService(CServiceMgr* owner=0,int SID=0, int sHash=0, std::string serviceName="") : CService(owner,SID, sHash, serviceName)
{
	AddMethod(1, CallbackDelegate(this, &CAuthenticationService::handle_LogonRequest),(Message*) &(bnet::protocol::authentication::LogonRequest::default_instance()));
}

bool CAuthenticationService::handle_LogonRequest(TCPSocket *sock, apacket* packet)
{
	bnet::protocol::authentication::LogonRequest loginResponse;
	bnet::protocol::authentication::LogonResponse log_resp;
	log_resp.mutable_account()->set_high(0x100000000000000);
	log_resp.mutable_account()->set_low(0);
	log_resp.mutable_game_account()->set_high(0x200006200004433); 
	log_resp.mutable_game_account()->set_low(0);
	std::cout << "Debug Packet Infos: " << log_resp.DebugString();
	printmsgdata(&log_resp);


	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, log_resp.ByteSize());
	sendmsgdata(sock, &log_resp);
		/*
	bnet::protocol::connection::BindRequest breq;
	breq.mutable_imported_service_hash()->Add();
	breq.mutable_imported_service_hash()->Set(0, 0xdeadbeef);
	bnet::protocol::connection::BoundService* svc = breq.mutable_exported_service()->Add();
	svc->set_hash(0x71240e35);
	svc->set_id(19);
	std::cout << breq.DebugString();
	sendheader(sock, 0xFE, 2, 0, 0, breq.ByteSize());
	sendmsgdata(sock, svc);
	*/
	/*
	//Send a module load request
	bnet::protocol::authentication::ModuleLoadRequest* mod = new bnet::protocol::authentication::ModuleLoadRequest();
	mod->ParseFromArray(&hc[7], sizeof(hc)-7);
	sendheader(sock, 3, 1, 0, 0, mod->ByteSize());
	sendmsgdata(sock, mod);
	delete mod;
	*/
	return true;
}

CAuthenticationService::~CAuthenticationService(void)
{
	std::cout << "Bye from authserv.";
}
