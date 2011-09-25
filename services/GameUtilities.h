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

// GameUtilities
// bnet.protocol.game_utilities.GameUtilities
//
// { ProcessClientRequest .bnet.protocol.game_utilities.ClientRequest .bnet.protocol.game_utilities.ClientResponse }
// { CreateToon .bnet.protocol.game_utilities.CreateToonRequest .bnet.protocol.game_utilities.CreateToonResponse }
// { DeleteToon .bnet.protocol.game_utilities.DeleteToonRequest .bnet.protocol.NoData }
// { TransferToon .bnet.protocol.game_utilities.TransferToonRequest .bnet.protocol.NoData }
// { SelectToon .bnet.protocol.game_utilities.SelectToonRequest .bnet.protocol.NoData }
// { PresenceChannelCreated .bnet.protocol.game_utilities.PresenceChannelCreatedRequest .bnet.protocol.NoData }
// { GetPlayerVariables .bnet.protocol.game_utilities.PlayerVariablesRequest .bnet.protocol.game_utilities.VariablesResponse }
// { GetGameVariables .bnet.protocol.game_utilities.GameVariablesRequest .bnet.protocol.game_utilities.VariablesResponse }
// { GetLoad .bnet.protocol.server_pool.GetLoadRequest .bnet.protocol.server_pool.ServerState }


#ifndef _hfile_GameUtilities
#define _hfile_GameUtilities

#include "rpc/service.h"
#include "service/game_utilities/game_utilities.pb.h"

#define SERVICE_GameUtilities_NAME "bnet.protocol.game_utilities.GameUtilities"

class CServiceGameUtilities :
public CService
{
public:
	CServiceGameUtilities();
	CServiceGameUtilities(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_ProcessClientRequest_Request(TCPSocket *sock, apacket* packet);
	bool handle_ProcessClientRequest_Response(TCPSocket *sock, apacket* packet);

	bool handle_CreateToon_Request(TCPSocket *sock, apacket* packet);
	bool handle_CreateToon_Response(TCPSocket *sock, apacket* packet);

	bool handle_DeleteToon_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_DeleteToon(TCPSocket *sock, apacket* packet);
	bool handle_TransferToon_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_TransferToon(TCPSocket *sock, apacket* packet);
	bool handle_SelectToon_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_SelectToon(TCPSocket *sock, apacket* packet);
	bool handle_PresenceChannelCreated_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_PresenceChannelCreated(TCPSocket *sock, apacket* packet);
	bool handle_GetPlayerVariables_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetPlayerVariables_Response(TCPSocket *sock, apacket* packet);

	bool handle_GetGameVariables_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetGameVariables_Response(TCPSocket *sock, apacket* packet);

	bool handle_GetLoad_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetLoad_Response(TCPSocket *sock, apacket* packet);

	~CServiceGameUtilities(void);
};

#endif