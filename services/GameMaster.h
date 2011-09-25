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

// GameMaster
// bnet.protocol.game_master.GameMaster
//
// { JoinGame .bnet.protocol.game_master.JoinGameRequest .bnet.protocol.game_master.JoinGameResponse }
// { ListFactories .bnet.protocol.game_master.ListFactoriesRequest .bnet.protocol.game_master.ListFactoriesResponse }
// { FindGame .bnet.protocol.game_master.FindGameRequest .bnet.protocol.game_master.FindGameResponse }
// { CancelFindGame .bnet.protocol.game_master.CancelFindGameRequest .bnet.protocol.NoData }
// { GameEnded .bnet.protocol.game_master.GameEndedNotification .bnet.protocol.NO_RESPONSE }
// { PlayerLeft .bnet.protocol.game_master.PlayerLeftNotification .bnet.protocol.NO_RESPONSE }
// { RegisterServer .bnet.protocol.game_master.RegisterServerRequest .bnet.protocol.NoData }
// { UnregisterServer .bnet.protocol.game_master.UnregisterServerRequest .bnet.protocol.NO_RESPONSE }
// { RegisterUtilities .bnet.protocol.game_master.RegisterUtilitiesRequest .bnet.protocol.NoData }
// { UnregisterUtilities .bnet.protocol.game_master.UnregisterUtilitiesRequest .bnet.protocol.NO_RESPONSE }
// { Subscribe .bnet.protocol.game_master.SubscribeRequest .bnet.protocol.game_master.SubscribeResponse }
// { Unsubscribe .bnet.protocol.game_master.UnsubscribeRequest .bnet.protocol.NO_RESPONSE }
// { ChangeGame .bnet.protocol.game_master.ChangeGameRequest .bnet.protocol.NoData }
// { GetFactoryInfo .bnet.protocol.game_master.GetFactoryInfoRequest .bnet.protocol.game_master.GetFactoryInfoResponse }
// { GetGameStats .bnet.protocol.game_master.GetGameStatsRequest .bnet.protocol.game_master.GetGameStatsResponse }


#ifndef _hfile_GameMaster
#define _hfile_GameMaster

#include "rpc/service.h"
#include "service/game_master/game_master.pb.h"

#define SERVICE_GameMaster_NAME "bnet.protocol.game_master.GameMaster"

class CServiceGameMaster :
public CService
{
public:
	CServiceGameMaster();
	CServiceGameMaster(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_JoinGame_Request(TCPSocket *sock, apacket* packet);
	bool handle_JoinGame_Response(TCPSocket *sock, apacket* packet);

	bool handle_ListFactories_Request(TCPSocket *sock, apacket* packet);
	bool handle_ListFactories_Response(TCPSocket *sock, apacket* packet);

	bool handle_FindGame_Request(TCPSocket *sock, apacket* packet);
	bool handle_FindGame_Response(TCPSocket *sock, apacket* packet);

	bool handle_CancelFindGame_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_CancelFindGame(TCPSocket *sock, apacket* packet);
	bool handle_GameEnded_Request(TCPSocket *sock, apacket* packet);

	bool handle_PlayerLeft_Request(TCPSocket *sock, apacket* packet);

	bool handle_RegisterServer_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_RegisterServer(TCPSocket *sock, apacket* packet);
	bool handle_UnregisterServer_Request(TCPSocket *sock, apacket* packet);

	bool handle_RegisterUtilities_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_RegisterUtilities(TCPSocket *sock, apacket* packet);
	bool handle_UnregisterUtilities_Request(TCPSocket *sock, apacket* packet);

	bool handle_Subscribe_Request(TCPSocket *sock, apacket* packet);
	bool handle_Subscribe_Response(TCPSocket *sock, apacket* packet);

	bool handle_Unsubscribe_Request(TCPSocket *sock, apacket* packet);

	bool handle_ChangeGame_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ChangeGame(TCPSocket *sock, apacket* packet);
	bool handle_GetFactoryInfo_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetFactoryInfo_Response(TCPSocket *sock, apacket* packet);

	bool handle_GetGameStats_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetGameStats_Response(TCPSocket *sock, apacket* packet);

	~CServiceGameMaster(void);
};

#endif