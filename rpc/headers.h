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
 
#ifndef _hfile_rcpheaders
#define _hfile_rpcheaders
struct rpcheader {
	int service;
	int method;
	int reqid;
	int unknow4;
	int datasize;
};
typedef rpcheader* prpcheader;

char* get_varint32(char*currentpos, int remainingbytes, int* aval);
char* get_varint64(char*currentpos, int remainingbytes, int* aval);
char* add_varint(char*currentpos, int val);

char* procheader(char* datastream, int size, prpcheader aheader);
void printheader(prpcheader aheader);

#endif