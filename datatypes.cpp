#include <iostream> // For cerr and cout
#include <cstdlib> // For atoi()
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include "bitstreams.h"
#include "datatypes.h"

using namespace std;

void FieldInfo::fieldinfo(DataType_Base * adatatype, int aoffset, int abitscount, int abitscount2, int amin, int amax, int aflags, DataType_Base * aopt_datatype, int acount) {
	aDataType = adatatype;
	offset = aoffset;
	bitscount = abitscount;
	bitscount2 = abitscount2;
	min  = amin;
	max = amax;
	flags = aflags;
	opt_DataType = aopt_datatype;
	count = acount;
}

void* DataType_Base::New() {
	cerr << "pure virtual method" << endl;
}
void DataType_Base::Print(void * Data, FieldInfo * pFieldInfo) {
	cerr << "pure virtual method" << endl;
}
void DataType_Base::Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo) {
	cerr << "pure virtual method" << endl;
}
void DataType_Base::DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo) {
	cerr << "pure virtual method" << endl;
}
const char* DataType_Base::Name() {
	cerr << "pure virtual method" << endl;
}

void* DT_INT::New(){
}
DT_INT::DT_INT() {
	cout << "creating dt int" << endl;
}
void DT_INT::Print(void * Data, FieldInfo * pFieldInfo){
	cout << "DT_INT " << *(unsigned int*)Data << endl;
}
void DT_INT::Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo){
	int towrite = *(unsigned int*)Data;
	if (pFieldInfo->flags and 0x10) {
		towrite -= pFieldInfo->min;
	}
	aBitWriter->WriteInt(towrite, pFieldInfo->bitscount);
}
void DT_INT::DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo){
	*(unsigned int*) Data = aBitReader->ReadInt(pFieldInfo->bitscount);
	if (pFieldInfo->flags and 0x10) {
		*(unsigned int*) Data += pFieldInfo->min;
	}
	cout << "deserializing: " << pFieldInfo->bitscount << " bits = "  << *(unsigned int*) Data << endl;
}
const char* DT_INT::Name(){
	return "DT_INT";
}

void DT_INT::Set(void * Data, int value) {
	*(int*)Data = value;
}

int DT_INT::Get(void * Data) {
	return *(int*)Data;
}

DT_INT aDT_INT;

void* DT_CHARARRAY::New(){
}

void DT_CHARARRAY::Print(void * Data, FieldInfo * pFieldInfo){
	cout << "DT_CHARARRAY " << (char*)Data << endl;
}

void DT_CHARARRAY::Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo){
	int count = strlen((char *)Data);
	aBitWriter->WriteInt(count, pFieldInfo->bitscount);
}

void DT_CHARARRAY::DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo){
	int count = aBitReader->ReadInt(pFieldInfo->bitscount);
	cout << "bytes count: " << count << endl;
	if ((aBitReader->index & 7) != 0) { //aling to byte
		cout << "droping bits: " << (aBitReader->index & 7) << endl;
		aBitReader->index = ((aBitReader->index | 7) ^ 7) + 8;
	}
	unsigned char* aData = (unsigned char*)Data;
	for (int i = 0; i<count; i++) {
		*aData = (unsigned char)(aBitReader->ReadInt(8));
		aData ++;
	}
	*aData = 0;
}

const char* DT_CHARARRAY::Name(){
	return "DT_CHARARRAY";
}

void DT_CHARARRAY::Set(void * Data, FieldInfo * pFieldInfo, char* value) {
	
}

void DT_CHARARRAY::Get(void * Data, FieldInfo * pFieldInfo, char* value, int max) {
	
}

DT_CHARARRAY aDT_CHARARRAY;

void* DT_OPTIONAL::New(){
}
	
void DT_OPTIONAL::Print(void * Data, FieldInfo * pFieldInfo){
	cout << "DT_OPTIONAL " << *(unsigned int *)Data << endl;
}

