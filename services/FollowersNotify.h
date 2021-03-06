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

// FollowersNotify
// bnet.protocol.followers.FollowersNotify
//
// { NotifyFollowerRemoved .bnet.protocol.followers.FollowerNotification .bnet.protocol.NO_RESPONSE }


#ifndef _hfile_FollowersNotify
#define _hfile_FollowersNotify

#include "rpc/service.h"
#include "service/followers/definition/followers.pb.h"

#define SERVICE_FollowersNotify_NAME "bnet.protocol.followers.FollowersNotify"

class CServiceFollowersNotify :
public CService
{
public:
	CServiceFollowersNotify();
	CServiceFollowersNotify(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_NotifyFollowerRemoved_Request(TCPSocket *sock, apacket* packet);

	~CServiceFollowersNotify(void);
};

#endif