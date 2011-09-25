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

// PresenceService
// bnet.protocol.presence.PresenceService
//
// { Subscribe .bnet.protocol.presence.SubscribeRequest .bnet.protocol.NoData }
// { Unsubscribe .bnet.protocol.presence.UnsubscribeRequest .bnet.protocol.NoData }
// { Update .bnet.protocol.presence.UpdateRequest .bnet.protocol.NoData }
// { Query .bnet.protocol.presence.QueryRequest .bnet.protocol.presence.QueryResponse }


#ifndef _hfile_PresenceService
#define _hfile_PresenceService

#include "rpc/service.h"
#include "service/presence/presence.pb.h"

#define SERVICE_PresenceService_NAME "bnet.protocol.presence.PresenceService"

class CServicePresenceService :
public CService
{
public:
	CServicePresenceService();
	CServicePresenceService(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_Subscribe_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_Subscribe(TCPSocket *sock, apacket* packet);
	bool handle_Unsubscribe_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_Unsubscribe(TCPSocket *sock, apacket* packet);
	bool handle_Update_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_Update(TCPSocket *sock, apacket* packet);
	bool handle_Query_Request(TCPSocket *sock, apacket* packet);
	bool handle_Query_Response(TCPSocket *sock, apacket* packet);

	~CServicePresenceService(void);
};

#endif