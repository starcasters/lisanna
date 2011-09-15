libs:
	c++ -Wall -c cpp/lib/rpc/connection.pb.cc -o cpp/lib/rpc/connection.pb.o   -I cpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 
	c++ -Wall -c cpp/lib/rpc/rpc.pb.cc -o cpp/lib/rpc/rpc.pb.o   -I cpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 

headers.o:	headers.cpp	headers.h
	c++ -Wall -c headers.cpp -o headers.o
	
rcp.o:	rcp.cpp rpc.h
	c++ -Wall -c rpc.cpp -o rpc.o
	
test2: headers.o rpc.o test2.cpp
	c++ test2.cpp rpc.o cpp/lib/rpc/connection.pb.o cpp/lib/rpc/rpc.pb.o headers.o  -o test2.exe  -I cpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 
	
all:
	c++ -Wall -c headers.cpp -o headers.o
	c++ -Wall headers.o test.cpp -o test.exe
	c++ -Wall headers.o test2.cpp -o test2.exe  -I cpp/ -I/usr/local/include -L/usr/local/lib/ -lprotobuf 
	
run:
	c++ -Wall -c headers.cpp -o headers.o
	c++ -Wall headers.o test2.cpp -o test2.exe  -I/usr/local/include -L/usr/local/lib/ -lprotobuf 
	./test2
