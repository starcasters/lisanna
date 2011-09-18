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


#ifndef _hfile_ChannelInvitationNotify
#define _hfile_ChannelInvitationNotify

#include "rpc/service.h"
#include "service/channel_invitation/definition/channel_invitation.pb.h"

class CServiceChannelInvitationNotify :
public CService
{
public:
	CServiceChannelInvitationNotify();
	CServiceChannelInvitationNotify(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_NotifyReceivedInvitationAdded_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyReceivedInvitationRemoved_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyReceivedSuggestionAdded_Request(TCPSocket *sock, apacket* packet);

	bool handle_HasRoomForInvitation_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_HasRoomForInvitation(TCPSocket *sock, apacket* packet);
	~CServiceChannelInvitationNotify(void);
};

#endif