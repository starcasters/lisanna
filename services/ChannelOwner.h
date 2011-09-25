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

// ChannelOwner
// bnet.protocol.channel.ChannelOwner
//
// { GetChannelId .bnet.protocol.channel.GetChannelIdRequest .bnet.protocol.channel.GetChannelIdResponse }
// { CreateChannel .bnet.protocol.channel.CreateChannelRequest .bnet.protocol.channel.CreateChannelResponse }
// { JoinChannel .bnet.protocol.channel.JoinChannelRequest .bnet.protocol.channel.JoinChannelResponse }
// { FindChannel .bnet.protocol.channel.FindChannelRequest .bnet.protocol.channel.FindChannelResponse }
// { GetChannelInfo .bnet.protocol.channel.GetChannelInfoRequest .bnet.protocol.channel.GetChannelInfoResponse }


#ifndef _hfile_ChannelOwner
#define _hfile_ChannelOwner

#include "rpc/service.h"
#include "service/channel/definition/channel.pb.h"

#define SERVICE_ChannelOwner_NAME "bnet.protocol.channel.ChannelOwner"

class CServiceChannelOwner :
public CService
{
public:
	CServiceChannelOwner();
	CServiceChannelOwner(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_GetChannelId_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetChannelId_Response(TCPSocket *sock, apacket* packet);

	bool handle_CreateChannel_Request(TCPSocket *sock, apacket* packet);
	bool handle_CreateChannel_Response(TCPSocket *sock, apacket* packet);

	bool handle_JoinChannel_Request(TCPSocket *sock, apacket* packet);
	bool handle_JoinChannel_Response(TCPSocket *sock, apacket* packet);

	bool handle_FindChannel_Request(TCPSocket *sock, apacket* packet);
	bool handle_FindChannel_Response(TCPSocket *sock, apacket* packet);

	bool handle_GetChannelInfo_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetChannelInfo_Response(TCPSocket *sock, apacket* packet);

	~CServiceChannelOwner(void);
};

#endif