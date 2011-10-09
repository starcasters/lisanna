/*
    This file is part of Lisana.

    Lisana is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Lisana is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Lisana.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream> // For cerr and cout
#include <cstdlib> // For atoi()
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <stdio.h>

#include "../bitstreams.h"
#include "../datatypes.h"

#include "Messages.h"

using namespace std;

// ACDChangeActorMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ACDChangeActorMessage::New() {
}

ACDChangeActorMessage::ACDChangeActorMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDChangeActorMessage::~ACDChangeActorMessage() {
		free(Fields);
}

const char* ACDChangeActorMessage::Name() {
		return "ACDChangeActorMessage";
}
	
void* ACDChangeActorMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDChangeActorMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* ACDChangeActorMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

ACDChangeActorMessage aACDChangeActorMessage;
// ACDChangeGBHandleMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ACDChangeGBHandleMessage::New() {
}

ACDChangeGBHandleMessage::ACDChangeGBHandleMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aGBHandle, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDChangeGBHandleMessage::~ACDChangeGBHandleMessage() {
		free(Fields);
}

const char* ACDChangeGBHandleMessage::Name() {
		return "ACDChangeGBHandleMessage";
}
	
void* ACDChangeGBHandleMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDChangeGBHandleMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* ACDChangeGBHandleMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

ACDChangeGBHandleMessage aACDChangeGBHandleMessage;
// ACDCollFlagsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ACDCollFlagsMessage::New() {
}

ACDCollFlagsMessage::ACDCollFlagsMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 12, 0, 0, 4095, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDCollFlagsMessage::~ACDCollFlagsMessage() {
		free(Fields);
}

const char* ACDCollFlagsMessage::Name() {
		return "ACDCollFlagsMessage";
}
	
void* ACDCollFlagsMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDCollFlagsMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* ACDCollFlagsMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

ACDCollFlagsMessage aACDCollFlagsMessage;
// ACDEnterKnownMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }


void* ACDEnterKnownMessage::New() {
}

ACDEnterKnownMessage::ACDEnterKnownMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 16);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 5, 0, 0, 31, 17, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 2, 0, -1, 1, 17, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_OPTIONAL, 24, 0, 0, 0, 0, 1, &aWorldLocationMessageData, -1);
		Fields[6].fieldinfo(&aDT_OPTIONAL, 64, 0, 0, 0, 0, 1, &aInventoryLocationMessageData, -1);
		Fields[7].fieldinfo(&aGBHandle, 84, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_INT, 92, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aDT_INT, 96, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[10].fieldinfo(&aDT_INT, 100, 4, 0, -1, 10, 17, &aDT_NULL, -1);
		Fields[11].fieldinfo(&aDT_BYTE, 104, 8, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[12].fieldinfo(&aDT_OPTIONAL, 121, 32, 0, 0, 0, 1, &aDT_SNO, -1);
		Fields[13].fieldinfo(&aDT_OPTIONAL, 105, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[14].fieldinfo(&aDT_OPTIONAL, 113, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[16 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDEnterKnownMessage::~ACDEnterKnownMessage() {
		free(Fields);
}

const char* ACDEnterKnownMessage::Name() {
		return "ACDEnterKnownMessage";
}
	
void* ACDEnterKnownMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDEnterKnownMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* ACDEnterKnownMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* ACDEnterKnownMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* ACDEnterKnownMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}
void* ACDEnterKnownMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 24);
}
void* ACDEnterKnownMessage::unknow_field_6(void *Data) {
	return (((char*)Data) + 64);
}
void* ACDEnterKnownMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 84);
}
int* ACDEnterKnownMessage::unknow_field_8(void *Data) {
	return (int*)(((char*)Data) + 92);
}
int* ACDEnterKnownMessage::unknow_field_9(void *Data) {
	return (int*)(((char*)Data) + 96);
}
int* ACDEnterKnownMessage::unknow_field_10(void *Data) {
	return (int*)(((char*)Data) + 100);
}
void* ACDEnterKnownMessage::unknow_field_11(void *Data) {
	return (((char*)Data) + 104);
}
void* ACDEnterKnownMessage::unknow_field_12(void *Data) {
	return (((char*)Data) + 121);
}
void* ACDEnterKnownMessage::unknow_field_13(void *Data) {
	return (((char*)Data) + 105);
}
void* ACDEnterKnownMessage::unknow_field_14(void *Data) {
	return (((char*)Data) + 113);
}

ACDEnterKnownMessage aACDEnterKnownMessage;
// ACDGroupMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ACDGroupMessage::New() {
}

ACDGroupMessage::ACDGroupMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDGroupMessage::~ACDGroupMessage() {
		free(Fields);
}

const char* ACDGroupMessage::Name() {
		return "ACDGroupMessage";
}
	
void* ACDGroupMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDGroupMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* ACDGroupMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* ACDGroupMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

ACDGroupMessage aACDGroupMessage;
// ACDInventoryPositionMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ACDInventoryPositionMessage::New() {
}

ACDInventoryPositionMessage::ACDInventoryPositionMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aInventoryLocationMessageData, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 28, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDInventoryPositionMessage::~ACDInventoryPositionMessage() {
		free(Fields);
}

const char* ACDInventoryPositionMessage::Name() {
		return "ACDInventoryPositionMessage";
}
	
void* ACDInventoryPositionMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDInventoryPositionMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* ACDInventoryPositionMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* ACDInventoryPositionMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 28);
}

ACDInventoryPositionMessage aACDInventoryPositionMessage;
// ACDLookAtMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ACDLookAtMessage::New() {
}

ACDLookAtMessage::ACDLookAtMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDLookAtMessage::~ACDLookAtMessage() {
		free(Fields);
}

const char* ACDLookAtMessage::Name() {
		return "ACDLookAtMessage";
}
	
void* ACDLookAtMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDLookAtMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* ACDLookAtMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

ACDLookAtMessage aACDLookAtMessage;
// ACDPickupFailedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ACDPickupFailedMessage::New() {
}

ACDPickupFailedMessage::ACDPickupFailedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDPickupFailedMessage::~ACDPickupFailedMessage() {
		free(Fields);
}

const char* ACDPickupFailedMessage::Name() {
		return "ACDPickupFailedMessage";
}
	
void* ACDPickupFailedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDPickupFailedMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* ACDPickupFailedMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

ACDPickupFailedMessage aACDPickupFailedMessage;
// ACDShearMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ACDShearMessage::New() {
}

ACDShearMessage::ACDShearMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDShearMessage::~ACDShearMessage() {
		free(Fields);
}

const char* ACDShearMessage::Name() {
		return "ACDShearMessage";
}
	
void* ACDShearMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDShearMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* ACDShearMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

ACDShearMessage aACDShearMessage;
// ACDTranslateArcMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }


void* ACDTranslateArcMessage::New() {
}

ACDTranslateArcMessage::ACDTranslateArcMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 11);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aVector3D, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aVector3D, 24, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 36, 24, 0, 0, 16777215, 17, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 40, 21, 0, -1, 1048575, 17, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 44, 21, 0, -1, 1048575, 17, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_FLOAT, 48, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_SNO, 52, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aDT_FLOAT, 56, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[11 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateArcMessage::~ACDTranslateArcMessage() {
		free(Fields);
}

const char* ACDTranslateArcMessage::Name() {
		return "ACDTranslateArcMessage";
}
	
void* ACDTranslateArcMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateArcMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* ACDTranslateArcMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* ACDTranslateArcMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 24);
}
int* ACDTranslateArcMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 36);
}
int* ACDTranslateArcMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 40);
}
int* ACDTranslateArcMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 44);
}
void* ACDTranslateArcMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 48);
}
void* ACDTranslateArcMessage::unknow_field_8(void *Data) {
	return (((char*)Data) + 52);
}
void* ACDTranslateArcMessage::unknow_field_9(void *Data) {
	return (((char*)Data) + 56);
}

ACDTranslateArcMessage aACDTranslateArcMessage;
// ACDTranslateDetPathMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }
// { unknow_field_16 }


void* ACDTranslateDetPathMessage::New() {
}

ACDTranslateDetPathMessage::ACDTranslateDetPathMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 18);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 4, 0, 0, 8, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aVector3D, 24, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_ANGLE, 36, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aVector3D, 40, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_INT, 52, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aDT_INT, 56, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[10].fieldinfo(&aDT_INT, 60, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[11].fieldinfo(&aDT_SNO, 64, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[12].fieldinfo(&aDT_INT, 68, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[13].fieldinfo(&aDT_FLOAT, 72, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[14].fieldinfo(&aDT_FLOAT, 76, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[15].fieldinfo(&aDT_FLOAT, 80, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[16].fieldinfo(&aDT_FLOAT, 84, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[18 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateDetPathMessage::~ACDTranslateDetPathMessage() {
		free(Fields);
}

const char* ACDTranslateDetPathMessage::Name() {
		return "ACDTranslateDetPathMessage";
}
	
void* ACDTranslateDetPathMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateDetPathMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* ACDTranslateDetPathMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* ACDTranslateDetPathMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* ACDTranslateDetPathMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}
void* ACDTranslateDetPathMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 24);
}
void* ACDTranslateDetPathMessage::unknow_field_6(void *Data) {
	return (((char*)Data) + 36);
}
void* ACDTranslateDetPathMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 40);
}
int* ACDTranslateDetPathMessage::unknow_field_8(void *Data) {
	return (int*)(((char*)Data) + 52);
}
int* ACDTranslateDetPathMessage::unknow_field_9(void *Data) {
	return (int*)(((char*)Data) + 56);
}
int* ACDTranslateDetPathMessage::unknow_field_10(void *Data) {
	return (int*)(((char*)Data) + 60);
}
void* ACDTranslateDetPathMessage::unknow_field_11(void *Data) {
	return (((char*)Data) + 64);
}
int* ACDTranslateDetPathMessage::unknow_field_12(void *Data) {
	return (int*)(((char*)Data) + 68);
}
void* ACDTranslateDetPathMessage::unknow_field_13(void *Data) {
	return (((char*)Data) + 72);
}
void* ACDTranslateDetPathMessage::unknow_field_14(void *Data) {
	return (((char*)Data) + 76);
}
void* ACDTranslateDetPathMessage::unknow_field_15(void *Data) {
	return (((char*)Data) + 80);
}
void* ACDTranslateDetPathMessage::unknow_field_16(void *Data) {
	return (((char*)Data) + 84);
}

ACDTranslateDetPathMessage aACDTranslateDetPathMessage;
// ACDTranslateDetPathSinMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }


void* ACDTranslateDetPathSinMessage::New() {
}

ACDTranslateDetPathSinMessage::ACDTranslateDetPathSinMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 17);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 4, 0, 0, 8, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aVector3D, 24, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_ANGLE, 36, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aVector3D, 40, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_INT, 52, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aDT_INT, 56, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[10].fieldinfo(&aDT_INT, 60, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[11].fieldinfo(&aDT_SNO, 64, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[12].fieldinfo(&aDT_INT, 68, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[13].fieldinfo(&aDT_FLOAT, 72, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[14].fieldinfo(&aDT_FLOAT, 76, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[15].fieldinfo(&aDPathSinData, 80, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[17 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateDetPathSinMessage::~ACDTranslateDetPathSinMessage() {
		free(Fields);
}

const char* ACDTranslateDetPathSinMessage::Name() {
		return "ACDTranslateDetPathSinMessage";
}
	
void* ACDTranslateDetPathSinMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateDetPathSinMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* ACDTranslateDetPathSinMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* ACDTranslateDetPathSinMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* ACDTranslateDetPathSinMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}
void* ACDTranslateDetPathSinMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 24);
}
void* ACDTranslateDetPathSinMessage::unknow_field_6(void *Data) {
	return (((char*)Data) + 36);
}
void* ACDTranslateDetPathSinMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 40);
}
int* ACDTranslateDetPathSinMessage::unknow_field_8(void *Data) {
	return (int*)(((char*)Data) + 52);
}
int* ACDTranslateDetPathSinMessage::unknow_field_9(void *Data) {
	return (int*)(((char*)Data) + 56);
}
int* ACDTranslateDetPathSinMessage::unknow_field_10(void *Data) {
	return (int*)(((char*)Data) + 60);
}
void* ACDTranslateDetPathSinMessage::unknow_field_11(void *Data) {
	return (((char*)Data) + 64);
}
int* ACDTranslateDetPathSinMessage::unknow_field_12(void *Data) {
	return (int*)(((char*)Data) + 68);
}
void* ACDTranslateDetPathSinMessage::unknow_field_13(void *Data) {
	return (((char*)Data) + 72);
}
void* ACDTranslateDetPathSinMessage::unknow_field_14(void *Data) {
	return (((char*)Data) + 76);
}
void* ACDTranslateDetPathSinMessage::unknow_field_15(void *Data) {
	return (((char*)Data) + 80);
}

ACDTranslateDetPathSinMessage aACDTranslateDetPathSinMessage;
// ACDTranslateDetPathSpiralMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* ACDTranslateDetPathSpiralMessage::New() {
}

ACDTranslateDetPathSpiralMessage::ACDTranslateDetPathSpiralMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aVector3D, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aVector3D, 24, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 36, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 40, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 44, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDPathSinData, 48, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateDetPathSpiralMessage::~ACDTranslateDetPathSpiralMessage() {
		free(Fields);
}

const char* ACDTranslateDetPathSpiralMessage::Name() {
		return "ACDTranslateDetPathSpiralMessage";
}
	
void* ACDTranslateDetPathSpiralMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateDetPathSpiralMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* ACDTranslateDetPathSpiralMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* ACDTranslateDetPathSpiralMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 24);
}
int* ACDTranslateDetPathSpiralMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 36);
}
int* ACDTranslateDetPathSpiralMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 40);
}
int* ACDTranslateDetPathSpiralMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 44);
}
void* ACDTranslateDetPathSpiralMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 48);
}

ACDTranslateDetPathSpiralMessage aACDTranslateDetPathSpiralMessage;
// ACDTranslateFacingMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ACDTranslateFacingMessage::New() {
}

ACDTranslateFacingMessage::ACDTranslateFacingMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_ANGLE, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateFacingMessage::~ACDTranslateFacingMessage() {
		free(Fields);
}

const char* ACDTranslateFacingMessage::Name() {
		return "ACDTranslateFacingMessage";
}
	
void* ACDTranslateFacingMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateFacingMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* ACDTranslateFacingMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* ACDTranslateFacingMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

ACDTranslateFacingMessage aACDTranslateFacingMessage;
// ACDTranslateFixedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* ACDTranslateFixedMessage::New() {
}

ACDTranslateFixedMessage::ACDTranslateFixedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aVector3D, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 24, 24, 0, 0, 16777215, 17, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 28, 21, 0, -1, 1048575, 17, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_SNO, 32, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateFixedMessage::~ACDTranslateFixedMessage() {
		free(Fields);
}

const char* ACDTranslateFixedMessage::Name() {
		return "ACDTranslateFixedMessage";
}
	
void* ACDTranslateFixedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateFixedMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* ACDTranslateFixedMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* ACDTranslateFixedMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 24);
}
int* ACDTranslateFixedMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 28);
}
void* ACDTranslateFixedMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 32);
}

ACDTranslateFixedMessage aACDTranslateFixedMessage;
// ACDTranslateFixedUpdateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ACDTranslateFixedUpdateMessage::New() {
}

ACDTranslateFixedUpdateMessage::ACDTranslateFixedUpdateMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aVector3D, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aVector3D, 24, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateFixedUpdateMessage::~ACDTranslateFixedUpdateMessage() {
		free(Fields);
}

const char* ACDTranslateFixedUpdateMessage::Name() {
		return "ACDTranslateFixedUpdateMessage";
}
	
void* ACDTranslateFixedUpdateMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateFixedUpdateMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* ACDTranslateFixedUpdateMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* ACDTranslateFixedUpdateMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 24);
}

ACDTranslateFixedUpdateMessage aACDTranslateFixedUpdateMessage;
// ACDTranslateNormalMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }


void* ACDTranslateNormalMessage::New() {
}

ACDTranslateNormalMessage::ACDTranslateNormalMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_OPTIONAL, 12, 0, 0, 0, 0, 1, &aVector3D, -1);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 28, 32, 0, 0, 0, 1, &aDT_ANGLE, -1);
		Fields[4].fieldinfo(&aDT_OPTIONAL, 36, 1, 0, 0, 1, 17, &aDT_INT, -1);
		Fields[5].fieldinfo(&aDT_OPTIONAL, 44, 32, 0, 0, 0, 1, &aDT_FLOAT, -1);
		Fields[6].fieldinfo(&aDT_OPTIONAL, 52, 24, 0, 0, 16777215, 17, &aDT_INT, -1);
		Fields[7].fieldinfo(&aDT_OPTIONAL, 60, 21, 0, -1, 1048575, 17, &aDT_INT, -1);
		Fields[8].fieldinfo(&aDT_OPTIONAL, 68, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[10 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateNormalMessage::~ACDTranslateNormalMessage() {
		free(Fields);
}

const char* ACDTranslateNormalMessage::Name() {
		return "ACDTranslateNormalMessage";
}
	
void* ACDTranslateNormalMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateNormalMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* ACDTranslateNormalMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* ACDTranslateNormalMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 28);
}
void* ACDTranslateNormalMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 36);
}
void* ACDTranslateNormalMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 44);
}
void* ACDTranslateNormalMessage::unknow_field_6(void *Data) {
	return (((char*)Data) + 52);
}
void* ACDTranslateNormalMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 60);
}
void* ACDTranslateNormalMessage::unknow_field_8(void *Data) {
	return (((char*)Data) + 68);
}

ACDTranslateNormalMessage aACDTranslateNormalMessage;
// ACDTranslateSnappedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* ACDTranslateSnappedMessage::New() {
}

ACDTranslateSnappedMessage::ACDTranslateSnappedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aVector3D, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_ANGLE, 24, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 28, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 32, 24, 0, 0, 16777215, 17, &aDT_NULL, -1);
		Fields[7 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateSnappedMessage::~ACDTranslateSnappedMessage() {
		free(Fields);
}

const char* ACDTranslateSnappedMessage::Name() {
		return "ACDTranslateSnappedMessage";
}
	
void* ACDTranslateSnappedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateSnappedMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* ACDTranslateSnappedMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* ACDTranslateSnappedMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 24);
}
int* ACDTranslateSnappedMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 28);
}
int* ACDTranslateSnappedMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 32);
}

ACDTranslateSnappedMessage aACDTranslateSnappedMessage;
// ACDTranslateSyncMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ACDTranslateSyncMessage::New() {
}

ACDTranslateSyncMessage::ACDTranslateSyncMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aVector3D, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 24, 1, 0, 0, 1, 17, &aDT_INT, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDTranslateSyncMessage::~ACDTranslateSyncMessage() {
		free(Fields);
}

const char* ACDTranslateSyncMessage::Name() {
		return "ACDTranslateSyncMessage";
}
	
void* ACDTranslateSyncMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ACDTranslateSyncMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* ACDTranslateSyncMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* ACDTranslateSyncMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 24);
}

ACDTranslateSyncMessage aACDTranslateSyncMessage;
// ACDWorldPositionMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ACDWorldPositionMessage::New() {
}

ACDWorldPositionMessage::ACDWorldPositionMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aWorldLocationMessageData, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ACDWorldPositionMessage::~ACDWorldPositionMessage() {
		free(Fields);
}

const char* ACDWorldPositionMessage::Name() {
		return "ACDWorldPositionMessage";
}
	
void* ACDWorldPositionMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ACDWorldPositionMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* ACDWorldPositionMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

ACDWorldPositionMessage aACDWorldPositionMessage;
// ANNDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* ANNDataMessage::New() {
}

ANNDataMessage::ANNDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ANNDataMessage::~ANNDataMessage() {
		free(Fields);
}

const char* ANNDataMessage::Name() {
		return "ANNDataMessage";
}
	
void* ANNDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ANNDataMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

ANNDataMessage aANNDataMessage;
// ActTransitionMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ActTransitionMessage::New() {
}

ActTransitionMessage::ActTransitionMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 10, 0, -1, 1000, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ActTransitionMessage::~ActTransitionMessage() {
		free(Fields);
}

const char* ActTransitionMessage::Name() {
		return "ActTransitionMessage";
}
	
void* ActTransitionMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ActTransitionMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* ActTransitionMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

ActTransitionMessage aActTransitionMessage;
// ActTransitionStartedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ActTransitionStartedMessage::New() {
}

ActTransitionStartedMessage::ActTransitionStartedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ActTransitionStartedMessage::~ActTransitionStartedMessage() {
		free(Fields);
}

const char* ActTransitionStartedMessage::Name() {
		return "ActTransitionStartedMessage";
}
	
void* ActTransitionStartedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ActTransitionStartedMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* ActTransitionStartedMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

ActTransitionStartedMessage aActTransitionStartedMessage;
// AffixMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { aAffixGBIDs }


void* AffixMessage::New() {
}

AffixMessage::AffixMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 2, 0, 0, 2, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 16, 32, 6, 0, 0, 8, &aDT_GBID, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
AffixMessage::~AffixMessage() {
		free(Fields);
}

const char* AffixMessage::Name() {
		return "AffixMessage";
}
	
void* AffixMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* AffixMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* AffixMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* AffixMessage::aAffixGBIDs(void *Data) {
	return (((char*)Data) + 16);
}

AffixMessage aAffixMessage;
// AimTargetMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* AimTargetMessage::New() {
}

AimTargetMessage::AimTargetMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 2, 0, -1, 2, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aWorldPlace, 20, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
AimTargetMessage::~AimTargetMessage() {
		free(Fields);
}

const char* AimTargetMessage::Name() {
		return "AimTargetMessage";
}
	
void* AimTargetMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* AimTargetMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* AimTargetMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* AimTargetMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
void* AimTargetMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 20);
}

AimTargetMessage aAimTargetMessage;
// AssignSkillMessage
//
// { unknow_field_0 }
// { snoPower }
// { unknow_field_2 }


void* AssignSkillMessage::New() {
}

AssignSkillMessage::AssignSkillMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 5, 0, 0, 28, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
AssignSkillMessage::~AssignSkillMessage() {
		free(Fields);
}

const char* AssignSkillMessage::Name() {
		return "AssignSkillMessage";
}
	
void* AssignSkillMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* AssignSkillMessage::snoPower(void *Data) {
	return (((char*)Data) + 8);
}
int* AssignSkillMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

AssignSkillMessage aAssignSkillMessage;
// AttributeCreateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* AttributeCreateMessage::New() {
}

AttributeCreateMessage::AttributeCreateMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
AttributeCreateMessage::~AttributeCreateMessage() {
		free(Fields);
}

const char* AttributeCreateMessage::Name() {
		return "AttributeCreateMessage";
}
	
void* AttributeCreateMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* AttributeCreateMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* AttributeCreateMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* AttributeCreateMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* AttributeCreateMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}

AttributeCreateMessage aAttributeCreateMessage;
// AttributeDeleteMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AttributeDeleteMessage::New() {
}

AttributeDeleteMessage::AttributeDeleteMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
AttributeDeleteMessage::~AttributeDeleteMessage() {
		free(Fields);
}

const char* AttributeDeleteMessage::Name() {
		return "AttributeDeleteMessage";
}
	
void* AttributeDeleteMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* AttributeDeleteMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* AttributeDeleteMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

AttributeDeleteMessage aAttributeDeleteMessage;
// AttributeSetValueMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AttributeSetValueMessage::New() {
}

AttributeSetValueMessage::AttributeSetValueMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aNetAttributeKeyValue, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
AttributeSetValueMessage::~AttributeSetValueMessage() {
		free(Fields);
}

const char* AttributeSetValueMessage::Name() {
		return "AttributeSetValueMessage";
}
	
void* AttributeSetValueMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* AttributeSetValueMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* AttributeSetValueMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

AttributeSetValueMessage aAttributeSetValueMessage;
// AttributesSetValuesMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { atKeyVals }


void* AttributesSetValuesMessage::New() {
}

AttributesSetValuesMessage::AttributesSetValuesMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 16, 0, 4, 0, 0, 8, &aNetAttributeKeyValue, 15);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
AttributesSetValuesMessage::~AttributesSetValuesMessage() {
		free(Fields);
}

const char* AttributesSetValuesMessage::Name() {
		return "AttributesSetValuesMessage";
}
	
void* AttributesSetValuesMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* AttributesSetValuesMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* AttributesSetValuesMessage::atKeyVals(void *Data) {
	return (((char*)Data) + 16);
}

AttributesSetValuesMessage aAttributesSetValuesMessage;
// BNetJoinGameRequestResultMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }


void* BNetJoinGameRequestResultMessage::New() {
}

BNetJoinGameRequestResultMessage::BNetJoinGameRequestResultMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, -1, 5, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aGameId, 16, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT64, 40, 64, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 48, 3, 0, -1, 5, 17, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_SNO, 52, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 56, 16, 0, 0, 65535, 17, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_INT, 60, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_WORD, 64, 16, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[10 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
BNetJoinGameRequestResultMessage::~BNetJoinGameRequestResultMessage() {
		free(Fields);
}

const char* BNetJoinGameRequestResultMessage::Name() {
		return "BNetJoinGameRequestResultMessage";
}
	
void* BNetJoinGameRequestResultMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* BNetJoinGameRequestResultMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* BNetJoinGameRequestResultMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 16);
}
void* BNetJoinGameRequestResultMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 40);
}
int* BNetJoinGameRequestResultMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 48);
}
void* BNetJoinGameRequestResultMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 52);
}
int* BNetJoinGameRequestResultMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 56);
}
int* BNetJoinGameRequestResultMessage::unknow_field_7(void *Data) {
	return (int*)(((char*)Data) + 60);
}
void* BNetJoinGameRequestResultMessage::unknow_field_8(void *Data) {
	return (((char*)Data) + 64);
}

BNetJoinGameRequestResultMessage aBNetJoinGameRequestResultMessage;
// BlizzconCVarsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* BlizzconCVarsMessage::New() {
}

BlizzconCVarsMessage::BlizzconCVarsMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
BlizzconCVarsMessage::~BlizzconCVarsMessage() {
		free(Fields);
}

const char* BlizzconCVarsMessage::Name() {
		return "BlizzconCVarsMessage";
}
	
void* BlizzconCVarsMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* BlizzconCVarsMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* BlizzconCVarsMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* BlizzconCVarsMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

BlizzconCVarsMessage aBlizzconCVarsMessage;
// BoolDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* BoolDataMessage::New() {
}

BoolDataMessage::BoolDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
BoolDataMessage::~BoolDataMessage() {
		free(Fields);
}

const char* BoolDataMessage::Name() {
		return "BoolDataMessage";
}
	
void* BoolDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* BoolDataMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

BoolDataMessage aBoolDataMessage;
// BossEncounterMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoEncounter }


void* BossEncounterMessage::New() {
}

BossEncounterMessage::BossEncounterMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
BossEncounterMessage::~BossEncounterMessage() {
		free(Fields);
}

const char* BossEncounterMessage::Name() {
		return "BossEncounterMessage";
}
	
void* BossEncounterMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* BossEncounterMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* BossEncounterMessage::snoEncounter(void *Data) {
	return (((char*)Data) + 12);
}

BossEncounterMessage aBossEncounterMessage;
// BossZoomMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* BossZoomMessage::New() {
}

BossZoomMessage::BossZoomMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
BossZoomMessage::~BossZoomMessage() {
		free(Fields);
}

const char* BossZoomMessage::Name() {
		return "BossZoomMessage";
}
	
void* BossZoomMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* BossZoomMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* BossZoomMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

BossZoomMessage aBossZoomMessage;
// BroadcastTextMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* BroadcastTextMessage::New() {
}

BroadcastTextMessage::BroadcastTextMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 8, 10, 0, 0, 0, 1, &aDT_NULL, 512);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
BroadcastTextMessage::~BroadcastTextMessage() {
		free(Fields);
}

const char* BroadcastTextMessage::Name() {
		return "BroadcastTextMessage";
}
	
void* BroadcastTextMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* BroadcastTextMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

BroadcastTextMessage aBroadcastTextMessage;
// ByteDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* ByteDataMessage::New() {
}

ByteDataMessage::ByteDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_BYTE, 8, 8, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ByteDataMessage::~ByteDataMessage() {
		free(Fields);
}

const char* ByteDataMessage::Name() {
		return "ByteDataMessage";
}
	
void* ByteDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ByteDataMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

ByteDataMessage aByteDataMessage;
// CameraFocusMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* CameraFocusMessage::New() {
}

CameraFocusMessage::CameraFocusMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CameraFocusMessage::~CameraFocusMessage() {
		free(Fields);
}

const char* CameraFocusMessage::Name() {
		return "CameraFocusMessage";
}
	
void* CameraFocusMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* CameraFocusMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* CameraFocusMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* CameraFocusMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

CameraFocusMessage aCameraFocusMessage;
// CameraYawMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* CameraYawMessage::New() {
}

CameraYawMessage::CameraYawMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_ANGLE, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CameraYawMessage::~CameraYawMessage() {
		free(Fields);
}

const char* CameraYawMessage::Name() {
		return "CameraYawMessage";
}
	
void* CameraYawMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* CameraYawMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* CameraYawMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* CameraYawMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

CameraYawMessage aCameraYawMessage;
// CameraZoomMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* CameraZoomMessage::New() {
}

CameraZoomMessage::CameraZoomMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CameraZoomMessage::~CameraZoomMessage() {
		free(Fields);
}

const char* CameraZoomMessage::Name() {
		return "CameraZoomMessage";
}
	
void* CameraZoomMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* CameraZoomMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* CameraZoomMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* CameraZoomMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

CameraZoomMessage aCameraZoomMessage;
// ChatMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ChatMessage::New() {
}

ChatMessage::ChatMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 2, 0, 0, 2, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 4, 0, -1, 7, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 16, 10, 0, 0, 0, 1, &aDT_NULL, 512);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ChatMessage::~ChatMessage() {
		free(Fields);
}

const char* ChatMessage::Name() {
		return "ChatMessage";
}
	
void* ChatMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ChatMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* ChatMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* ChatMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

ChatMessage aChatMessage;
// ComplexEffectAddMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* ComplexEffectAddMessage::New() {
}

ComplexEffectAddMessage::ComplexEffectAddMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_SNO, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 24, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 28, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_INT, 32, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ComplexEffectAddMessage::~ComplexEffectAddMessage() {
		free(Fields);
}

const char* ComplexEffectAddMessage::Name() {
		return "ComplexEffectAddMessage";
}
	
void* ComplexEffectAddMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ComplexEffectAddMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* ComplexEffectAddMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* ComplexEffectAddMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}
int* ComplexEffectAddMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}
int* ComplexEffectAddMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 24);
}
int* ComplexEffectAddMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 28);
}
int* ComplexEffectAddMessage::unknow_field_7(void *Data) {
	return (int*)(((char*)Data) + 32);
}

ComplexEffectAddMessage aComplexEffectAddMessage;
// ConnectionEstablishedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ConnectionEstablishedMessage::New() {
}

ConnectionEstablishedMessage::ConnectionEstablishedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ConnectionEstablishedMessage::~ConnectionEstablishedMessage() {
		free(Fields);
}

const char* ConnectionEstablishedMessage::Name() {
		return "ConnectionEstablishedMessage";
}
	
void* ConnectionEstablishedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* ConnectionEstablishedMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* ConnectionEstablishedMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* ConnectionEstablishedMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

ConnectionEstablishedMessage aConnectionEstablishedMessage;
// CrafterLevelUpMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* CrafterLevelUpMessage::New() {
}

CrafterLevelUpMessage::CrafterLevelUpMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CrafterLevelUpMessage::~CrafterLevelUpMessage() {
		free(Fields);
}

const char* CrafterLevelUpMessage::Name() {
		return "CrafterLevelUpMessage";
}
	
void* CrafterLevelUpMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* CrafterLevelUpMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* CrafterLevelUpMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* CrafterLevelUpMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

CrafterLevelUpMessage aCrafterLevelUpMessage;
// CraftingResultsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* CraftingResultsMessage::New() {
}

CraftingResultsMessage::CraftingResultsMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_GBID, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CraftingResultsMessage::~CraftingResultsMessage() {
		free(Fields);
}

const char* CraftingResultsMessage::Name() {
		return "CraftingResultsMessage";
}
	
void* CraftingResultsMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* CraftingResultsMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* CraftingResultsMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* CraftingResultsMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

CraftingResultsMessage aCraftingResultsMessage;
// CreateBNetGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }


void* CreateBNetGameMessage::New() {
}

CreateBNetGameMessage::CreateBNetGameMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 8, 6, 0, 0, 0, 1, &aDT_NULL, 33);
		Fields[2].fieldinfo(&aDT_INT, 44, 3, 0, -1, 5, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 48, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_SNO, 52, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 56, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 60, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_SNO, 64, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_INT, 68, 16, 0, 0, 65535, 17, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aDT_INT, 72, 3, 0, 1, 8, 17, &aDT_NULL, -1);
		Fields[10].fieldinfo(&aDT_INT, 76, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[11].fieldinfo(&aDT_INT, 80, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[12].fieldinfo(&aDT_WORD, 84, 16, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[14 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CreateBNetGameMessage::~CreateBNetGameMessage() {
		free(Fields);
}

const char* CreateBNetGameMessage::Name() {
		return "CreateBNetGameMessage";
}
	
void* CreateBNetGameMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* CreateBNetGameMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* CreateBNetGameMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 44);
}
int* CreateBNetGameMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 48);
}
void* CreateBNetGameMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 52);
}
int* CreateBNetGameMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 56);
}
int* CreateBNetGameMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 60);
}
void* CreateBNetGameMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 64);
}
int* CreateBNetGameMessage::unknow_field_8(void *Data) {
	return (int*)(((char*)Data) + 68);
}
int* CreateBNetGameMessage::unknow_field_9(void *Data) {
	return (int*)(((char*)Data) + 72);
}
int* CreateBNetGameMessage::unknow_field_10(void *Data) {
	return (int*)(((char*)Data) + 76);
}
int* CreateBNetGameMessage::unknow_field_11(void *Data) {
	return (int*)(((char*)Data) + 80);
}
void* CreateBNetGameMessage::unknow_field_12(void *Data) {
	return (((char*)Data) + 84);
}

CreateBNetGameMessage aCreateBNetGameMessage;
// CreateBNetGameResultMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* CreateBNetGameResultMessage::New() {
}

CreateBNetGameResultMessage::CreateBNetGameResultMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 2, 0, 0, 2, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aGameId, 16, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CreateBNetGameResultMessage::~CreateBNetGameResultMessage() {
		free(Fields);
}

const char* CreateBNetGameResultMessage::Name() {
		return "CreateBNetGameResultMessage";
}
	
void* CreateBNetGameResultMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* CreateBNetGameResultMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* CreateBNetGameResultMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 16);
}

CreateBNetGameResultMessage aCreateBNetGameResultMessage;
// CreateHeroMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* CreateHeroMessage::New() {
}

CreateHeroMessage::CreateHeroMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 8, 6, 0, 0, 0, 1, &aDT_NULL, 49);
		Fields[2].fieldinfo(&aDT_GBID, 60, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 64, 29, 0, 0, 536870911, 17, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CreateHeroMessage::~CreateHeroMessage() {
		free(Fields);
}

const char* CreateHeroMessage::Name() {
		return "CreateHeroMessage";
}
	
void* CreateHeroMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* CreateHeroMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* CreateHeroMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 60);
}
int* CreateHeroMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 64);
}

CreateHeroMessage aCreateHeroMessage;
// CreateHeroResultMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* CreateHeroResultMessage::New() {
}

CreateHeroResultMessage::CreateHeroResultMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 2, 0, -1, 2, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aEntityId, 16, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
CreateHeroResultMessage::~CreateHeroResultMessage() {
		free(Fields);
}

const char* CreateHeroResultMessage::Name() {
		return "CreateHeroResultMessage";
}
	
void* CreateHeroResultMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* CreateHeroResultMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* CreateHeroResultMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 16);
}

CreateHeroResultMessage aCreateHeroResultMessage;
// DWordDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* DWordDataMessage::New() {
}

DWordDataMessage::DWordDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
DWordDataMessage::~DWordDataMessage() {
		free(Fields);
}

const char* DWordDataMessage::Name() {
		return "DWordDataMessage";
}
	
void* DWordDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* DWordDataMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

DWordDataMessage aDWordDataMessage;
// DataIDDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* DataIDDataMessage::New() {
}

DataIDDataMessage::DataIDDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
DataIDDataMessage::~DataIDDataMessage() {
		free(Fields);
}

const char* DataIDDataMessage::Name() {
		return "DataIDDataMessage";
}
	
void* DataIDDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* DataIDDataMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

DataIDDataMessage aDataIDDataMessage;
// DeathFadeTimeMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* DeathFadeTimeMessage::New() {
}

DeathFadeTimeMessage::DeathFadeTimeMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 11, 0, -1, 1800, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 11, 0, 0, 1800, 17, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
DeathFadeTimeMessage::~DeathFadeTimeMessage() {
		free(Fields);
}

const char* DeathFadeTimeMessage::Name() {
		return "DeathFadeTimeMessage";
}
	
void* DeathFadeTimeMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* DeathFadeTimeMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* DeathFadeTimeMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* DeathFadeTimeMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* DeathFadeTimeMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}

DeathFadeTimeMessage aDeathFadeTimeMessage;
// DebugActorTooltipMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* DebugActorTooltipMessage::New() {
}

DebugActorTooltipMessage::DebugActorTooltipMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 12, 10, 0, 0, 0, 1, &aDT_NULL, 512);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
DebugActorTooltipMessage::~DebugActorTooltipMessage() {
		free(Fields);
}

const char* DebugActorTooltipMessage::Name() {
		return "DebugActorTooltipMessage";
}
	
void* DebugActorTooltipMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* DebugActorTooltipMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* DebugActorTooltipMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

DebugActorTooltipMessage aDebugActorTooltipMessage;
// DebugDrawPrimMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }


void* DebugDrawPrimMessage::New() {
}

DebugDrawPrimMessage::DebugDrawPrimMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aVector3D, 20, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aVector3D, 32, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_FLOAT, 44, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_FLOAT, 48, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_INT, 52, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aRGBAColor, 56, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[10].fieldinfo(&aDT_CHARARRAY, 60, 8, 0, 0, 0, 1, &aDT_NULL, 128);
		Fields[12 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
DebugDrawPrimMessage::~DebugDrawPrimMessage() {
		free(Fields);
}

const char* DebugDrawPrimMessage::Name() {
		return "DebugDrawPrimMessage";
}
	
void* DebugDrawPrimMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* DebugDrawPrimMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* DebugDrawPrimMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* DebugDrawPrimMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
void* DebugDrawPrimMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 20);
}
void* DebugDrawPrimMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 32);
}
void* DebugDrawPrimMessage::unknow_field_6(void *Data) {
	return (((char*)Data) + 44);
}
void* DebugDrawPrimMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 48);
}
int* DebugDrawPrimMessage::unknow_field_8(void *Data) {
	return (int*)(((char*)Data) + 52);
}
void* DebugDrawPrimMessage::unknow_field_9(void *Data) {
	return (((char*)Data) + 56);
}
void* DebugDrawPrimMessage::unknow_field_10(void *Data) {
	return (((char*)Data) + 60);
}

DebugDrawPrimMessage aDebugDrawPrimMessage;
// DestroySceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* DestroySceneMessage::New() {
}

DestroySceneMessage::DestroySceneMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
DestroySceneMessage::~DestroySceneMessage() {
		free(Fields);
}

const char* DestroySceneMessage::Name() {
		return "DestroySceneMessage";
}
	
void* DestroySceneMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* DestroySceneMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* DestroySceneMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

DestroySceneMessage aDestroySceneMessage;
// DisplayGameTextMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* DisplayGameTextMessage::New() {
}

DisplayGameTextMessage::DisplayGameTextMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 8, 10, 0, 0, 0, 1, &aDT_NULL, 512);
		Fields[2].fieldinfo(&aDT_OPTIONAL, 520, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 528, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
DisplayGameTextMessage::~DisplayGameTextMessage() {
		free(Fields);
}

const char* DisplayGameTextMessage::Name() {
		return "DisplayGameTextMessage";
}
	
void* DisplayGameTextMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* DisplayGameTextMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* DisplayGameTextMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 520);
}
void* DisplayGameTextMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 528);
}

DisplayGameTextMessage aDisplayGameTextMessage;
// EffectGroupACDToACDMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* EffectGroupACDToACDMessage::New() {
}

EffectGroupACDToACDMessage::EffectGroupACDToACDMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
EffectGroupACDToACDMessage::~EffectGroupACDToACDMessage() {
		free(Fields);
}

const char* EffectGroupACDToACDMessage::Name() {
		return "EffectGroupACDToACDMessage";
}
	
void* EffectGroupACDToACDMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* EffectGroupACDToACDMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* EffectGroupACDToACDMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* EffectGroupACDToACDMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

EffectGroupACDToACDMessage aEffectGroupACDToACDMessage;
// EnchantItemMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* EnchantItemMessage::New() {
}

EnchantItemMessage::EnchantItemMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_GBID, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
EnchantItemMessage::~EnchantItemMessage() {
		free(Fields);
}

const char* EnchantItemMessage::Name() {
		return "EnchantItemMessage";
}
	
void* EnchantItemMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* EnchantItemMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* EnchantItemMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

EnchantItemMessage aEnchantItemMessage;
// EncounterInviteStateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* EncounterInviteStateMessage::New() {
}

EncounterInviteStateMessage::EncounterInviteStateMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 9, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 10, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
EncounterInviteStateMessage::~EncounterInviteStateMessage() {
		free(Fields);
}

const char* EncounterInviteStateMessage::Name() {
		return "EncounterInviteStateMessage";
}
	
void* EncounterInviteStateMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* EncounterInviteStateMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* EncounterInviteStateMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 9);
}
int* EncounterInviteStateMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 10);
}

EncounterInviteStateMessage aEncounterInviteStateMessage;
// EndConversationMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* EndConversationMessage::New() {
}

EndConversationMessage::EndConversationMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
EndConversationMessage::~EndConversationMessage() {
		free(Fields);
}

const char* EndConversationMessage::Name() {
		return "EndConversationMessage";
}
	
void* EndConversationMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* EndConversationMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* EndConversationMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* EndConversationMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

EndConversationMessage aEndConversationMessage;
// EndOfTickMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* EndOfTickMessage::New() {
}

EndOfTickMessage::EndOfTickMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
EndOfTickMessage::~EndOfTickMessage() {
		free(Fields);
}

const char* EndOfTickMessage::Name() {
		return "EndOfTickMessage";
}
	
void* EndOfTickMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* EndOfTickMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* EndOfTickMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

EndOfTickMessage aEndOfTickMessage;
// EnterWorldMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* EnterWorldMessage::New() {
}

EnterWorldMessage::EnterWorldMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aVector3D, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_SNO, 24, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
EnterWorldMessage::~EnterWorldMessage() {
		free(Fields);
}

const char* EnterWorldMessage::Name() {
		return "EnterWorldMessage";
}
	
void* EnterWorldMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* EnterWorldMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* EnterWorldMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 20);
}
void* EnterWorldMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 24);
}

EnterWorldMessage aEnterWorldMessage;
// EntityIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* EntityIdMessage::New() {
}

EntityIdMessage::EntityIdMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aEntityId, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
EntityIdMessage::~EntityIdMessage() {
		free(Fields);
}

const char* EntityIdMessage::Name() {
		return "EntityIdMessage";
}
	
void* EntityIdMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* EntityIdMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

EntityIdMessage aEntityIdMessage;
// FlippyMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* FlippyMessage::New() {
}

FlippyMessage::FlippyMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_SNO, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aVector3D, 20, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
FlippyMessage::~FlippyMessage() {
		free(Fields);
}

const char* FlippyMessage::Name() {
		return "FlippyMessage";
}
	
void* FlippyMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* FlippyMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* FlippyMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* FlippyMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}
void* FlippyMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 20);
}

FlippyMessage aFlippyMessage;
// FloatDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* FloatDataMessage::New() {
}

FloatDataMessage::FloatDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
FloatDataMessage::~FloatDataMessage() {
		free(Fields);
}

const char* FloatDataMessage::Name() {
		return "FloatDataMessage";
}
	
void* FloatDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* FloatDataMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

FloatDataMessage aFloatDataMessage;
// FloatingAmountMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* FloatingAmountMessage::New() {
}

FloatingAmountMessage::FloatingAmountMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aWorldPlace, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 24, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 28, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[4].fieldinfo(&aDT_INT, 36, 6, 0, 0, 32, 17, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
FloatingAmountMessage::~FloatingAmountMessage() {
		free(Fields);
}

const char* FloatingAmountMessage::Name() {
		return "FloatingAmountMessage";
}
	
void* FloatingAmountMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* FloatingAmountMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* FloatingAmountMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 24);
}
void* FloatingAmountMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 28);
}
int* FloatingAmountMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 36);
}

FloatingAmountMessage aFloatingAmountMessage;
// FloatingNumberMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* FloatingNumberMessage::New() {
}

FloatingNumberMessage::FloatingNumberMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 6, 0, 0, 32, 17, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
FloatingNumberMessage::~FloatingNumberMessage() {
		free(Fields);
}

const char* FloatingNumberMessage::Name() {
		return "FloatingNumberMessage";
}
	
void* FloatingNumberMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* FloatingNumberMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* FloatingNumberMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* FloatingNumberMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

FloatingNumberMessage aFloatingNumberMessage;
// GBIDDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GBIDDataMessage::New() {
}

GBIDDataMessage::GBIDDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_GBID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
GBIDDataMessage::~GBIDDataMessage() {
		free(Fields);
}

const char* GBIDDataMessage::Name() {
		return "GBIDDataMessage";
}
	
void* GBIDDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* GBIDDataMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

GBIDDataMessage aGBIDDataMessage;
// GameIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GameIdMessage::New() {
}

GameIdMessage::GameIdMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aGameId, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
GameIdMessage::~GameIdMessage() {
		free(Fields);
}

const char* GameIdMessage::Name() {
		return "GameIdMessage";
}
	
void* GameIdMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* GameIdMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

GameIdMessage aGameIdMessage;
// GameSetupMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GameSetupMessage::New() {
}

GameSetupMessage::GameSetupMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
GameSetupMessage::~GameSetupMessage() {
		free(Fields);
}

const char* GameSetupMessage::Name() {
		return "GameSetupMessage";
}
	
void* GameSetupMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* GameSetupMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

GameSetupMessage aGameSetupMessage;
// GameSyncedDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GameSyncedDataMessage::New() {
}

GameSyncedDataMessage::GameSyncedDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aGameSyncedData, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
GameSyncedDataMessage::~GameSyncedDataMessage() {
		free(Fields);
}

const char* GameSyncedDataMessage::Name() {
		return "GameSyncedDataMessage";
}
	
void* GameSyncedDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* GameSyncedDataMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

GameSyncedDataMessage aGameSyncedDataMessage;
// GameTestingSamplingStartMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* GameTestingSamplingStartMessage::New() {
}

GameTestingSamplingStartMessage::GameTestingSamplingStartMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
GameTestingSamplingStartMessage::~GameTestingSamplingStartMessage() {
		free(Fields);
}

const char* GameTestingSamplingStartMessage::Name() {
		return "GameTestingSamplingStartMessage";
}
	
void* GameTestingSamplingStartMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* GameTestingSamplingStartMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* GameTestingSamplingStartMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

GameTestingSamplingStartMessage aGameTestingSamplingStartMessage;
// GenericBlobMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GenericBlobMessage::New() {
}

GenericBlobMessage::GenericBlobMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
GenericBlobMessage::~GenericBlobMessage() {
		free(Fields);
}

const char* GenericBlobMessage::Name() {
		return "GenericBlobMessage";
}
	
void* GenericBlobMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* GenericBlobMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

GenericBlobMessage aGenericBlobMessage;
// GoldModifiedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GoldModifiedMessage::New() {
}

GoldModifiedMessage::GoldModifiedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
GoldModifiedMessage::~GoldModifiedMessage() {
		free(Fields);
}

const char* GoldModifiedMessage::Name() {
		return "GoldModifiedMessage";
}
	
void* GoldModifiedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* GoldModifiedMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

GoldModifiedMessage aGoldModifiedMessage;
// HearthPortalInfoMessage
//
// { unknow_field_0 }
// { snoLevelArea }
// { unknow_field_2 }


void* HearthPortalInfoMessage::New() {
}

HearthPortalInfoMessage::HearthPortalInfoMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
HearthPortalInfoMessage::~HearthPortalInfoMessage() {
		free(Fields);
}

const char* HearthPortalInfoMessage::Name() {
		return "HearthPortalInfoMessage";
}
	
void* HearthPortalInfoMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* HearthPortalInfoMessage::snoLevelArea(void *Data) {
	return (((char*)Data) + 8);
}
int* HearthPortalInfoMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

HearthPortalInfoMessage aHearthPortalInfoMessage;
// HelperDetachMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* HelperDetachMessage::New() {
}

HelperDetachMessage::HelperDetachMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
HelperDetachMessage::~HelperDetachMessage() {
		free(Fields);
}

const char* HelperDetachMessage::Name() {
		return "HelperDetachMessage";
}
	
void* HelperDetachMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* HelperDetachMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

HelperDetachMessage aHelperDetachMessage;
// HeroStateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* HeroStateMessage::New() {
}

HeroStateMessage::HeroStateMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aHeroStateData, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
HeroStateMessage::~HeroStateMessage() {
		free(Fields);
}

const char* HeroStateMessage::Name() {
		return "HeroStateMessage";
}
	
void* HeroStateMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* HeroStateMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

HeroStateMessage aHeroStateMessage;
// HirelingInfoUpdateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* HirelingInfoUpdateMessage::New() {
}

HirelingInfoUpdateMessage::HirelingInfoUpdateMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 2, 0, 0, 3, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 7, 0, 0, 127, 17, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
HirelingInfoUpdateMessage::~HirelingInfoUpdateMessage() {
		free(Fields);
}

const char* HirelingInfoUpdateMessage::Name() {
		return "HirelingInfoUpdateMessage";
}
	
void* HirelingInfoUpdateMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* HirelingInfoUpdateMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* HirelingInfoUpdateMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* HirelingInfoUpdateMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* HirelingInfoUpdateMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}

HirelingInfoUpdateMessage aHirelingInfoUpdateMessage;
// HirelingRequestLearnSkillMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* HirelingRequestLearnSkillMessage::New() {
}

HirelingRequestLearnSkillMessage::HirelingRequestLearnSkillMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
HirelingRequestLearnSkillMessage::~HirelingRequestLearnSkillMessage() {
		free(Fields);
}

const char* HirelingRequestLearnSkillMessage::Name() {
		return "HirelingRequestLearnSkillMessage";
}
	
void* HirelingRequestLearnSkillMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* HirelingRequestLearnSkillMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* HirelingRequestLearnSkillMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

HirelingRequestLearnSkillMessage aHirelingRequestLearnSkillMessage;
// HirelingSwapMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* HirelingSwapMessage::New() {
}

HirelingSwapMessage::HirelingSwapMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
HirelingSwapMessage::~HirelingSwapMessage() {
		free(Fields);
}

const char* HirelingSwapMessage::Name() {
		return "HirelingSwapMessage";
}
	
void* HirelingSwapMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* HirelingSwapMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

HirelingSwapMessage aHirelingSwapMessage;
// Int64DataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Int64DataMessage::New() {
}

Int64DataMessage::Int64DataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT64, 8, 64, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
Int64DataMessage::~Int64DataMessage() {
		free(Fields);
}

const char* Int64DataMessage::Name() {
		return "Int64DataMessage";
}
	
void* Int64DataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* Int64DataMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

Int64DataMessage aInt64DataMessage;
// IntDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* IntDataMessage::New() {
}

IntDataMessage::IntDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
IntDataMessage::~IntDataMessage() {
		free(Fields);
}

const char* IntDataMessage::Name() {
		return "IntDataMessage";
}
	
void* IntDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* IntDataMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

IntDataMessage aIntDataMessage;
// InterstitialMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* InterstitialMessage::New() {
}

InterstitialMessage::InterstitialMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, -1, 5, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
InterstitialMessage::~InterstitialMessage() {
		free(Fields);
}

const char* InterstitialMessage::Name() {
		return "InterstitialMessage";
}
	
void* InterstitialMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* InterstitialMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* InterstitialMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

InterstitialMessage aInterstitialMessage;
// InventoryLocationMessageData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* InventoryLocationMessageData::New() {
}

InventoryLocationMessageData::InventoryLocationMessageData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 4, 5, 0, -1, 28, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aIVector2D, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
InventoryLocationMessageData::~InventoryLocationMessageData() {
		free(Fields);
}

const char* InventoryLocationMessageData::Name() {
		return "InventoryLocationMessageData";
}
	
int* InventoryLocationMessageData::unknow_field_0(void *Data) {
	return (int*)(((char*)Data) + 0);
}
int* InventoryLocationMessageData::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 4);
}
void* InventoryLocationMessageData::unknow_field_2(void *Data) {
	return (((char*)Data) + 8);
}

InventoryLocationMessageData aInventoryLocationMessageData;
// InventoryRequestMoveMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* InventoryRequestMoveMessage::New() {
}

InventoryRequestMoveMessage::InventoryRequestMoveMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aInvLoc, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
InventoryRequestMoveMessage::~InventoryRequestMoveMessage() {
		free(Fields);
}

const char* InventoryRequestMoveMessage::Name() {
		return "InventoryRequestMoveMessage";
}
	
void* InventoryRequestMoveMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* InventoryRequestMoveMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* InventoryRequestMoveMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

InventoryRequestMoveMessage aInventoryRequestMoveMessage;
// InventoryRequestSocketMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* InventoryRequestSocketMessage::New() {
}

InventoryRequestSocketMessage::InventoryRequestSocketMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
InventoryRequestSocketMessage::~InventoryRequestSocketMessage() {
		free(Fields);
}

const char* InventoryRequestSocketMessage::Name() {
		return "InventoryRequestSocketMessage";
}
	
void* InventoryRequestSocketMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* InventoryRequestSocketMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* InventoryRequestSocketMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

InventoryRequestSocketMessage aInventoryRequestSocketMessage;
// InventoryRequestUseMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* InventoryRequestUseMessage::New() {
}

InventoryRequestUseMessage::InventoryRequestUseMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 2, 0, -1, 2, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aWorldPlace, 20, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
InventoryRequestUseMessage::~InventoryRequestUseMessage() {
		free(Fields);
}

const char* InventoryRequestUseMessage::Name() {
		return "InventoryRequestUseMessage";
}
	
void* InventoryRequestUseMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* InventoryRequestUseMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* InventoryRequestUseMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* InventoryRequestUseMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
void* InventoryRequestUseMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 20);
}

InventoryRequestUseMessage aInventoryRequestUseMessage;
// InventorySplitStackMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* InventorySplitStackMessage::New() {
}

InventorySplitStackMessage::InventorySplitStackMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT64, 16, 64, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aInvLoc, 24, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
InventorySplitStackMessage::~InventorySplitStackMessage() {
		free(Fields);
}

const char* InventorySplitStackMessage::Name() {
		return "InventorySplitStackMessage";
}
	
void* InventorySplitStackMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* InventorySplitStackMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* InventorySplitStackMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 16);
}
void* InventorySplitStackMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 24);
}

InventorySplitStackMessage aInventorySplitStackMessage;
// InventoryStackTransferMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* InventoryStackTransferMessage::New() {
}

InventoryStackTransferMessage::InventoryStackTransferMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT64, 16, 64, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
InventoryStackTransferMessage::~InventoryStackTransferMessage() {
		free(Fields);
}

const char* InventoryStackTransferMessage::Name() {
		return "InventoryStackTransferMessage";
}
	
void* InventoryStackTransferMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* InventoryStackTransferMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* InventoryStackTransferMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* InventoryStackTransferMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

InventoryStackTransferMessage aInventoryStackTransferMessage;
// ItemIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* ItemIdMessage::New() {
}

ItemIdMessage::ItemIdMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aItemId, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ItemIdMessage::~ItemIdMessage() {
		free(Fields);
}

const char* ItemIdMessage::Name() {
		return "ItemIdMessage";
}
	
void* ItemIdMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ItemIdMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

ItemIdMessage aItemIdMessage;
// JoinBNetGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* JoinBNetGameMessage::New() {
}

JoinBNetGameMessage::JoinBNetGameMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aEntityId, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aGameId, 24, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 48, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT64, 56, 64, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 64, 4, 0, 2, 17, 17, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 68, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_INT, 72, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
JoinBNetGameMessage::~JoinBNetGameMessage() {
		free(Fields);
}

const char* JoinBNetGameMessage::Name() {
		return "JoinBNetGameMessage";
}
	
void* JoinBNetGameMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* JoinBNetGameMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* JoinBNetGameMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 24);
}
int* JoinBNetGameMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 48);
}
void* JoinBNetGameMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 56);
}
int* JoinBNetGameMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 64);
}
int* JoinBNetGameMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 68);
}
int* JoinBNetGameMessage::unknow_field_7(void *Data) {
	return (int*)(((char*)Data) + 72);
}

JoinBNetGameMessage aJoinBNetGameMessage;
// JoinLANGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* JoinLANGameMessage::New() {
}

JoinLANGameMessage::JoinLANGameMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 12, 8, 0, 0, 0, 1, &aDT_NULL, 128);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 140, 6, 0, 0, 0, 1, &aDT_NULL, 49);
		Fields[4].fieldinfo(&aDT_INT, 192, 4, 0, 2, 17, 17, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
JoinLANGameMessage::~JoinLANGameMessage() {
		free(Fields);
}

const char* JoinLANGameMessage::Name() {
		return "JoinLANGameMessage";
}
	
void* JoinLANGameMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* JoinLANGameMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* JoinLANGameMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* JoinLANGameMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 140);
}
int* JoinLANGameMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 192);
}

JoinLANGameMessage aJoinLANGameMessage;
// KillCountMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* KillCountMessage::New() {
}

KillCountMessage::KillCountMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
KillCountMessage::~KillCountMessage() {
		free(Fields);
}

const char* KillCountMessage::Name() {
		return "KillCountMessage";
}
	
void* KillCountMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* KillCountMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* KillCountMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* KillCountMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* KillCountMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}

KillCountMessage aKillCountMessage;
// KillCounterUpdateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* KillCounterUpdateMessage::New() {
}

KillCounterUpdateMessage::KillCounterUpdateMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 2, 0, 0, 3, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
KillCounterUpdateMessage::~KillCounterUpdateMessage() {
		free(Fields);
}

const char* KillCounterUpdateMessage::Name() {
		return "KillCounterUpdateMessage";
}
	
void* KillCounterUpdateMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* KillCounterUpdateMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* KillCounterUpdateMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* KillCounterUpdateMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* KillCounterUpdateMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}

KillCounterUpdateMessage aKillCounterUpdateMessage;
// LearnedSkillMessage
//
// { unknow_field_0 }
// { aSkillSNOs }


void* LearnedSkillMessage::New() {
}

LearnedSkillMessage::LearnedSkillMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 8, 32, 8, 0, 0, 8, &aDT_SNO, 128);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
LearnedSkillMessage::~LearnedSkillMessage() {
		free(Fields);
}

const char* LearnedSkillMessage::Name() {
		return "LearnedSkillMessage";
}
	
void* LearnedSkillMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* LearnedSkillMessage::aSkillSNOs(void *Data) {
	return (((char*)Data) + 8);
}

LearnedSkillMessage aLearnedSkillMessage;
// LogoutContextMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* LogoutContextMessage::New() {
}

LogoutContextMessage::LogoutContextMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
LogoutContextMessage::~LogoutContextMessage() {
		free(Fields);
}

const char* LogoutContextMessage::Name() {
		return "LogoutContextMessage";
}
	
void* LogoutContextMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* LogoutContextMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

LogoutContextMessage aLogoutContextMessage;
// LogoutTickTimeMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* LogoutTickTimeMessage::New() {
}

LogoutTickTimeMessage::LogoutTickTimeMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
LogoutTickTimeMessage::~LogoutTickTimeMessage() {
		free(Fields);
}

const char* LogoutTickTimeMessage::Name() {
		return "LogoutTickTimeMessage";
}
	
void* LogoutTickTimeMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* LogoutTickTimeMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* LogoutTickTimeMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* LogoutTickTimeMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

LogoutTickTimeMessage aLogoutTickTimeMessage;
// LoreMessage
//
// { unknow_field_0 }
// { snoLore }


void* LoreMessage::New() {
}

LoreMessage::LoreMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
LoreMessage::~LoreMessage() {
		free(Fields);
}

const char* LoreMessage::Name() {
		return "LoreMessage";
}
	
void* LoreMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* LoreMessage::snoLore(void *Data) {
	return (((char*)Data) + 8);
}

LoreMessage aLoreMessage;
// LowHealthCombatMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* LowHealthCombatMessage::New() {
}

LowHealthCombatMessage::LowHealthCombatMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
LowHealthCombatMessage::~LowHealthCombatMessage() {
		free(Fields);
}

const char* LowHealthCombatMessage::Name() {
		return "LowHealthCombatMessage";
}
	
void* LowHealthCombatMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* LowHealthCombatMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* LowHealthCombatMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

LowHealthCombatMessage aLowHealthCombatMessage;
// MapMarkerInfoMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { m_snoStringList }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }


void* MapMarkerInfoMessage::New() {
}

MapMarkerInfoMessage::MapMarkerInfoMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 15);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aWorldPlace, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 28, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_SNO, 36, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 40, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_FLOAT, 56, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_FLOAT, 60, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_FLOAT, 64, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aDT_INT, 32, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[10].fieldinfo(&aDT_INT, 44, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[11].fieldinfo(&aDT_INT, 48, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[12].fieldinfo(&aDT_INT, 52, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[13].fieldinfo(&aDT_INT, 68, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[15 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
MapMarkerInfoMessage::~MapMarkerInfoMessage() {
		free(Fields);
}

const char* MapMarkerInfoMessage::Name() {
		return "MapMarkerInfoMessage";
}
	
void* MapMarkerInfoMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* MapMarkerInfoMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* MapMarkerInfoMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* MapMarkerInfoMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 28);
}
void* MapMarkerInfoMessage::m_snoStringList(void *Data) {
	return (((char*)Data) + 36);
}
int* MapMarkerInfoMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 40);
}
void* MapMarkerInfoMessage::unknow_field_6(void *Data) {
	return (((char*)Data) + 56);
}
void* MapMarkerInfoMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 60);
}
void* MapMarkerInfoMessage::unknow_field_8(void *Data) {
	return (((char*)Data) + 64);
}
int* MapMarkerInfoMessage::unknow_field_9(void *Data) {
	return (int*)(((char*)Data) + 32);
}
int* MapMarkerInfoMessage::unknow_field_10(void *Data) {
	return (int*)(((char*)Data) + 44);
}
int* MapMarkerInfoMessage::unknow_field_11(void *Data) {
	return (int*)(((char*)Data) + 48);
}
int* MapMarkerInfoMessage::unknow_field_12(void *Data) {
	return (int*)(((char*)Data) + 52);
}
int* MapMarkerInfoMessage::unknow_field_13(void *Data) {
	return (int*)(((char*)Data) + 68);
}

MapMarkerInfoMessage aMapMarkerInfoMessage;
// MapRevealSceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoScene }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* MapRevealSceneMessage::New() {
}

MapRevealSceneMessage::MapRevealSceneMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aPRTransform, 16, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 44, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 48, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[7 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
MapRevealSceneMessage::~MapRevealSceneMessage() {
		free(Fields);
}

const char* MapRevealSceneMessage::Name() {
		return "MapRevealSceneMessage";
}
	
void* MapRevealSceneMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* MapRevealSceneMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* MapRevealSceneMessage::snoScene(void *Data) {
	return (((char*)Data) + 12);
}
void* MapRevealSceneMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}
int* MapRevealSceneMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 44);
}
int* MapRevealSceneMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 48);
}

MapRevealSceneMessage aMapRevealSceneMessage;
// NPCInteractOptionsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { tNPCInteraction }
// { unknow_field_3 }


void* NPCInteractOptionsMessage::New() {
}

NPCInteractOptionsMessage::NPCInteractOptionsMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 12, 0, 5, 0, 0, 8, &aNPCInteraction, 20);
		Fields[3].fieldinfo(&aDT_INT, 336, 2, 0, 0, 2, 17, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
NPCInteractOptionsMessage::~NPCInteractOptionsMessage() {
		free(Fields);
}

const char* NPCInteractOptionsMessage::Name() {
		return "NPCInteractOptionsMessage";
}
	
void* NPCInteractOptionsMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* NPCInteractOptionsMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* NPCInteractOptionsMessage::tNPCInteraction(void *Data) {
	return (((char*)Data) + 12);
}
int* NPCInteractOptionsMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 336);
}

NPCInteractOptionsMessage aNPCInteractOptionsMessage;
// NetworkAddressMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* NetworkAddressMessage::New() {
}

NetworkAddressMessage::NetworkAddressMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_WORD, 12, 16, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
NetworkAddressMessage::~NetworkAddressMessage() {
		free(Fields);
}

const char* NetworkAddressMessage::Name() {
		return "NetworkAddressMessage";
}
	
void* NetworkAddressMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* NetworkAddressMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* NetworkAddressMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

NetworkAddressMessage aNetworkAddressMessage;
// NewPlayerMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { snoActorPortrait }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }


void* NewPlayerMessage::New() {
}

NewPlayerMessage::NewPlayerMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 13);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 12, 8, 0, 0, 0, 1, &aDT_NULL, 128);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 140, 7, 0, 0, 0, 1, &aDT_NULL, 101);
		Fields[4].fieldinfo(&aDT_INT, 244, 5, 0, -1, 22, 17, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 248, 3, 0, -1, 4, 17, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_SNO, 252, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_INT, 256, 7, 0, 0, 127, 17, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aHeroStateData, 260, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aDT_INT, 16904, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[10].fieldinfo(&aDT_INT, 16908, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[11].fieldinfo(&aDT_INT, 16912, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[13 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
NewPlayerMessage::~NewPlayerMessage() {
		free(Fields);
}

const char* NewPlayerMessage::Name() {
		return "NewPlayerMessage";
}
	
void* NewPlayerMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* NewPlayerMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* NewPlayerMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* NewPlayerMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 140);
}
int* NewPlayerMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 244);
}
int* NewPlayerMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 248);
}
void* NewPlayerMessage::snoActorPortrait(void *Data) {
	return (((char*)Data) + 252);
}
int* NewPlayerMessage::unknow_field_7(void *Data) {
	return (int*)(((char*)Data) + 256);
}
void* NewPlayerMessage::unknow_field_8(void *Data) {
	return (((char*)Data) + 260);
}
int* NewPlayerMessage::unknow_field_9(void *Data) {
	return (int*)(((char*)Data) + 16904);
}
int* NewPlayerMessage::unknow_field_10(void *Data) {
	return (int*)(((char*)Data) + 16908);
}
int* NewPlayerMessage::unknow_field_11(void *Data) {
	return (int*)(((char*)Data) + 16912);
}

NewPlayerMessage aNewPlayerMessage;
// PRTransformMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PRTransformMessage::New() {
}

PRTransformMessage::PRTransformMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aPRTransform, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PRTransformMessage::~PRTransformMessage() {
		free(Fields);
}

const char* PRTransformMessage::Name() {
		return "PRTransformMessage";
}
	
void* PRTransformMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* PRTransformMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

PRTransformMessage aPRTransformMessage;
// PetMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* PetMessage::New() {
}

PetMessage::PetMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 5, 0, 0, 31, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 5, 0, -1, 23, 17, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PetMessage::~PetMessage() {
		free(Fields);
}

const char* PetMessage::Name() {
		return "PetMessage";
}
	
void* PetMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PetMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PetMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* PetMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* PetMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}

PetMessage aPetMessage;
// PlasmaAttachMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlasmaAttachMessage::New() {
}

PlasmaAttachMessage::PlasmaAttachMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlasmaAttachMessage::~PlasmaAttachMessage() {
		free(Fields);
}

const char* PlasmaAttachMessage::Name() {
		return "PlasmaAttachMessage";
}
	
void* PlasmaAttachMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlasmaAttachMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlasmaAttachMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

PlasmaAttachMessage aPlasmaAttachMessage;
// PlayAnimationMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { tAnim }


void* PlayAnimationMessage::New() {
}

PlayAnimationMessage::PlayAnimationMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 4, 0, 0, 12, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_FIXEDARRAY, 24, 0, 2, 0, 0, 8, &aPlayAnimationMessageSpec, 3);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayAnimationMessage::~PlayAnimationMessage() {
		free(Fields);
}

const char* PlayAnimationMessage::Name() {
		return "PlayAnimationMessage";
}
	
void* PlayAnimationMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayAnimationMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlayAnimationMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* PlayAnimationMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}
void* PlayAnimationMessage::tAnim(void *Data) {
	return (((char*)Data) + 24);
}

PlayAnimationMessage aPlayAnimationMessage;
// PlayAnimationMessageSpec
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* PlayAnimationMessageSpec::New() {
}

PlayAnimationMessageSpec::PlayAnimationMessageSpec() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 4, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayAnimationMessageSpec::~PlayAnimationMessageSpec() {
		free(Fields);
}

const char* PlayAnimationMessageSpec::Name() {
		return "PlayAnimationMessageSpec";
}
	
int* PlayAnimationMessageSpec::unknow_field_0(void *Data) {
	return (int*)(((char*)Data) + 0);
}
void* PlayAnimationMessageSpec::unknow_field_1(void *Data) {
	return (((char*)Data) + 4);
}
int* PlayAnimationMessageSpec::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* PlayAnimationMessageSpec::unknow_field_3(void *Data) {
	return (((char*)Data) + 12);
}

PlayAnimationMessageSpec aPlayAnimationMessageSpec;
// PlayConvLineMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* PlayConvLineMessage::New() {
}

PlayConvLineMessage::PlayConvLineMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 12, 32, 0, 0, 0, 1, &aDT_INT, 9);
		Fields[3].fieldinfo(&aPlayLineParams, 48, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 164, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayConvLineMessage::~PlayConvLineMessage() {
		free(Fields);
}

const char* PlayConvLineMessage::Name() {
		return "PlayConvLineMessage";
}
	
void* PlayConvLineMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayConvLineMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* PlayConvLineMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* PlayConvLineMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 48);
}
int* PlayConvLineMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 164);
}

PlayConvLineMessage aPlayConvLineMessage;
// PlayCutsceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PlayCutsceneMessage::New() {
}

PlayCutsceneMessage::PlayCutsceneMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayCutsceneMessage::~PlayCutsceneMessage() {
		free(Fields);
}

const char* PlayCutsceneMessage::Name() {
		return "PlayCutsceneMessage";
}
	
void* PlayCutsceneMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayCutsceneMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

PlayCutsceneMessage aPlayCutsceneMessage;
// PlayEffectMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* PlayEffectMessage::New() {
}

PlayEffectMessage::PlayEffectMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 7, 0, -1, 70, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 16, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayEffectMessage::~PlayEffectMessage() {
		free(Fields);
}

const char* PlayEffectMessage::Name() {
		return "PlayEffectMessage";
}
	
void* PlayEffectMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayEffectMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlayEffectMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* PlayEffectMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

PlayEffectMessage aPlayEffectMessage;
// PlayErrorSoundMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PlayErrorSoundMessage::New() {
}

PlayErrorSoundMessage::PlayErrorSoundMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayErrorSoundMessage::~PlayErrorSoundMessage() {
		free(Fields);
}

const char* PlayErrorSoundMessage::Name() {
		return "PlayErrorSoundMessage";
}
	
void* PlayErrorSoundMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayErrorSoundMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

PlayErrorSoundMessage aPlayErrorSoundMessage;
// PlayHitEffectMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* PlayHitEffectMessage::New() {
}

PlayHitEffectMessage::PlayHitEffectMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 3, 0, -1, 6, 17, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayHitEffectMessage::~PlayHitEffectMessage() {
		free(Fields);
}

const char* PlayHitEffectMessage::Name() {
		return "PlayHitEffectMessage";
}
	
void* PlayHitEffectMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayHitEffectMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlayHitEffectMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* PlayHitEffectMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* PlayHitEffectMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}

PlayHitEffectMessage aPlayHitEffectMessage;
// PlayHitEffectOverrideMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* PlayHitEffectOverrideMessage::New() {
}

PlayHitEffectOverrideMessage::PlayHitEffectOverrideMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_SNO, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayHitEffectOverrideMessage::~PlayHitEffectOverrideMessage() {
		free(Fields);
}

const char* PlayHitEffectOverrideMessage::Name() {
		return "PlayHitEffectOverrideMessage";
}
	
void* PlayHitEffectOverrideMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayHitEffectOverrideMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlayHitEffectOverrideMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* PlayHitEffectOverrideMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

PlayHitEffectOverrideMessage aPlayHitEffectOverrideMessage;
// PlayMusicMessage
//
// { unknow_field_0 }
// { snoMusic }


void* PlayMusicMessage::New() {
}

PlayMusicMessage::PlayMusicMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayMusicMessage::~PlayMusicMessage() {
		free(Fields);
}

const char* PlayMusicMessage::Name() {
		return "PlayMusicMessage";
}
	
void* PlayMusicMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* PlayMusicMessage::snoMusic(void *Data) {
	return (((char*)Data) + 8);
}

PlayMusicMessage aPlayMusicMessage;
// PlayNonPositionalSoundMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PlayNonPositionalSoundMessage::New() {
}

PlayNonPositionalSoundMessage::PlayNonPositionalSoundMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayNonPositionalSoundMessage::~PlayNonPositionalSoundMessage() {
		free(Fields);
}

const char* PlayNonPositionalSoundMessage::Name() {
		return "PlayNonPositionalSoundMessage";
}
	
void* PlayNonPositionalSoundMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* PlayNonPositionalSoundMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

PlayNonPositionalSoundMessage aPlayNonPositionalSoundMessage;
// PlayerActorSetInitialMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerActorSetInitialMessage::New() {
}

PlayerActorSetInitialMessage::PlayerActorSetInitialMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerActorSetInitialMessage::~PlayerActorSetInitialMessage() {
		free(Fields);
}

const char* PlayerActorSetInitialMessage::Name() {
		return "PlayerActorSetInitialMessage";
}
	
void* PlayerActorSetInitialMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayerActorSetInitialMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlayerActorSetInitialMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

PlayerActorSetInitialMessage aPlayerActorSetInitialMessage;
// PlayerChangeHotbarButtonMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerChangeHotbarButtonMessage::New() {
}

PlayerChangeHotbarButtonMessage::PlayerChangeHotbarButtonMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 4, 0, -1, 8, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aHotbarButtonData, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerChangeHotbarButtonMessage::~PlayerChangeHotbarButtonMessage() {
		free(Fields);
}

const char* PlayerChangeHotbarButtonMessage::Name() {
		return "PlayerChangeHotbarButtonMessage";
}
	
void* PlayerChangeHotbarButtonMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayerChangeHotbarButtonMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* PlayerChangeHotbarButtonMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

PlayerChangeHotbarButtonMessage aPlayerChangeHotbarButtonMessage;
// PlayerDeSyncSnapMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerDeSyncSnapMessage::New() {
}

PlayerDeSyncSnapMessage::PlayerDeSyncSnapMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aWorldPlace, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 24, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerDeSyncSnapMessage::~PlayerDeSyncSnapMessage() {
		free(Fields);
}

const char* PlayerDeSyncSnapMessage::Name() {
		return "PlayerDeSyncSnapMessage";
}
	
void* PlayerDeSyncSnapMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* PlayerDeSyncSnapMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* PlayerDeSyncSnapMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 24);
}

PlayerDeSyncSnapMessage aPlayerDeSyncSnapMessage;
// PlayerEnterKnownMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerEnterKnownMessage::New() {
}

PlayerEnterKnownMessage::PlayerEnterKnownMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerEnterKnownMessage::~PlayerEnterKnownMessage() {
		free(Fields);
}

const char* PlayerEnterKnownMessage::Name() {
		return "PlayerEnterKnownMessage";
}
	
void* PlayerEnterKnownMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayerEnterKnownMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlayerEnterKnownMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

PlayerEnterKnownMessage aPlayerEnterKnownMessage;
// PlayerIndexMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PlayerIndexMessage::New() {
}

PlayerIndexMessage::PlayerIndexMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 4, 0, -1, 7, 17, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerIndexMessage::~PlayerIndexMessage() {
		free(Fields);
}

const char* PlayerIndexMessage::Name() {
		return "PlayerIndexMessage";
}
	
void* PlayerIndexMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayerIndexMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

PlayerIndexMessage aPlayerIndexMessage;
// PlayerIntValMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerIntValMessage::New() {
}

PlayerIntValMessage::PlayerIntValMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerIntValMessage::~PlayerIntValMessage() {
		free(Fields);
}

const char* PlayerIntValMessage::Name() {
		return "PlayerIntValMessage";
}
	
void* PlayerIntValMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayerIntValMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlayerIntValMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

PlayerIntValMessage aPlayerIntValMessage;
// PlayerInteractMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerInteractMessage::New() {
}

PlayerInteractMessage::PlayerInteractMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, -1, 0, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerInteractMessage::~PlayerInteractMessage() {
		free(Fields);
}

const char* PlayerInteractMessage::Name() {
		return "PlayerInteractMessage";
}
	
void* PlayerInteractMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayerInteractMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* PlayerInteractMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

PlayerInteractMessage aPlayerInteractMessage;
// PlayerQuestMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerQuestMessage::New() {
}

PlayerQuestMessage::PlayerQuestMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 4, 0, -1, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerQuestMessage::~PlayerQuestMessage() {
		free(Fields);
}

const char* PlayerQuestMessage::Name() {
		return "PlayerQuestMessage";
}
	
void* PlayerQuestMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayerQuestMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* PlayerQuestMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

PlayerQuestMessage aPlayerQuestMessage;
// PlayerWarpedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerWarpedMessage::New() {
}

PlayerWarpedMessage::PlayerWarpedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 4, 0, 0, 10, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PlayerWarpedMessage::~PlayerWarpedMessage() {
		free(Fields);
}

const char* PlayerWarpedMessage::Name() {
		return "PlayerWarpedMessage";
}
	
void* PlayerWarpedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PlayerWarpedMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* PlayerWarpedMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

PlayerWarpedMessage aPlayerWarpedMessage;
// PortalSpecifierMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PortalSpecifierMessage::New() {
}

PortalSpecifierMessage::PortalSpecifierMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aResolvedPortalDestination, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
PortalSpecifierMessage::~PortalSpecifierMessage() {
		free(Fields);
}

const char* PortalSpecifierMessage::Name() {
		return "PortalSpecifierMessage";
}
	
void* PortalSpecifierMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* PortalSpecifierMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* PortalSpecifierMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

PortalSpecifierMessage aPortalSpecifierMessage;
// ProjectileStickMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ProjectileStickMessage::New() {
}

ProjectileStickMessage::ProjectileStickMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aVector3D, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_SNO, 24, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ProjectileStickMessage::~ProjectileStickMessage() {
		free(Fields);
}

const char* ProjectileStickMessage::Name() {
		return "ProjectileStickMessage";
}
	
void* ProjectileStickMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ProjectileStickMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* ProjectileStickMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 20);
}
void* ProjectileStickMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 24);
}

ProjectileStickMessage aProjectileStickMessage;
// QuestCounterMessage
//
// { unknow_field_0 }
// { snoQuest }
// { snoLevelArea }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


void* QuestCounterMessage::New() {
}

QuestCounterMessage::QuestCounterMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 24, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 28, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
QuestCounterMessage::~QuestCounterMessage() {
		free(Fields);
}

const char* QuestCounterMessage::Name() {
		return "QuestCounterMessage";
}
	
void* QuestCounterMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* QuestCounterMessage::snoQuest(void *Data) {
	return (((char*)Data) + 8);
}
void* QuestCounterMessage::snoLevelArea(void *Data) {
	return (((char*)Data) + 12);
}
int* QuestCounterMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* QuestCounterMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}
int* QuestCounterMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 24);
}
int* QuestCounterMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 28);
}

QuestCounterMessage aQuestCounterMessage;
// QuestMeterMessage
//
// { unknow_field_0 }
// { snoQuest }
// { unknow_field_2 }
// { unknow_field_3 }


void* QuestMeterMessage::New() {
}

QuestMeterMessage::QuestMeterMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
QuestMeterMessage::~QuestMeterMessage() {
		free(Fields);
}

const char* QuestMeterMessage::Name() {
		return "QuestMeterMessage";
}
	
void* QuestMeterMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* QuestMeterMessage::snoQuest(void *Data) {
	return (((char*)Data) + 8);
}
int* QuestMeterMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* QuestMeterMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

QuestMeterMessage aQuestMeterMessage;
// QuestUpdateMessage
//
// { unknow_field_0 }
// { snoQuest }
// { snoLevelArea }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* QuestUpdateMessage::New() {
}

QuestUpdateMessage::QuestUpdateMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 24, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 20, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[7 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
QuestUpdateMessage::~QuestUpdateMessage() {
		free(Fields);
}

const char* QuestUpdateMessage::Name() {
		return "QuestUpdateMessage";
}
	
void* QuestUpdateMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* QuestUpdateMessage::snoQuest(void *Data) {
	return (((char*)Data) + 8);
}
void* QuestUpdateMessage::snoLevelArea(void *Data) {
	return (((char*)Data) + 12);
}
int* QuestUpdateMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* QuestUpdateMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 24);
}
int* QuestUpdateMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 20);
}

QuestUpdateMessage aQuestUpdateMessage;
// QuitGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* QuitGameMessage::New() {
}

QuitGameMessage::QuitGameMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
QuitGameMessage::~QuitGameMessage() {
		free(Fields);
}

const char* QuitGameMessage::Name() {
		return "QuitGameMessage";
}
	
void* QuitGameMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* QuitGameMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

QuitGameMessage aQuitGameMessage;
// RareItemNameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* RareItemNameMessage::New() {
}

RareItemNameMessage::RareItemNameMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aRareItemName, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RareItemNameMessage::~RareItemNameMessage() {
		free(Fields);
}

const char* RareItemNameMessage::Name() {
		return "RareItemNameMessage";
}
	
void* RareItemNameMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* RareItemNameMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* RareItemNameMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

RareItemNameMessage aRareItemNameMessage;
// RareMonsterNamesMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* RareMonsterNamesMessage::New() {
}

RareMonsterNamesMessage::RareMonsterNamesMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 12, 32, 0, 0, 0, 1, &aDT_GBID, 2);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 20, 32, 0, 0, 0, 1, &aDT_GBID, 8);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RareMonsterNamesMessage::~RareMonsterNamesMessage() {
		free(Fields);
}

const char* RareMonsterNamesMessage::Name() {
		return "RareMonsterNamesMessage";
}
	
void* RareMonsterNamesMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* RareMonsterNamesMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* RareMonsterNamesMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* RareMonsterNamesMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 20);
}

RareMonsterNamesMessage aRareMonsterNamesMessage;
// RemoveRagdollMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* RemoveRagdollMessage::New() {
}

RemoveRagdollMessage::RemoveRagdollMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RemoveRagdollMessage::~RemoveRagdollMessage() {
		free(Fields);
}

const char* RemoveRagdollMessage::Name() {
		return "RemoveRagdollMessage";
}
	
void* RemoveRagdollMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* RemoveRagdollMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* RemoveRagdollMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

RemoveRagdollMessage aRemoveRagdollMessage;
// RequestBuffCancelMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* RequestBuffCancelMessage::New() {
}

RequestBuffCancelMessage::RequestBuffCancelMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RequestBuffCancelMessage::~RequestBuffCancelMessage() {
		free(Fields);
}

const char* RequestBuffCancelMessage::Name() {
		return "RequestBuffCancelMessage";
}
	
void* RequestBuffCancelMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* RequestBuffCancelMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* RequestBuffCancelMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

RequestBuffCancelMessage aRequestBuffCancelMessage;
// RequestJoinBNetGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* RequestJoinBNetGameMessage::New() {
}

RequestJoinBNetGameMessage::RequestJoinBNetGameMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aGameId, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aEntityId, 32, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 48, 5, 0, -1, 22, 17, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RequestJoinBNetGameMessage::~RequestJoinBNetGameMessage() {
		free(Fields);
}

const char* RequestJoinBNetGameMessage::Name() {
		return "RequestJoinBNetGameMessage";
}
	
void* RequestJoinBNetGameMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* RequestJoinBNetGameMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* RequestJoinBNetGameMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 32);
}
int* RequestJoinBNetGameMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 48);
}

RequestJoinBNetGameMessage aRequestJoinBNetGameMessage;
// RequiredMessageHeader
//
// { unknow_field_0 }


void* RequiredMessageHeader::New() {
}

RequiredMessageHeader::RequiredMessageHeader() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 4, 9, 0, 0, 301, 17, &aDT_NULL, -1);
		Fields[2 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RequiredMessageHeader::~RequiredMessageHeader() {
		free(Fields);
}

const char* RequiredMessageHeader::Name() {
		return "RequiredMessageHeader";
}
	
int* RequiredMessageHeader::unknow_field_0(void *Data) {
	return (int*)(((char*)Data) + 4);
}

RequiredMessageHeader aRequiredMessageHeader;
// ReturnPointInfoMessage
//
// { unknow_field_0 }
// { snoLevelArea }


void* ReturnPointInfoMessage::New() {
}

ReturnPointInfoMessage::ReturnPointInfoMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
ReturnPointInfoMessage::~ReturnPointInfoMessage() {
		free(Fields);
}

const char* ReturnPointInfoMessage::Name() {
		return "ReturnPointInfoMessage";
}
	
void* ReturnPointInfoMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* ReturnPointInfoMessage::snoLevelArea(void *Data) {
	return (((char*)Data) + 8);
}

ReturnPointInfoMessage aReturnPointInfoMessage;
// RevealSceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { snoScene }
// { unknow_field_5 }
// { unknow_field_6 }
// { snoSceneGroup }
// { arAppliedLabels }


void* RevealSceneMessage::New() {
}

RevealSceneMessage::RevealSceneMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aSceneSpecification, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 220, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_SNO, 224, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aPRTransform, 228, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 256, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_SNO, 260, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_FIXEDARRAY, 268, 32, 9, 0, 0, 8, &aDT_GBID, 256);
		Fields[10 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RevealSceneMessage::~RevealSceneMessage() {
		free(Fields);
}

const char* RevealSceneMessage::Name() {
		return "RevealSceneMessage";
}
	
void* RevealSceneMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* RevealSceneMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* RevealSceneMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
int* RevealSceneMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 220);
}
void* RevealSceneMessage::snoScene(void *Data) {
	return (((char*)Data) + 224);
}
void* RevealSceneMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 228);
}
int* RevealSceneMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 256);
}
void* RevealSceneMessage::snoSceneGroup(void *Data) {
	return (((char*)Data) + 260);
}
void* RevealSceneMessage::arAppliedLabels(void *Data) {
	return (((char*)Data) + 268);
}

RevealSceneMessage aRevealSceneMessage;
// RevealTeamMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* RevealTeamMessage::New() {
}

RevealTeamMessage::RevealTeamMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 5, 0, -1, 22, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 2, 0, 0, 3, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 2, 0, -1, 1, 17, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RevealTeamMessage::~RevealTeamMessage() {
		free(Fields);
}

const char* RevealTeamMessage::Name() {
		return "RevealTeamMessage";
}
	
void* RevealTeamMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* RevealTeamMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* RevealTeamMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* RevealTeamMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}

RevealTeamMessage aRevealTeamMessage;
// RevealWorldMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* RevealWorldMessage::New() {
}

RevealWorldMessage::RevealWorldMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RevealWorldMessage::~RevealWorldMessage() {
		free(Fields);
}

const char* RevealWorldMessage::Name() {
		return "RevealWorldMessage";
}
	
void* RevealWorldMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* RevealWorldMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* RevealWorldMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

RevealWorldMessage aRevealWorldMessage;
// RitualTetherEffectMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* RitualTetherEffectMessage::New() {
}

RitualTetherEffectMessage::RitualTetherEffectMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aWorldPlace, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RitualTetherEffectMessage::~RitualTetherEffectMessage() {
		free(Fields);
}

const char* RitualTetherEffectMessage::Name() {
		return "RitualTetherEffectMessage";
}
	
void* RitualTetherEffectMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* RitualTetherEffectMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* RitualTetherEffectMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

RitualTetherEffectMessage aRitualTetherEffectMessage;
// RopeEffectMessageACDToACD
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* RopeEffectMessageACDToACD::New() {
}

RopeEffectMessageACDToACD::RopeEffectMessageACDToACD() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 5, 0, 0, 19, 17, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 24, 5, 0, 0, 19, 17, &aDT_NULL, -1);
		Fields[7 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RopeEffectMessageACDToACD::~RopeEffectMessageACDToACD() {
		free(Fields);
}

const char* RopeEffectMessageACDToACD::Name() {
		return "RopeEffectMessageACDToACD";
}
	
void* RopeEffectMessageACDToACD::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* RopeEffectMessageACDToACD::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* RopeEffectMessageACDToACD::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* RopeEffectMessageACDToACD::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* RopeEffectMessageACDToACD::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}
int* RopeEffectMessageACDToACD::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 24);
}

RopeEffectMessageACDToACD aRopeEffectMessageACDToACD;
// RopeEffectMessageACDToPlace
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* RopeEffectMessageACDToPlace::New() {
}

RopeEffectMessageACDToPlace::RopeEffectMessageACDToPlace() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 5, 0, 0, 19, 17, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aWorldPlace, 20, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
RopeEffectMessageACDToPlace::~RopeEffectMessageACDToPlace() {
		free(Fields);
}

const char* RopeEffectMessageACDToPlace::Name() {
		return "RopeEffectMessageACDToPlace";
}
	
void* RopeEffectMessageACDToPlace::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* RopeEffectMessageACDToPlace::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
int* RopeEffectMessageACDToPlace::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* RopeEffectMessageACDToPlace::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
void* RopeEffectMessageACDToPlace::unknow_field_4(void *Data) {
	return (((char*)Data) + 20);
}

RopeEffectMessageACDToPlace aRopeEffectMessageACDToPlace;
// SNODataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* SNODataMessage::New() {
}

SNODataMessage::SNODataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SNODataMessage::~SNODataMessage() {
		free(Fields);
}

const char* SNODataMessage::Name() {
		return "SNODataMessage";
}
	
void* SNODataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* SNODataMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

SNODataMessage aSNODataMessage;
// SNONameDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* SNONameDataMessage::New() {
}

SNONameDataMessage::SNONameDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aSNOName, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SNONameDataMessage::~SNONameDataMessage() {
		free(Fields);
}

const char* SNONameDataMessage::Name() {
		return "SNONameDataMessage";
}
	
void* SNONameDataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* SNONameDataMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

SNONameDataMessage aSNONameDataMessage;
// SalvageResultsMessage
//
// { unknow_field_0 }
// { gbidOriginalItem }
// { unknow_field_2 }
// { unknow_field_3 }
// { gbidNewItems }


void* SalvageResultsMessage::New() {
}

SalvageResultsMessage::SalvageResultsMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_GBID, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 4, 0, -1, 10, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_FIXEDARRAY, 20, 32, 0, 0, 0, 1, &aDT_GBID, 10);
		Fields[6 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SalvageResultsMessage::~SalvageResultsMessage() {
		free(Fields);
}

const char* SalvageResultsMessage::Name() {
		return "SalvageResultsMessage";
}
	
void* SalvageResultsMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* SalvageResultsMessage::gbidOriginalItem(void *Data) {
	return (((char*)Data) + 8);
}
int* SalvageResultsMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* SalvageResultsMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
void* SalvageResultsMessage::gbidNewItems(void *Data) {
	return (((char*)Data) + 20);
}

SalvageResultsMessage aSalvageResultsMessage;
// SavePointInfoMessage
//
// { unknow_field_0 }
// { snoLevelArea }


void* SavePointInfoMessage::New() {
}

SavePointInfoMessage::SavePointInfoMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SavePointInfoMessage::~SavePointInfoMessage() {
		free(Fields);
}

const char* SavePointInfoMessage::Name() {
		return "SavePointInfoMessage";
}
	
void* SavePointInfoMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* SavePointInfoMessage::snoLevelArea(void *Data) {
	return (((char*)Data) + 8);
}

SavePointInfoMessage aSavePointInfoMessage;
// SaviorMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* SaviorMessage::New() {
}

SaviorMessage::SaviorMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SaviorMessage::~SaviorMessage() {
		free(Fields);
}

const char* SaviorMessage::Name() {
		return "SaviorMessage";
}
	
void* SaviorMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* SaviorMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* SaviorMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

SaviorMessage aSaviorMessage;
// SecondaryAnimationPowerMessage
//
// { unknow_field_0 }
// { snoPower }
// { unknow_field_2 }


void* SecondaryAnimationPowerMessage::New() {
}

SecondaryAnimationPowerMessage::SecondaryAnimationPowerMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_OPTIONAL, 12, 0, 0, 0, 0, 1, &aAnimPreplayData, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SecondaryAnimationPowerMessage::~SecondaryAnimationPowerMessage() {
		free(Fields);
}

const char* SecondaryAnimationPowerMessage::Name() {
		return "SecondaryAnimationPowerMessage";
}
	
void* SecondaryAnimationPowerMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* SecondaryAnimationPowerMessage::snoPower(void *Data) {
	return (((char*)Data) + 8);
}
void* SecondaryAnimationPowerMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

SecondaryAnimationPowerMessage aSecondaryAnimationPowerMessage;
// SetIdleAnimationMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* SetIdleAnimationMessage::New() {
}

SetIdleAnimationMessage::SetIdleAnimationMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SetIdleAnimationMessage::~SetIdleAnimationMessage() {
		free(Fields);
}

const char* SetIdleAnimationMessage::Name() {
		return "SetIdleAnimationMessage";
}
	
void* SetIdleAnimationMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* SetIdleAnimationMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* SetIdleAnimationMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

SetIdleAnimationMessage aSetIdleAnimationMessage;
// SimpleMessage
//
// { unknow_field_0 }


void* SimpleMessage::New() {
}

SimpleMessage::SimpleMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SimpleMessage::~SimpleMessage() {
		free(Fields);
}

const char* SimpleMessage::Name() {
		return "SimpleMessage";
}
	
void* SimpleMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}

SimpleMessage aSimpleMessage;
// SocketSpellMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* SocketSpellMessage::New() {
}

SocketSpellMessage::SocketSpellMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SocketSpellMessage::~SocketSpellMessage() {
		free(Fields);
}

const char* SocketSpellMessage::Name() {
		return "SocketSpellMessage";
}
	
void* SocketSpellMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* SocketSpellMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* SocketSpellMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

SocketSpellMessage aSocketSpellMessage;
// StopConvLineMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* StopConvLineMessage::New() {
}

StopConvLineMessage::StopConvLineMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
StopConvLineMessage::~StopConvLineMessage() {
		free(Fields);
}

const char* StopConvLineMessage::Name() {
		return "StopConvLineMessage";
}
	
void* StopConvLineMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* StopConvLineMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* StopConvLineMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

StopConvLineMessage aStopConvLineMessage;
// SwapSceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* SwapSceneMessage::New() {
}

SwapSceneMessage::SwapSceneMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
SwapSceneMessage::~SwapSceneMessage() {
		free(Fields);
}

const char* SwapSceneMessage::Name() {
		return "SwapSceneMessage";
}
	
void* SwapSceneMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* SwapSceneMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* SwapSceneMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* SwapSceneMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 12);
}

SwapSceneMessage aSwapSceneMessage;
// TargetMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { snoPower }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* TargetMessage::New() {
}

TargetMessage::TargetMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 2, 0, -1, 2, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aWorldPlace, 16, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_SNO, 32, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 36, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_INT, 40, 2, 0, 0, 2, 17, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_OPTIONAL, 44, 0, 0, 0, 0, 1, &aAnimPreplayData, -1);
		Fields[9 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
TargetMessage::~TargetMessage() {
		free(Fields);
}

const char* TargetMessage::Name() {
		return "TargetMessage";
}
	
void* TargetMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* TargetMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* TargetMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* TargetMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}
void* TargetMessage::snoPower(void *Data) {
	return (((char*)Data) + 32);
}
int* TargetMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 36);
}
int* TargetMessage::unknow_field_6(void *Data) {
	return (int*)(((char*)Data) + 40);
}
void* TargetMessage::unknow_field_7(void *Data) {
	return (((char*)Data) + 44);
}

TargetMessage aTargetMessage;
// TimedEventStartedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* TimedEventStartedMessage::New() {
}

TimedEventStartedMessage::TimedEventStartedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aActiveEvent, 8, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
TimedEventStartedMessage::~TimedEventStartedMessage() {
		free(Fields);
}

const char* TimedEventStartedMessage::Name() {
		return "TimedEventStartedMessage";
}
	
void* TimedEventStartedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* TimedEventStartedMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

TimedEventStartedMessage aTimedEventStartedMessage;
// TradeMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


void* TradeMessage::New() {
}

TradeMessage::TradeMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 4, 0, 0, 9, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT64, 24, 64, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_INT, 32, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_FIXEDARRAY, 36, 32, 0, 0, 0, 1, &aDT_INT, 5);
		Fields[8 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
TradeMessage::~TradeMessage() {
		free(Fields);
}

const char* TradeMessage::Name() {
		return "TradeMessage";
}
	
void* TradeMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* TradeMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* TradeMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* TradeMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
void* TradeMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 24);
}
int* TradeMessage::unknow_field_5(void *Data) {
	return (int*)(((char*)Data) + 32);
}
void* TradeMessage::unknow_field_6(void *Data) {
	return (((char*)Data) + 36);
}

TradeMessage aTradeMessage;
// TrickleMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }


void* TrickleMessage::New() {
}

TrickleMessage::TrickleMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 17);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aWorldPlace, 16, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_OPTIONAL, 32, 4, 0, -1, 7, 17, &aDT_INT, -1);
		Fields[5].fieldinfo(&aDT_SNO, 40, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_OPTIONAL, 44, 32, 0, 0, 0, 1, &aDT_FLOAT, -1);
		Fields[7].fieldinfo(&aDT_INT, 52, 4, 0, 0, 11, 17, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_INT, 56, 6, 0, 0, 63, 17, &aDT_NULL, -1);
		Fields[9].fieldinfo(&aDT_OPTIONAL, 60, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[10].fieldinfo(&aDT_OPTIONAL, 68, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[11].fieldinfo(&aDT_OPTIONAL, 76, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[12].fieldinfo(&aDT_OPTIONAL, 84, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[13].fieldinfo(&aDT_OPTIONAL, 92, 32, 0, 0, 0, 1, &aDT_INT, -1);
		Fields[14].fieldinfo(&aDT_OPTIONAL, 100, 32, 0, 0, 0, 1, &aDT_FLOAT, -1);
		Fields[15].fieldinfo(&aDT_OPTIONAL, 108, 32, 0, 0, 0, 1, &aDT_FLOAT, -1);
		Fields[17 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
TrickleMessage::~TrickleMessage() {
		free(Fields);
}

const char* TrickleMessage::Name() {
		return "TrickleMessage";
}
	
void* TrickleMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* TrickleMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* TrickleMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}
void* TrickleMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}
void* TrickleMessage::unknow_field_4(void *Data) {
	return (((char*)Data) + 32);
}
void* TrickleMessage::unknow_field_5(void *Data) {
	return (((char*)Data) + 40);
}
void* TrickleMessage::unknow_field_6(void *Data) {
	return (((char*)Data) + 44);
}
int* TrickleMessage::unknow_field_7(void *Data) {
	return (int*)(((char*)Data) + 52);
}
int* TrickleMessage::unknow_field_8(void *Data) {
	return (int*)(((char*)Data) + 56);
}
void* TrickleMessage::unknow_field_9(void *Data) {
	return (((char*)Data) + 60);
}
void* TrickleMessage::unknow_field_10(void *Data) {
	return (((char*)Data) + 68);
}
void* TrickleMessage::unknow_field_11(void *Data) {
	return (((char*)Data) + 76);
}
void* TrickleMessage::unknow_field_12(void *Data) {
	return (((char*)Data) + 84);
}
void* TrickleMessage::unknow_field_13(void *Data) {
	return (((char*)Data) + 92);
}
void* TrickleMessage::unknow_field_14(void *Data) {
	return (((char*)Data) + 100);
}
void* TrickleMessage::unknow_field_15(void *Data) {
	return (((char*)Data) + 108);
}

TrickleMessage aTrickleMessage;
// TryChatMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* TryChatMessage::New() {
}

TryChatMessage::TryChatMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 6, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 4, 0, -1, 7, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 16, 10, 0, 0, 0, 1, &aDT_NULL, 512);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
TryChatMessage::~TryChatMessage() {
		free(Fields);
}

const char* TryChatMessage::Name() {
		return "TryChatMessage";
}
	
void* TryChatMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* TryChatMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* TryChatMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* TryChatMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

TryChatMessage aTryChatMessage;
// TryWaypointMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* TryWaypointMessage::New() {
}

TryWaypointMessage::TryWaypointMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 5, 0, -1, 25, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
TryWaypointMessage::~TryWaypointMessage() {
		free(Fields);
}

const char* TryWaypointMessage::Name() {
		return "TryWaypointMessage";
}
	
void* TryWaypointMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* TryWaypointMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* TryWaypointMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

TryWaypointMessage aTryWaypointMessage;
// UIElementMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* UIElementMessage::New() {
}

UIElementMessage::UIElementMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 4, 0, -1, 14, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
UIElementMessage::~UIElementMessage() {
		free(Fields);
}

const char* UIElementMessage::Name() {
		return "UIElementMessage";
}
	
void* UIElementMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* UIElementMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* UIElementMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

UIElementMessage aUIElementMessage;
// UInt64DataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UInt64DataMessage::New() {
}

UInt64DataMessage::UInt64DataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT64, 8, 64, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
UInt64DataMessage::~UInt64DataMessage() {
		free(Fields);
}

const char* UInt64DataMessage::Name() {
		return "UInt64DataMessage";
}
	
void* UInt64DataMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* UInt64DataMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}

UInt64DataMessage aUInt64DataMessage;
// VersionsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* VersionsMessage::New() {
}

VersionsMessage::VersionsMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 16, 6, 0, 0, 0, 1, &aDT_NULL, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
VersionsMessage::~VersionsMessage() {
		free(Fields);
}

const char* VersionsMessage::Name() {
		return "VersionsMessage";
}
	
void* VersionsMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* VersionsMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* VersionsMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* VersionsMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

VersionsMessage aVersionsMessage;
// VictimMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { snoKillerMonster }
// { snoKillerActor }
// { unknow_field_7 }
// { unknow_field_8 }
// { snoPowerDmgSource }


void* VictimMessage::New() {
}

VictimMessage::VictimMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 11);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 3, 0, 0, 7, 17, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 7, 0, 0, 100, 17, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_INT, 16, 4, 0, -1, 7, 17, &aDT_NULL, -1);
		Fields[4].fieldinfo(&aDT_INT, 20, 4, 0, -1, 11, 17, &aDT_NULL, -1);
		Fields[5].fieldinfo(&aDT_SNO, 24, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[6].fieldinfo(&aDT_SNO, 28, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[7].fieldinfo(&aDT_INT, 32, 5, 0, -1, 23, 17, &aDT_NULL, -1);
		Fields[8].fieldinfo(&aDT_FIXEDARRAY, 36, 32, 0, 0, 0, 1, &aDT_GBID, 2);
		Fields[9].fieldinfo(&aDT_SNO, 44, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[11 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
VictimMessage::~VictimMessage() {
		free(Fields);
}

const char* VictimMessage::Name() {
		return "VictimMessage";
}
	
void* VictimMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* VictimMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* VictimMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
int* VictimMessage::unknow_field_3(void *Data) {
	return (int*)(((char*)Data) + 16);
}
int* VictimMessage::unknow_field_4(void *Data) {
	return (int*)(((char*)Data) + 20);
}
void* VictimMessage::snoKillerMonster(void *Data) {
	return (((char*)Data) + 24);
}
void* VictimMessage::snoKillerActor(void *Data) {
	return (((char*)Data) + 28);
}
int* VictimMessage::unknow_field_7(void *Data) {
	return (int*)(((char*)Data) + 32);
}
void* VictimMessage::unknow_field_8(void *Data) {
	return (((char*)Data) + 36);
}
void* VictimMessage::snoPowerDmgSource(void *Data) {
	return (((char*)Data) + 44);
}

VictimMessage aVictimMessage;
// VisualInventoryMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* VisualInventoryMessage::New() {
}

VisualInventoryMessage::VisualInventoryMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aVisualEquipment, 12, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
VisualInventoryMessage::~VisualInventoryMessage() {
		free(Fields);
}

const char* VisualInventoryMessage::Name() {
		return "VisualInventoryMessage";
}
	
void* VisualInventoryMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* VisualInventoryMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
void* VisualInventoryMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

VisualInventoryMessage aVisualInventoryMessage;
// WaypointActivatedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* WaypointActivatedMessage::New() {
}

WaypointActivatedMessage::WaypointActivatedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3].fieldinfo(&aDT_SNO, 16, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
WaypointActivatedMessage::~WaypointActivatedMessage() {
		free(Fields);
}

const char* WaypointActivatedMessage::Name() {
		return "WaypointActivatedMessage";
}
	
void* WaypointActivatedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* WaypointActivatedMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* WaypointActivatedMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}
void* WaypointActivatedMessage::unknow_field_3(void *Data) {
	return (((char*)Data) + 16);
}

WaypointActivatedMessage aWaypointActivatedMessage;
// WeatherOverrideMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* WeatherOverrideMessage::New() {
}

WeatherOverrideMessage::WeatherOverrideMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
WeatherOverrideMessage::~WeatherOverrideMessage() {
		free(Fields);
}

const char* WeatherOverrideMessage::Name() {
		return "WeatherOverrideMessage";
}
	
void* WeatherOverrideMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* WeatherOverrideMessage::unknow_field_1(void *Data) {
	return (((char*)Data) + 8);
}
void* WeatherOverrideMessage::unknow_field_2(void *Data) {
	return (((char*)Data) + 12);
}

WeatherOverrideMessage aWeatherOverrideMessage;
// WorldDeletedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* WorldDeletedMessage::New() {
}

WorldDeletedMessage::WorldDeletedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
WorldDeletedMessage::~WorldDeletedMessage() {
		free(Fields);
}

const char* WorldDeletedMessage::Name() {
		return "WorldDeletedMessage";
}
	
void* WorldDeletedMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* WorldDeletedMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}

WorldDeletedMessage aWorldDeletedMessage;
// WorldLocationMessageData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* WorldLocationMessageData::New() {
}

WorldLocationMessageData::WorldLocationMessageData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aPRTransform, 4, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 32, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
WorldLocationMessageData::~WorldLocationMessageData() {
		free(Fields);
}

const char* WorldLocationMessageData::Name() {
		return "WorldLocationMessageData";
}
	
void* WorldLocationMessageData::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
void* WorldLocationMessageData::unknow_field_1(void *Data) {
	return (((char*)Data) + 4);
}
int* WorldLocationMessageData::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 32);
}

WorldLocationMessageData aWorldLocationMessageData;
// WorldStatusMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* WorldStatusMessage::New() {
}

WorldStatusMessage::WorldStatusMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[1].fieldinfo(&aDT_INT, 8, 32, 0, 0, 0, 1, &aDT_NULL, -1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1, 0, 0, 1, 17, &aDT_NULL, -1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0, 0, 0, 0, 0, NULL,0);
	}
WorldStatusMessage::~WorldStatusMessage() {
		free(Fields);
}

const char* WorldStatusMessage::Name() {
		return "WorldStatusMessage";
}
	
void* WorldStatusMessage::unknow_field_0(void *Data) {
	return (((char*)Data) + 0);
}
int* WorldStatusMessage::unknow_field_1(void *Data) {
	return (int*)(((char*)Data) + 8);
}
int* WorldStatusMessage::unknow_field_2(void *Data) {
	return (int*)(((char*)Data) + 12);
}

WorldStatusMessage aWorldStatusMessage;