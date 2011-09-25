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

// FollowersService
// bnet.protocol.followers.FollowersService
//
// { SubscribeToFollowers .bnet.protocol.followers.SubscribeToFollowersRequest .bnet.protocol.followers.SubscribeToFollowersResponse }
// { StartFollowing .bnet.protocol.followers.StartFollowingRequest .bnet.protocol.followers.StartFollowingResponse }
// { StopFollowing .bnet.protocol.followers.StopFollowingRequest .bnet.protocol.followers.StopFollowingResponse }
// { UpdateFollowerState .bnet.protocol.followers.UpdateFollowerStateRequest .bnet.protocol.followers.UpdateFollowerStateResponse }


#ifndef _hfile_FollowersService
#define _hfile_FollowersService

#include "rpc/service.h"
#include "service/followers/definition/followers.pb.h"

#define SERVICE_FollowersService_NAME "bnet.protocol.followers.FollowersService"

class CServiceFollowersService :
public CService
{
public:
	CServiceFollowersService();
	CServiceFollowersService(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_SubscribeToFollowers_Request(TCPSocket *sock, apacket* packet);
	bool handle_SubscribeToFollowers_Response(TCPSocket *sock, apacket* packet);

	bool handle_StartFollowing_Request(TCPSocket *sock, apacket* packet);
	bool handle_StartFollowing_Response(TCPSocket *sock, apacket* packet);

	bool handle_StopFollowing_Request(TCPSocket *sock, apacket* packet);
	bool handle_StopFollowing_Response(TCPSocket *sock, apacket* packet);

	bool handle_UpdateFollowerState_Request(TCPSocket *sock, apacket* packet);
	bool handle_UpdateFollowerState_Response(TCPSocket *sock, apacket* packet);

	~CServiceFollowersService(void);
};

#endif