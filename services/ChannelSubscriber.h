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

// ChannelSubscriber
// bnet.protocol.channel.ChannelSubscriber
//
// { NotifyAdd .bnet.protocol.channel.AddNotification .bnet.protocol.NO_RESPONSE }
// { NotifyJoin .bnet.protocol.channel.JoinNotification .bnet.protocol.NO_RESPONSE }
// { NotifyRemove .bnet.protocol.channel.RemoveNotification .bnet.protocol.NO_RESPONSE }
// { NotifyLeave .bnet.protocol.channel.LeaveNotification .bnet.protocol.NO_RESPONSE }
// { NotifySendMessage .bnet.protocol.channel.SendMessageNotification .bnet.protocol.NO_RESPONSE }
// { NotifyUpdateChannelState .bnet.protocol.channel.UpdateChannelStateNotification .bnet.protocol.NO_RESPONSE }
// { NotifyUpdateMemberState .bnet.protocol.channel.UpdateMemberStateNotification .bnet.protocol.NO_RESPONSE }


#ifndef _hfile_ChannelSubscriber
#define _hfile_ChannelSubscriber

#include "rpc/service.h"
#include "service/channel/definition/channel.pb.h"

class CServiceChannelSubscriber :
public CService
{
public:
	CServiceChannelSubscriber();
	CServiceChannelSubscriber(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_NotifyAdd_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyJoin_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyRemove_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyLeave_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifySendMessage_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyUpdateChannelState_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyUpdateMemberState_Request(TCPSocket *sock, apacket* packet);

	~CServiceChannelSubscriber(void);
};

#endif