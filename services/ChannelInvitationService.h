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

// ChannelInvitationService
// bnet.protocol.channel_invitation.ChannelInvitationService
//
// { Subscribe .bnet.protocol.channel_invitation.SubscribeRequest .bnet.protocol.channel_invitation.SubscribeResponse }
// { Unsubscribe .bnet.protocol.channel_invitation.UnsubscribeRequest .bnet.protocol.NoData }
// { SendInvitation .bnet.protocol.invitation.SendInvitationRequest .bnet.protocol.invitation.SendInvitationResponse }
// { AcceptInvitation .bnet.protocol.channel_invitation.AcceptInvitationRequest .bnet.protocol.channel_invitation.AcceptInvitationResponse }
// { DeclineInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { RevokeInvitation .bnet.protocol.channel_invitation.RevokeInvitationRequest .bnet.protocol.NoData }
// { SuggestInvitation .bnet.protocol.channel_invitation.SuggestInvitationRequest .bnet.protocol.NoData }


#ifndef _hfile_ChannelInvitationService
#define _hfile_ChannelInvitationService

#include "rpc/service.h"
#include "service/channel_invitation/definition/channel_invitation.pb.h"

class CServiceChannelInvitationService :
public CService
{
public:
	CServiceChannelInvitationService();
	CServiceChannelInvitationService(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_Subscribe_Request(TCPSocket *sock, apacket* packet);
	bool handle_Subscribe_Response(TCPSocket *sock, apacket* packet);

	bool handle_Unsubscribe_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_Unsubscribe(TCPSocket *sock, apacket* packet);
	bool handle_SendInvitation_Request(TCPSocket *sock, apacket* packet);
	bool handle_SendInvitation_Response(TCPSocket *sock, apacket* packet);

	bool handle_AcceptInvitation_Request(TCPSocket *sock, apacket* packet);
	bool handle_AcceptInvitation_Response(TCPSocket *sock, apacket* packet);

	bool handle_DeclineInvitation_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_DeclineInvitation(TCPSocket *sock, apacket* packet);
	bool handle_RevokeInvitation_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_RevokeInvitation(TCPSocket *sock, apacket* packet);
	bool handle_SuggestInvitation_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_SuggestInvitation(TCPSocket *sock, apacket* packet);
	~CServiceChannelInvitationService(void);
};

#endif