/*
 *   C++ sockets on Unix and Windows
 *   Copyright (C) 2002
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
 
#ifndef _hfile_rcpmain
#define _hfile_rpcmain

#include <vector>
#include <algorithm>
#include <utility>

#include <google/protobuf/message.h>
#include "../server/PracticalSocket.h"
#include "headers.h"
#include "FastDelegate.h"

using namespace std;

#define macro_service(A,B,C) \
		case A:\
			if (!response)\
			switch (method) {\
				default:\
					cerr << "bad method index" << endl;\
					areply->msg = new bnet::protocol::connection::NullRequest();\
					return false;\
				B\
			};\
			if (response)\
			switch (method) {\
				default:\
					cerr << "bad method index" << endl;\
					areply->msg = new bnet::protocol::connection::NullRequest();\
					return false;\
				C\
			};
#define service_entry(A,B,C) \
				case A:\
					areply->msg = new B();\
					areply->callback = (msg_handler) C;\
					return true;\ 




 
#endif