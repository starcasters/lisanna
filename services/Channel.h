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

// Channel
// bnet.protocol.channel.Channel
//
// { AddMember .bnet.protocol.channel.AddMemberRequest .bnet.protocol.NoData }
// { RemoveMember .bnet.protocol.channel.RemoveMemberRequest .bnet.protocol.NoData }
// { SendMessage .bnet.protocol.channel.SendMessageRequest .bnet.protocol.NoData }
// { UpdateChannelState .bnet.protocol.channel.UpdateChannelStateRequest .bnet.protocol.NoData }
// { UpdateMemberState .bnet.protocol.channel.UpdateMemberStateRequest .bnet.protocol.NoData }
// { Dissolve .bnet.protocol.channel.DissolveRequest .bnet.protocol.NoData }
// { SetRoles .bnet.protocol.channel.SetRolesRequest .bnet.protocol.NoData }


#ifndef _hfile_Channel
#define _hfile_Channel

#include "rpc/service.h"
#include "service/channel/definition/channel.pb.h"

#define SERVICE_Channel_NAME "bnet.protocol.channel.Channel"

class CServiceChannel :
public CService
{
public:
	CServiceChannel();
	CServiceChannel(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_AddMember_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_AddMember(TCPSocket *sock, apacket* packet);
	bool handle_RemoveMember_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_RemoveMember(TCPSocket *sock, apacket* packet);
	bool handle_SendMessage_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_SendMessage(TCPSocket *sock, apacket* packet);
	bool handle_UpdateChannelState_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_UpdateChannelState(TCPSocket *sock, apacket* packet);
	bool handle_UpdateMemberState_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_UpdateMemberState(TCPSocket *sock, apacket* packet);
	bool handle_Dissolve_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_Dissolve(TCPSocket *sock, apacket* packet);
	bool handle_SetRoles_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_SetRoles(TCPSocket *sock, apacket* packet);
	~CServiceChannel(void);
};

#endif