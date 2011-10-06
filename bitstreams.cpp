#include <iostream> // For cerr and cout
#include <cstdlib> // For atoi()
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <stdio.h>

#include "bitstreams.h"

BitReader::BitReader(){
	index = 0;
	bufsize = 0;
}

BitReader::~BitReader(){
}

int BitReader::ReadInt(int bits) {
	int result = 0;
	while (bits > 0) {
		int cl = index & 7;
		int dl = 8 - cl;
		if (dl > bits) dl = bits;
		result |= ((data[index >> 3] >> cl) & ((1 << dl) - 1)) << (bits-dl);
		bits -= dl;
		index += dl;
	}
	return result;
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

// ********************************************************** //

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

void BitWriter::WriteInt(const int value, int bits) {
	if ((bufsize - (index >> 3) - 1) < ((bits >> 3) + 1)) {
		Expand();
	}
	while (bits > 0) {
		int off = index & 7;
		int dl = 8 - off;
		if (dl > bits) dl = bits;
		unsigned int add = (value >> bits) & ((1 << dl) - 1);
		data[index >> 3] = ((data[index >> 3] & ((1 << off) - 1)) | (add << off));
		bits -= dl;
		index += dl;
	}
}

