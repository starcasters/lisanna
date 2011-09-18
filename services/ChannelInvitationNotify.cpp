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

// ChannelInvitationNotify
// bnet.protocol.channel_invitation.ChannelInvitationNotify
//
// { NotifyReceivedInvitationAdded .bnet.protocol.channel_invitation.InvitationAddedNotification .bnet.protocol.NO_RESPONSE }
// { NotifyReceivedInvitationRemoved .bnet.protocol.channel_invitation.InvitationRemovedNotification .bnet.protocol.NO_RESPONSE }
// { NotifyReceivedSuggestionAdded .bnet.protocol.channel_invitation.SuggestionAddedNotification .bnet.protocol.NO_RESPONSE }
// { HasRoomForInvitation .bnet.protocol.channel_invitation.HasRoomForInvitationRequest .bnet.protocol.NoData }


#include "ChannelInvitationNotify.h"

#include <iostream>

using namespace google::protobuf;


CServiceChannelInvitationNotify::CServiceChannelInvitationNotify()
{
	// place here any initialization (?)
}

CServiceChannelInvitationNotify::CServiceChannelInvitationNotify(CServiceMgr* owner=0,int SID=0, int sHash=0, std::string serviceName="") : CService(owner,SID, sHash, serviceName)
{
	//what goes here now?
}

Message* CServiceChannelInvitationNotify::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::channel_invitation::InvitationAddedNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 2:
			if (request) { return ::bnet::protocol::channel_invitation::InvitationRemovedNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 3:
			if (request) { return ::bnet::protocol::channel_invitation::SuggestionAddedNotification::default_instance().New(); }
			else { cerr << "error: method has no response data" << endl; }
		case 4:
			if (request) { return ::bnet::protocol::channel_invitation::HasRoomForInvitationRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceChannelInvitationNotify::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_NotifyReceivedInvitationAdded_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 2:
			if (request) { return handle_NotifyReceivedInvitationRemoved_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 3:
			if (request) { return handle_NotifyReceivedSuggestionAdded_Request(sock, packet); }
			else {cerr << "error: method has no response data" << endl; }
		case 4:
			if (request) { return handle_HasRoomForInvitation_Request(sock, packet); }
			else {	return handle_NoData_HasRoomForInvitation(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceChannelInvitationNotify::handle_NotifyReceivedInvitationAdded_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::InvitationAddedNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelInvitationNotify::handle_NotifyReceivedInvitationRemoved_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::InvitationRemovedNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelInvitationNotify::handle_NotifyReceivedSuggestionAdded_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::SuggestionAddedNotification* request;
		//this packet has no response asociated.
	// do something...
	
	return true;
}


bool CServiceChannelInvitationNotify::handle_HasRoomForInvitation_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::channel_invitation::HasRoomForInvitationRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::channel_invitation::HasRoomForInvitationRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceChannelInvitationNotify::handle_NoData_HasRoomForInvitation(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}


CServiceChannelInvitationNotify::~CServiceChannelInvitationNotify(void)
{
	std::cout << "Bye from authserv.";
}
