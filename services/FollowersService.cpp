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

// FollowersService
// bnet.protocol.followers.FollowersService
//
// { SubscribeToFollowers .bnet.protocol.followers.SubscribeToFollowersRequest .bnet.protocol.followers.SubscribeToFollowersResponse }
// { StartFollowing .bnet.protocol.followers.StartFollowingRequest .bnet.protocol.followers.StartFollowingResponse }
// { StopFollowing .bnet.protocol.followers.StopFollowingRequest .bnet.protocol.followers.StopFollowingResponse }
// { UpdateFollowerState .bnet.protocol.followers.UpdateFollowerStateRequest .bnet.protocol.followers.UpdateFollowerStateResponse }


#include "FollowersService.h"

#include <iostream>

using namespace google::protobuf;


CServiceFollowersService::CServiceFollowersService()
{
	// place here any initialization (?)
}

CServiceFollowersService::CServiceFollowersService(CServiceMgr* owner=0,int SID=0, std::string serviceName=string(SERVICE_FollowersService_NAME)) : 
	CService(owner, SID, serviceName)
{
	//what goes here now?
}


Message* CServiceFollowersService::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::followers::SubscribeToFollowersRequest::default_instance().New(); }
			else { return ::bnet::protocol::followers::SubscribeToFollowersResponse::default_instance().New(); }
		case 2:
			if (request) { return ::bnet::protocol::followers::StartFollowingRequest::default_instance().New(); }
			else { return ::bnet::protocol::followers::StartFollowingResponse::default_instance().New(); }
		case 3:
			if (request) { return ::bnet::protocol::followers::StopFollowingRequest::default_instance().New(); }
			else { return ::bnet::protocol::followers::StopFollowingResponse::default_instance().New(); }
		case 4:
			if (request) { return ::bnet::protocol::followers::UpdateFollowerStateRequest::default_instance().New(); }
			else { return ::bnet::protocol::followers::UpdateFollowerStateResponse::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceFollowersService::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_SubscribeToFollowers_Request(sock, packet); }
			else {	return handle_SubscribeToFollowers_Response(sock, packet); }
		case 2:
			if (request) { return handle_StartFollowing_Request(sock, packet); }
			else {	return handle_StartFollowing_Response(sock, packet); }
		case 3:
			if (request) { return handle_StopFollowing_Request(sock, packet); }
			else {	return handle_StopFollowing_Response(sock, packet); }
		case 4:
			if (request) { return handle_UpdateFollowerState_Request(sock, packet); }
			else {	return handle_UpdateFollowerState_Response(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceFollowersService::handle_SubscribeToFollowers_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::followers::SubscribeToFollowersRequest* request;
	::bnet::protocol::followers::SubscribeToFollowersResponse response;
	request = (::bnet::protocol::followers::SubscribeToFollowersRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceFollowersService::handle_SubscribeToFollowers_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::followers::SubscribeToFollowersResponse* response;
	response = (::bnet::protocol::followers::SubscribeToFollowersResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFollowersService::handle_StartFollowing_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::followers::StartFollowingRequest* request;
	::bnet::protocol::followers::StartFollowingResponse response;
	request = (::bnet::protocol::followers::StartFollowingRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceFollowersService::handle_StartFollowing_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::followers::StartFollowingResponse* response;
	response = (::bnet::protocol::followers::StartFollowingResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFollowersService::handle_StopFollowing_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::followers::StopFollowingRequest* request;
	::bnet::protocol::followers::StopFollowingResponse response;
	request = (::bnet::protocol::followers::StopFollowingRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceFollowersService::handle_StopFollowing_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::followers::StopFollowingResponse* response;
	response = (::bnet::protocol::followers::StopFollowingResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceFollowersService::handle_UpdateFollowerState_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::followers::UpdateFollowerStateRequest* request;
	::bnet::protocol::followers::UpdateFollowerStateResponse response;
	request = (::bnet::protocol::followers::UpdateFollowerStateRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceFollowersService::handle_UpdateFollowerState_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::followers::UpdateFollowerStateResponse* response;
	response = (::bnet::protocol::followers::UpdateFollowerStateResponse*) packet->msg;
	//do something...
	
	return true;
}


CServiceFollowersService::~CServiceFollowersService(void)
{
	std::cout << "Bye from authserv.";
}

