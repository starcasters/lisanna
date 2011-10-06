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

#include "Debug.h"

using namespace std;

// Monster
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* Monster::New() {
}

Monster::Monster() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
Monster::~Monster() {
		free(Fields);
}

const char* Monster::Name() {
		return "Monster";
}
	
void* Monster::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Monster::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* Monster::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* Monster::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
int* Monster::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}

Monster aMonster;
// Monster
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* Monster::New() {
}

Monster::Monster() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
Monster::~Monster() {
		free(Fields);
}

const char* Monster::Name() {
		return "Monster";
}
	
void* Monster::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Monster::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* Monster::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* Monster::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
int* Monster::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}

Monster aMonster;