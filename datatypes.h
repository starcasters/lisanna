#ifndef datatypes_H__
#define datatypes_H__

class DataType_Base;

struct FieldInfo {
	char *Name;
	DataType_Base *aDataType;
	int offset;
	int bitscount;
	void fieldinfo(DataType_Base * adatatype, int aoffset, int abitscount);
};

class DataType_Base {
	public:
	virtual void* New() = 0;
	virtual void Print(void * Data, FieldInfo * pFieldInfo) = 0;
	virtual void Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo) = 0;
	virtual void DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo) = 0;
	virtual const char* Name() = 0;
};

class DT_INT : public DataType_Base {
	public:
	void* New();
	DT_INT();
	void Print(void * Data, FieldInfo * pFieldInfo);
	void Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo);
	void DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo);
	void Set(void * Data, int value);
	int Get(void * Data);
	const char* Name();
};
extern DT_INT aDT_INT;

class DT_CHARARRAY : public DataType_Base {
	public:
	void* New();
	void Print(void * Data, FieldInfo * pFieldInfo);
	void Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo);
	void DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo);
	const char* Name();
	void Set(void * Data, FieldInfo * pFieldInfo, char* value);
	void Get(void * Data, FieldInfo * pFieldInfo, char* value, int max);
};
extern DT_CHARARRAY aDT_CHARARRAY;

class D3Struct : public DataType_Base {
	public:
	void* New() = 0;
	void Print(void * Data, FieldInfo * pFieldInfo);
	void Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo);
	void DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo);
	const char* Name()=0;

	FieldInfo* Fields;
	int size;
};


//stub DT_ clsses:
extern DT_INT aDT_DATAID;
extern DT_INT aDT_OPTIONAL;
extern DT_INT aDT_SNO;
extern DT_INT aDT_ANGLE;
extern DT_INT aDT_FLOAT;
extern DT_INT aDT_INT64;
extern DT_INT aDT_GBID;
extern DT_INT aDT_FIXEDARRAY;
extern DT_INT aDT_VARIABLEARRAY;
extern DT_INT aDT_TAGMAP;
extern DT_INT aDT_BYTE;
extern DT_INT aDT_WORD;
extern DT_INT aDT_ENUM;
extern DT_INT aDT_CSTRING;
extern DT_INT aDT_TIME;
extern DT_INT aDT_VELOCITY;
extern DT_INT aDT_SNO_GROUP;
extern DT_INT aDT_SNONAME_HANDLE;
extern DT_INT aDT_FORMULA;
extern DT_INT aDT_HIGHPRECISIONPERCENT;
extern DT_INT aDT_TRANSLATEABLE;
extern DT_INT aDT_ATTRIBUTEPARAM;
extern DT_INT aDT_FLAG;
extern DT_INT aDT_ACCEL;
extern DT_INT aDT_PERCENT;
extern DT_INT aDT_IMPULSE;
extern DT_INT aDT_ANGULARVELOCITY;
extern DT_INT aDT_MASS;

#endif