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

// FriendsService
// bnet.protocol.friends.FriendsService
//
// { SubscribeToFriends .bnet.protocol.friends.SubscribeToFriendsRequest .bnet.protocol.friends.SubscribeToFriendsResponse }
// { SendInvitation .bnet.protocol.invitation.SendInvitationRequest .bnet.protocol.invitation.SendInvitationResponse }
// { AcceptInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { RevokeInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { DeclineInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { IgnoreInvitation .bnet.protocol.invitation.GenericRequest .bnet.protocol.NoData }
// { RemoveFriend .bnet.protocol.friends.GenericFriendRequest .bnet.protocol.friends.GenericFriendResponse }
// { ViewFriends .bnet.protocol.friends.ViewFriendsRequest .bnet.protocol.friends.ViewFriendsResponse }
// { UpdateFriendState .bnet.protocol.friends.UpdateFriendStateRequest .bnet.protocol.friends.UpdateFriendStateResponse }
// { UnsubscribeToFriends .bnet.protocol.friends.UnsubscribeToFriendsRequest .bnet.protocol.NoData }


#ifndef _hfile_FriendsService
#define _hfile_FriendsService

#include "rpc/service.h"
#include "service/friends/definition/friends.pb.h"

#define SERVICE_FriendsService_NAME "bnet.protocol.friends.FriendsService"

class CServiceFriendsService :
public CService
{
public:
	CServiceFriendsService();
	CServiceFriendsService(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_SubscribeToFriends_Request(TCPSocket *sock, apacket* packet);
	bool handle_SubscribeToFriends_Response(TCPSocket *sock, apacket* packet);

	bool handle_SendInvitation_Request(TCPSocket *sock, apacket* packet);
	bool handle_SendInvitation_Response(TCPSocket *sock, apacket* packet);

	bool handle_AcceptInvitation_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_AcceptInvitation(TCPSocket *sock, apacket* packet);
	bool handle_RevokeInvitation_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_RevokeInvitation(TCPSocket *sock, apacket* packet);
	bool handle_DeclineInvitation_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_DeclineInvitation(TCPSocket *sock, apacket* packet);
	bool handle_IgnoreInvitation_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_IgnoreInvitation(TCPSocket *sock, apacket* packet);
	bool handle_RemoveFriend_Request(TCPSocket *sock, apacket* packet);
	bool handle_RemoveFriend_Response(TCPSocket *sock, apacket* packet);

	bool handle_ViewFriends_Request(TCPSocket *sock, apacket* packet);
	bool handle_ViewFriends_Response(TCPSocket *sock, apacket* packet);

	bool handle_UpdateFriendState_Request(TCPSocket *sock, apacket* packet);
	bool handle_UpdateFriendState_Response(TCPSocket *sock, apacket* packet);

	bool handle_UnsubscribeToFriends_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_UnsubscribeToFriends(TCPSocket *sock, apacket* packet);
	~CServiceFriendsService(void);
};

#endif