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


#include "ExchangeService.h"

#include <iostream>

using namespace google::protobuf;


CServiceExchangeService::CServiceExchangeService()
{
	// place here any initialization (?)
}

CServiceExchangeService::CServiceExchangeService(CServiceMgr* owner=0,int SID=0, int sHash=0, std::string serviceName="") : CService(owner,SID, sHash, serviceName)
{
	//what goes here now?
}

Message* CServiceExchangeService::GetMethodMessage(int MethodID, bool request) {
	switch (MethodID) {
		case 1:
			if (request) { return ::bnet::protocol::exchange::CreateOrderBookRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::CreateOrderBookResponse::default_instance().New(); }
		case 2:
			if (request) { return ::bnet::protocol::exchange::PlaceOfferOnOrderBookRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::PlaceOfferOnOrderBookResponse::default_instance().New(); }
		case 3:
			if (request) { return ::bnet::protocol::exchange::PlaceOfferCreateOrderBookIfNeededRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::PlaceOfferCreateOrderBookIfNeededResponse::default_instance().New(); }
		case 4:
			if (request) { return ::bnet::protocol::exchange::PlaceBidOnOrderBookRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::PlaceBidOnOrderBookResponse::default_instance().New(); }
		case 5:
			if (request) { return ::bnet::protocol::exchange::PlaceBidCreateOrderBookIfNeededRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::PlaceBidCreateOrderBookIfNeededResponse::default_instance().New(); }
		case 6:
			if (request) { return ::bnet::protocol::exchange::QueryOffersByOrderBookRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::QueryOffersByOrderBookResponse::default_instance().New(); }
		case 7:
			if (request) { return ::bnet::protocol::exchange::QueryBidsByOrderBookRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::QueryBidsByOrderBookResponse::default_instance().New(); }
		case 8:
			if (request) { return ::bnet::protocol::exchange::QueryOffersByAccountForItemRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::QueryOffersByAccountForItemResponse::default_instance().New(); }
		case 9:
			if (request) { return ::bnet::protocol::exchange::QueryBidsByAccountForItemRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::QueryBidsByAccountForItemResponse::default_instance().New(); }
		case 10:
			if (request) { return ::bnet::protocol::exchange::QueryOrderBooksSummaryRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::QueryOrderBooksSummaryResponse::default_instance().New(); }
		case 11:
			if (request) { return ::bnet::protocol::exchange::QuerySettlementsByOrderBookRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::QuerySettlementsByOrderBookResponse::default_instance().New(); }
		case 12:
			if (request) { return ::bnet::protocol::exchange_object_provider::ReportAuthorizeRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 13:
			if (request) { return ::bnet::protocol::exchange_object_provider::ReportSettleRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 14:
			if (request) { return ::bnet::protocol::exchange_object_provider::ReportCancelRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 15:
			if (request) { return ::bnet::protocol::exchange::SubscribeOrderBookStatusChangeRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 16:
			if (request) { return ::bnet::protocol::exchange::UnsubscribeOrderBookStatusChangeRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 17:
			if (request) { return ::bnet::protocol::exchange::SubscribeOrderStatusChangeRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 18:
			if (request) { return ::bnet::protocol::exchange::UnsubscribeOrderStatusChangeRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 19:
			if (request) { return ::bnet::protocol::exchange_object_provider::GetPaymentMethodsRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange_object_provider::GetPaymentMethodsResponse::default_instance().New(); }
		case 20:
			if (request) { return ::bnet::protocol::exchange::ClaimRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 21:
			if (request) { return ::bnet::protocol::exchange::ClaimRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 22:
			if (request) { return ::bnet::protocol::exchange::ClaimRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 23:
			if (request) { return ::bnet::protocol::exchange::ClaimRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 24:
			if (request) { return ::bnet::protocol::exchange::CancelRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 25:
			if (request) { return ::bnet::protocol::exchange::CancelRequest::default_instance().New(); }
			else { return ::bnet::protocol::NoData::default_instance().New(); }
		case 26:
			if (request) { return ::bnet::protocol::exchange::GetConfigurationRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::GetConfigurationResponse::default_instance().New(); }
		case 27:
			if (request) { return ::bnet::protocol::exchange::GetBidFeeEstimationRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::GetFeeEstimationResponse::default_instance().New(); }
		case 28:
			if (request) { return ::bnet::protocol::exchange::GetOfferFeeEstimationRequest::default_instance().New(); }
			else { return ::bnet::protocol::exchange::GetFeeEstimationResponse::default_instance().New(); }

		default:
			cerr << "error: method not implemented" << endl;
			return NULL;
	}
}

//This function was autogenerated:
bool CServiceExchangeService::DispatchMethod(int MethodID, bool request, TCPSocket *sock, apacket* packet) {
	switch (MethodID) {
		case 1:
			if (request) { return handle_CreateOrderBook_Request(sock, packet); }
			else {	return handle_CreateOrderBook_Response(sock, packet); }
		case 2:
			if (request) { return handle_PlaceOfferOnOrderBook_Request(sock, packet); }
			else {	return handle_PlaceOfferOnOrderBook_Response(sock, packet); }
		case 3:
			if (request) { return handle_PlaceOfferCreateOrderBookIfNeeded_Request(sock, packet); }
			else {	return handle_PlaceOfferCreateOrderBookIfNeeded_Response(sock, packet); }
		case 4:
			if (request) { return handle_PlaceBidOnOrderBook_Request(sock, packet); }
			else {	return handle_PlaceBidOnOrderBook_Response(sock, packet); }
		case 5:
			if (request) { return handle_PlaceBidCreateOrderBookIfNeeded_Request(sock, packet); }
			else {	return handle_PlaceBidCreateOrderBookIfNeeded_Response(sock, packet); }
		case 6:
			if (request) { return handle_QueryOffersByOrderBook_Request(sock, packet); }
			else {	return handle_QueryOffersByOrderBook_Response(sock, packet); }
		case 7:
			if (request) { return handle_QueryBidsByOrderBook_Request(sock, packet); }
			else {	return handle_QueryBidsByOrderBook_Response(sock, packet); }
		case 8:
			if (request) { return handle_QueryOffersByAccountForItem_Request(sock, packet); }
			else {	return handle_QueryOffersByAccountForItem_Response(sock, packet); }
		case 9:
			if (request) { return handle_QueryBidsByAccountForItem_Request(sock, packet); }
			else {	return handle_QueryBidsByAccountForItem_Response(sock, packet); }
		case 10:
			if (request) { return handle_QueryOrderBooksSummary_Request(sock, packet); }
			else {	return handle_QueryOrderBooksSummary_Response(sock, packet); }
		case 11:
			if (request) { return handle_QuerySettlementsByOrderBook_Request(sock, packet); }
			else {	return handle_QuerySettlementsByOrderBook_Response(sock, packet); }
		case 12:
			if (request) { return handle_ReportAuthorize_Request(sock, packet); }
			else {	return handle_NoData_ReportAuthorize(sock, packet); }
		case 13:
			if (request) { return handle_ReportSettle_Request(sock, packet); }
			else {	return handle_NoData_ReportSettle(sock, packet); }
		case 14:
			if (request) { return handle_ReportCancel_Request(sock, packet); }
			else {	return handle_NoData_ReportCancel(sock, packet); }
		case 15:
			if (request) { return handle_SubscribeOrderBookStatusChange_Request(sock, packet); }
			else {	return handle_NoData_SubscribeOrderBookStatusChange(sock, packet); }
		case 16:
			if (request) { return handle_UnsubscribeOrderBookStatusChange_Request(sock, packet); }
			else {	return handle_NoData_UnsubscribeOrderBookStatusChange(sock, packet); }
		case 17:
			if (request) { return handle_SubscribeOrderStatusChange_Request(sock, packet); }
			else {	return handle_NoData_SubscribeOrderStatusChange(sock, packet); }
		case 18:
			if (request) { return handle_UnsubscribeOrderStatusChange_Request(sock, packet); }
			else {	return handle_NoData_UnsubscribeOrderStatusChange(sock, packet); }
		case 19:
			if (request) { return handle_GetPaymentMethods_Request(sock, packet); }
			else {	return handle_GetPaymentMethods_Response(sock, packet); }
		case 20:
			if (request) { return handle_ClaimBidItem_Request(sock, packet); }
			else {	return handle_NoData_ClaimBidItem(sock, packet); }
		case 21:
			if (request) { return handle_ClaimBidMoney_Request(sock, packet); }
			else {	return handle_NoData_ClaimBidMoney(sock, packet); }
		case 22:
			if (request) { return handle_ClaimOfferItem_Request(sock, packet); }
			else {	return handle_NoData_ClaimOfferItem(sock, packet); }
		case 23:
			if (request) { return handle_ClaimOfferMoney_Request(sock, packet); }
			else {	return handle_NoData_ClaimOfferMoney(sock, packet); }
		case 24:
			if (request) { return handle_CancelBid_Request(sock, packet); }
			else {	return handle_NoData_CancelBid(sock, packet); }
		case 25:
			if (request) { return handle_CancelOffer_Request(sock, packet); }
			else {	return handle_NoData_CancelOffer(sock, packet); }
		case 26:
			if (request) { return handle_GetConfiguration_Request(sock, packet); }
			else {	return handle_GetConfiguration_Response(sock, packet); }
		case 27:
			if (request) { return handle_GetBidFeeEstimation_Request(sock, packet); }
			else {	return handle_GetBidFeeEstimation_Response(sock, packet); }
		case 28:
			if (request) { return handle_GetOfferFeeEstimation_Request(sock, packet); }
			else {	return handle_GetOfferFeeEstimation_Response(sock, packet); }

		default:
			cerr << "error: method not implemented" << endl;
			return false;
	}
}

bool CServiceExchangeService::handle_CreateOrderBook_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::CreateOrderBookRequest* request;
	::bnet::protocol::exchange::CreateOrderBookResponse response;
	request = (::bnet::protocol::exchange::CreateOrderBookRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_CreateOrderBook_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::CreateOrderBookResponse* response;
	response = (::bnet::protocol::exchange::CreateOrderBookResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_PlaceOfferOnOrderBook_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::PlaceOfferOnOrderBookRequest* request;
	::bnet::protocol::exchange::PlaceOfferOnOrderBookResponse response;
	request = (::bnet::protocol::exchange::PlaceOfferOnOrderBookRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_PlaceOfferOnOrderBook_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::PlaceOfferOnOrderBookResponse* response;
	response = (::bnet::protocol::exchange::PlaceOfferOnOrderBookResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_PlaceOfferCreateOrderBookIfNeeded_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::PlaceOfferCreateOrderBookIfNeededRequest* request;
	::bnet::protocol::exchange::PlaceOfferCreateOrderBookIfNeededResponse response;
	request = (::bnet::protocol::exchange::PlaceOfferCreateOrderBookIfNeededRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_PlaceOfferCreateOrderBookIfNeeded_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::PlaceOfferCreateOrderBookIfNeededResponse* response;
	response = (::bnet::protocol::exchange::PlaceOfferCreateOrderBookIfNeededResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_PlaceBidOnOrderBook_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::PlaceBidOnOrderBookRequest* request;
	::bnet::protocol::exchange::PlaceBidOnOrderBookResponse response;
	request = (::bnet::protocol::exchange::PlaceBidOnOrderBookRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_PlaceBidOnOrderBook_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::PlaceBidOnOrderBookResponse* response;
	response = (::bnet::protocol::exchange::PlaceBidOnOrderBookResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_PlaceBidCreateOrderBookIfNeeded_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::PlaceBidCreateOrderBookIfNeededRequest* request;
	::bnet::protocol::exchange::PlaceBidCreateOrderBookIfNeededResponse response;
	request = (::bnet::protocol::exchange::PlaceBidCreateOrderBookIfNeededRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_PlaceBidCreateOrderBookIfNeeded_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::PlaceBidCreateOrderBookIfNeededResponse* response;
	response = (::bnet::protocol::exchange::PlaceBidCreateOrderBookIfNeededResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryOffersByOrderBook_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::QueryOffersByOrderBookRequest* request;
	::bnet::protocol::exchange::QueryOffersByOrderBookResponse response;
	request = (::bnet::protocol::exchange::QueryOffersByOrderBookRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryOffersByOrderBook_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::QueryOffersByOrderBookResponse* response;
	response = (::bnet::protocol::exchange::QueryOffersByOrderBookResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryBidsByOrderBook_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::QueryBidsByOrderBookRequest* request;
	::bnet::protocol::exchange::QueryBidsByOrderBookResponse response;
	request = (::bnet::protocol::exchange::QueryBidsByOrderBookRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryBidsByOrderBook_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::QueryBidsByOrderBookResponse* response;
	response = (::bnet::protocol::exchange::QueryBidsByOrderBookResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryOffersByAccountForItem_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::QueryOffersByAccountForItemRequest* request;
	::bnet::protocol::exchange::QueryOffersByAccountForItemResponse response;
	request = (::bnet::protocol::exchange::QueryOffersByAccountForItemRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryOffersByAccountForItem_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::QueryOffersByAccountForItemResponse* response;
	response = (::bnet::protocol::exchange::QueryOffersByAccountForItemResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryBidsByAccountForItem_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::QueryBidsByAccountForItemRequest* request;
	::bnet::protocol::exchange::QueryBidsByAccountForItemResponse response;
	request = (::bnet::protocol::exchange::QueryBidsByAccountForItemRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryBidsByAccountForItem_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::QueryBidsByAccountForItemResponse* response;
	response = (::bnet::protocol::exchange::QueryBidsByAccountForItemResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryOrderBooksSummary_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::QueryOrderBooksSummaryRequest* request;
	::bnet::protocol::exchange::QueryOrderBooksSummaryResponse response;
	request = (::bnet::protocol::exchange::QueryOrderBooksSummaryRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_QueryOrderBooksSummary_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::QueryOrderBooksSummaryResponse* response;
	response = (::bnet::protocol::exchange::QueryOrderBooksSummaryResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_QuerySettlementsByOrderBook_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::QuerySettlementsByOrderBookRequest* request;
	::bnet::protocol::exchange::QuerySettlementsByOrderBookResponse response;
	request = (::bnet::protocol::exchange::QuerySettlementsByOrderBookRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_QuerySettlementsByOrderBook_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::QuerySettlementsByOrderBookResponse* response;
	response = (::bnet::protocol::exchange::QuerySettlementsByOrderBookResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_ReportAuthorize_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange_object_provider::ReportAuthorizeRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange_object_provider::ReportAuthorizeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_ReportAuthorize(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_ReportSettle_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange_object_provider::ReportSettleRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange_object_provider::ReportSettleRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_ReportSettle(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_ReportCancel_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange_object_provider::ReportCancelRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange_object_provider::ReportCancelRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_ReportCancel(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_SubscribeOrderBookStatusChange_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::SubscribeOrderBookStatusChangeRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::SubscribeOrderBookStatusChangeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_SubscribeOrderBookStatusChange(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_UnsubscribeOrderBookStatusChange_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::UnsubscribeOrderBookStatusChangeRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::UnsubscribeOrderBookStatusChangeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_UnsubscribeOrderBookStatusChange(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_SubscribeOrderStatusChange_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::SubscribeOrderStatusChangeRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::SubscribeOrderStatusChangeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_SubscribeOrderStatusChange(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_UnsubscribeOrderStatusChange_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::UnsubscribeOrderStatusChangeRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::UnsubscribeOrderStatusChangeRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_UnsubscribeOrderStatusChange(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_GetPaymentMethods_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange_object_provider::GetPaymentMethodsRequest* request;
	::bnet::protocol::exchange_object_provider::GetPaymentMethodsResponse response;
	request = (::bnet::protocol::exchange_object_provider::GetPaymentMethodsRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_GetPaymentMethods_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange_object_provider::GetPaymentMethodsResponse* response;
	response = (::bnet::protocol::exchange_object_provider::GetPaymentMethodsResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_ClaimBidItem_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::ClaimRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::ClaimRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_ClaimBidItem(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_ClaimBidMoney_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::ClaimRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::ClaimRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_ClaimBidMoney(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_ClaimOfferItem_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::ClaimRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::ClaimRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_ClaimOfferItem(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_ClaimOfferMoney_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::ClaimRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::ClaimRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_ClaimOfferMoney(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_CancelBid_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::CancelRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::CancelRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_CancelBid(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_CancelOffer_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::CancelRequest* request;
	::bnet::protocol::NoData response;
	request = (::bnet::protocol::exchange::CancelRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}


bool CServiceExchangeService::handle_NoData_CancelOffer(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::NoData* response;
	response = (::bnet::protocol::NoData*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_GetConfiguration_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::GetConfigurationRequest* request;
	::bnet::protocol::exchange::GetConfigurationResponse response;
	request = (::bnet::protocol::exchange::GetConfigurationRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_GetConfiguration_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::GetConfigurationResponse* response;
	response = (::bnet::protocol::exchange::GetConfigurationResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_GetBidFeeEstimation_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::GetBidFeeEstimationRequest* request;
	::bnet::protocol::exchange::GetFeeEstimationResponse response;
	request = (::bnet::protocol::exchange::GetBidFeeEstimationRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_GetBidFeeEstimation_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::GetFeeEstimationResponse* response;
	response = (::bnet::protocol::exchange::GetFeeEstimationResponse*) packet->msg;
	//do something...
	
	return true;
}

bool CServiceExchangeService::handle_GetOfferFeeEstimation_Request(TCPSocket *sock, apacket* packet)
{
	::bnet::protocol::exchange::GetOfferFeeEstimationRequest* request;
	::bnet::protocol::exchange::GetFeeEstimationResponse response;
	request = (::bnet::protocol::exchange::GetOfferFeeEstimationRequest*) packet;
	
	// add some info to the packet? 

	sendheader(sock, 0xFE, 0, packet->hdr->reqid, 0, response.ByteSize());
	sendmsgdata(sock, &response);

	// do something...
	
	return true;
}

bool CServiceExchangeService::handle_GetOfferFeeEstimation_Response(TCPSocket *sock, apacket* packet)

{
	::bnet::protocol::exchange::GetFeeEstimationResponse* response;
	response = (::bnet::protocol::exchange::GetFeeEstimationResponse*) packet->msg;
	//do something...
	
	return true;
}


CServiceExchangeService::~CServiceExchangeService(void)
{
	std::cout << "Bye from authserv.";
}

