THIS=${PWD}
GPLIBS=rpc/cpp/
GPLIBSI=rpc/rpc.o rpc/headers.o ${GPLIBS}/lib/rpc/connection.pb.o ${GPLIBS}/lib/rpc/rpc.pb.o ${GPLIBS}/service/authentication/authentication.pb.o
CC=g++

headers/headers.o: rpc/headers.cpp rpc/headers.h
	rm -f rpc/headers.o
	${CC} -c rpc/headers.o ${GPLIBSI} -lws2_32 -I rpc/cpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 
	
headers/rpc.o: rpc/rpc.cpp rpc/rpc.h
	rm -f rpc/rpc.o
	${CC} -c rpc/rpc.o ${GPLIBSI} -lws2_32 -I rpc/cpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 

libs: rpc/headers.o 

all: libs
	echo ${THIS}
	g++ -o server/TCPEchoServer server/TCPEchoServer.cpp server/PracticalSocket.cpp ${GPLIBSI} -lws2_32 -I${THIS} -I./rpc/cpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 
