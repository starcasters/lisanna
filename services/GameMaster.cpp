/*
    This file is part of Lisana.

    Lisana is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Lisana is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Lisana.  If not, see <http://www.gnu.org/licenses/>.
*/

// GameMaster
// bnet.protocol.game_master.GameMaster
//
// { JoinGame .bnet.protocol.game_master.JoinGameRequest .bnet.protocol.game_master.JoinGameResponse }
// { ListFactories .bnet.protocol.game_master.ListFactoriesRequest .bnet.protocol.game_master.ListFactoriesResponse }
// { FindGame .bnet.protocol.game_master.FindGameRequest .bnet.protocol.game_master.FindGameResponse }
// { CancelFindGame .bnet.protocol.game_master.CancelFindGameRequest .bnet.protocol.NoData }
// { GameEnded .bnet.protocol.game_master.GameEndedNotification .bnet.protocol.NO_RESPONSE }
// { PlayerLeft .bnet.protocol.game_master.PlayerLeftNotification .bnet.protocol.NO_RESPONSE }
// { RegisterServer .bnet.protocol.game_master.RegisterServerRequest .bnet.protocol.NoData }
// { UnregisterServer .bnet.protocol.game_master.UnregisterServerRequest .bnet.protocol.NO_RESPONSE }
// { RegisterUtilities .bnet.protocol.game_master.RegisterUtilitiesRequest .bnet.protocol.NoData }
// { UnregisterUtilities .bnet.protocol.game_master.UnregisterUtilitiesRequest .bnet.protocol.NO_RESPONSE }
// { Subscribe .bnet.protocol.game_master.SubscribeRequest .bnet.protocol.game_master.SubscribeResponse }
// { Unsubscribe .bnet.protocol.game_master.UnsubscribeRequest .bnet.protocol.NO_RESPONSE }
// { ChangeGame .bnet.protocol.game_master.ChangeGameRequest .bnet.protocol.NoData }
// { GetFactoryInfo .bnet.protocol.game_master.GetFactoryInfoRequest .bnet.protocol.game_master.GetFactoryInfoResponse }
// { GetGameStats .bnet.protocol.game_master.GetGameStatsRequest .bnet.protocol.game_master.GetGameStatsResponse }


#include "GameMaster.h"

#include <iostream>

using namespace google::protobuf;


CServiceGameMaster::CServiceGameMaster()
{
	// place here any initialization (?)
}

CServiceGameMaster::CServiceGameMaster(CServiceMgr* owner=0,int SID=0, std::string serviceName=string(SERVICE_GameMaster_NAME)) : 
	CService(owner, SID, serviceName)
{
	//what goes here now?
}


