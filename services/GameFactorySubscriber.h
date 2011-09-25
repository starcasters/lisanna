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

// GameFactorySubscriber
// bnet.protocol.game_master.GameFactorySubscriber
//
// { NotifyGameFound .bnet.protocol.game_master.GameFoundNotification .bnet.protocol.NO_RESPONSE }


#ifndef _hfile_GameFactorySubscriber
#define _hfile_GameFactorySubscriber

#include "rpc/service.h"
#include "service/game_master/game_master.pb.h"

#define SERVICE_GameFactorySubscriber_NAME "bnet.protocol.game_master.GameFactorySubscriber"

class CServiceGameFactorySubscriber :
public CService
{
public:
	CServiceGameFactorySubscriber();
	CServiceGameFactorySubscriber(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_NotifyGameFound_Request(TCPSocket *sock, apacket* packet);

	~CServiceGameFactorySubscriber(void);
};

#endif