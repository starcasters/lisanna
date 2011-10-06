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

void FieldInfo::fieldinfo(DataType_Base * adatatype, int aoffset, int abitscount) {
	aDataType = adatatype;
	offset = aoffset;
	bitscount = abitscount;
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
	aBitWriter->WriteInt(*(unsigned int*)Data, pFieldInfo->bitscount);
}
void DT_INT::DeSerialize(void * Data, BitReader * aBitReader, FieldInfo * pFieldInfo){
	*(unsigned int*) Data = aBitReader->ReadInt(pFieldInfo->bitscount);
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
	aBitWriter->WriteInt(*(unsigned int*)Data, pFieldInfo->bitscount);
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


void D3Struct::Print(void * Data, FieldInfo * pFieldInfo){
	for (int i=0; Fields[i].aDataType != 0; i++) {
		Fields[i].aDataType->Print((char*)Data + Fields[i].offset, &(Fields[i]));
	}
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
