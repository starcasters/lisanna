#ifndef datatypes_H__
#define datatypes_H__

class DataType_Base;

//flags
// 0x10 = min/max applies

struct FieldInfo {
	char *Name;
	DataType_Base *aDataType;
	int offset;
	int bitscount;
	int bitscount2;
	int min;
	int max;
	int flags;
	int count;
	DataType_Base *opt_DataType;
	void fieldinfo(DataType_Base * adatatype, int aoffset, int abitscount, int abitscount2, int amin, int amax, int aflags, DataType_Base * aopt_datatype, int acount);
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

class DT_OPTIONAL : public DataType_Base {
	public:
	void* New();
	void Print(void * Data, FieldInfo * pFieldInfo);
	void Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo);
	void DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo);
	const char* Name();
};
extern DT_OPTIONAL aDT_OPTIONAL;

class DT_FIXEDARRAY : public DataType_Base {
	public:
	void* New();
	void Print(void * Data, FieldInfo * pFieldInfo);
	void Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo);
	void DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo);
	const char* Name();
};
extern DT_FIXEDARRAY aDT_FIXEDARRAY;

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
extern DT_INT aDspEffect;
extern DT_INT aDT_NULL;
extern DT_INT aDT_DATAID;
extern DT_INT aDT_SNO;
extern DT_INT aDT_ANGLE;
extern DT_INT aDT_FLOAT;
extern DT_INT aDT_INT64;
extern DT_INT aDT_GBID;
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