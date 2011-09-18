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

// ExchangeService
// bnet.protocol.exchange.ExchangeService
//
// { CreateOrderBook .bnet.protocol.exchange.CreateOrderBookRequest .bnet.protocol.exchange.CreateOrderBookResponse }
// { PlaceOfferOnOrderBook .bnet.protocol.exchange.PlaceOfferOnOrderBookRequest .bnet.protocol.exchange.PlaceOfferOnOrderBookResponse }
// { PlaceOfferCreateOrderBookIfNeeded .bnet.protocol.exchange.PlaceOfferCreateOrderBookIfNeededRequest .bnet.protocol.exchange.PlaceOfferCreateOrderBookIfNeededResponse }
// { PlaceBidOnOrderBook .bnet.protocol.exchange.PlaceBidOnOrderBookRequest .bnet.protocol.exchange.PlaceBidOnOrderBookResponse }
// { PlaceBidCreateOrderBookIfNeeded .bnet.protocol.exchange.PlaceBidCreateOrderBookIfNeededRequest .bnet.protocol.exchange.PlaceBidCreateOrderBookIfNeededResponse }
// { QueryOffersByOrderBook .bnet.protocol.exchange.QueryOffersByOrderBookRequest .bnet.protocol.exchange.QueryOffersByOrderBookResponse }
// { QueryBidsByOrderBook .bnet.protocol.exchange.QueryBidsByOrderBookRequest .bnet.protocol.exchange.QueryBidsByOrderBookResponse }
// { QueryOffersByAccountForItem .bnet.protocol.exchange.QueryOffersByAccountForItemRequest .bnet.protocol.exchange.QueryOffersByAccountForItemResponse }
// { QueryBidsByAccountForItem .bnet.protocol.exchange.QueryBidsByAccountForItemRequest .bnet.protocol.exchange.QueryBidsByAccountForItemResponse }
// { QueryOrderBooksSummary .bnet.protocol.exchange.QueryOrderBooksSummaryRequest .bnet.protocol.exchange.QueryOrderBooksSummaryResponse }
// { QuerySettlementsByOrderBook .bnet.protocol.exchange.QuerySettlementsByOrderBookRequest .bnet.protocol.exchange.QuerySettlementsByOrderBookResponse }
// { ReportAuthorize .bnet.protocol.exchange_object_provider.ReportAuthorizeRequest .bnet.protocol.NoData }
// { ReportSettle .bnet.protocol.exchange_object_provider.ReportSettleRequest .bnet.protocol.NoData }
// { ReportCancel .bnet.protocol.exchange_object_provider.ReportCancelRequest .bnet.protocol.NoData }
// { SubscribeOrderBookStatusChange .bnet.protocol.exchange.SubscribeOrderBookStatusChangeRequest .bnet.protocol.NoData }
// { UnsubscribeOrderBookStatusChange .bnet.protocol.exchange.UnsubscribeOrderBookStatusChangeRequest .bnet.protocol.NoData }
// { SubscribeOrderStatusChange .bnet.protocol.exchange.SubscribeOrderStatusChangeRequest .bnet.protocol.NoData }
// { UnsubscribeOrderStatusChange .bnet.protocol.exchange.UnsubscribeOrderStatusChangeRequest .bnet.protocol.NoData }
// { GetPaymentMethods .bnet.protocol.exchange_object_provider.GetPaymentMethodsRequest .bnet.protocol.exchange_object_provider.GetPaymentMethodsResponse }
// { ClaimBidItem .bnet.protocol.exchange.ClaimRequest .bnet.protocol.NoData }
// { ClaimBidMoney .bnet.protocol.exchange.ClaimRequest .bnet.protocol.NoData }
// { ClaimOfferItem .bnet.protocol.exchange.ClaimRequest .bnet.protocol.NoData }
// { ClaimOfferMoney .bnet.protocol.exchange.ClaimRequest .bnet.protocol.NoData }
// { CancelBid .bnet.protocol.exchange.CancelRequest .bnet.protocol.NoData }
// { CancelOffer .bnet.protocol.exchange.CancelRequest .bnet.protocol.NoData }
// { GetConfiguration .bnet.protocol.exchange.GetConfigurationRequest .bnet.protocol.exchange.GetConfigurationResponse }
// { GetBidFeeEstimation .bnet.protocol.exchange.GetBidFeeEstimationRequest .bnet.protocol.exchange.GetFeeEstimationResponse }
// { GetOfferFeeEstimation .bnet.protocol.exchange.GetOfferFeeEstimationRequest .bnet.protocol.exchange.GetFeeEstimationResponse }


#ifndef _hfile_ExchangeService
#define _hfile_ExchangeService

#include "rpc/service.h"
#include "service/exchange/exchange.pb.h"

