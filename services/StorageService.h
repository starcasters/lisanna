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

// StorageService
// bnet.protocol.storage.StorageService
//
// { Execute .bnet.protocol.storage.ExecuteRequest .bnet.protocol.storage.ExecuteResponse }
// { OpenTable .bnet.protocol.storage.OpenTableRequest .bnet.protocol.storage.OpenTableResponse }
// { OpenColumn .bnet.protocol.storage.OpenColumnRequest .bnet.protocol.storage.OpenColumnResponse }


#ifndef _hfile_StorageService
#define _hfile_StorageService

#include "rpc/service.h"
#include "service/storage/storage.pb.h"

class CServiceStorageService :
public CService
{
public:
	CServiceStorageService();
	CServiceStorageService(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_Execute_Request(TCPSocket *sock, apacket* packet);
	bool handle_Execute_Response(TCPSocket *sock, apacket* packet);

	bool handle_OpenTable_Request(TCPSocket *sock, apacket* packet);
	bool handle_OpenTable_Response(TCPSocket *sock, apacket* packet);

	bool handle_OpenColumn_Request(TCPSocket *sock, apacket* packet);
	bool handle_OpenColumn_Response(TCPSocket *sock, apacket* packet);

	~CServiceStorageService(void);
};

#endif