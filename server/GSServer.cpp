/*
	* C++ sockets on Unix and Windows
	* Copyright (C) 2002
	*
	* This program is free software; you can redistribute it and/or modify
	* it under the terms of the GNU General Public License as published by
	* the Free Software Foundation; either version 2 of the License, or
	* (at your option) any later version.
	*
	* This program is distributed in the hope that it will be useful,
	* but WITHOUT ANY WARRANTY; without even the implied warranty of
	* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	* GNU General Public License for more details.
	*
	* You should have received a copy of the GNU General Public License
	* along with this program; if not, write to the Free Software
	* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include "PracticalSocket.h" // For Socket, ServerSocket, and SocketException
#include <iostream> // For cerr and cout
#include <cstdlib> // For atoi()
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <time.h>
#include <sys/stat.h>
#include <fstream>

using namespace std;

const unsigned int RCVBUFSIZE = 0x8000; // Size of receive buffer

void HandleTCPClient(TCPSocket *sock); // TCP client handling function
int HandleTcpData(TCPSocket *sock, char *dataBuffer, int size);

void hexdump(char* data, int size) {
	cout << hex << (int) data << endl;
	for (int i=0; i < size; i++) {
		unsigned int next = (unsigned char) *data++;
		if (next < 0x10)
			cout << "0";
		cout << hex << next;
		cout << " ";
		if ((i+1) % 16 == 0)
			cout << endl ;
	}
	cout << endl ;
}

int getpsize(char* dataBuffer) {
	int psize = 0;
	unsigned int next;
	for (int i = 0; i < 4; i++){
		unsigned int next = (unsigned char) *dataBuffer++;
		unsigned int next1 = (next << ((3 - i) * 8));
		psize |= next1;
	}
	return psize;
}

void sendinit(TCPSocket *sock) {
    struct stat results;
	
    cout << "sending init" << endl;
	
    if (!stat("data/file2.bin", &results) == 0)
    {
		cout << "cannt get size of data/file2.bin" << endl;
		exit(0);
	}

    char buffer[1001];
	int sended = 0;
	int sizeofbuf = sizeof(buffer)-5;
    ifstream myFile ("data/file2.bin", ios::in | ios::binary);
	while (sended < 300) {
		int scount = 0;
		int tosend = 4;
		if (!myFile.read (buffer, 4)) {
			// An error occurred!
			cout << "cannt get data from data/file2.bin" << endl;
			exit(0);
		}
		if (sock != NULL)
			sock->send(buffer, tosend);
		int psize = getpsize(buffer) - 4;
		cout << "psize = " << psize << endl;
		while (scount < psize) {
			tosend = sizeof(buffer);
			if (psize - scount < sizeof(buffer))
				tosend = psize - scount;
			if (!myFile.read (buffer, tosend)) {
				// An error occurred!
				cout << "cannt get data from data/file2.bin" << endl;
				exit(0);
			}
			if (sock != NULL)
				sock->send(buffer, tosend);
			scount += tosend;
		}
		sended ++;
	}
	
	 myFile.close();	
}
	
// TCP client handling function
void HandleTCPClient(TCPSocket *sock) {
	cout << "Handling client ";
	try {
		cout << sock->getForeignAddress() << ":";
		} catch (SocketException e) {
		cerr << "Unable to get foreign address" << endl;
	}
	try {
		cout << sock->getForeignPort();
		} catch (SocketException e) {
		cerr << "Unable to get foreign port" << endl;
	}
	cout << endl;
	
	// Send received string and receive again until the end of transmission
	char echoBuffer[RCVBUFSIZE];
	int recvMsgSize;
	int bufpos = 0;
	int procpos = 0;
	int pcount = 0;
	
	while (1) {
		if (RCVBUFSIZE - bufpos == 0) {
			cerr << "buffer got full" << endl;
			break;
		}
		
		try {
			recvMsgSize = sock->recv(echoBuffer+bufpos, RCVBUFSIZE - bufpos);
		}	catch (SocketException) {
			break;
		}
		
		if (recvMsgSize == 0)
			break;
		
		bufpos += recvMsgSize;
		
		
		int consumed = 0;
		while (1)
		{
			procpos = HandleTcpData(sock, echoBuffer+consumed, bufpos-consumed);
			if (procpos < 1)
				break;
			consumed += procpos;
		}
		if (procpos == -1) {
			cout << "error handling tcp data" << endl;
			break;
		}
		if (pcount == 0) {
			pcount = 1;
			sendinit(sock);
		}
	
		cout << bufpos << " consumed " << consumed << endl;
		memcpy(echoBuffer, echoBuffer+consumed, bufpos-consumed);
		bufpos -= consumed;
		//sock->send(echoBuffer, recvMsgSize);
	}
	cout << "disconnecting from client" << endl;
	delete sock;
}


int HandleTcpData(TCPSocket *sock, char *dataBuffer, int size) {

	int psize = getpsize(dataBuffer);
	if (psize > size) {
	   cout << "packet not complete" << psize << " " << size << endl;
	   return 0;
	}
	hexdump(dataBuffer, psize);
	
	return psize;
}


int main(int argc, char *argv[]) {
	sendinit(NULL);
	if (argc != 2) { // Test for correct number of arguments
		cerr << "Usage: " << argv[0] << " <Server Port>" << endl;
		exit(1);
	}
	
	unsigned short echoServPort = atoi(argv[1]); // First arg: local port
	
	try {
		TCPServerSocket servSock("localhost", echoServPort, 1400); // Server Socket object
		
		for (;;) { // Run forever
			HandleTCPClient(servSock.accept()); // Wait for a client to connect
		}
	} catch (SocketException &e) {
		cerr << e.what() << endl;
		exit(1);
	}
	// NOT REACHED
	
	return 0;
}
