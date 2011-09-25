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

// PartyService
// bnet.protocol.party.PartyService
//
// { CreateChannel .bnet.protocol.channel.CreateChannelRequest .bnet.protocol.channel.CreateChannelResponse }
// { JoinChannel .bnet.protocol.channel.JoinChannelRequest .bnet.protocol.channel.JoinChannelResponse }
// { GetChannelInfo .bnet.protocol.channel.GetChannelInfoRequest .bnet.protocol.channel.GetChannelInfoResponse }


#ifndef _hfile_PartyService
#define _hfile_PartyService

#include "rpc/service.h"
#include "service/party/definition/party.pb.h"

#define SERVICE_PartyService_NAME "bnet.protocol.party.PartyService"

class CServicePartyService :
public CService
{
public:
	CServicePartyService();
	CServicePartyService(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_CreateChannel_Request(TCPSocket *sock, apacket* packet);
	bool handle_CreateChannel_Response(TCPSocket *sock, apacket* packet);

	bool handle_JoinChannel_Request(TCPSocket *sock, apacket* packet);
	bool handle_JoinChannel_Response(TCPSocket *sock, apacket* packet);

	bool handle_GetChannelInfo_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetChannelInfo_Response(TCPSocket *sock, apacket* packet);

	~CServicePartyService(void);
};

#endif