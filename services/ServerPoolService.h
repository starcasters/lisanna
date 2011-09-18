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

// ServerPoolService
// bnet.protocol.server_pool.ServerPoolService
//
// { GetPoolState .bnet.protocol.server_pool.PoolStateRequest .bnet.protocol.server_pool.PoolStateResponse }


#ifndef _hfile_ServerPoolService
#define _hfile_ServerPoolService

#include "rpc/service.h"
#include "service/server_pool/server_pool.pb.h"

class CServiceServerPoolService :
public CService
{
public:
	CServiceServerPoolService();
	CServiceServerPoolService(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_GetPoolState_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetPoolState_Response(TCPSocket *sock, apacket* packet);

	~CServiceServerPoolService(void);
};

#endif