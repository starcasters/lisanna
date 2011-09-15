#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <iostream>

#include "dump1.h"
#include "headers.h"

using namespace std; 


int main(int argc, char* argv[]) {
	rpcheader aheader;
	procheader(peer0_0, sizeof(peer0_0), &aheader);
	procheader(peer1_0, sizeof(peer1_0), &aheader);
	procheader(peer0_1, sizeof(peer0_1), &aheader);
	procheader(peer1_1, sizeof(peer1_1), &aheader);
	procheader(peer0_2, sizeof(peer0_2), &aheader);
	procheader(peer1_2, sizeof(peer1_2), &aheader);
	procheader(peer1_3, sizeof(peer1_3), &aheader);
	procheader(peer1_4, sizeof(peer1_4), &aheader);
	procheader(peer1_5, sizeof(peer1_5), &aheader);
	procheader(peer1_6, sizeof(peer1_6), &aheader);
	procheader(peer1_7, sizeof(peer1_7), &aheader);
};