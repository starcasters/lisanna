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
char* procheader(char* datastream, int size, prpcheader aheader);
void printheader(prpcheader aheader);

#endif