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

// ChatService
// bnet.protocol.chat.ChatService
//
// { FindChannel .bnet.protocol.channel.FindChannelRequest .bnet.protocol.channel.FindChannelResponse }
// { CreateChannel .bnet.protocol.channel.CreateChannelRequest .bnet.protocol.channel.CreateChannelResponse }
// { JoinChannel .bnet.protocol.channel.JoinChannelRequest .bnet.protocol.channel.JoinChannelResponse }


#ifndef _hfile_ChatService
#define _hfile_ChatService

#include "rpc/service.h"
#include "service/chat/definition/chat.pb.h"

#define SERVICE_ChatService_NAME "bnet.protocol.chat.ChatService"

class CServiceChatService :
public CService
{
public:
	CServiceChatService();
	CServiceChatService(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_FindChannel_Request(TCPSocket *sock, apacket* packet);
	bool handle_FindChannel_Response(TCPSocket *sock, apacket* packet);

	bool handle_CreateChannel_Request(TCPSocket *sock, apacket* packet);
	bool handle_CreateChannel_Response(TCPSocket *sock, apacket* packet);

	bool handle_JoinChannel_Request(TCPSocket *sock, apacket* packet);
	bool handle_JoinChannel_Response(TCPSocket *sock, apacket* packet);

	~CServiceChatService(void);
};

#endif