void DT_OPTIONAL::DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo){
	*(unsigned int *)Data = aBitReader->ReadInt(1);
	if (*(unsigned int *)Data == 1) {
		cout << "optional[" << pFieldInfo->opt_DataType->Name() << "]" << endl;
		pFieldInfo->opt_DataType->DeSerialize(((char*)Data)+4, aBitReader, pFieldInfo);
	}
}

void DT_OPTIONAL::Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo){
	
}

const char* DT_OPTIONAL::Name(){
	return "DT_OPTIONAL";
}

DT_OPTIONAL aDT_OPTIONAL;

void* DT_FIXEDARRAY::New(){
}
	
void DT_FIXEDARRAY::Print(void * Data, FieldInfo * pFieldInfo){
	cout << pFieldInfo->opt_DataType->Name() << "[" << pFieldInfo->count << "] " << endl;
}

void DT_FIXEDARRAY::DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo){
	cout << "flags= " << pFieldInfo->flags << endl;
	cout << "count= " << pFieldInfo->count << endl;
	int count = pFieldInfo->count;
	if ((pFieldInfo->flags & 8) == 8) {
		count = aBitReader->ReadInt(pFieldInfo->bitscount2);
		cout << "readed count= " << count << endl;
	}
	for (int i=0; i<count; i++) {
		cout <<  "..." << pFieldInfo->opt_DataType->Name() << endl;
		pFieldInfo->opt_DataType->DeSerialize(Data, aBitReader, pFieldInfo);
		pFieldInfo->opt_DataType->Print(Data, pFieldInfo);
	}
}

void DT_FIXEDARRAY::Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo){
	
}

const char* DT_FIXEDARRAY::Name(){
	return "DT_FIXEDARRAY";
}

DT_FIXEDARRAY aDT_FIXEDARRAY;

void D3Struct::Print(void * Data, FieldInfo * pFieldInfo){
	cout << Name() << " {" << endl;
	for (int i=0; Fields[i].aDataType != 0; i++) {
		Fields[i].aDataType->Print((char*)Data + Fields[i].offset, &(Fields[i]));
	}
	cout << "}" << endl;
}

void D3Struct::Serialize(void * Data, BitWriter *  aBitWriter, FieldInfo * pFieldInfo){
	for (int i=0; Fields[i].aDataType != 0; i++) {
		Fields[i].aDataType->Serialize((char*)Data + Fields[i].offset, aBitWriter, &(Fields[i]));
	}
}
void D3Struct::DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo){
	cout << "deserializing message " << Name() << endl;
	for (int i=0; Fields[i].aDataType != 0; i++) {
		cout << "deserializing field " << i << " of type " << Fields[i].aDataType->Name() << endl;
		Fields[i].aDataType->DeSerialize((char*)Data + Fields[i].offset, aBitReader, &(Fields[i]));
	}
}

//stub DT_ clsses:
DT_INT aDspEffect;
DT_INT aDT_NULL;
DT_INT aDT_DATAID;
DT_INT aDT_SNO;
DT_INT aDT_ANGLE;
DT_INT aDT_FLOAT;
DT_INT aDT_INT64;
DT_INT aDT_GBID;
DT_INT aDT_VARIABLEARRAY;
DT_INT aDT_TAGMAP;
DT_INT aDT_BYTE;
DT_INT aDT_WORD;
DT_INT aDT_ENUM;
DT_INT aDT_CSTRING;
DT_INT aDT_TIME;
DT_INT aDT_VELOCITY;
DT_INT aDT_SNO_GROUP;
DT_INT aDT_SNONAME_HANDLE;
DT_INT aDT_FORMULA;
DT_INT aDT_HIGHPRECISIONPERCENT;
DT_INT aDT_TRANSLATEABLE;
DT_INT aDT_ATTRIBUTEPARAM;
DT_INT aDT_FLAG;
DT_INT aDT_ACCEL;
DT_INT aDT_PERCENT;
DT_INT aDT_IMPULSE;
DT_INT aDT_ANGULARVELOCITY;
DT_INT aDT_MASS;