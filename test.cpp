#include <iostream> // For cerr and cout
#include <cstdlib> // For atoi()
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <stdio.h>

using namespace std;

class BitReader {
public:
	BitReader();
	~BitReader();
	int ReadArray(char* idata, int bits);
	char* data;
	int index;
	int bufsize;
};

BitReader::BitReader(){
	index = 0;
	bufsize = 0;
}

BitReader::~BitReader(){
}

int BitReader::ReadArray(char* idata, int bits) {
	if (index+bits > bufsize * 8) {
		return 0;
	}
	int pos = 0;
	while (pos < bits) {
		int cl = pos & 7;
		int dl = 8 - cl;
		if (dl > (bits - pos)) dl = (bits - pos);
		unsigned int add = (*(unsigned int*) (data + (index >> 3))) >> (index & 7);
		unsigned int mask = ((1 << (dl)) - 1);
		idata[pos >> 3] = ((idata[pos >> 3] & ((1 << (cl)) - 1)) | ((add & mask) << cl));
		index += dl;
		pos += dl;
	}	
	return 1;
}

class BitWriter {
public:
	BitWriter();
	~BitWriter();
	void WriteArray(const char* idata, int bits);
	void Expand();
	char* data;
	int index;
private:
	int bufsize;
};

BitWriter::BitWriter() {
	bufsize = 0;
	index = 0;
}

BitWriter::~BitWriter() {
	if (bufsize != 0) {
		delete data;
	}
}

void BitWriter::Expand() {
	if (bufsize == 0) {
		bufsize = 100;
		data = (char*) malloc(bufsize);
		return;
	}
	char * ndata = (char*) malloc(bufsize * 2);
	memcpy(ndata, data, bufsize);
	delete data;
	data = ndata;
	bufsize = bufsize * 2;
}


void BitWriter::WriteArray(const char* idata, int bits) {
	if ((bufsize - (index >> 3) - 1) < ((bits >> 3) + 1)) {
		Expand();
	}
	int pos = 0;
	while (pos < bits) {
		int cl = index & 7;
		int dl = 8 - cl;
		if (dl > (bits - pos)) dl = (bits - pos);
		unsigned int add = (*(unsigned int*) (idata + (pos >> 3))) >> (pos & 7);
		unsigned int mask = ((1 << (dl)) - 1);
		data[index >> 3] = ((data[index >> 3] & ((1 << (cl)) - 1)) | ((add & mask) << cl));
		index += dl;
		pos += dl;
	}
}

class DataType_Base;

struct FieldInfo {
	DataType_Base *aDataType;
	int offset;
	int bitscount;
	void fieldinfo(int aoffset, int abitscount);
};

void FieldInfo::fieldinfo(int aoffset, int abitscount) {
	offset = aoffset;
	bitscount = abitscount;
}

struct Message {
	char* Name;
	FieldInfo* Fields;
	int size;
	inline void setfield(int index, DataType_Base* dtype) {
		Fields[index].aDataType = dtype;
	}
};
	
class DataType_Base {
	public:
	virtual void* New() = 0;
	virtual void Print(void * Data, FieldInfo * pFieldInfo) = 0;
	virtual void Serialize(void * Data, FieldInfo * pFieldInfo, BitWriter *  aBitWriter) = 0;
	virtual void DeSerialize(void * Data, FieldInfo * pFieldInfo, BitReader * aBitReader) = 0;
	virtual const char* Name() = 0;
};

class DT_INT : public DataType_Base {
	public:
	void* New();
	void Print(void * Data, FieldInfo * pFieldInfo);
	void Serialize(void * Data, FieldInfo * pFieldInfo, BitWriter *  aBitWriter);
	void DeSerialize(void * Data, FieldInfo * pFieldInfo, BitReader * aBitReader);
	const char* Name();
	void Set(void * Data, FieldInfo * pFieldInfo, int value);
	int Get(void * Data, FieldInfo * pFieldInfo);
} *aDT_INT;

void* DataType_Base::New() {
	cerr << "pure virtual method" << endl;
}
void DataType_Base::Print(void * Data, FieldInfo * pFieldInfo) {
	cerr << "pure virtual method" << endl;
}
void DataType_Base::Serialize(void * Data, FieldInfo * pFieldInfo, BitWriter *  aBitWriter) {
	cerr << "pure virtual method" << endl;
}
void DataType_Base::DeSerialize(void * Data, FieldInfo * pFieldInfo, BitReader * aBitReader) {
	cerr << "pure virtual method" << endl;
}
const char* DataType_Base::Name() {
	cerr << "pure virtual method" << endl;
}

void* DT_INT::New(){
}
void DT_INT::Print(void * Data, FieldInfo * pFieldInfo){
	cout << "DT_INT " << *(unsigned int*)Data << endl;
}
void DT_INT::Serialize(void * Data, FieldInfo * pFieldInfo, BitWriter *  aBitWriter){
	aBitWriter->WriteArray((char*)Data, pFieldInfo->bitscount);
}
void DT_INT::DeSerialize(void * Data, FieldInfo * pFieldInfo, BitReader * aBitReader){
	*(unsigned int*) Data = 0;
	aBitReader->ReadArray((char*)Data, pFieldInfo->bitscount);
}
const char* DT_INT::Name(){
	return "DT_INT";
}

void DT_INT::Set(void * Data, FieldInfo * pFieldInfo, int value) {
	*(int*)Data = value;
}

int DT_INT::Get(void * Data, FieldInfo * pFieldInfo) {
	return *(int*)Data;
}


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
	aDT_INT = new DT_INT();
	Message lol;
	lol.Fields = new FieldInfo[3];
	lol.setfield(1, aDT_INT);
	lol.setfield(2, aDT_INT);
	lol.setfield(3, NULL);
	return 0;
}