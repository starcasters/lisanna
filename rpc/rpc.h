#ifndef _hfile_rcpmain
#define _hfile_rpcmain

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