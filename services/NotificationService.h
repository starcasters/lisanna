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

// NotificationService
// bnet.protocol.notification.NotificationService
//
// { SendNotification .bnet.protocol.notification.Notification .bnet.protocol.NoData }
// { RegisterClient .bnet.protocol.notification.RegisterClientRequest .bnet.protocol.NoData }
// { UnregisterClient .bnet.protocol.notification.UnregisterClientRequest .bnet.protocol.NoData }
// { FindClient .bnet.protocol.notification.FindClientRequest .bnet.protocol.notification.FindClientResponse }


#ifndef _hfile_NotificationService
#define _hfile_NotificationService

#include "rpc/service.h"
#include "service/notification/notification.pb.h"

class CServiceNotificationService :
public CService
{
public:
	CServiceNotificationService();
	CServiceNotificationService(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_SendNotification_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_SendNotification(TCPSocket *sock, apacket* packet);
	bool handle_RegisterClient_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_RegisterClient(TCPSocket *sock, apacket* packet);
	bool handle_UnregisterClient_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_UnregisterClient(TCPSocket *sock, apacket* packet);
	bool handle_FindClient_Request(TCPSocket *sock, apacket* packet);
	bool handle_FindClient_Response(TCPSocket *sock, apacket* packet);

	~CServiceNotificationService(void);
};

#endif