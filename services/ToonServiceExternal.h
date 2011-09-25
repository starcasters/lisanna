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

// ToonServiceExternal
// bnet.protocol.toon.external.ToonServiceExternal
//
// { ToonList .bnet.protocol.toon.external.ToonListRequest .bnet.protocol.toon.external.ToonListResponse }
// { SelectToon .bnet.protocol.toon.external.SelectToonRequest .bnet.protocol.toon.external.SelectToonResponse }
// { CreateToon .bnet.protocol.toon.external.CreateToonRequest .bnet.protocol.toon.external.CreateToonResponse }
// { DeleteToon .bnet.protocol.toon.external.DeleteToonRequest .bnet.protocol.toon.external.DeleteToonResponse }


#ifndef _hfile_ToonServiceExternal
#define _hfile_ToonServiceExternal

#include "rpc/service.h"
#include "service/toon/toon_external.pb.h"

#define SERVICE_ToonServiceExternal_NAME "bnet.protocol.toon.external.ToonServiceExternal"

class CServiceToonServiceExternal :
public CService
{
public:
	CServiceToonServiceExternal();
	CServiceToonServiceExternal(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_ToonList_Request(TCPSocket *sock, apacket* packet);
	bool handle_ToonList_Response(TCPSocket *sock, apacket* packet);

	bool handle_SelectToon_Request(TCPSocket *sock, apacket* packet);
	bool handle_SelectToon_Response(TCPSocket *sock, apacket* packet);

	bool handle_CreateToon_Request(TCPSocket *sock, apacket* packet);
	bool handle_CreateToon_Response(TCPSocket *sock, apacket* packet);

	bool handle_DeleteToon_Request(TCPSocket *sock, apacket* packet);
	bool handle_DeleteToon_Response(TCPSocket *sock, apacket* packet);

	~CServiceToonServiceExternal(void);
};

#endif