Message* CServiceGameMaster::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::game_master::JoinGameRequest::default_instance().New(); }
			else { return ::bnet::protocol::game_master::JoinGameResponse::default_instance().New(); }
		case 2:
			if (request) { return ::bnet::protocol::game_master::ListFactoriesRequest::default_instance().New(); }
			else { return ::bnet::protocol::game_master::ListFactoriesResponse::default_instance().New(); }
		case 3:
			if (request) { return ::bnet::protocol::game_master::FindGameRequest::default_instance().New(); }
			else { return ::bnet::protocol::game_master::FindGameResponse::default_instance().New(); }
		case 4:
			if (request) { return ::bnet::protocol::game_master::CancelFindGameRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 5:
			if (request) { return ::bnet::protocol::game_master::GameEndedNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 6:
			if (request) { return ::bnet::protocol::game_master::PlayerLeftNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 7:
			if (request) { return ::bnet::protocol::game_master::RegisterServerRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 8:
			if (request) { return ::bnet::protocol::game_master::UnregisterServerRequest::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 9:
			if (request) { return ::bnet::protocol::game_master::RegisterUtilitiesRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 10:
			if (request) { return ::bnet::protocol::game_master::UnregisterUtilitiesRequest::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 11:
			if (request) { return ::bnet::protocol::game_master::SubscribeRequest::default_instance().New(); }
			else { return ::bnet::protocol::game_master::SubscribeResponse::default_instance().New(); }
		case 12:
			if (request) { return ::bnet::protocol::game_master::UnsubscribeRequest::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 13:
			if (request) { return ::bnet::protocol::game_master::ChangeGameRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 14:
			if (request) { return ::bnet::protocol::game_master::GetFactoryInfoRequest::default_instance().New(); }
			else { return ::bnet::protocol::game_master::GetFactoryInfoResponse::default_instance().New(); }
		case 15:
			if (request) { return ::bnet::protocol::game_master::GetGameStatsRequest::default_instance().New(); }
			else { return ::bnet::protocol::game_master::GetGameStatsResponse::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceGameMaster::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_JoinGame_Request(sock, packet); }
			else {	return handle_JoinGame_Response(sock, packet); }
		case 2:
			if (request) { return handle_ListFactories_Request(sock, packet); }
			else {	return handle_ListFactories_Response(sock, packet); }
		case 3:
			if (request) { return handle_FindGame_Request(sock, packet); }
			else {	return handle_FindGame_Response(sock, packet); }
		case 4:
			if (request) { return handle_CancelFindGame_Request(sock, packet); }
			else {	return handle_NoData_CancelFindGame(sock, packet); }
		case 5:
			if (request) { return handle_GameEnded_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 6:
			if (request) { return handle_PlayerLeft_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 7:
			if (request) { return handle_RegisterServer_Request(sock, packet); }
			else {	return handle_NoData_RegisterServer(sock, packet); }
		case 8:
			if (request) { return handle_UnregisterServer_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 9:
			if (request) { return handle_RegisterUtilities_Request(sock, packet); }
			else {	return handle_NoData_RegisterUtilities(sock, packet); }
		case 10:
			if (request) { return handle_UnregisterUtilities_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 11:
			if (request) { return handle_Subscribe_Request(sock, packet); }
			else {	return handle_Subscribe_Response(sock, packet); }
		case 12:
			if (request) { return handle_Unsubscribe_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 13:
			if (request) { return handle_ChangeGame_Request(sock, packet); }
			else {	return handle_NoData_ChangeGame(sock, packet); }
		case 14:
			if (request) { return handle_GetFactoryInfo_Request(sock, packet); }
			else {	return handle_GetFactoryInfo_Response(sock, packet); }
		case 15:
			if (request) { return handle_GetGameStats_Request(sock, packet); }
			else {	return handle_GetGameStats_Response(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceGameMaster::handle_JoinGame_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::JoinGameRequest* request;
	::bnet::protocol::game_master::JoinGameResponse response;
	request = (::bnet::protocol::game_master::JoinGameRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceGameMaster::handle_JoinGame_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::game_master::JoinGameResponse* response;
	response = (::bnet::protocol::game_master::JoinGameResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_ListFactories_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::ListFactoriesRequest* request;
	::bnet::protocol::game_master::ListFactoriesResponse response;
	request = (::bnet::protocol::game_master::ListFactoriesRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceGameMaster::handle_ListFactories_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::game_master::ListFactoriesResponse* response;
	response = (::bnet::protocol::game_master::ListFactoriesResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_FindGame_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::FindGameRequest* request;
	::bnet::protocol::game_master::FindGameResponse response;
	request = (::bnet::protocol::game_master::FindGameRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceGameMaster::handle_FindGame_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::game_master::FindGameResponse* response;
	response = (::bnet::protocol::game_master::FindGameResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_CancelFindGame_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::CancelFindGameRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::game_master::CancelFindGameRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_NoData_CancelFindGame(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_GameEnded_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::GameEndedNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_PlayerLeft_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::PlayerLeftNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_RegisterServer_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::RegisterServerRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::game_master::RegisterServerRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_NoData_RegisterServer(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_UnregisterServer_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::UnregisterServerRequest* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_RegisterUtilities_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::RegisterUtilitiesRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::game_master::RegisterUtilitiesRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_NoData_RegisterUtilities(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_UnregisterUtilities_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::UnregisterUtilitiesRequest* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_Subscribe_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::SubscribeRequest* request;
	::bnet::protocol::game_master::SubscribeResponse response;
	request = (::bnet::protocol::game_master::SubscribeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceGameMaster::handle_Subscribe_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::game_master::SubscribeResponse* response;
	response = (::bnet::protocol::game_master::SubscribeResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_Unsubscribe_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::UnsubscribeRequest* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_ChangeGame_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::ChangeGameRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::game_master::ChangeGameRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceGameMaster::handle_NoData_ChangeGame(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_GetFactoryInfo_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::GetFactoryInfoRequest* request;
	::bnet::protocol::game_master::GetFactoryInfoResponse response;
	request = (::bnet::protocol::game_master::GetFactoryInfoRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceGameMaster::handle_GetFactoryInfo_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::game_master::GetFactoryInfoResponse* response;
	response = (::bnet::protocol::game_master::GetFactoryInfoResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceGameMaster::handle_GetGameStats_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::game_master::GetGameStatsRequest* request;
	::bnet::protocol::game_master::GetGameStatsResponse response;
	request = (::bnet::protocol::game_master::GetGameStatsRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceGameMaster::handle_GetGameStats_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::game_master::GetGameStatsResponse* response;
	response = (::bnet::protocol::game_master::GetGameStatsResponse*) packet->msg;
	//do something...
	
	return true;
}


CServiceGameMaster::~CServiceGameMaster(void)
{
	std::cout << "Bye from authserv.";
}

