#include <iostream> // For cerr and cout
#include <cstdlib> // For atoi()
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include "bitstreams.h"
#include "datatypes.h"

#include "GS/Debug.h"

using namespace std;

void LDebugString(char *data) {
	cout << data << endl;
}

void hexdump(const char* data, int size) {
	char buf[200];
	char *abuf = &(buf[0]);
	int remaining = sizeof(buf) - 4;
	for (int i=0; i < size; i++) {
		unsigned int next = (unsigned char) *data++;
		if (next < 0x10) {
			snprintf(abuf, remaining, "0%x ",next);
		} else {
			snprintf(abuf, remaining, "%x ", next);
		}
		abuf+=3;
		remaining-=3;
		if ((i+1) % 16 == 0) {
			snprintf(abuf, remaining, "\r\n");
			abuf += 2;
			remaining-=2;
		}
	}
	snprintf(abuf, remaining, "\r\n");
	LDebugString(buf);
}

void TestBitStream() {
	BitWriter* abit = new BitWriter();
	abit->WriteArray("A", 1);
	abit->WriteArray("AbAcAd", 8*7);
	abit->WriteArray("A", 1);
	abit->WriteArray("A", 5);
	abit->WriteArray("A", 1);
	hexdump(abit->data, (abit->index >> 3) + 1);
	BitReader* arbit = new BitReader();
	arbit->data = abit->data;
	arbit->bufsize = (abit->index >> 3) + 1;
	int aint = 0;
	arbit->ReadArray((char*)&aint, 1);
	cout << "r = " << aint << endl;
	aint = 0;
	char buf[10];
	arbit->ReadArray(buf, 8*7);
	cout << "r = " << buf << endl;
	aint = 0;
	arbit->ReadArray((char*)&aint, 1);
	cout << "r = " << aint << endl;
	aint = 0;
	arbit->ReadArray((char*)&aint, 5);
	cout << "r = " << aint << endl;
	aint = 0;
	arbit->ReadArray((char*)&aint, 1);
	cout << "r = " << aint << endl;
}
	
int main() {
	hexdump("aaa\r\na", 6);
	/*
	DataType_Base* ab = new DT_INT();
	cout << ab->Name() << endl;
	DataType_Base* aa = (DataType_Base*)ab;
	cout << aa->Name() << endl;
	*/
	
	char peer1_0[] = {
	0x00, 0x00, 0x00, 0x18, 0x06, 0xe1, 0x3e, 0xc2, 
	0xde, 0x20, 0xf7, 0x70, 0x46, 0x15, 0x30, 0x2e, 
	0x33, 0x2e, 0x30, 0x2e, 0x37, 0x33, 0x33, 0x33 };
	

	BitReader* arbit = new BitReader();
	arbit->data = peer1_0+4;
	arbit->bufsize = sizeof(peer1_0);
	char Data[100];
	
	aVersionsMessage.DeSerialize(Data, arbit, NULL);
	aVersionsMessage.Print(Data, NULL);
	
	cout << "field1 = " << hex << *(aVersionsMessage.unknow_field_1(Data)) << endl;
	cout << "field2 = " << hex << *(aVersionsMessage.unknow_field_2(Data)) << endl;
	
	return 0;
}