class CServiceExchangeService :
public CService
{
public:
	CServiceExchangeService();
	CServiceExchangeService(CServiceMgr* owner,int SID, int sHash, std::string);
	bool DispatchMethod(int method, bool request, TCPSocket* socket, apacket* packet);
	google::protobuf::Message* GetMethodMessage(int method, bool request);
	bool handle_CreateOrderBook_Request(TCPSocket *sock, apacket* packet);
	bool handle_CreateOrderBook_Response(TCPSocket *sock, apacket* packet);

	bool handle_PlaceOfferOnOrderBook_Request(TCPSocket *sock, apacket* packet);
	bool handle_PlaceOfferOnOrderBook_Response(TCPSocket *sock, apacket* packet);

	bool handle_PlaceOfferCreateOrderBookIfNeeded_Request(TCPSocket *sock, apacket* packet);
	bool handle_PlaceOfferCreateOrderBookIfNeeded_Response(TCPSocket *sock, apacket* packet);

	bool handle_PlaceBidOnOrderBook_Request(TCPSocket *sock, apacket* packet);
	bool handle_PlaceBidOnOrderBook_Response(TCPSocket *sock, apacket* packet);

	bool handle_PlaceBidCreateOrderBookIfNeeded_Request(TCPSocket *sock, apacket* packet);
	bool handle_PlaceBidCreateOrderBookIfNeeded_Response(TCPSocket *sock, apacket* packet);

	bool handle_QueryOffersByOrderBook_Request(TCPSocket *sock, apacket* packet);
	bool handle_QueryOffersByOrderBook_Response(TCPSocket *sock, apacket* packet);

	bool handle_QueryBidsByOrderBook_Request(TCPSocket *sock, apacket* packet);
	bool handle_QueryBidsByOrderBook_Response(TCPSocket *sock, apacket* packet);

	bool handle_QueryOffersByAccountForItem_Request(TCPSocket *sock, apacket* packet);
	bool handle_QueryOffersByAccountForItem_Response(TCPSocket *sock, apacket* packet);

	bool handle_QueryBidsByAccountForItem_Request(TCPSocket *sock, apacket* packet);
	bool handle_QueryBidsByAccountForItem_Response(TCPSocket *sock, apacket* packet);

	bool handle_QueryOrderBooksSummary_Request(TCPSocket *sock, apacket* packet);
	bool handle_QueryOrderBooksSummary_Response(TCPSocket *sock, apacket* packet);

	bool handle_QuerySettlementsByOrderBook_Request(TCPSocket *sock, apacket* packet);
	bool handle_QuerySettlementsByOrderBook_Response(TCPSocket *sock, apacket* packet);

	bool handle_ReportAuthorize_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ReportAuthorize(TCPSocket *sock, apacket* packet);
	bool handle_ReportSettle_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ReportSettle(TCPSocket *sock, apacket* packet);
	bool handle_ReportCancel_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ReportCancel(TCPSocket *sock, apacket* packet);
	bool handle_SubscribeOrderBookStatusChange_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_SubscribeOrderBookStatusChange(TCPSocket *sock, apacket* packet);
	bool handle_UnsubscribeOrderBookStatusChange_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_UnsubscribeOrderBookStatusChange(TCPSocket *sock, apacket* packet);
	bool handle_SubscribeOrderStatusChange_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_SubscribeOrderStatusChange(TCPSocket *sock, apacket* packet);
	bool handle_UnsubscribeOrderStatusChange_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_UnsubscribeOrderStatusChange(TCPSocket *sock, apacket* packet);
	bool handle_GetPaymentMethods_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetPaymentMethods_Response(TCPSocket *sock, apacket* packet);

	bool handle_ClaimBidItem_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ClaimBidItem(TCPSocket *sock, apacket* packet);
	bool handle_ClaimBidMoney_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ClaimBidMoney(TCPSocket *sock, apacket* packet);
	bool handle_ClaimOfferItem_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ClaimOfferItem(TCPSocket *sock, apacket* packet);
	bool handle_ClaimOfferMoney_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_ClaimOfferMoney(TCPSocket *sock, apacket* packet);
	bool handle_CancelBid_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_CancelBid(TCPSocket *sock, apacket* packet);
	bool handle_CancelOffer_Request(TCPSocket *sock, apacket* packet);

	bool handle_NoData_CancelOffer(TCPSocket *sock, apacket* packet);
	bool handle_GetConfiguration_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetConfiguration_Response(TCPSocket *sock, apacket* packet);

	bool handle_GetBidFeeEstimation_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetBidFeeEstimation_Response(TCPSocket *sock, apacket* packet);

	bool handle_GetOfferFeeEstimation_Request(TCPSocket *sock, apacket* packet);
	bool handle_GetOfferFeeEstimation_Response(TCPSocket *sock, apacket* packet);

	~CServiceExchangeService(void);
};

#endif