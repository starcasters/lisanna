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

// GameMasterSubscriber
// bnet.protocol.game_master.GameMasterSubscriber
//
// { NotifyFactoryUpdate .bnet.protocol.game_master.FactoryUpdateNotification .bnet.protocol.NO_RESPONSE }


#ifndef _hfile_GameMasterSubscriber
#define _hfile_GameMasterSubscriber

#include "rpc/service.h"
#include "service/game_master/game_master.pb.h"

#define SERVICE_GameMasterSubscriber_NAME "bnet.protocol.game_master.GameMasterSubscriber"

class CServiceGameMasterSubscriber :
public CService
{
public:
	CServiceGameMasterSubscriber();
	CServiceGameMasterSubscriber(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_NotifyFactoryUpdate_Request(TCPSocket *sock, apacket* packet);

	~CServiceGameMasterSubscriber(void);
};

#endif