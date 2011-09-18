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

// ExchangeNotify
// bnet.protocol.exchange.ExchangeNotify
//
// { NotifyOrderBookStatusChange .bnet.protocol.exchange.OrderBookNotificationRequest .bnet.protocol.NO_RESPONSE }
// { NotifyOfferStatusChange .bnet.protocol.exchange.OfferNotificationRequest .bnet.protocol.NO_RESPONSE }
// { NotifyBidStatusChange .bnet.protocol.exchange.BidNotificationRequest .bnet.protocol.NO_RESPONSE }


#ifndef _hfile_ExchangeNotify
#define _hfile_ExchangeNotify

#include "rpc/service.h"
#include "service/exchange/exchange.pb.h"

class CServiceExchangeNotify :
public CService
{
public:
	CServiceExchangeNotify();
	CServiceExchangeNotify(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_NotifyOrderBookStatusChange_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyOfferStatusChange_Request(TCPSocket *sock, apacket* packet);

	bool handle_NotifyBidStatusChange_Request(TCPSocket *sock, apacket* packet);

	~CServiceExchangeNotify(void);
};

#endif