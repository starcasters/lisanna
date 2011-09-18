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

// UserManagerService
// bnet.protocol.user_manager.UserManagerService
//
// { SubscribeToUserManager .bnet.protocol.user_manager.SubscribeToUserManagerRequest .bnet.protocol.user_manager.SubscribeToUserManagerResponse }
// { ReportPlayer .bnet.protocol.user_manager.ReportPlayerRequest .bnet.protocol.user_manager.ReportPlayerResponse }
// { BlockPlayer .bnet.protocol.user_manager.BlockPlayerRequest .bnet.protocol.user_manager.BlockPlayerResponse }
// { RemovePlayerBlock .bnet.protocol.user_manager.RemovePlayerBlockRequest .bnet.protocol.user_manager.RemovePlayerBlockResponse }
// { AddRecentPlayers .bnet.protocol.user_manager.AddRecentPlayersRequest .bnet.protocol.user_manager.AddRecentPlayersResponse }
// { RemoveRecentPlayers .bnet.protocol.user_manager.RemoveRecentPlayersRequest .bnet.protocol.user_manager.RemoveRecentPlayersResponse }


#ifndef _hfile_UserManagerService
#define _hfile_UserManagerService

#include "rpc/service.h"
#include "service/user_manager/user_manager.pb.h"

class CServiceUserManagerService :
public CService
{
public:
	CServiceUserManagerService();
	CServiceUserManagerService(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_SubscribeToUserManager_Request(TCPSocket *sock, apacket* packet);
	bool handle_SubscribeToUserManager_Response(TCPSocket *sock, apacket* packet);

	bool handle_ReportPlayer_Request(TCPSocket *sock, apacket* packet);
	bool handle_ReportPlayer_Response(TCPSocket *sock, apacket* packet);

	bool handle_BlockPlayer_Request(TCPSocket *sock, apacket* packet);
	bool handle_BlockPlayer_Response(TCPSocket *sock, apacket* packet);

	bool handle_RemovePlayerBlock_Request(TCPSocket *sock, apacket* packet);
	bool handle_RemovePlayerBlock_Response(TCPSocket *sock, apacket* packet);

	bool handle_AddRecentPlayers_Request(TCPSocket *sock, apacket* packet);
	bool handle_AddRecentPlayers_Response(TCPSocket *sock, apacket* packet);

	bool handle_RemoveRecentPlayers_Request(TCPSocket *sock, apacket* packet);
	bool handle_RemoveRecentPlayers_Response(TCPSocket *sock, apacket* packet);

	~CServiceUserManagerService(void);
};

#endif