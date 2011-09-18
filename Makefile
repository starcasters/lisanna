#*
#*   C++ sockets on Unix and Windows
#*   Copyright (C) 2002
#*
#*   This program is free software; you can redistribute it and/or modify
#*   it under the terms of the GNU General Public License as published by
#*   the Free Software Foundation; either version 3 of the License, or
#*   (at your option) any later version.
#*
#*   This program is distributed in the hope that it will be useful,
#*   but WITHOUT ANY WARRANTY; without even the implied warranty of
#*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#*   GNU General Public License for more details.
#*
#*   You should have received a copy of the GNU General Public License
#*   along with this program; if not, write to the Free Software
#*   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

SHELL = /bin/sh
SERVICES= \
	services/AuthenticationClient.cpp \
	services/AuthenticationServer.cpp \
	services/Channel.cpp \
	services/ChannelInvitationNotify.cpp \
	services/ChannelInvitationService.cpp \
	services/ChannelOwner.cpp \
	services/ChannelSubscriber.cpp \
	services/ChatService.cpp \
	services/ExchangeNotify.cpp \
	services/ExchangeService.cpp \
	services/FollowersNotify.cpp \
	services/FollowersService.cpp \
	services/FriendsNotify.cpp \
	services/FriendsService.cpp \
	services/GameFactorySubscriber.cpp \
	services/GameMaster.cpp \
	services/GameMasterSubscriber.cpp \
	services/GameUtilities.cpp \
	services/NotificationListener.cpp \
	services/NotificationService.cpp \
	services/PartyService.cpp \
	services/PresenceService.cpp \
	services/SearchService.cpp \
	services/ServerPoolService.cpp \
	services/StorageService.cpp \
	services/ToonServiceExternal.cpp \
	services/UserManagerNotify.cpp \
	services/UserManagerService.cpp 
	
SOURCES=$(SERVICES) \
		rpc/rpc.cpp \
		rpc/headers.cpp \
		rpc/Service.cpp \
		rpc/ServiceMgr.cpp \
		rpc/BaseService.cpp 
		
OBJECTS=$(SOURCES:.cpp=.o)
CC=g++

PLIBS= \
 cpp/Account.pb.o \
 cpp/AttributeSerializer.pb.o \
 cpp/GameMessage.pb.o \
 cpp/GBHandle.pb.o \
 cpp/Hero.pb.o \
 cpp/Hireling.pb.o \
 cpp/ItemCrafting.pb.o \
 cpp/Items.pb.o \
 cpp/lib/config/process_config.pb.o \
 cpp/lib/profanity/profanity.pb.o \
 cpp/lib/protocol/attribute.pb.o \
 cpp/lib/protocol/content_handle.pb.o \
 cpp/lib/protocol/descriptor.pb.o \
 cpp/lib/protocol/entity.pb.o \
 cpp/lib/protocol/exchange.pb.o \
 cpp/lib/protocol/exchange_object_provider.pb.o \
 cpp/lib/protocol/invitation.pb.o \
 cpp/lib/protocol/resource.pb.o \
 cpp/lib/rpc/connection.pb.o \
 cpp/lib/rpc/rpc.pb.o \
 cpp/OnlineService.pb.o \
 cpp/PartyMessage.pb.o \
 cpp/Quest.pb.o \
 cpp/service/authentication/authentication.pb.o \
 cpp/service/channel/channel_types.pb.o \
 cpp/service/channel/definition/channel.pb.o \
 cpp/service/channel_invitation/channel_invitation_types.pb.o \
 cpp/service/channel_invitation/definition/channel_invitation.pb.o \
 cpp/service/exchange/exchange.pb.o \
 cpp/service/exchange/exchange_types.pb.o \
 cpp/service/friends/definition/friends.pb.o \
 cpp/service/friends/friends_types.pb.o \
 cpp/service/followers/definition/followers.pb.o \
 cpp/service/game_master/game_factory.pb.o \
 cpp/service/game_master/game_master.pb.o \
 cpp/service/game_master/game_master_types.pb.o \
 cpp/service/game_utilities/game_utilities.pb.o \
 cpp/google/protobuf/csharp_options.pb.o \
 cpp/service/notification/notification.pb.o \
 cpp/service/presence/presence.pb.o \
 cpp/service/presence/presence_types.pb.o \
 cpp/service/search/search.pb.o \
 cpp/service/search/search_types.pb.o \
 cpp/service/server_pool/server_pool.pb.o \
 cpp/service/storage/storage.pb.o \
 cpp/service/toon/toon.pb.o \
 cpp/service/toon/toon_external.pb.o \
 cpp/service/user_manager/user_manager.pb.o \
 cpp/Settings.pb.o \
 cpp/Stats.pb.o

all: $(OBJECTS)
	${CC} -o TCPServer server/TCPServer.cpp server/PracticalSocket.cpp ${PLIBS} ${OBJECTS} -lws2_32 -I${PWD} -Icpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 

clean:
		rm services/*.o
		rm rpc/*.o
		rm TCPServer.exe
		rm TCPServer
		
.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@ -lws2_32 -I${PWD} -Icpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 
