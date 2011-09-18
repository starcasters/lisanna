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

// AuthenticationServer
// bnet.protocol.authentication.AuthenticationServer
//
// { Logon .bnet.protocol.authentication.LogonRequest .bnet.protocol.authentication.LogonResponse }
// { ModuleMessage .bnet.protocol.authentication.ModuleMessageRequest .bnet.protocol.NoData }


#ifndef _hfile_AuthenticationServer
#define _hfile_AuthenticationServer

#include "rpc/service.h"
#include "service/authentication/authentication.pb.h"

class CServiceAuthenticationServer :
public CService
{
public:
	CServiceAuthenticationServer();
	CServiceAuthenticationServer(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_Logon_Request(TCPSocket *sock, apacket* packet);
	bool handle_Logon_Response(TCPSocket *sock, apacket* packet);

	bool handle_ModuleMessage_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ModuleMessage(TCPSocket *sock, apacket* packet);
	~CServiceAuthenticationServer(void);
};

#endif