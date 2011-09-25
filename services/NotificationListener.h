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

// NotificationListener
// bnet.protocol.notification.NotificationListener
//
// { OnNotificationReceived .bnet.protocol.notification.Notification .bnet.protocol.NO_RESPONSE }


#ifndef _hfile_NotificationListener
#define _hfile_NotificationListener

#include "rpc/service.h"
#include "service/notification/notification.pb.h"

#define SERVICE_NotificationListener_NAME "bnet.protocol.notification.NotificationListener"

class CServiceNotificationListener :
public CService
{
public:
	CServiceNotificationListener();
	CServiceNotificationListener(CServiceMgr* owner,int SID, std::string sName);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_OnNotificationReceived_Request(TCPSocket *sock, apacket* packet);

	~CServiceNotificationListener(void);
};

#endif