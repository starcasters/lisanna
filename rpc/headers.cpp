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

#include <stdio.h>
#include <string.h>
#include <iostream>

#include "headers.h"

using namespace std; 

char* get_varint32(char*currentpos, int remainingbytes, int* aval) {
	*aval = 0;
	int abyte;
	int counter=0;
	while (1) {
		if (remainingbytes == 0)
			return 0;	//exit with error if we cant consume more bytes;
		abyte = (unsigned char) *currentpos;
		*aval |= (abyte & 0x7f) << counter;
		counter += 7;
		currentpos ++;
	#ifdef rcp_headers_debug
		cout << hex << abyte << endl;
	#endif
		remainingbytes--;
		if ((abyte & 0x80) == 0) break;
	}
	return currentpos;
}
char* get_varint64(char*currentpos, int remainingbytes, int* aval) {
	*aval = 0;
	int abyte;
	int counter=0;
	while (1) {
		if (remainingbytes == 0)
			return 0; //exit with error if we cant consume more bytes;
		abyte = (unsigned char) *currentpos;
		*aval |= (abyte & 0x7f) << counter;
		counter += 7;
		currentpos ++;
		remainingbytes--;
	#ifdef rcp_headers_debug
		cout << hex << abyte << endl;
	#endif
		if ((abyte & 0x80) == 0) break;
	}
	return currentpos;
}

char* add_varint(char*currentpos, unsigned int val) {
	int counter=0;
	while (1) {
		*(unsigned char*)currentpos = val & 0x7f;
		counter += 7;
		val = val >> counter;
		if (val != 0)
			*(unsigned char*) currentpos |= 0x80;
		currentpos++;
		if (val == 0) break;
	}
	return currentpos;
}

char* procheader(char* datastream, int size, prpcheader aheader) {
	char* currentpos = datastream;
	#ifdef rcp_headers_debug
	cout << endl;
	cout << "====== packet =====" << endl;
	cout << "size: " << size << endl;
	#endif
	
	if (size == 0) 
		return 0;
	aheader->service = (unsigned char) *currentpos;
	currentpos++;
	#ifdef rcp_headers_debug
	cout << "unknow_var0: " << showbase << hex << (aheader->service) << endl;
	#endif

	aheader->method  = 0;
	currentpos = get_varint32(currentpos, (int)(currentpos-datastream), &(aheader->method));
	if (currentpos == 0) 
		return 0;
	#ifdef rcp_headers_debug
	cout << "unknow_var1: " << aheader->method << endl;
	#endif

	if ((int)(currentpos-datastream) < 2) 
		return 0;
	aheader->reqid = *((unsigned short*) currentpos);
	currentpos += 2;
	#ifdef rcp_headers_debug
	cout << "unknow_var2: " << aheader->reqid << endl;
	#endif
	
	if (aheader->service != 0xfe) {
		aheader->unknow4  = 0;
		//this is suposed to be a 64 bytes var:
		currentpos = get_varint64(currentpos, (int)(currentpos-datastream), &(aheader->unknow4));
		if (currentpos == 0) 
			return 0;
		#ifdef rcp_headers_debug
		cout << "unknow_var3: " << aheader->unknow4 << endl;
		#endif
	}
	
	currentpos = get_varint32(currentpos, (int)(currentpos-datastream), &(aheader->datasize));
	if (currentpos == 0) 
		return 0;
	#ifdef rcp_headers_debug
	cout << "size: " << aheader->datasize << endl;
	#endif
	
	return currentpos;
}

void printheader(prpcheader aheader) {
	cout << "[" ;
 	cout << showbase << hex <<aheader->service;
	cout << " " << showbase << hex << aheader->method;
	cout << " " << showbase << hex << aheader->reqid;
	cout << " " << showbase << hex << aheader->unknow4;
	cout << " " << aheader->datasize;
	cout << "]";
}

