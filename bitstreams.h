#ifndef bitstreams_H__
#define bitstreams_H__

class BitReader {
public:
	BitReader();
	~BitReader();
	int ReadArray(char* idata, int bits);
	int ReadInt(int bits);
	char* data;
	int index;
	int bufsize;
};

class BitWriter {
public:
	BitWriter();
	~BitWriter();
	void WriteArray(const char* idata, int bits);
	void WriteInt(const int value, int bits);
	void Expand();
	char* data;
	int index;
private:
	int bufsize;
};

#endif