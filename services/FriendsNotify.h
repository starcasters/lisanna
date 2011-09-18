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

// FriendsNotify
// bnet.protocol.friends.FriendsNotify
//
// { NotifyFriendAdded .bnet.protocol.friends.FriendNotification .bnet.protocol.NO_RESPONSE }
// { NotifyFriendRemoved .bnet.protocol.friends.FriendNotification .bnet.protocol.NO_RESPONSE }
// { NotifyReceivedInvitationAdded .bnet.protocol.friends.InvitationAddedNotification .bnet.protocol.NO_RESPONSE }
// { NotifyReceivedInvitationRemoved .bnet.protocol.friends.InvitationRemovedNotification .bnet.protocol.NO_RESPONSE }
// { NotifySentInvitationRemoved .bnet.protocol.friends.InvitationRemovedNotification .bnet.protocol.NO_RESPONSE }


#ifndef _hfile_FriendsNotify
#define _hfile_FriendsNotify

#include "rpc/service.h"
#include "service/friends/definition/friends.pb.h"

class CServiceFriendsNotify :
public CService
{
public:
	CServiceFriendsNotify();
	CServiceFriendsNotify(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_NotifyFriendAdded_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyFriendRemoved_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyReceivedInvitationAdded_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyReceivedInvitationRemoved_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifySentInvitationRemoved_Request(TCPSocket *sock, apacket* packet);

	~CServiceFriendsNotify(void);
};

#endif