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

#include "Common.h"

using namespace std;

// PRTransform
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PRTransform::New() {
}

PRTransform::PRTransform() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aQuaternion, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 16, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PRTransform::~PRTransform() {
		free(Fields);
}

const char* PRTransform::Name() {
		return "PRTransform";
}
	
void* PRTransform::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PRTransform::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}

PRTransform aPRTransform;
// PRSTransform
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PRSTransform::New() {
}

PRSTransform::PRSTransform() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aQuaternion, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 16, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PRSTransform::~PRSTransform() {
		free(Fields);
}

const char* PRSTransform::Name() {
		return "PRSTransform";
}
	
void* PRSTransform::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PRSTransform::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* PRSTransform::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

PRSTransform aPRSTransform;
// RGBAColor
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* RGBAColor::New() {
}

RGBAColor::RGBAColor() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_BYTE, 0, 8);
		Fields[1].fieldinfo(&aDT_BYTE, 1, 8);
		Fields[2].fieldinfo(&aDT_BYTE, 2, 8);
		Fields[3].fieldinfo(&aDT_BYTE, 3, 8);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
RGBAColor::~RGBAColor() {
		free(Fields);
}

const char* RGBAColor::Name() {
		return "RGBAColor";
}
	
void* RGBAColor::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* RGBAColor::unknow_field_1(void *Data) {
	return ((char*)Data) + 1;
}
void* RGBAColor::unknow_field_2(void *Data) {
	return ((char*)Data) + 2;
}
void* RGBAColor::unknow_field_3(void *Data) {
	return ((char*)Data) + 3;
}

RGBAColor aRGBAColor;
// RGBAColorValue
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* RGBAColorValue::New() {
}

RGBAColorValue::RGBAColorValue() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
RGBAColorValue::~RGBAColorValue() {
		free(Fields);
}

const char* RGBAColorValue::Name() {
		return "RGBAColorValue";
}
	
void* RGBAColorValue::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* RGBAColorValue::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* RGBAColorValue::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* RGBAColorValue::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}

RGBAColorValue aRGBAColorValue;
// SerializeData
//
// { unknow_field_0 }
// { unknow_field_1 }


void* SerializeData::New() {
}

SerializeData::SerializeData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SerializeData::~SerializeData() {
		free(Fields);
}

const char* SerializeData::Name() {
		return "SerializeData";
}
	
int* SerializeData::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* SerializeData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

SerializeData aSerializeData;
// IVector2D
//
// { unknow_field_0 }
// { unknow_field_1 }


void* IVector2D::New() {
}

IVector2D::IVector2D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
IVector2D::~IVector2D() {
		free(Fields);
}

const char* IVector2D::Name() {
		return "IVector2D";
}
	
int* IVector2D::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* IVector2D::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

IVector2D aIVector2D;
// Vector2D
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Vector2D::New() {
}

Vector2D::Vector2D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Vector2D::~Vector2D() {
		free(Fields);
}

const char* Vector2D::Name() {
		return "Vector2D";
}
	
void* Vector2D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Vector2D::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

Vector2D aVector2D;
// Vector3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* Vector3D::New() {
}

Vector3D::Vector3D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
Vector3D::~Vector3D() {
		free(Fields);
}

const char* Vector3D::Name() {
		return "Vector3D";
}
	
void* Vector3D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Vector3D::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* Vector3D::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

Vector3D aVector3D;
// Vector4D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* Vector4D::New() {
}

Vector4D::Vector4D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
Vector4D::~Vector4D() {
		free(Fields);
}

const char* Vector4D::Name() {
		return "Vector4D";
}
	
void* Vector4D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Vector4D::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* Vector4D::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* Vector4D::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}

Vector4D aVector4D;
// AABB
//
// { unknow_field_0 }
// { unknow_field_1 }


void* AABB::New() {
}

AABB::AABB() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 12, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
AABB::~AABB() {
		free(Fields);
}

const char* AABB::Name() {
		return "AABB";
}
	
void* AABB::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AABB::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}

AABB aAABB;
// OBB
//
// { unknow_field_0 }
// { unknow_field_1 }


void* OBB::New() {
}

OBB::OBB() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aPRTransform, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 28, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
OBB::~OBB() {
		free(Fields);
}

const char* OBB::Name() {
		return "OBB";
}
	
void* OBB::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* OBB::unknow_field_1(void *Data) {
	return ((char*)Data) + 28;
}

OBB aOBB;
// Circle
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Circle::New() {
}

Circle::Circle() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector2D, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Circle::~Circle() {
		free(Fields);
}

const char* Circle::Name() {
		return "Circle";
}
	
void* Circle::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Circle::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

Circle aCircle;
// Sphere
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Sphere::New() {
}

Sphere::Sphere() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Sphere::~Sphere() {
		free(Fields);
}

const char* Sphere::Name() {
		return "Sphere";
}
	
void* Sphere::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Sphere::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}

Sphere aSphere;
// Quaternion
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Quaternion::New() {
}

Quaternion::Quaternion() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[1].fieldinfo(&aVector3D, 0, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Quaternion::~Quaternion() {
		free(Fields);
}

const char* Quaternion::Name() {
		return "Quaternion";
}
	
void* Quaternion::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}
void* Quaternion::unknow_field_1(void *Data) {
	return ((char*)Data) + 0;
}

Quaternion aQuaternion;
// Quaternion16
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* Quaternion16::New() {
}

Quaternion16::Quaternion16() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_WORD, 0, 16);
		Fields[1].fieldinfo(&aDT_WORD, 2, 16);
		Fields[2].fieldinfo(&aDT_WORD, 4, 16);
		Fields[3].fieldinfo(&aDT_WORD, 6, 16);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
Quaternion16::~Quaternion16() {
		free(Fields);
}

const char* Quaternion16::Name() {
		return "Quaternion16";
}
	
void* Quaternion16::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Quaternion16::unknow_field_1(void *Data) {
	return ((char*)Data) + 2;
}
void* Quaternion16::unknow_field_2(void *Data) {
	return ((char*)Data) + 4;
}
void* Quaternion16::unknow_field_3(void *Data) {
	return ((char*)Data) + 6;
}

Quaternion16 aQuaternion16;
// AxialCylinder
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AxialCylinder::New() {
}

AxialCylinder::AxialCylinder() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AxialCylinder::~AxialCylinder() {
		free(Fields);
}

const char* AxialCylinder::Name() {
		return "AxialCylinder";
}
	
void* AxialCylinder::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AxialCylinder::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* AxialCylinder::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

AxialCylinder aAxialCylinder;
// Cylinder
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* Cylinder::New() {
}

Cylinder::Cylinder() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 12, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
Cylinder::~Cylinder() {
		free(Fields);
}

const char* Cylinder::Name() {
		return "Cylinder";
}
	
void* Cylinder::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Cylinder::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* Cylinder::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}

Cylinder aCylinder;
// Capsule
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* Capsule::New() {
}

Capsule::Capsule() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 12, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
Capsule::~Capsule() {
		free(Fields);
}

const char* Capsule::Name() {
		return "Capsule";
}
	
void* Capsule::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Capsule::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* Capsule::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}

Capsule aCapsule;
// Ray3D
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Ray3D::New() {
}

Ray3D::Ray3D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 12, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Ray3D::~Ray3D() {
		free(Fields);
}

const char* Ray3D::Name() {
		return "Ray3D";
}
	
void* Ray3D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Ray3D::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}

Ray3D aRay3D;
// LineSeg3D
//
// { unknow_field_0 }
// { unknow_field_1 }


void* LineSeg3D::New() {
}

LineSeg3D::LineSeg3D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRay3D, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LineSeg3D::~LineSeg3D() {
		free(Fields);
}

const char* LineSeg3D::Name() {
		return "LineSeg3D";
}
	
void* LineSeg3D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* LineSeg3D::unknow_field_1(void *Data) {
	return ((char*)Data) + 24;
}

LineSeg3D aLineSeg3D;
// Matrix3x3
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


void* Matrix3x3::New() {
}

Matrix3x3::Matrix3x3() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 32, 32);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
Matrix3x3::~Matrix3x3() {
		free(Fields);
}

const char* Matrix3x3::Name() {
		return "Matrix3x3";
}
	
void* Matrix3x3::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Matrix3x3::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* Matrix3x3::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* Matrix3x3::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* Matrix3x3::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* Matrix3x3::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* Matrix3x3::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
void* Matrix3x3::unknow_field_7(void *Data) {
	return ((char*)Data) + 28;
}
void* Matrix3x3::unknow_field_8(void *Data) {
	return ((char*)Data) + 32;
}

Matrix3x3 aMatrix3x3;
// Matrix4x4
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


void* Matrix4x4::New() {
}

Matrix4x4::Matrix4x4() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 17);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 32, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 44, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 52, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 60, 32);
		Fields[17 - 1].fieldinfo(NULL, 0, 0);
	}
Matrix4x4::~Matrix4x4() {
		free(Fields);
}

const char* Matrix4x4::Name() {
		return "Matrix4x4";
}
	
void* Matrix4x4::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Matrix4x4::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* Matrix4x4::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* Matrix4x4::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* Matrix4x4::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* Matrix4x4::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* Matrix4x4::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
void* Matrix4x4::unknow_field_7(void *Data) {
	return ((char*)Data) + 28;
}
void* Matrix4x4::unknow_field_8(void *Data) {
	return ((char*)Data) + 32;
}
void* Matrix4x4::unknow_field_9(void *Data) {
	return ((char*)Data) + 36;
}
void* Matrix4x4::unknow_field_10(void *Data) {
	return ((char*)Data) + 40;
}
void* Matrix4x4::unknow_field_11(void *Data) {
	return ((char*)Data) + 44;
}
void* Matrix4x4::unknow_field_12(void *Data) {
	return ((char*)Data) + 48;
}
void* Matrix4x4::unknow_field_13(void *Data) {
	return ((char*)Data) + 52;
}
void* Matrix4x4::unknow_field_14(void *Data) {
	return ((char*)Data) + 56;
}
void* Matrix4x4::unknow_field_15(void *Data) {
	return ((char*)Data) + 60;
}

Matrix4x4 aMatrix4x4;
// ConstraintParameters
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
// { unknow_field_17 }
// { unknow_field_18 }


void* ConstraintParameters::New() {
}

ConstraintParameters::ConstraintParameters() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 20);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_INT, 64, 32);
		Fields[2].fieldinfo(&aDT_INT, 68, 32);
		Fields[3].fieldinfo(&aDT_INT, 72, 32);
		Fields[4].fieldinfo(&aDT_INT, 76, 32);
		Fields[5].fieldinfo(&aPRTransform, 80, 0);
		Fields[6].fieldinfo(&aVector3D, 108, 0);
		Fields[7].fieldinfo(&aPRTransform, 120, 0);
		Fields[8].fieldinfo(&aPRTransform, 148, 0);
		Fields[9].fieldinfo(&aDT_FLOAT, 176, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 180, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 184, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 188, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 192, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 196, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 200, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 204, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 208, 32);
		Fields[18].fieldinfo(&aDT_CHARARRAY, 212, 7);
		Fields[20 - 1].fieldinfo(NULL, 0, 0);
	}
ConstraintParameters::~ConstraintParameters() {
		free(Fields);
}

const char* ConstraintParameters::Name() {
		return "ConstraintParameters";
}
	
void* ConstraintParameters::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ConstraintParameters::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 64;
}
int* ConstraintParameters::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 68;
}
int* ConstraintParameters::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 72;
}
int* ConstraintParameters::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 76;
}
void* ConstraintParameters::unknow_field_5(void *Data) {
	return ((char*)Data) + 80;
}
void* ConstraintParameters::unknow_field_6(void *Data) {
	return ((char*)Data) + 108;
}
void* ConstraintParameters::unknow_field_7(void *Data) {
	return ((char*)Data) + 120;
}
void* ConstraintParameters::unknow_field_8(void *Data) {
	return ((char*)Data) + 148;
}
void* ConstraintParameters::unknow_field_9(void *Data) {
	return ((char*)Data) + 176;
}
void* ConstraintParameters::unknow_field_10(void *Data) {
	return ((char*)Data) + 180;
}
void* ConstraintParameters::unknow_field_11(void *Data) {
	return ((char*)Data) + 184;
}
void* ConstraintParameters::unknow_field_12(void *Data) {
	return ((char*)Data) + 188;
}
void* ConstraintParameters::unknow_field_13(void *Data) {
	return ((char*)Data) + 192;
}
void* ConstraintParameters::unknow_field_14(void *Data) {
	return ((char*)Data) + 196;
}
void* ConstraintParameters::unknow_field_15(void *Data) {
	return ((char*)Data) + 200;
}
void* ConstraintParameters::unknow_field_16(void *Data) {
	return ((char*)Data) + 204;
}
void* ConstraintParameters::unknow_field_17(void *Data) {
	return ((char*)Data) + 208;
}
void* ConstraintParameters::unknow_field_18(void *Data) {
	return ((char*)Data) + 212;
}

ConstraintParameters aConstraintParameters;
// OctreeCube
//
// { unknow_field_0 }
// { unknow_field_1 }


void* OctreeCube::New() {
}

OctreeCube::OctreeCube() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
OctreeCube::~OctreeCube() {
		free(Fields);
}

const char* OctreeCube::Name() {
		return "OctreeCube";
}
	
void* OctreeCube::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* OctreeCube::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}

OctreeCube aOctreeCube;
// OctreeNode
//
// { unknow_field_0 }
// { unknow_field_1 }


void* OctreeNode::New() {
}

OctreeNode::OctreeNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aOctreeCube, 0, 0);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 16, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
OctreeNode::~OctreeNode() {
		free(Fields);
}

const char* OctreeNode::Name() {
		return "OctreeNode";
}
	
void* OctreeNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* OctreeNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}

OctreeNode aOctreeNode;
// OctreeLeaf
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* OctreeLeaf::New() {
}

OctreeLeaf::OctreeLeaf() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aOctreeCube, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
OctreeLeaf::~OctreeLeaf() {
		free(Fields);
}

const char* OctreeLeaf::Name() {
		return "OctreeLeaf";
}
	
void* OctreeLeaf::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* OctreeLeaf::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* OctreeLeaf::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}

OctreeLeaf aOctreeLeaf;
// OctreePrimitive
//
// { unknow_field_0 }
// { unknow_field_1 }


void* OctreePrimitive::New() {
}

OctreePrimitive::OctreePrimitive() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
OctreePrimitive::~OctreePrimitive() {
		free(Fields);
}

const char* OctreePrimitive::Name() {
		return "OctreePrimitive";
}
	
int* OctreePrimitive::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* OctreePrimitive::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

OctreePrimitive aOctreePrimitive;
// Octree
//
// { nMaxNodes }
// { nMaxLeaves }
// { nMaxPrimitives }
// { nNodeCount }
// { nLeafCount }
// { nPrimitiveCount }
// { serNodes }
// { unknow_field_7 }
// { serLeaves }
// { unknow_field_9 }
// { serPrimitives }
// { unknow_field_11 }


void* Octree::New() {
}

Octree::Octree() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 13);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aSerializeData, 24, 0);
		Fields[7].fieldinfo(&aDT_VARIABLEARRAY, 32, 0);
		Fields[8].fieldinfo(&aSerializeData, 40, 0);
		Fields[9].fieldinfo(&aDT_VARIABLEARRAY, 48, 0);
		Fields[10].fieldinfo(&aSerializeData, 56, 0);
		Fields[11].fieldinfo(&aDT_VARIABLEARRAY, 64, 0);
		Fields[13 - 1].fieldinfo(NULL, 0, 0);
	}
Octree::~Octree() {
		free(Fields);
}

const char* Octree::Name() {
		return "Octree";
}
	
int* Octree::nMaxNodes(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* Octree::nMaxLeaves(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* Octree::nMaxPrimitives(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* Octree::nNodeCount(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Octree::nLeafCount(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* Octree::nPrimitiveCount(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* Octree::serNodes(void *Data) {
	return ((char*)Data) + 24;
}
void* Octree::unknow_field_7(void *Data) {
	return ((char*)Data) + 32;
}
void* Octree::serLeaves(void *Data) {
	return ((char*)Data) + 40;
}
void* Octree::unknow_field_9(void *Data) {
	return ((char*)Data) + 48;
}
void* Octree::serPrimitives(void *Data) {
	return ((char*)Data) + 56;
}
void* Octree::unknow_field_11(void *Data) {
	return ((char*)Data) + 64;
}

Octree aOctree;
// Plane
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Plane::New() {
}

Plane::Plane() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Plane::~Plane() {
		free(Fields);
}

const char* Plane::Name() {
		return "Plane";
}
	
void* Plane::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Plane::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}

Plane aPlane;
// Shape
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


void* Shape::New() {
}

Shape::Shape() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 13);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[7].fieldinfo(&aConvexHull, 28, 0);
		Fields[8].fieldinfo(&aOBB, 132, 0);
		Fields[9].fieldinfo(&aSphere, 172, 0);
		Fields[10].fieldinfo(&aCylinder, 188, 0);
		Fields[11].fieldinfo(&aCapsule, 216, 0);
		Fields[13 - 1].fieldinfo(NULL, 0, 0);
	}
Shape::~Shape() {
		free(Fields);
}

const char* Shape::Name() {
		return "Shape";
}
	
int* Shape::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* Shape::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* Shape::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* Shape::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Shape::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* Shape::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* Shape::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
void* Shape::unknow_field_7(void *Data) {
	return ((char*)Data) + 28;
}
void* Shape::unknow_field_8(void *Data) {
	return ((char*)Data) + 132;
}
void* Shape::unknow_field_9(void *Data) {
	return ((char*)Data) + 172;
}
void* Shape::unknow_field_10(void *Data) {
	return ((char*)Data) + 188;
}
void* Shape::unknow_field_11(void *Data) {
	return ((char*)Data) + 216;
}

Shape aShape;
// Triangle3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* Triangle3D::New() {
}

Triangle3D::Triangle3D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 12, 0);
		Fields[2].fieldinfo(&aVector3D, 24, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
Triangle3D::~Triangle3D() {
		free(Fields);
}

const char* Triangle3D::Name() {
		return "Triangle3D";
}
	
void* Triangle3D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Triangle3D::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* Triangle3D::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}

Triangle3D aTriangle3D;
// IndexedTriangle
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* IndexedTriangle::New() {
}

IndexedTriangle::IndexedTriangle() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
IndexedTriangle::~IndexedTriangle() {
		free(Fields);
}

const char* IndexedTriangle::Name() {
		return "IndexedTriangle";
}
	
int* IndexedTriangle::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* IndexedTriangle::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* IndexedTriangle::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

IndexedTriangle aIndexedTriangle;
// ConvexHull
//
// { unknow_field_0 }
// { serVertices }
// { unknow_field_2 }
// { unknow_field_3 }
// { serTriangles }
// { unknow_field_5 }
// { unknow_field_6 }
// { serPlanes }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }


void* ConvexHull::New() {
}

ConvexHull::ConvexHull() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 4, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aSerializeData, 20, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[6].fieldinfo(&aDT_INT, 32, 32);
		Fields[7].fieldinfo(&aSerializeData, 36, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 44, 0);
		Fields[9].fieldinfo(&aMatrix3x3, 48, 0);
		Fields[10].fieldinfo(&aVector3D, 84, 0);
		Fields[11].fieldinfo(&aDT_FLOAT, 96, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 100, 32);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
ConvexHull::~ConvexHull() {
		free(Fields);
}

const char* ConvexHull::Name() {
		return "ConvexHull";
}
	
int* ConvexHull::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* ConvexHull::serVertices(void *Data) {
	return ((char*)Data) + 4;
}
void* ConvexHull::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* ConvexHull::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* ConvexHull::serTriangles(void *Data) {
	return ((char*)Data) + 20;
}
void* ConvexHull::unknow_field_5(void *Data) {
	return ((char*)Data) + 28;
}
int* ConvexHull::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* ConvexHull::serPlanes(void *Data) {
	return ((char*)Data) + 36;
}
void* ConvexHull::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}
void* ConvexHull::unknow_field_9(void *Data) {
	return ((char*)Data) + 48;
}
void* ConvexHull::unknow_field_10(void *Data) {
	return ((char*)Data) + 84;
}
void* ConvexHull::unknow_field_11(void *Data) {
	return ((char*)Data) + 96;
}
void* ConvexHull::unknow_field_12(void *Data) {
	return ((char*)Data) + 100;
}

ConvexHull aConvexHull;
// SNOFileHeader
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* SNOFileHeader::New() {
}

SNOFileHeader::SNOFileHeader() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
SNOFileHeader::~SNOFileHeader() {
		free(Fields);
}

const char* SNOFileHeader::Name() {
		return "SNOFileHeader";
}
	
int* SNOFileHeader::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* SNOFileHeader::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* SNOFileHeader::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* SNOFileHeader::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

SNOFileHeader aSNOFileHeader;
// SNOEntry
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* SNOEntry::New() {
}

SNOEntry::SNOEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO_GROUP, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 8, 8);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SNOEntry::~SNOEntry() {
		free(Fields);
}

const char* SNOEntry::Name() {
		return "SNOEntry";
}
	
void* SNOEntry::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* SNOEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* SNOEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

SNOEntry aSNOEntry;
// GameSyncedData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* GameSyncedData::New() {
}

GameSyncedData::GameSyncedData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 1);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 52, 32);
		Fields[3].fieldinfo(&aDT_INT, 56, 32);
		Fields[4].fieldinfo(&aDT_INT, 60, 32);
		Fields[5].fieldinfo(&aDT_INT, 48, 32);
		Fields[6].fieldinfo(&aDT_FIXEDARRAY, 72, 32);
		Fields[7].fieldinfo(&aDT_FIXEDARRAY, 80, 32);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
GameSyncedData::~GameSyncedData() {
		free(Fields);
}

const char* GameSyncedData::Name() {
		return "GameSyncedData";
}
	
int* GameSyncedData::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* GameSyncedData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* GameSyncedData::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* GameSyncedData::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* GameSyncedData::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 60;
}
int* GameSyncedData::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 48;
}
void* GameSyncedData::unknow_field_6(void *Data) {
	return ((char*)Data) + 72;
}
void* GameSyncedData::unknow_field_7(void *Data) {
	return ((char*)Data) + 80;
}

GameSyncedData aGameSyncedData;
// GameSyncedDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GameSyncedDataMessage::New() {
}

GameSyncedDataMessage::GameSyncedDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aGameSyncedData, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
GameSyncedDataMessage::~GameSyncedDataMessage() {
		free(Fields);
}

const char* GameSyncedDataMessage::Name() {
		return "GameSyncedDataMessage";
}
	
void* GameSyncedDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* GameSyncedDataMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

GameSyncedDataMessage aGameSyncedDataMessage;
// EntityId
//
// { unknow_field_0 }
// { unknow_field_1 }


void* EntityId::New() {
}

EntityId::EntityId() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT64, 0, 64);
		Fields[1].fieldinfo(&aDT_INT64, 8, 64);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
EntityId::~EntityId() {
		free(Fields);
}

const char* EntityId::Name() {
		return "EntityId";
}
	
void* EntityId::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* EntityId::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

EntityId aEntityId;
// EntityIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* EntityIdMessage::New() {
}

EntityIdMessage::EntityIdMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aEntityId, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
EntityIdMessage::~EntityIdMessage() {
		free(Fields);
}

const char* EntityIdMessage::Name() {
		return "EntityIdMessage";
}
	
void* EntityIdMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* EntityIdMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

EntityIdMessage aEntityIdMessage;
// GameId
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* GameId::New() {
}

GameId::GameId() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT64, 0, 64);
		Fields[1].fieldinfo(&aDT_INT64, 8, 64);
		Fields[2].fieldinfo(&aDT_INT64, 16, 64);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
GameId::~GameId() {
		free(Fields);
}

const char* GameId::Name() {
		return "GameId";
}
	
void* GameId::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* GameId::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* GameId::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

GameId aGameId;
// GameIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GameIdMessage::New() {
}

GameIdMessage::GameIdMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aGameId, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
GameIdMessage::~GameIdMessage() {
		free(Fields);
}

const char* GameIdMessage::Name() {
		return "GameIdMessage";
}
	
void* GameIdMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* GameIdMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

GameIdMessage aGameIdMessage;
// ItemId
//
// { unknow_field_0 }
// { unknow_field_1 }


void* ItemId::New() {
}

ItemId::ItemId() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT64, 0, 64);
		Fields[1].fieldinfo(&aDT_INT64, 8, 64);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ItemId::~ItemId() {
		free(Fields);
}

const char* ItemId::Name() {
		return "ItemId";
}
	
void* ItemId::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ItemId::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ItemId aItemId;
// ItemIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* ItemIdMessage::New() {
}

ItemIdMessage::ItemIdMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aItemId, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ItemIdMessage::~ItemIdMessage() {
		free(Fields);
}

const char* ItemIdMessage::Name() {
		return "ItemIdMessage";
}
	
void* ItemIdMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ItemIdMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ItemIdMessage aItemIdMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_GBID, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
EnchantItemMessage::~EnchantItemMessage() {
		free(Fields);
}

const char* EnchantItemMessage::Name() {
		return "EnchantItemMessage";
}
	
void* EnchantItemMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* EnchantItemMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* EnchantItemMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

EnchantItemMessage aEnchantItemMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_GBID, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
CraftingResultsMessage::~CraftingResultsMessage() {
		free(Fields);
}

const char* CraftingResultsMessage::Name() {
		return "CraftingResultsMessage";
}
	
void* CraftingResultsMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* CraftingResultsMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* CraftingResultsMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* CraftingResultsMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

CraftingResultsMessage aCraftingResultsMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
CrafterLevelUpMessage::~CrafterLevelUpMessage() {
		free(Fields);
}

const char* CrafterLevelUpMessage::Name() {
		return "CrafterLevelUpMessage";
}
	
void* CrafterLevelUpMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* CrafterLevelUpMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* CrafterLevelUpMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* CrafterLevelUpMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

CrafterLevelUpMessage aCrafterLevelUpMessage;
// RareItemName
//
// { unknow_field_0 }
// { snoAffixStringList }
// { unknow_field_2 }
// { unknow_field_3 }


void* RareItemName::New() {
}

RareItemName::RareItemName() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 1);
		Fields[1].fieldinfo(&aDT_SNO, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
RareItemName::~RareItemName() {
		free(Fields);
}

const char* RareItemName::Name() {
		return "RareItemName";
}
	
int* RareItemName::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* RareItemName::snoAffixStringList(void *Data) {
	return ((char*)Data) + 4;
}
int* RareItemName::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* RareItemName::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

RareItemName aRareItemName;
// AttributeSpecifier
//
// { unknow_field_0 }
// { SNOParam }
// { serAttributeFormula }
// { Formula }


void* AttributeSpecifier::New() {
}

AttributeSpecifier::AttributeSpecifier() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_TRANSLATEABLE, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 4, 32);
		Fields[2].fieldinfo(&aSerializeData, 16, 0);
		Fields[3].fieldinfo(&aDT_FORMULA, 8, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
AttributeSpecifier::~AttributeSpecifier() {
		free(Fields);
}

const char* AttributeSpecifier::Name() {
		return "AttributeSpecifier";
}
	
void* AttributeSpecifier::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AttributeSpecifier::SNOParam(void *Data) {
	return ((char*)Data) + 4;
}
void* AttributeSpecifier::serAttributeFormula(void *Data) {
	return ((char*)Data) + 16;
}
void* AttributeSpecifier::Formula(void *Data) {
	return ((char*)Data) + 8;
}

AttributeSpecifier aAttributeSpecifier;
// GBHandle
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GBHandle::New() {
}

GBHandle::GBHandle() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 6);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
GBHandle::~GBHandle() {
		free(Fields);
}

const char* GBHandle::Name() {
		return "GBHandle";
}
	
int* GBHandle::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* GBHandle::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

GBHandle aGBHandle;
// Item
//
// { Name }
// { Actor }
// { ItemType1 }
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
// { BaseItem }
// { Set }
// { ComponentTreasureClass }
// { ComponentTreasureClassMagic }
// { ComponentTreasureClassRare }
// { RareNamePrefixStringList }
// { RareNameSuffixStringList }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { Skill0 }
// { unknow_field_35 }
// { Skill1 }
// { unknow_field_37 }
// { Skill2 }
// { unknow_field_39 }
// { Skill3 }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }
// { AttributeParam1 }
// { ptAttributes_0__serAttributeFormula }
// { AttributeFormula1 }
// { unknow_field_47 }
// { AttributeParam2 }
// { ptAttributes_1__serAttributeFormula }
// { AttributeFormula2 }
// { unknow_field_51 }
// { AttributeParam3 }
// { ptAttributes_2__serAttributeFormula }
// { AttributeFormula3 }
// { unknow_field_55 }
// { AttributeParam4 }
// { ptAttributes_3__serAttributeFormula }
// { AttributeFormula4 }
// { unknow_field_59 }
// { AttributeParam5 }
// { ptAttributes_4__serAttributeFormula }
// { AttributeFormula5 }
// { unknow_field_63 }
// { AttributeParam6 }
// { ptAttributes_5__serAttributeFormula }
// { AttributeFormula6 }
// { unknow_field_67 }
// { AttributeParam7 }
// { ptAttributes_6__serAttributeFormula }
// { AttributeFormula7 }
// { unknow_field_71 }
// { AttributeParam8 }
// { ptAttributes_7__serAttributeFormula }
// { AttributeFormula8 }
// { unknow_field_75 }
// { AttributeParam9 }
// { ptAttributes_8__serAttributeFormula }
// { AttributeFormula9 }
// { unknow_field_79 }
// { AttributeParam10 }
// { ptAttributes_9__serAttributeFormula }
// { AttributeFormula10 }
// { unknow_field_83 }
// { AttributeParam11 }
// { ptAttributes_10__serAttributeFormula }
// { AttributeFormula11 }
// { unknow_field_87 }
// { AttributeParam12 }
// { ptAttributes_11__serAttributeFormula }
// { AttributeFormula12 }
// { unknow_field_91 }
// { AttributeParam13 }
// { ptAttributes_12__serAttributeFormula }
// { AttributeFormula13 }
// { unknow_field_95 }
// { AttributeParam14 }
// { ptAttributes_13__serAttributeFormula }
// { AttributeFormula14 }
// { unknow_field_99 }
// { AttributeParam15 }
// { ptAttributes_14__serAttributeFormula }
// { AttributeFormula15 }
// { unknow_field_103 }
// { AttributeParam16 }
// { ptAttributes_15__serAttributeFormula }
// { AttributeFormula16 }
// { unknow_field_107 }
// { RecipeToGrant }
// { EnhancementToGrant }
// { LegendaryAffixFamily1 }
// { LegendaryAffixFamily2 }
// { LegendaryAffixFamily3 }
// { LegendaryAffixFamily4 }
// { LegendaryAffixFamily5 }
// { LegendaryAffixFamily6 }
// { unknow_field_116 }
// { unknow_field_117 }
// { unknow_field_118 }
// { unknow_field_119 }
// { unknow_field_120 }
// { unknow_field_121 }


void* Item::New() {
}

Item::Item() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 123);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_SNO, 260, 32);
		Fields[2].fieldinfo(&aDT_GBID, 264, 32);
		Fields[3].fieldinfo(&aDT_INT, 276, 32);
		Fields[4].fieldinfo(&aDT_ENUM, 280, 10);
		Fields[5].fieldinfo(&aDT_INT, 284, 32);
		Fields[6].fieldinfo(&aDT_INT, 288, 32);
		Fields[7].fieldinfo(&aDT_INT, 292, 32);
		Fields[8].fieldinfo(&aDT_INT, 296, 32);
		Fields[9].fieldinfo(&aDT_INT, 300, 32);
		Fields[10].fieldinfo(&aDT_INT, 312, 32);
		Fields[11].fieldinfo(&aDT_INT, 316, 32);
		Fields[12].fieldinfo(&aDT_INT, 304, 32);
		Fields[13].fieldinfo(&aDT_INT, 308, 32);
		Fields[14].fieldinfo(&aDT_GBID, 320, 32);
		Fields[15].fieldinfo(&aDT_GBID, 324, 32);
		Fields[16].fieldinfo(&aDT_SNO, 328, 32);
		Fields[17].fieldinfo(&aDT_SNO, 332, 32);
		Fields[18].fieldinfo(&aDT_SNO, 336, 32);
		Fields[19].fieldinfo(&aDT_SNO, 340, 32);
		Fields[20].fieldinfo(&aDT_SNO, 344, 32);
		Fields[21].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[22].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[23].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[24].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[25].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[26].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[27].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[28].fieldinfo(&aDT_INT, 272, 32);
		Fields[29].fieldinfo(&aDT_FLOAT, 452, 32);
		Fields[30].fieldinfo(&aDT_FLOAT, 456, 32);
		Fields[31].fieldinfo(&aDT_FLOAT, 720, 32);
		Fields[32].fieldinfo(&aDT_FLOAT, 544, 32);
		Fields[33].fieldinfo(&aDT_FLOAT, 548, 32);
		Fields[34].fieldinfo(&aDT_SNO, 916, 32);
		Fields[35].fieldinfo(&aDT_INT, 920, 32);
		Fields[36].fieldinfo(&aDT_SNO, 924, 32);
		Fields[37].fieldinfo(&aDT_INT, 928, 32);
		Fields[38].fieldinfo(&aDT_SNO, 932, 32);
		Fields[39].fieldinfo(&aDT_INT, 936, 32);
		Fields[40].fieldinfo(&aDT_SNO, 940, 32);
		Fields[41].fieldinfo(&aDT_INT, 944, 32);
		Fields[42].fieldinfo(&aDT_FIXEDARRAY, 348, 32);
		Fields[43].fieldinfo(&aDT_TRANSLATEABLE, 992, 0);
		Fields[44].fieldinfo(&aDT_ATTRIBUTEPARAM, 996, 32);
		Fields[45].fieldinfo(&aSerializeData, 1008, 0);
		Fields[46].fieldinfo(&aDT_FORMULA, 1000, 0);
		Fields[47].fieldinfo(&aDT_TRANSLATEABLE, 1016, 0);
		Fields[48].fieldinfo(&aDT_ATTRIBUTEPARAM, 1020, 32);
		Fields[49].fieldinfo(&aSerializeData, 1032, 0);
		Fields[50].fieldinfo(&aDT_FORMULA, 1024, 0);
		Fields[51].fieldinfo(&aDT_TRANSLATEABLE, 1040, 0);
		Fields[52].fieldinfo(&aDT_ATTRIBUTEPARAM, 1044, 32);
		Fields[53].fieldinfo(&aSerializeData, 1056, 0);
		Fields[54].fieldinfo(&aDT_FORMULA, 1048, 0);
		Fields[55].fieldinfo(&aDT_TRANSLATEABLE, 1064, 0);
		Fields[56].fieldinfo(&aDT_ATTRIBUTEPARAM, 1068, 32);
		Fields[57].fieldinfo(&aSerializeData, 1080, 0);
		Fields[58].fieldinfo(&aDT_FORMULA, 1072, 0);
		Fields[59].fieldinfo(&aDT_TRANSLATEABLE, 1088, 0);
		Fields[60].fieldinfo(&aDT_ATTRIBUTEPARAM, 1092, 32);
		Fields[61].fieldinfo(&aSerializeData, 1104, 0);
		Fields[62].fieldinfo(&aDT_FORMULA, 1096, 0);
		Fields[63].fieldinfo(&aDT_TRANSLATEABLE, 1112, 0);
		Fields[64].fieldinfo(&aDT_ATTRIBUTEPARAM, 1116, 32);
		Fields[65].fieldinfo(&aSerializeData, 1128, 0);
		Fields[66].fieldinfo(&aDT_FORMULA, 1120, 0);
		Fields[67].fieldinfo(&aDT_TRANSLATEABLE, 1136, 0);
		Fields[68].fieldinfo(&aDT_ATTRIBUTEPARAM, 1140, 32);
		Fields[69].fieldinfo(&aSerializeData, 1152, 0);
		Fields[70].fieldinfo(&aDT_FORMULA, 1144, 0);
		Fields[71].fieldinfo(&aDT_TRANSLATEABLE, 1160, 0);
		Fields[72].fieldinfo(&aDT_ATTRIBUTEPARAM, 1164, 32);
		Fields[73].fieldinfo(&aSerializeData, 1176, 0);
		Fields[74].fieldinfo(&aDT_FORMULA, 1168, 0);
		Fields[75].fieldinfo(&aDT_TRANSLATEABLE, 1184, 0);
		Fields[76].fieldinfo(&aDT_ATTRIBUTEPARAM, 1188, 32);
		Fields[77].fieldinfo(&aSerializeData, 1200, 0);
		Fields[78].fieldinfo(&aDT_FORMULA, 1192, 0);
		Fields[79].fieldinfo(&aDT_TRANSLATEABLE, 1208, 0);
		Fields[80].fieldinfo(&aDT_ATTRIBUTEPARAM, 1212, 32);
		Fields[81].fieldinfo(&aSerializeData, 1224, 0);
		Fields[82].fieldinfo(&aDT_FORMULA, 1216, 0);
		Fields[83].fieldinfo(&aDT_TRANSLATEABLE, 1232, 0);
		Fields[84].fieldinfo(&aDT_ATTRIBUTEPARAM, 1236, 32);
		Fields[85].fieldinfo(&aSerializeData, 1248, 0);
		Fields[86].fieldinfo(&aDT_FORMULA, 1240, 0);
		Fields[87].fieldinfo(&aDT_TRANSLATEABLE, 1256, 0);
		Fields[88].fieldinfo(&aDT_ATTRIBUTEPARAM, 1260, 32);
		Fields[89].fieldinfo(&aSerializeData, 1272, 0);
		Fields[90].fieldinfo(&aDT_FORMULA, 1264, 0);
		Fields[91].fieldinfo(&aDT_TRANSLATEABLE, 1280, 0);
		Fields[92].fieldinfo(&aDT_ATTRIBUTEPARAM, 1284, 32);
		Fields[93].fieldinfo(&aSerializeData, 1296, 0);
		Fields[94].fieldinfo(&aDT_FORMULA, 1288, 0);
		Fields[95].fieldinfo(&aDT_TRANSLATEABLE, 1304, 0);
		Fields[96].fieldinfo(&aDT_ATTRIBUTEPARAM, 1308, 32);
		Fields[97].fieldinfo(&aSerializeData, 1320, 0);
		Fields[98].fieldinfo(&aDT_FORMULA, 1312, 0);
		Fields[99].fieldinfo(&aDT_TRANSLATEABLE, 1328, 0);
		Fields[100].fieldinfo(&aDT_ATTRIBUTEPARAM, 1332, 32);
		Fields[101].fieldinfo(&aSerializeData, 1344, 0);
		Fields[102].fieldinfo(&aDT_FORMULA, 1336, 0);
		Fields[103].fieldinfo(&aDT_TRANSLATEABLE, 1352, 0);
		Fields[104].fieldinfo(&aDT_ATTRIBUTEPARAM, 1356, 32);
		Fields[105].fieldinfo(&aSerializeData, 1368, 0);
		Fields[106].fieldinfo(&aDT_FORMULA, 1360, 0);
		Fields[107].fieldinfo(&aDT_ENUM, 1376, 4);
		Fields[108].fieldinfo(&aDT_FIXEDARRAY, 1380, 32);
		Fields[109].fieldinfo(&aDT_GBID, 1404, 32);
		Fields[110].fieldinfo(&aDT_GBID, 1408, 32);
		Fields[111].fieldinfo(&aDT_GBID, 1412, 32);
		Fields[112].fieldinfo(&aDT_GBID, 1416, 32);
		Fields[113].fieldinfo(&aDT_GBID, 1420, 32);
		Fields[114].fieldinfo(&aDT_GBID, 1424, 32);
		Fields[115].fieldinfo(&aDT_GBID, 1428, 32);
		Fields[116].fieldinfo(&aDT_INT, 1432, 32);
		Fields[117].fieldinfo(&aDT_INT, 1436, 32);
		Fields[118].fieldinfo(&aDT_INT, 1440, 32);
		Fields[119].fieldinfo(&aDT_INT, 1444, 32);
		Fields[120].fieldinfo(&aDT_INT, 1448, 32);
		Fields[121].fieldinfo(&aDT_INT, 1452, 32);
		Fields[123 - 1].fieldinfo(NULL, 0, 0);
	}
Item::~Item() {
		free(Fields);
}

const char* Item::Name() {
		return "Item";
}
	
void* Item::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* Item::Actor(void *Data) {
	return ((char*)Data) + 260;
}
void* Item::ItemType1(void *Data) {
	return ((char*)Data) + 264;
}
int* Item::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 276;
}
void* Item::unknow_field_4(void *Data) {
	return ((char*)Data) + 280;
}
int* Item::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 284;
}
int* Item::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 288;
}
int* Item::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 292;
}
int* Item::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 296;
}
int* Item::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 300;
}
int* Item::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 312;
}
int* Item::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 316;
}
int* Item::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 304;
}
int* Item::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 308;
}
void* Item::BaseItem(void *Data) {
	return ((char*)Data) + 320;
}
void* Item::Set(void *Data) {
	return ((char*)Data) + 324;
}
void* Item::ComponentTreasureClass(void *Data) {
	return ((char*)Data) + 328;
}
void* Item::ComponentTreasureClassMagic(void *Data) {
	return ((char*)Data) + 332;
}
void* Item::ComponentTreasureClassRare(void *Data) {
	return ((char*)Data) + 336;
}
void* Item::RareNamePrefixStringList(void *Data) {
	return ((char*)Data) + 340;
}
void* Item::RareNameSuffixStringList(void *Data) {
	return ((char*)Data) + 344;
}
void* Item::unknow_field_21(void *Data) {
	return ((char*)Data) + 268;
}
void* Item::unknow_field_22(void *Data) {
	return ((char*)Data) + 268;
}
void* Item::unknow_field_23(void *Data) {
	return ((char*)Data) + 268;
}
void* Item::unknow_field_24(void *Data) {
	return ((char*)Data) + 268;
}
void* Item::unknow_field_25(void *Data) {
	return ((char*)Data) + 268;
}
void* Item::unknow_field_26(void *Data) {
	return ((char*)Data) + 268;
}
void* Item::unknow_field_27(void *Data) {
	return ((char*)Data) + 268;
}
int* Item::unknow_field_28(void *Data) {
	return (int*)((char*)Data) + 272;
}
void* Item::unknow_field_29(void *Data) {
	return ((char*)Data) + 452;
}
void* Item::unknow_field_30(void *Data) {
	return ((char*)Data) + 456;
}
void* Item::unknow_field_31(void *Data) {
	return ((char*)Data) + 720;
}
void* Item::unknow_field_32(void *Data) {
	return ((char*)Data) + 544;
}
void* Item::unknow_field_33(void *Data) {
	return ((char*)Data) + 548;
}
void* Item::Skill0(void *Data) {
	return ((char*)Data) + 916;
}
int* Item::unknow_field_35(void *Data) {
	return (int*)((char*)Data) + 920;
}
void* Item::Skill1(void *Data) {
	return ((char*)Data) + 924;
}
int* Item::unknow_field_37(void *Data) {
	return (int*)((char*)Data) + 928;
}
void* Item::Skill2(void *Data) {
	return ((char*)Data) + 932;
}
int* Item::unknow_field_39(void *Data) {
	return (int*)((char*)Data) + 936;
}
void* Item::Skill3(void *Data) {
	return ((char*)Data) + 940;
}
int* Item::unknow_field_41(void *Data) {
	return (int*)((char*)Data) + 944;
}
void* Item::unknow_field_42(void *Data) {
	return ((char*)Data) + 348;
}
void* Item::unknow_field_43(void *Data) {
	return ((char*)Data) + 992;
}
void* Item::AttributeParam1(void *Data) {
	return ((char*)Data) + 996;
}
void* Item::ptAttributes_0__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1008;
}
void* Item::AttributeFormula1(void *Data) {
	return ((char*)Data) + 1000;
}
void* Item::unknow_field_47(void *Data) {
	return ((char*)Data) + 1016;
}
void* Item::AttributeParam2(void *Data) {
	return ((char*)Data) + 1020;
}
void* Item::ptAttributes_1__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1032;
}
void* Item::AttributeFormula2(void *Data) {
	return ((char*)Data) + 1024;
}
void* Item::unknow_field_51(void *Data) {
	return ((char*)Data) + 1040;
}
void* Item::AttributeParam3(void *Data) {
	return ((char*)Data) + 1044;
}
void* Item::ptAttributes_2__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1056;
}
void* Item::AttributeFormula3(void *Data) {
	return ((char*)Data) + 1048;
}
void* Item::unknow_field_55(void *Data) {
	return ((char*)Data) + 1064;
}
void* Item::AttributeParam4(void *Data) {
	return ((char*)Data) + 1068;
}
void* Item::ptAttributes_3__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1080;
}
void* Item::AttributeFormula4(void *Data) {
	return ((char*)Data) + 1072;
}
void* Item::unknow_field_59(void *Data) {
	return ((char*)Data) + 1088;
}
void* Item::AttributeParam5(void *Data) {
	return ((char*)Data) + 1092;
}
void* Item::ptAttributes_4__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1104;
}
void* Item::AttributeFormula5(void *Data) {
	return ((char*)Data) + 1096;
}
void* Item::unknow_field_63(void *Data) {
	return ((char*)Data) + 1112;
}
void* Item::AttributeParam6(void *Data) {
	return ((char*)Data) + 1116;
}
void* Item::ptAttributes_5__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1128;
}
void* Item::AttributeFormula6(void *Data) {
	return ((char*)Data) + 1120;
}
void* Item::unknow_field_67(void *Data) {
	return ((char*)Data) + 1136;
}
void* Item::AttributeParam7(void *Data) {
	return ((char*)Data) + 1140;
}
void* Item::ptAttributes_6__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1152;
}
void* Item::AttributeFormula7(void *Data) {
	return ((char*)Data) + 1144;
}
void* Item::unknow_field_71(void *Data) {
	return ((char*)Data) + 1160;
}
void* Item::AttributeParam8(void *Data) {
	return ((char*)Data) + 1164;
}
void* Item::ptAttributes_7__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1176;
}
void* Item::AttributeFormula8(void *Data) {
	return ((char*)Data) + 1168;
}
void* Item::unknow_field_75(void *Data) {
	return ((char*)Data) + 1184;
}
void* Item::AttributeParam9(void *Data) {
	return ((char*)Data) + 1188;
}
void* Item::ptAttributes_8__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1200;
}
void* Item::AttributeFormula9(void *Data) {
	return ((char*)Data) + 1192;
}
void* Item::unknow_field_79(void *Data) {
	return ((char*)Data) + 1208;
}
void* Item::AttributeParam10(void *Data) {
	return ((char*)Data) + 1212;
}
void* Item::ptAttributes_9__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1224;
}
void* Item::AttributeFormula10(void *Data) {
	return ((char*)Data) + 1216;
}
void* Item::unknow_field_83(void *Data) {
	return ((char*)Data) + 1232;
}
void* Item::AttributeParam11(void *Data) {
	return ((char*)Data) + 1236;
}
void* Item::ptAttributes_10__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1248;
}
void* Item::AttributeFormula11(void *Data) {
	return ((char*)Data) + 1240;
}
void* Item::unknow_field_87(void *Data) {
	return ((char*)Data) + 1256;
}
void* Item::AttributeParam12(void *Data) {
	return ((char*)Data) + 1260;
}
void* Item::ptAttributes_11__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1272;
}
void* Item::AttributeFormula12(void *Data) {
	return ((char*)Data) + 1264;
}
void* Item::unknow_field_91(void *Data) {
	return ((char*)Data) + 1280;
}
void* Item::AttributeParam13(void *Data) {
	return ((char*)Data) + 1284;
}
void* Item::ptAttributes_12__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1296;
}
void* Item::AttributeFormula13(void *Data) {
	return ((char*)Data) + 1288;
}
void* Item::unknow_field_95(void *Data) {
	return ((char*)Data) + 1304;
}
void* Item::AttributeParam14(void *Data) {
	return ((char*)Data) + 1308;
}
void* Item::ptAttributes_13__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1320;
}
void* Item::AttributeFormula14(void *Data) {
	return ((char*)Data) + 1312;
}
void* Item::unknow_field_99(void *Data) {
	return ((char*)Data) + 1328;
}
void* Item::AttributeParam15(void *Data) {
	return ((char*)Data) + 1332;
}
void* Item::ptAttributes_14__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1344;
}
void* Item::AttributeFormula15(void *Data) {
	return ((char*)Data) + 1336;
}
void* Item::unknow_field_103(void *Data) {
	return ((char*)Data) + 1352;
}
void* Item::AttributeParam16(void *Data) {
	return ((char*)Data) + 1356;
}
void* Item::ptAttributes_15__serAttributeFormula(void *Data) {
	return ((char*)Data) + 1368;
}
void* Item::AttributeFormula16(void *Data) {
	return ((char*)Data) + 1360;
}
void* Item::unknow_field_107(void *Data) {
	return ((char*)Data) + 1376;
}
void* Item::RecipeToGrant(void *Data) {
	return ((char*)Data) + 1380;
}
void* Item::EnhancementToGrant(void *Data) {
	return ((char*)Data) + 1404;
}
void* Item::LegendaryAffixFamily1(void *Data) {
	return ((char*)Data) + 1408;
}
void* Item::LegendaryAffixFamily2(void *Data) {
	return ((char*)Data) + 1412;
}
void* Item::LegendaryAffixFamily3(void *Data) {
	return ((char*)Data) + 1416;
}
void* Item::LegendaryAffixFamily4(void *Data) {
	return ((char*)Data) + 1420;
}
void* Item::LegendaryAffixFamily5(void *Data) {
	return ((char*)Data) + 1424;
}
void* Item::LegendaryAffixFamily6(void *Data) {
	return ((char*)Data) + 1428;
}
int* Item::unknow_field_116(void *Data) {
	return (int*)((char*)Data) + 1432;
}
int* Item::unknow_field_117(void *Data) {
	return (int*)((char*)Data) + 1436;
}
int* Item::unknow_field_118(void *Data) {
	return (int*)((char*)Data) + 1440;
}
int* Item::unknow_field_119(void *Data) {
	return (int*)((char*)Data) + 1444;
}
int* Item::unknow_field_120(void *Data) {
	return (int*)((char*)Data) + 1448;
}
int* Item::unknow_field_121(void *Data) {
	return (int*)((char*)Data) + 1452;
}

Item aItem;
// Items
//
// { serItems }
// { unknow_field_1 }


void* Items::New() {
}

Items::Items() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Items::~Items() {
		free(Fields);
}

const char* Items::Name() {
		return "Items";
}
	
void* Items::serItems(void *Data) {
	return ((char*)Data) + 0;
}
void* Items::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

Items aItems;
// ItemType
//
// { Name }
// { ParentType }
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
// { unknow_field_17 }
// { InherentAffix1 }
// { InherentAffix2 }
// { InherentAffix3 }
// { InherentAffixFamily1 }
// { unknow_field_22 }


void* ItemType::New() {
}

ItemType::ItemType() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 24);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_GBID, 260, 32);
		Fields[2].fieldinfo(&aDT_INT, 264, 32);
		Fields[3].fieldinfo(&aDT_ENUM, 272, 5);
		Fields[4].fieldinfo(&aDT_ENUM, 276, 5);
		Fields[5].fieldinfo(&aDT_ENUM, 280, 5);
		Fields[6].fieldinfo(&aDT_ENUM, 284, 5);
		Fields[7].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[8].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[9].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[10].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[11].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[12].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[13].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[14].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[15].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[16].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[17].fieldinfo(&aDT_FLAG, 268, 1);
		Fields[18].fieldinfo(&aDT_GBID, 288, 32);
		Fields[19].fieldinfo(&aDT_GBID, 292, 32);
		Fields[20].fieldinfo(&aDT_GBID, 296, 32);
		Fields[21].fieldinfo(&aDT_GBID, 300, 32);
		Fields[22].fieldinfo(&aDT_FIXEDARRAY, 304, 32);
		Fields[24 - 1].fieldinfo(NULL, 0, 0);
	}
ItemType::~ItemType() {
		free(Fields);
}

const char* ItemType::Name() {
		return "ItemType";
}
	
void* ItemType::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* ItemType::ParentType(void *Data) {
	return ((char*)Data) + 260;
}
int* ItemType::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 264;
}
void* ItemType::unknow_field_3(void *Data) {
	return ((char*)Data) + 272;
}
void* ItemType::unknow_field_4(void *Data) {
	return ((char*)Data) + 276;
}
void* ItemType::unknow_field_5(void *Data) {
	return ((char*)Data) + 280;
}
void* ItemType::unknow_field_6(void *Data) {
	return ((char*)Data) + 284;
}
void* ItemType::unknow_field_7(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_8(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_9(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_10(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_11(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_12(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_13(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_14(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_15(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_16(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::unknow_field_17(void *Data) {
	return ((char*)Data) + 268;
}
void* ItemType::InherentAffix1(void *Data) {
	return ((char*)Data) + 288;
}
void* ItemType::InherentAffix2(void *Data) {
	return ((char*)Data) + 292;
}
void* ItemType::InherentAffix3(void *Data) {
	return ((char*)Data) + 296;
}
void* ItemType::InherentAffixFamily1(void *Data) {
	return ((char*)Data) + 300;
}
void* ItemType::unknow_field_22(void *Data) {
	return ((char*)Data) + 304;
}

ItemType aItemType;
// Items_1
//
// { serItemTypes }
// { unknow_field_1 }


void* Items_1::New() {
}

Items_1::Items_1() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Items_1::~Items_1() {
		free(Fields);
}

const char* Items_1::Name() {
		return "Items_1";
}
	
void* Items_1::serItemTypes(void *Data) {
	return ((char*)Data) + 0;
}
void* Items_1::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

Items_1 aItems_1;
// RecipeIngredient
//
// { gbidItem }
// { unknow_field_1 }


void* RecipeIngredient::New() {
}

RecipeIngredient::RecipeIngredient() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_GBID, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
RecipeIngredient::~RecipeIngredient() {
		free(Fields);
}

const char* RecipeIngredient::Name() {
		return "RecipeIngredient";
}
	
void* RecipeIngredient::gbidItem(void *Data) {
	return ((char*)Data) + 0;
}
int* RecipeIngredient::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

RecipeIngredient aRecipeIngredient;
// ItemEnhancement
//
// { Name }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* ItemEnhancement::New() {
}

ItemEnhancement::ItemEnhancement() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_INT, 260, 32);
		Fields[2].fieldinfo(&aDT_INT, 264, 32);
		Fields[3].fieldinfo(&aDT_INT, 268, 32);
		Fields[4].fieldinfo(&aDT_INT, 272, 32);
		Fields[5].fieldinfo(&aDT_FIXEDARRAY, 280, 0);
		Fields[6].fieldinfo(&aDT_INT, 664, 32);
		Fields[7].fieldinfo(&aDT_FIXEDARRAY, 668, 0);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
ItemEnhancement::~ItemEnhancement() {
		free(Fields);
}

const char* ItemEnhancement::Name() {
		return "ItemEnhancement";
}
	
void* ItemEnhancement::Name(void *Data) {
	return ((char*)Data) + 4;
}
int* ItemEnhancement::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 260;
}
int* ItemEnhancement::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 264;
}
int* ItemEnhancement::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 268;
}
int* ItemEnhancement::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 272;
}
void* ItemEnhancement::unknow_field_5(void *Data) {
	return ((char*)Data) + 280;
}
int* ItemEnhancement::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 664;
}
void* ItemEnhancement::unknow_field_7(void *Data) {
	return ((char*)Data) + 668;
}

ItemEnhancement aItemEnhancement;
// ItemEnhancementTable
//
// { serItemEnhancements }
// { unknow_field_1 }


void* ItemEnhancementTable::New() {
}

ItemEnhancementTable::ItemEnhancementTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ItemEnhancementTable::~ItemEnhancementTable() {
		free(Fields);
}

const char* ItemEnhancementTable::Name() {
		return "ItemEnhancementTable";
}
	
void* ItemEnhancementTable::serItemEnhancements(void *Data) {
	return ((char*)Data) + 0;
}
void* ItemEnhancementTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ItemEnhancementTable aItemEnhancementTable;
// ExperienceLevel
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { unknow_field_34 }
// { unknow_field_35 }
// { unknow_field_36 }
// { unknow_field_37 }
// { unknow_field_38 }
// { unknow_field_39 }
// { unknow_field_40 }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }
// { unknow_field_44 }
// { unknow_field_45 }
// { unknow_field_46 }
// { unknow_field_47 }
// { unknow_field_48 }
// { unknow_field_49 }
// { unknow_field_50 }
// { unknow_field_51 }


void* ExperienceLevel::New() {
}

ExperienceLevel::ExperienceLevel() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 53);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aDT_INT, 24, 32);
		Fields[7].fieldinfo(&aDT_INT, 28, 32);
		Fields[8].fieldinfo(&aDT_INT, 32, 32);
		Fields[9].fieldinfo(&aDT_INT, 36, 32);
		Fields[10].fieldinfo(&aDT_INT, 40, 32);
		Fields[11].fieldinfo(&aDT_INT, 44, 32);
		Fields[12].fieldinfo(&aDT_INT, 48, 32);
		Fields[13].fieldinfo(&aDT_INT, 52, 32);
		Fields[14].fieldinfo(&aDT_INT, 56, 32);
		Fields[15].fieldinfo(&aDT_INT, 60, 32);
		Fields[16].fieldinfo(&aDT_INT, 64, 32);
		Fields[17].fieldinfo(&aDT_INT, 68, 32);
		Fields[18].fieldinfo(&aDT_INT, 72, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[20].fieldinfo(&aDT_INT, 80, 32);
		Fields[21].fieldinfo(&aDT_INT, 84, 32);
		Fields[22].fieldinfo(&aDT_INT, 88, 32);
		Fields[23].fieldinfo(&aDT_INT, 92, 32);
		Fields[24].fieldinfo(&aDT_INT, 96, 32);
		Fields[25].fieldinfo(&aDT_INT, 100, 32);
		Fields[26].fieldinfo(&aDT_INT, 104, 32);
		Fields[27].fieldinfo(&aDT_INT, 108, 32);
		Fields[28].fieldinfo(&aDT_INT, 112, 32);
		Fields[29].fieldinfo(&aDT_INT, 116, 32);
		Fields[30].fieldinfo(&aDT_INT, 120, 32);
		Fields[31].fieldinfo(&aDT_INT, 124, 32);
		Fields[32].fieldinfo(&aDT_INT, 128, 32);
		Fields[33].fieldinfo(&aDT_INT, 132, 32);
		Fields[34].fieldinfo(&aDT_INT, 136, 32);
		Fields[35].fieldinfo(&aDT_INT, 140, 32);
		Fields[36].fieldinfo(&aDT_INT, 144, 32);
		Fields[37].fieldinfo(&aDT_INT, 148, 32);
		Fields[38].fieldinfo(&aDT_INT, 152, 32);
		Fields[39].fieldinfo(&aDT_INT, 156, 32);
		Fields[40].fieldinfo(&aDT_INT, 176, 32);
		Fields[41].fieldinfo(&aDT_INT, 180, 32);
		Fields[42].fieldinfo(&aDT_INT, 184, 32);
		Fields[43].fieldinfo(&aDT_INT, 188, 32);
		Fields[44].fieldinfo(&aDT_INT, 192, 32);
		Fields[45].fieldinfo(&aDT_INT, 196, 32);
		Fields[46].fieldinfo(&aDT_INT, 200, 32);
		Fields[47].fieldinfo(&aDT_INT, 204, 32);
		Fields[48].fieldinfo(&aDT_INT, 208, 32);
		Fields[49].fieldinfo(&aDT_INT, 212, 32);
		Fields[50].fieldinfo(&aDT_INT, 216, 32);
		Fields[51].fieldinfo(&aDT_INT, 220, 32);
		Fields[53 - 1].fieldinfo(NULL, 0, 0);
	}
ExperienceLevel::~ExperienceLevel() {
		free(Fields);
}

const char* ExperienceLevel::Name() {
		return "ExperienceLevel";
}
	
int* ExperienceLevel::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* ExperienceLevel::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* ExperienceLevel::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* ExperienceLevel::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
int* ExperienceLevel::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* ExperienceLevel::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* ExperienceLevel::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* ExperienceLevel::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* ExperienceLevel::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 32;
}
int* ExperienceLevel::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* ExperienceLevel::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 40;
}
int* ExperienceLevel::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 44;
}
int* ExperienceLevel::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 48;
}
int* ExperienceLevel::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* ExperienceLevel::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* ExperienceLevel::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 60;
}
int* ExperienceLevel::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 64;
}
int* ExperienceLevel::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 68;
}
int* ExperienceLevel::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 72;
}
void* ExperienceLevel::unknow_field_19(void *Data) {
	return ((char*)Data) + 76;
}
int* ExperienceLevel::unknow_field_20(void *Data) {
	return (int*)((char*)Data) + 80;
}
int* ExperienceLevel::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 84;
}
int* ExperienceLevel::unknow_field_22(void *Data) {
	return (int*)((char*)Data) + 88;
}
int* ExperienceLevel::unknow_field_23(void *Data) {
	return (int*)((char*)Data) + 92;
}
int* ExperienceLevel::unknow_field_24(void *Data) {
	return (int*)((char*)Data) + 96;
}
int* ExperienceLevel::unknow_field_25(void *Data) {
	return (int*)((char*)Data) + 100;
}
int* ExperienceLevel::unknow_field_26(void *Data) {
	return (int*)((char*)Data) + 104;
}
int* ExperienceLevel::unknow_field_27(void *Data) {
	return (int*)((char*)Data) + 108;
}
int* ExperienceLevel::unknow_field_28(void *Data) {
	return (int*)((char*)Data) + 112;
}
int* ExperienceLevel::unknow_field_29(void *Data) {
	return (int*)((char*)Data) + 116;
}
int* ExperienceLevel::unknow_field_30(void *Data) {
	return (int*)((char*)Data) + 120;
}
int* ExperienceLevel::unknow_field_31(void *Data) {
	return (int*)((char*)Data) + 124;
}
int* ExperienceLevel::unknow_field_32(void *Data) {
	return (int*)((char*)Data) + 128;
}
int* ExperienceLevel::unknow_field_33(void *Data) {
	return (int*)((char*)Data) + 132;
}
int* ExperienceLevel::unknow_field_34(void *Data) {
	return (int*)((char*)Data) + 136;
}
int* ExperienceLevel::unknow_field_35(void *Data) {
	return (int*)((char*)Data) + 140;
}
int* ExperienceLevel::unknow_field_36(void *Data) {
	return (int*)((char*)Data) + 144;
}
int* ExperienceLevel::unknow_field_37(void *Data) {
	return (int*)((char*)Data) + 148;
}
int* ExperienceLevel::unknow_field_38(void *Data) {
	return (int*)((char*)Data) + 152;
}
int* ExperienceLevel::unknow_field_39(void *Data) {
	return (int*)((char*)Data) + 156;
}
int* ExperienceLevel::unknow_field_40(void *Data) {
	return (int*)((char*)Data) + 176;
}
int* ExperienceLevel::unknow_field_41(void *Data) {
	return (int*)((char*)Data) + 180;
}
int* ExperienceLevel::unknow_field_42(void *Data) {
	return (int*)((char*)Data) + 184;
}
int* ExperienceLevel::unknow_field_43(void *Data) {
	return (int*)((char*)Data) + 188;
}
int* ExperienceLevel::unknow_field_44(void *Data) {
	return (int*)((char*)Data) + 192;
}
int* ExperienceLevel::unknow_field_45(void *Data) {
	return (int*)((char*)Data) + 196;
}
int* ExperienceLevel::unknow_field_46(void *Data) {
	return (int*)((char*)Data) + 200;
}
int* ExperienceLevel::unknow_field_47(void *Data) {
	return (int*)((char*)Data) + 204;
}
int* ExperienceLevel::unknow_field_48(void *Data) {
	return (int*)((char*)Data) + 208;
}
int* ExperienceLevel::unknow_field_49(void *Data) {
	return (int*)((char*)Data) + 212;
}
int* ExperienceLevel::unknow_field_50(void *Data) {
	return (int*)((char*)Data) + 216;
}
int* ExperienceLevel::unknow_field_51(void *Data) {
	return (int*)((char*)Data) + 220;
}

ExperienceLevel aExperienceLevel;
// ExperienceTable
//
// { serExperienceLevels }
// { unknow_field_1 }


void* ExperienceTable::New() {
}

ExperienceTable::ExperienceTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ExperienceTable::~ExperienceTable() {
		free(Fields);
}

const char* ExperienceTable::Name() {
		return "ExperienceTable";
}
	
void* ExperienceTable::serExperienceLevels(void *Data) {
	return ((char*)Data) + 0;
}
void* ExperienceTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ExperienceTable aExperienceTable;
// PowerFormulaTableEntry
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { unknow_field_34 }
// { unknow_field_35 }
// { unknow_field_36 }
// { unknow_field_37 }
// { unknow_field_38 }
// { unknow_field_39 }
// { unknow_field_40 }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }
// { unknow_field_44 }
// { unknow_field_45 }
// { unknow_field_46 }
// { unknow_field_47 }
// { unknow_field_48 }
// { unknow_field_49 }
// { unknow_field_50 }
// { unknow_field_51 }
// { unknow_field_52 }
// { unknow_field_53 }
// { unknow_field_54 }
// { unknow_field_55 }
// { unknow_field_56 }
// { unknow_field_57 }
// { unknow_field_58 }
// { unknow_field_59 }
// { unknow_field_60 }
// { unknow_field_61 }


void* PowerFormulaTableEntry::New() {
}

PowerFormulaTableEntry::PowerFormulaTableEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 63);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 11);
		Fields[1].fieldinfo(&aDT_FLOAT, 1024, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 1028, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 1032, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 1036, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 1040, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 1044, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 1048, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 1052, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 1056, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 1060, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 1064, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 1068, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 1072, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 1076, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 1080, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 1084, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 1088, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 1092, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 1096, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 1100, 32);
		Fields[21].fieldinfo(&aDT_FLOAT, 1104, 32);
		Fields[22].fieldinfo(&aDT_FLOAT, 1108, 32);
		Fields[23].fieldinfo(&aDT_FLOAT, 1112, 32);
		Fields[24].fieldinfo(&aDT_FLOAT, 1116, 32);
		Fields[25].fieldinfo(&aDT_FLOAT, 1120, 32);
		Fields[26].fieldinfo(&aDT_FLOAT, 1124, 32);
		Fields[27].fieldinfo(&aDT_FLOAT, 1128, 32);
		Fields[28].fieldinfo(&aDT_FLOAT, 1132, 32);
		Fields[29].fieldinfo(&aDT_FLOAT, 1136, 32);
		Fields[30].fieldinfo(&aDT_FLOAT, 1140, 32);
		Fields[31].fieldinfo(&aDT_FLOAT, 1144, 32);
		Fields[32].fieldinfo(&aDT_FLOAT, 1148, 32);
		Fields[33].fieldinfo(&aDT_FLOAT, 1152, 32);
		Fields[34].fieldinfo(&aDT_FLOAT, 1156, 32);
		Fields[35].fieldinfo(&aDT_FLOAT, 1160, 32);
		Fields[36].fieldinfo(&aDT_FLOAT, 1164, 32);
		Fields[37].fieldinfo(&aDT_FLOAT, 1168, 32);
		Fields[38].fieldinfo(&aDT_FLOAT, 1172, 32);
		Fields[39].fieldinfo(&aDT_FLOAT, 1176, 32);
		Fields[40].fieldinfo(&aDT_FLOAT, 1180, 32);
		Fields[41].fieldinfo(&aDT_FLOAT, 1184, 32);
		Fields[42].fieldinfo(&aDT_FLOAT, 1188, 32);
		Fields[43].fieldinfo(&aDT_FLOAT, 1192, 32);
		Fields[44].fieldinfo(&aDT_FLOAT, 1196, 32);
		Fields[45].fieldinfo(&aDT_FLOAT, 1200, 32);
		Fields[46].fieldinfo(&aDT_FLOAT, 1204, 32);
		Fields[47].fieldinfo(&aDT_FLOAT, 1208, 32);
		Fields[48].fieldinfo(&aDT_FLOAT, 1212, 32);
		Fields[49].fieldinfo(&aDT_FLOAT, 1216, 32);
		Fields[50].fieldinfo(&aDT_FLOAT, 1220, 32);
		Fields[51].fieldinfo(&aDT_FLOAT, 1224, 32);
		Fields[52].fieldinfo(&aDT_FLOAT, 1228, 32);
		Fields[53].fieldinfo(&aDT_FLOAT, 1232, 32);
		Fields[54].fieldinfo(&aDT_FLOAT, 1236, 32);
		Fields[55].fieldinfo(&aDT_FLOAT, 1240, 32);
		Fields[56].fieldinfo(&aDT_FLOAT, 1244, 32);
		Fields[57].fieldinfo(&aDT_FLOAT, 1248, 32);
		Fields[58].fieldinfo(&aDT_FLOAT, 1252, 32);
		Fields[59].fieldinfo(&aDT_FLOAT, 1256, 32);
		Fields[60].fieldinfo(&aDT_FLOAT, 1260, 32);
		Fields[61].fieldinfo(&aDT_FLOAT, 1264, 32);
		Fields[63 - 1].fieldinfo(NULL, 0, 0);
	}
PowerFormulaTableEntry::~PowerFormulaTableEntry() {
		free(Fields);
}

const char* PowerFormulaTableEntry::Name() {
		return "PowerFormulaTableEntry";
}
	
void* PowerFormulaTableEntry::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PowerFormulaTableEntry::unknow_field_1(void *Data) {
	return ((char*)Data) + 1024;
}
void* PowerFormulaTableEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 1028;
}
void* PowerFormulaTableEntry::unknow_field_3(void *Data) {
	return ((char*)Data) + 1032;
}
void* PowerFormulaTableEntry::unknow_field_4(void *Data) {
	return ((char*)Data) + 1036;
}
void* PowerFormulaTableEntry::unknow_field_5(void *Data) {
	return ((char*)Data) + 1040;
}
void* PowerFormulaTableEntry::unknow_field_6(void *Data) {
	return ((char*)Data) + 1044;
}
void* PowerFormulaTableEntry::unknow_field_7(void *Data) {
	return ((char*)Data) + 1048;
}
void* PowerFormulaTableEntry::unknow_field_8(void *Data) {
	return ((char*)Data) + 1052;
}
void* PowerFormulaTableEntry::unknow_field_9(void *Data) {
	return ((char*)Data) + 1056;
}
void* PowerFormulaTableEntry::unknow_field_10(void *Data) {
	return ((char*)Data) + 1060;
}
void* PowerFormulaTableEntry::unknow_field_11(void *Data) {
	return ((char*)Data) + 1064;
}
void* PowerFormulaTableEntry::unknow_field_12(void *Data) {
	return ((char*)Data) + 1068;
}
void* PowerFormulaTableEntry::unknow_field_13(void *Data) {
	return ((char*)Data) + 1072;
}
void* PowerFormulaTableEntry::unknow_field_14(void *Data) {
	return ((char*)Data) + 1076;
}
void* PowerFormulaTableEntry::unknow_field_15(void *Data) {
	return ((char*)Data) + 1080;
}
void* PowerFormulaTableEntry::unknow_field_16(void *Data) {
	return ((char*)Data) + 1084;
}
void* PowerFormulaTableEntry::unknow_field_17(void *Data) {
	return ((char*)Data) + 1088;
}
void* PowerFormulaTableEntry::unknow_field_18(void *Data) {
	return ((char*)Data) + 1092;
}
void* PowerFormulaTableEntry::unknow_field_19(void *Data) {
	return ((char*)Data) + 1096;
}
void* PowerFormulaTableEntry::unknow_field_20(void *Data) {
	return ((char*)Data) + 1100;
}
void* PowerFormulaTableEntry::unknow_field_21(void *Data) {
	return ((char*)Data) + 1104;
}
void* PowerFormulaTableEntry::unknow_field_22(void *Data) {
	return ((char*)Data) + 1108;
}
void* PowerFormulaTableEntry::unknow_field_23(void *Data) {
	return ((char*)Data) + 1112;
}
void* PowerFormulaTableEntry::unknow_field_24(void *Data) {
	return ((char*)Data) + 1116;
}
void* PowerFormulaTableEntry::unknow_field_25(void *Data) {
	return ((char*)Data) + 1120;
}
void* PowerFormulaTableEntry::unknow_field_26(void *Data) {
	return ((char*)Data) + 1124;
}
void* PowerFormulaTableEntry::unknow_field_27(void *Data) {
	return ((char*)Data) + 1128;
}
void* PowerFormulaTableEntry::unknow_field_28(void *Data) {
	return ((char*)Data) + 1132;
}
void* PowerFormulaTableEntry::unknow_field_29(void *Data) {
	return ((char*)Data) + 1136;
}
void* PowerFormulaTableEntry::unknow_field_30(void *Data) {
	return ((char*)Data) + 1140;
}
void* PowerFormulaTableEntry::unknow_field_31(void *Data) {
	return ((char*)Data) + 1144;
}
void* PowerFormulaTableEntry::unknow_field_32(void *Data) {
	return ((char*)Data) + 1148;
}
void* PowerFormulaTableEntry::unknow_field_33(void *Data) {
	return ((char*)Data) + 1152;
}
void* PowerFormulaTableEntry::unknow_field_34(void *Data) {
	return ((char*)Data) + 1156;
}
void* PowerFormulaTableEntry::unknow_field_35(void *Data) {
	return ((char*)Data) + 1160;
}
void* PowerFormulaTableEntry::unknow_field_36(void *Data) {
	return ((char*)Data) + 1164;
}
void* PowerFormulaTableEntry::unknow_field_37(void *Data) {
	return ((char*)Data) + 1168;
}
void* PowerFormulaTableEntry::unknow_field_38(void *Data) {
	return ((char*)Data) + 1172;
}
void* PowerFormulaTableEntry::unknow_field_39(void *Data) {
	return ((char*)Data) + 1176;
}
void* PowerFormulaTableEntry::unknow_field_40(void *Data) {
	return ((char*)Data) + 1180;
}
void* PowerFormulaTableEntry::unknow_field_41(void *Data) {
	return ((char*)Data) + 1184;
}
void* PowerFormulaTableEntry::unknow_field_42(void *Data) {
	return ((char*)Data) + 1188;
}
void* PowerFormulaTableEntry::unknow_field_43(void *Data) {
	return ((char*)Data) + 1192;
}
void* PowerFormulaTableEntry::unknow_field_44(void *Data) {
	return ((char*)Data) + 1196;
}
void* PowerFormulaTableEntry::unknow_field_45(void *Data) {
	return ((char*)Data) + 1200;
}
void* PowerFormulaTableEntry::unknow_field_46(void *Data) {
	return ((char*)Data) + 1204;
}
void* PowerFormulaTableEntry::unknow_field_47(void *Data) {
	return ((char*)Data) + 1208;
}
void* PowerFormulaTableEntry::unknow_field_48(void *Data) {
	return ((char*)Data) + 1212;
}
void* PowerFormulaTableEntry::unknow_field_49(void *Data) {
	return ((char*)Data) + 1216;
}
void* PowerFormulaTableEntry::unknow_field_50(void *Data) {
	return ((char*)Data) + 1220;
}
void* PowerFormulaTableEntry::unknow_field_51(void *Data) {
	return ((char*)Data) + 1224;
}
void* PowerFormulaTableEntry::unknow_field_52(void *Data) {
	return ((char*)Data) + 1228;
}
void* PowerFormulaTableEntry::unknow_field_53(void *Data) {
	return ((char*)Data) + 1232;
}
void* PowerFormulaTableEntry::unknow_field_54(void *Data) {
	return ((char*)Data) + 1236;
}
void* PowerFormulaTableEntry::unknow_field_55(void *Data) {
	return ((char*)Data) + 1240;
}
void* PowerFormulaTableEntry::unknow_field_56(void *Data) {
	return ((char*)Data) + 1244;
}
void* PowerFormulaTableEntry::unknow_field_57(void *Data) {
	return ((char*)Data) + 1248;
}
void* PowerFormulaTableEntry::unknow_field_58(void *Data) {
	return ((char*)Data) + 1252;
}
void* PowerFormulaTableEntry::unknow_field_59(void *Data) {
	return ((char*)Data) + 1256;
}
void* PowerFormulaTableEntry::unknow_field_60(void *Data) {
	return ((char*)Data) + 1260;
}
void* PowerFormulaTableEntry::unknow_field_61(void *Data) {
	return ((char*)Data) + 1264;
}

PowerFormulaTableEntry aPowerFormulaTableEntry;
// PowerFormulaTable
//
// { serPowerFormulaTableEntries }
// { unknow_field_1 }


void* PowerFormulaTable::New() {
}

PowerFormulaTable::PowerFormulaTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PowerFormulaTable::~PowerFormulaTable() {
		free(Fields);
}

const char* PowerFormulaTable::Name() {
		return "PowerFormulaTable";
}
	
void* PowerFormulaTable::serPowerFormulaTableEntries(void *Data) {
	return ((char*)Data) + 0;
}
void* PowerFormulaTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

PowerFormulaTable aPowerFormulaTable;
// HelpCodes
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* HelpCodes::New() {
}

HelpCodes::HelpCodes() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 9);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 256, 9);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 512, 8);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
HelpCodes::~HelpCodes() {
		free(Fields);
}

const char* HelpCodes::Name() {
		return "HelpCodes";
}
	
void* HelpCodes::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* HelpCodes::unknow_field_1(void *Data) {
	return ((char*)Data) + 256;
}
void* HelpCodes::unknow_field_2(void *Data) {
	return ((char*)Data) + 512;
}

HelpCodes aHelpCodes;
// HelpCodes_1
//
// { serHelpCodes }
// { unknow_field_1 }


void* HelpCodes_1::New() {
}

HelpCodes_1::HelpCodes_1() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
HelpCodes_1::~HelpCodes_1() {
		free(Fields);
}

const char* HelpCodes_1::Name() {
		return "HelpCodes_1";
}
	
void* HelpCodes_1::serHelpCodes(void *Data) {
	return ((char*)Data) + 0;
}
void* HelpCodes_1::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

HelpCodes_1 aHelpCodes_1;
// ItemTierData
//
// { Head }
// { Torso }
// { Feet }
// { Hands }
// { Shoulders }
// { Legs }
// { Bracers }
// { Belt }


void* ItemTierData::New() {
}

ItemTierData::ItemTierData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_GBID, 0, 32);
		Fields[1].fieldinfo(&aDT_GBID, 4, 32);
		Fields[2].fieldinfo(&aDT_GBID, 8, 32);
		Fields[3].fieldinfo(&aDT_GBID, 12, 32);
		Fields[4].fieldinfo(&aDT_GBID, 16, 32);
		Fields[5].fieldinfo(&aDT_GBID, 20, 32);
		Fields[6].fieldinfo(&aDT_GBID, 24, 32);
		Fields[7].fieldinfo(&aDT_GBID, 28, 32);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
ItemTierData::~ItemTierData() {
		free(Fields);
}

const char* ItemTierData::Name() {
		return "ItemTierData";
}
	
void* ItemTierData::Head(void *Data) {
	return ((char*)Data) + 0;
}
void* ItemTierData::Torso(void *Data) {
	return ((char*)Data) + 4;
}
void* ItemTierData::Feet(void *Data) {
	return ((char*)Data) + 8;
}
void* ItemTierData::Hands(void *Data) {
	return ((char*)Data) + 12;
}
void* ItemTierData::Shoulders(void *Data) {
	return ((char*)Data) + 16;
}
void* ItemTierData::Legs(void *Data) {
	return ((char*)Data) + 20;
}
void* ItemTierData::Bracers(void *Data) {
	return ((char*)Data) + 24;
}
void* ItemTierData::Belt(void *Data) {
	return ((char*)Data) + 28;
}

ItemTierData aItemTierData;
// ItemTiers
//
// { serTiers }
// { unknow_field_1 }


void* ItemTiers::New() {
}

ItemTiers::ItemTiers() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ItemTiers::~ItemTiers() {
		free(Fields);
}

const char* ItemTiers::Name() {
		return "ItemTiers";
}
	
void* ItemTiers::serTiers(void *Data) {
	return ((char*)Data) + 0;
}
void* ItemTiers::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ItemTiers aItemTiers;
// LootDistribution
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }


void* LootDistribution::New() {
}

LootDistribution::LootDistribution() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 24);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aDT_INT, 24, 32);
		Fields[7].fieldinfo(&aDT_INT, 28, 32);
		Fields[8].fieldinfo(&aDT_INT, 32, 32);
		Fields[9].fieldinfo(&aDT_INT, 36, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 44, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 52, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 60, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 68, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 72, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 80, 32);
		Fields[21].fieldinfo(&aDT_INT, 84, 32);
		Fields[22].fieldinfo(&aDT_INT, 88, 32);
		Fields[24 - 1].fieldinfo(NULL, 0, 0);
	}
LootDistribution::~LootDistribution() {
		free(Fields);
}

const char* LootDistribution::Name() {
		return "LootDistribution";
}
	
int* LootDistribution::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* LootDistribution::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* LootDistribution::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* LootDistribution::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* LootDistribution::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* LootDistribution::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* LootDistribution::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* LootDistribution::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* LootDistribution::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 32;
}
int* LootDistribution::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 36;
}
void* LootDistribution::unknow_field_10(void *Data) {
	return ((char*)Data) + 40;
}
void* LootDistribution::unknow_field_11(void *Data) {
	return ((char*)Data) + 44;
}
void* LootDistribution::unknow_field_12(void *Data) {
	return ((char*)Data) + 48;
}
void* LootDistribution::unknow_field_13(void *Data) {
	return ((char*)Data) + 52;
}
void* LootDistribution::unknow_field_14(void *Data) {
	return ((char*)Data) + 56;
}
void* LootDistribution::unknow_field_15(void *Data) {
	return ((char*)Data) + 60;
}
void* LootDistribution::unknow_field_16(void *Data) {
	return ((char*)Data) + 64;
}
void* LootDistribution::unknow_field_17(void *Data) {
	return ((char*)Data) + 68;
}
void* LootDistribution::unknow_field_18(void *Data) {
	return ((char*)Data) + 72;
}
void* LootDistribution::unknow_field_19(void *Data) {
	return ((char*)Data) + 76;
}
void* LootDistribution::unknow_field_20(void *Data) {
	return ((char*)Data) + 80;
}
int* LootDistribution::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 84;
}
int* LootDistribution::unknow_field_22(void *Data) {
	return (int*)((char*)Data) + 88;
}

LootDistribution aLootDistribution;
// LootDistributionTable
//
// { serLootDistributions }
// { unknow_field_1 }


void* LootDistributionTable::New() {
}

LootDistributionTable::LootDistributionTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LootDistributionTable::~LootDistributionTable() {
		free(Fields);
}

const char* LootDistributionTable::Name() {
		return "LootDistributionTable";
}
	
void* LootDistributionTable::serLootDistributions(void *Data) {
	return ((char*)Data) + 0;
}
void* LootDistributionTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

LootDistributionTable aLootDistributionTable;
// LootDistribution_1
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }


void* LootDistribution_1::New() {
}

LootDistribution_1::LootDistribution_1() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 24);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 32, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 44, 32);
		Fields[12].fieldinfo(&aDT_INT, 48, 32);
		Fields[13].fieldinfo(&aDT_INT, 52, 32);
		Fields[14].fieldinfo(&aDT_INT, 56, 32);
		Fields[15].fieldinfo(&aDT_INT, 60, 32);
		Fields[16].fieldinfo(&aDT_INT, 64, 32);
		Fields[17].fieldinfo(&aDT_INT, 68, 32);
		Fields[18].fieldinfo(&aDT_INT, 72, 32);
		Fields[19].fieldinfo(&aDT_INT, 76, 32);
		Fields[20].fieldinfo(&aDT_INT, 80, 32);
		Fields[21].fieldinfo(&aDT_INT, 84, 32);
		Fields[22].fieldinfo(&aDT_INT, 88, 32);
		Fields[24 - 1].fieldinfo(NULL, 0, 0);
	}
LootDistribution_1::~LootDistribution_1() {
		free(Fields);
}

const char* LootDistribution_1::Name() {
		return "LootDistribution_1";
}
	
int* LootDistribution_1::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* LootDistribution_1::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* LootDistribution_1::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* LootDistribution_1::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* LootDistribution_1::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* LootDistribution_1::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* LootDistribution_1::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
void* LootDistribution_1::unknow_field_7(void *Data) {
	return ((char*)Data) + 28;
}
void* LootDistribution_1::unknow_field_8(void *Data) {
	return ((char*)Data) + 32;
}
void* LootDistribution_1::unknow_field_9(void *Data) {
	return ((char*)Data) + 36;
}
void* LootDistribution_1::unknow_field_10(void *Data) {
	return ((char*)Data) + 40;
}
void* LootDistribution_1::unknow_field_11(void *Data) {
	return ((char*)Data) + 44;
}
int* LootDistribution_1::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 48;
}
int* LootDistribution_1::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* LootDistribution_1::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* LootDistribution_1::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 60;
}
int* LootDistribution_1::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 64;
}
int* LootDistribution_1::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 68;
}
int* LootDistribution_1::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 72;
}
int* LootDistribution_1::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 76;
}
int* LootDistribution_1::unknow_field_20(void *Data) {
	return (int*)((char*)Data) + 80;
}
int* LootDistribution_1::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 84;
}
int* LootDistribution_1::unknow_field_22(void *Data) {
	return (int*)((char*)Data) + 88;
}

LootDistribution_1 aLootDistribution_1;
// ItemLevelModTable
//
// { serItemLevelModifiers }
// { unknow_field_1 }


void* ItemLevelModTable::New() {
}

ItemLevelModTable::ItemLevelModTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ItemLevelModTable::~ItemLevelModTable() {
		free(Fields);
}

const char* ItemLevelModTable::Name() {
		return "ItemLevelModTable";
}
	
void* ItemLevelModTable::serItemLevelModifiers(void *Data) {
	return ((char*)Data) + 0;
}
void* ItemLevelModTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ItemLevelModTable aItemLevelModTable;
// QualityClass
//
// { Name }
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }


void* QualityClass::New() {
}

QualityClass::QualityClass() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 24);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_FLOAT, 264, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 268, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 272, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 276, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 280, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 284, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 288, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 292, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 296, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 300, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 304, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 308, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 312, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 316, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 320, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 324, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 328, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 332, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 336, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 340, 32);
		Fields[21].fieldinfo(&aDT_FLOAT, 344, 32);
		Fields[22].fieldinfo(&aDT_FLOAT, 348, 32);
		Fields[24 - 1].fieldinfo(NULL, 0, 0);
	}
QualityClass::~QualityClass() {
		free(Fields);
}

const char* QualityClass::Name() {
		return "QualityClass";
}
	
void* QualityClass::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* QualityClass::unknow_field_1(void *Data) {
	return ((char*)Data) + 264;
}
void* QualityClass::unknow_field_2(void *Data) {
	return ((char*)Data) + 268;
}
void* QualityClass::unknow_field_3(void *Data) {
	return ((char*)Data) + 272;
}
void* QualityClass::unknow_field_4(void *Data) {
	return ((char*)Data) + 276;
}
void* QualityClass::unknow_field_5(void *Data) {
	return ((char*)Data) + 280;
}
void* QualityClass::unknow_field_6(void *Data) {
	return ((char*)Data) + 284;
}
void* QualityClass::unknow_field_7(void *Data) {
	return ((char*)Data) + 288;
}
void* QualityClass::unknow_field_8(void *Data) {
	return ((char*)Data) + 292;
}
void* QualityClass::unknow_field_9(void *Data) {
	return ((char*)Data) + 296;
}
void* QualityClass::unknow_field_10(void *Data) {
	return ((char*)Data) + 300;
}
void* QualityClass::unknow_field_11(void *Data) {
	return ((char*)Data) + 304;
}
void* QualityClass::unknow_field_12(void *Data) {
	return ((char*)Data) + 308;
}
void* QualityClass::unknow_field_13(void *Data) {
	return ((char*)Data) + 312;
}
void* QualityClass::unknow_field_14(void *Data) {
	return ((char*)Data) + 316;
}
void* QualityClass::unknow_field_15(void *Data) {
	return ((char*)Data) + 320;
}
void* QualityClass::unknow_field_16(void *Data) {
	return ((char*)Data) + 324;
}
void* QualityClass::unknow_field_17(void *Data) {
	return ((char*)Data) + 328;
}
void* QualityClass::unknow_field_18(void *Data) {
	return ((char*)Data) + 332;
}
void* QualityClass::unknow_field_19(void *Data) {
	return ((char*)Data) + 336;
}
void* QualityClass::unknow_field_20(void *Data) {
	return ((char*)Data) + 340;
}
void* QualityClass::unknow_field_21(void *Data) {
	return ((char*)Data) + 344;
}
void* QualityClass::unknow_field_22(void *Data) {
	return ((char*)Data) + 348;
}

QualityClass aQualityClass;
// QualityClassTable
//
// { serQualityClasses }
// { unknow_field_1 }


void* QualityClassTable::New() {
}

QualityClassTable::QualityClassTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
QualityClassTable::~QualityClassTable() {
		free(Fields);
}

const char* QualityClassTable::Name() {
		return "QualityClassTable";
}
	
void* QualityClassTable::serQualityClasses(void *Data) {
	return ((char*)Data) + 0;
}
void* QualityClassTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

QualityClassTable aQualityClassTable;
// HeroData
//
// { Name }
// { MaleActor }
// { FemaleActor }
// { Inventory_SNO }
// { unknow_field_4 }
// { StartingLMBSkill }
// { StartingRMBSkill }
// { SkillKit0 }
// { SkillKit1 }
// { SkillKit2 }
// { SkillKit3 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }
// { unknow_field_16 }
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { unknow_field_34 }
// { unknow_field_35 }
// { unknow_field_36 }
// { unknow_field_37 }
// { unknow_field_38 }
// { unknow_field_39 }
// { unknow_field_40 }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }
// { unknow_field_44 }
// { unknow_field_45 }
// { unknow_field_46 }
// { unknow_field_47 }
// { unknow_field_48 }
// { unknow_field_49 }
// { unknow_field_50 }
// { unknow_field_51 }
// { unknow_field_52 }
// { unknow_field_53 }
// { unknow_field_54 }
// { unknow_field_55 }
// { unknow_field_56 }


void* HeroData::New() {
}

HeroData::HeroData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 58);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_SNO, 260, 32);
		Fields[2].fieldinfo(&aDT_SNO, 264, 32);
		Fields[3].fieldinfo(&aDT_SNO, 268, 32);
		Fields[4].fieldinfo(&aDT_INT, 272, 32);
		Fields[5].fieldinfo(&aDT_SNO, 276, 32);
		Fields[6].fieldinfo(&aDT_SNO, 280, 32);
		Fields[7].fieldinfo(&aDT_SNO, 284, 32);
		Fields[8].fieldinfo(&aDT_SNO, 288, 32);
		Fields[9].fieldinfo(&aDT_SNO, 292, 32);
		Fields[10].fieldinfo(&aDT_SNO, 296, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 308, 32);
		Fields[12].fieldinfo(&aDT_INT, 312, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 796, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 800, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 808, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 804, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 332, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 336, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 348, 32);
		Fields[20].fieldinfo(&aDT_ENUM, 300, 3);
		Fields[21].fieldinfo(&aDT_ENUM, 304, 3);
		Fields[22].fieldinfo(&aDT_FLOAT, 352, 32);
		Fields[23].fieldinfo(&aDT_FLOAT, 356, 32);
		Fields[24].fieldinfo(&aDT_FLOAT, 360, 32);
		Fields[25].fieldinfo(&aDT_FLOAT, 368, 32);
		Fields[26].fieldinfo(&aDT_FLOAT, 372, 32);
		Fields[27].fieldinfo(&aDT_FLOAT, 376, 32);
		Fields[28].fieldinfo(&aDT_FLOAT, 496, 32);
		Fields[29].fieldinfo(&aDT_FLOAT, 404, 32);
		Fields[30].fieldinfo(&aDT_FLOAT, 532, 32);
		Fields[31].fieldinfo(&aDT_FLOAT, 536, 32);
		Fields[32].fieldinfo(&aDT_FLOAT, 488, 32);
		Fields[33].fieldinfo(&aDT_FLOAT, 544, 32);
		Fields[34].fieldinfo(&aDT_FLOAT, 480, 32);
		Fields[35].fieldinfo(&aDT_FLOAT, 484, 32);
		Fields[36].fieldinfo(&aDT_FLOAT, 768, 32);
		Fields[37].fieldinfo(&aDT_FLOAT, 852, 32);
		Fields[38].fieldinfo(&aDT_FLOAT, 856, 32);
		Fields[39].fieldinfo(&aDT_FLOAT, 860, 32);
		Fields[40].fieldinfo(&aDT_FLOAT, 864, 32);
		Fields[41].fieldinfo(&aDT_FLOAT, 580, 32);
		Fields[42].fieldinfo(&aDT_FLOAT, 584, 32);
		Fields[43].fieldinfo(&aDT_FLOAT, 588, 32);
		Fields[44].fieldinfo(&aDT_FLOAT, 592, 32);
		Fields[45].fieldinfo(&aDT_FLOAT, 596, 32);
		Fields[46].fieldinfo(&aDT_FLOAT, 600, 32);
		Fields[47].fieldinfo(&aDT_FLOAT, 608, 32);
		Fields[48].fieldinfo(&aDT_FLOAT, 612, 32);
		Fields[49].fieldinfo(&aDT_FLOAT, 676, 32);
		Fields[50].fieldinfo(&aDT_FLOAT, 688, 32);
		Fields[51].fieldinfo(&aDT_FLOAT, 692, 32);
		Fields[52].fieldinfo(&aDT_FLOAT, 696, 32);
		Fields[53].fieldinfo(&aDT_FLOAT, 700, 32);
		Fields[54].fieldinfo(&aDT_FLOAT, 716, 32);
		Fields[55].fieldinfo(&aDT_FLOAT, 720, 32);
		Fields[56].fieldinfo(&aDT_FLOAT, 724, 32);
		Fields[58 - 1].fieldinfo(NULL, 0, 0);
	}
HeroData::~HeroData() {
		free(Fields);
}

const char* HeroData::Name() {
		return "HeroData";
}
	
void* HeroData::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* HeroData::MaleActor(void *Data) {
	return ((char*)Data) + 260;
}
void* HeroData::FemaleActor(void *Data) {
	return ((char*)Data) + 264;
}
void* HeroData::Inventory_SNO(void *Data) {
	return ((char*)Data) + 268;
}
int* HeroData::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 272;
}
void* HeroData::StartingLMBSkill(void *Data) {
	return ((char*)Data) + 276;
}
void* HeroData::StartingRMBSkill(void *Data) {
	return ((char*)Data) + 280;
}
void* HeroData::SkillKit0(void *Data) {
	return ((char*)Data) + 284;
}
void* HeroData::SkillKit1(void *Data) {
	return ((char*)Data) + 288;
}
void* HeroData::SkillKit2(void *Data) {
	return ((char*)Data) + 292;
}
void* HeroData::SkillKit3(void *Data) {
	return ((char*)Data) + 296;
}
void* HeroData::unknow_field_11(void *Data) {
	return ((char*)Data) + 308;
}
int* HeroData::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 312;
}
void* HeroData::unknow_field_13(void *Data) {
	return ((char*)Data) + 796;
}
void* HeroData::unknow_field_14(void *Data) {
	return ((char*)Data) + 800;
}
void* HeroData::unknow_field_15(void *Data) {
	return ((char*)Data) + 808;
}
void* HeroData::unknow_field_16(void *Data) {
	return ((char*)Data) + 804;
}
void* HeroData::unknow_field_17(void *Data) {
	return ((char*)Data) + 332;
}
void* HeroData::unknow_field_18(void *Data) {
	return ((char*)Data) + 336;
}
void* HeroData::unknow_field_19(void *Data) {
	return ((char*)Data) + 348;
}
void* HeroData::unknow_field_20(void *Data) {
	return ((char*)Data) + 300;
}
void* HeroData::unknow_field_21(void *Data) {
	return ((char*)Data) + 304;
}
void* HeroData::unknow_field_22(void *Data) {
	return ((char*)Data) + 352;
}
void* HeroData::unknow_field_23(void *Data) {
	return ((char*)Data) + 356;
}
void* HeroData::unknow_field_24(void *Data) {
	return ((char*)Data) + 360;
}
void* HeroData::unknow_field_25(void *Data) {
	return ((char*)Data) + 368;
}
void* HeroData::unknow_field_26(void *Data) {
	return ((char*)Data) + 372;
}
void* HeroData::unknow_field_27(void *Data) {
	return ((char*)Data) + 376;
}
void* HeroData::unknow_field_28(void *Data) {
	return ((char*)Data) + 496;
}
void* HeroData::unknow_field_29(void *Data) {
	return ((char*)Data) + 404;
}
void* HeroData::unknow_field_30(void *Data) {
	return ((char*)Data) + 532;
}
void* HeroData::unknow_field_31(void *Data) {
	return ((char*)Data) + 536;
}
void* HeroData::unknow_field_32(void *Data) {
	return ((char*)Data) + 488;
}
void* HeroData::unknow_field_33(void *Data) {
	return ((char*)Data) + 544;
}
void* HeroData::unknow_field_34(void *Data) {
	return ((char*)Data) + 480;
}
void* HeroData::unknow_field_35(void *Data) {
	return ((char*)Data) + 484;
}
void* HeroData::unknow_field_36(void *Data) {
	return ((char*)Data) + 768;
}
void* HeroData::unknow_field_37(void *Data) {
	return ((char*)Data) + 852;
}
void* HeroData::unknow_field_38(void *Data) {
	return ((char*)Data) + 856;
}
void* HeroData::unknow_field_39(void *Data) {
	return ((char*)Data) + 860;
}
void* HeroData::unknow_field_40(void *Data) {
	return ((char*)Data) + 864;
}
void* HeroData::unknow_field_41(void *Data) {
	return ((char*)Data) + 580;
}
void* HeroData::unknow_field_42(void *Data) {
	return ((char*)Data) + 584;
}
void* HeroData::unknow_field_43(void *Data) {
	return ((char*)Data) + 588;
}
void* HeroData::unknow_field_44(void *Data) {
	return ((char*)Data) + 592;
}
void* HeroData::unknow_field_45(void *Data) {
	return ((char*)Data) + 596;
}
void* HeroData::unknow_field_46(void *Data) {
	return ((char*)Data) + 600;
}
void* HeroData::unknow_field_47(void *Data) {
	return ((char*)Data) + 608;
}
void* HeroData::unknow_field_48(void *Data) {
	return ((char*)Data) + 612;
}
void* HeroData::unknow_field_49(void *Data) {
	return ((char*)Data) + 676;
}
void* HeroData::unknow_field_50(void *Data) {
	return ((char*)Data) + 688;
}
void* HeroData::unknow_field_51(void *Data) {
	return ((char*)Data) + 692;
}
void* HeroData::unknow_field_52(void *Data) {
	return ((char*)Data) + 696;
}
void* HeroData::unknow_field_53(void *Data) {
	return ((char*)Data) + 700;
}
void* HeroData::unknow_field_54(void *Data) {
	return ((char*)Data) + 716;
}
void* HeroData::unknow_field_55(void *Data) {
	return ((char*)Data) + 720;
}
void* HeroData::unknow_field_56(void *Data) {
	return ((char*)Data) + 724;
}

HeroData aHeroData;
// Heros
//
// { serHeros }
// { unknow_field_1 }


void* Heros::New() {
}

Heros::Heros() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Heros::~Heros() {
		free(Fields);
}

const char* Heros::Name() {
		return "Heros";
}
	
void* Heros::serHeros(void *Data) {
	return ((char*)Data) + 0;
}
void* Heros::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

Heros aHeros;
// MovementStyleDefinition
//
// { Name }
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { snoPowerToBreakObjects }


void* MovementStyleDefinition::New() {
}

MovementStyleDefinition::MovementStyleDefinition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 33);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_INT, 260, 32);
		Fields[2].fieldinfo(&aDT_INT, 264, 32);
		Fields[3].fieldinfo(&aDT_INT, 268, 32);
		Fields[4].fieldinfo(&aDT_INT, 272, 32);
		Fields[5].fieldinfo(&aDT_INT, 276, 32);
		Fields[6].fieldinfo(&aDT_INT, 280, 32);
		Fields[7].fieldinfo(&aDT_INT, 284, 32);
		Fields[8].fieldinfo(&aDT_INT, 288, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 292, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 296, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 300, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 304, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 308, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 312, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 316, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 320, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 324, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 328, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 332, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 336, 32);
		Fields[21].fieldinfo(&aDT_FLOAT, 340, 32);
		Fields[22].fieldinfo(&aDT_FLOAT, 344, 32);
		Fields[23].fieldinfo(&aDT_FLOAT, 348, 32);
		Fields[24].fieldinfo(&aDT_FLOAT, 352, 32);
		Fields[25].fieldinfo(&aDT_FLOAT, 356, 32);
		Fields[26].fieldinfo(&aDT_FLOAT, 360, 32);
		Fields[27].fieldinfo(&aDT_FLOAT, 364, 32);
		Fields[28].fieldinfo(&aDT_FLOAT, 368, 32);
		Fields[29].fieldinfo(&aDT_FLOAT, 376, 32);
		Fields[30].fieldinfo(&aDT_FLOAT, 372, 32);
		Fields[31].fieldinfo(&aDT_SNO, 380, 32);
		Fields[33 - 1].fieldinfo(NULL, 0, 0);
	}
MovementStyleDefinition::~MovementStyleDefinition() {
		free(Fields);
}

const char* MovementStyleDefinition::Name() {
		return "MovementStyleDefinition";
}
	
void* MovementStyleDefinition::Name(void *Data) {
	return ((char*)Data) + 4;
}
int* MovementStyleDefinition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 260;
}
int* MovementStyleDefinition::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 264;
}
int* MovementStyleDefinition::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 268;
}
int* MovementStyleDefinition::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 272;
}
int* MovementStyleDefinition::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 276;
}
int* MovementStyleDefinition::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 280;
}
int* MovementStyleDefinition::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 284;
}
int* MovementStyleDefinition::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 288;
}
void* MovementStyleDefinition::unknow_field_9(void *Data) {
	return ((char*)Data) + 292;
}
void* MovementStyleDefinition::unknow_field_10(void *Data) {
	return ((char*)Data) + 296;
}
void* MovementStyleDefinition::unknow_field_11(void *Data) {
	return ((char*)Data) + 300;
}
void* MovementStyleDefinition::unknow_field_12(void *Data) {
	return ((char*)Data) + 304;
}
void* MovementStyleDefinition::unknow_field_13(void *Data) {
	return ((char*)Data) + 308;
}
void* MovementStyleDefinition::unknow_field_14(void *Data) {
	return ((char*)Data) + 312;
}
void* MovementStyleDefinition::unknow_field_15(void *Data) {
	return ((char*)Data) + 316;
}
void* MovementStyleDefinition::unknow_field_16(void *Data) {
	return ((char*)Data) + 320;
}
void* MovementStyleDefinition::unknow_field_17(void *Data) {
	return ((char*)Data) + 324;
}
void* MovementStyleDefinition::unknow_field_18(void *Data) {
	return ((char*)Data) + 328;
}
void* MovementStyleDefinition::unknow_field_19(void *Data) {
	return ((char*)Data) + 332;
}
void* MovementStyleDefinition::unknow_field_20(void *Data) {
	return ((char*)Data) + 336;
}
void* MovementStyleDefinition::unknow_field_21(void *Data) {
	return ((char*)Data) + 340;
}
void* MovementStyleDefinition::unknow_field_22(void *Data) {
	return ((char*)Data) + 344;
}
void* MovementStyleDefinition::unknow_field_23(void *Data) {
	return ((char*)Data) + 348;
}
void* MovementStyleDefinition::unknow_field_24(void *Data) {
	return ((char*)Data) + 352;
}
void* MovementStyleDefinition::unknow_field_25(void *Data) {
	return ((char*)Data) + 356;
}
void* MovementStyleDefinition::unknow_field_26(void *Data) {
	return ((char*)Data) + 360;
}
void* MovementStyleDefinition::unknow_field_27(void *Data) {
	return ((char*)Data) + 364;
}
void* MovementStyleDefinition::unknow_field_28(void *Data) {
	return ((char*)Data) + 368;
}
void* MovementStyleDefinition::unknow_field_29(void *Data) {
	return ((char*)Data) + 376;
}
void* MovementStyleDefinition::unknow_field_30(void *Data) {
	return ((char*)Data) + 372;
}
void* MovementStyleDefinition::snoPowerToBreakObjects(void *Data) {
	return ((char*)Data) + 380;
}

MovementStyleDefinition aMovementStyleDefinition;
// MovementStyles
//
// { serMovementStyles }
// { unknow_field_1 }


void* MovementStyles::New() {
}

MovementStyles::MovementStyles() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
MovementStyles::~MovementStyles() {
		free(Fields);
}

const char* MovementStyles::Name() {
		return "MovementStyles";
}
	
void* MovementStyles::serMovementStyles(void *Data) {
	return ((char*)Data) + 0;
}
void* MovementStyles::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

MovementStyles aMovementStyles;
// LabelGBID
//
// { Name }
// { unknow_field_1 }


void* LabelGBID::New() {
}

LabelGBID::LabelGBID() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_INT, 260, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LabelGBID::~LabelGBID() {
		free(Fields);
}

const char* LabelGBID::Name() {
		return "LabelGBID";
}
	
void* LabelGBID::Name(void *Data) {
	return ((char*)Data) + 4;
}
int* LabelGBID::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 260;
}

LabelGBID aLabelGBID;
// Labels
//
// { serLabelGBIDs }
// { unknow_field_1 }


void* Labels::New() {
}

Labels::Labels() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Labels::~Labels() {
		free(Fields);
}

const char* Labels::Name() {
		return "Labels";
}
	
void* Labels::serLabelGBIDs(void *Data) {
	return ((char*)Data) + 0;
}
void* Labels::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

Labels aLabels;
// MonsterLevelDefinition
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { unknow_field_34 }
// { unknow_field_35 }
// { unknow_field_36 }
// { unknow_field_37 }
// { unknow_field_38 }
// { unknow_field_39 }
// { unknow_field_40 }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }
// { unknow_field_44 }
// { unknow_field_45 }
// { unknow_field_46 }
// { unknow_field_47 }
// { unknow_field_48 }
// { unknow_field_49 }
// { unknow_field_50 }
// { unknow_field_51 }
// { unknow_field_52 }


void* MonsterLevelDefinition::New() {
}

MonsterLevelDefinition::MonsterLevelDefinition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 54);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 484, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 488, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 496, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 492, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 32, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 184, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 92, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 96, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 100, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 104, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 108, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 112, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 116, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 120, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 124, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 128, 32);
		Fields[21].fieldinfo(&aDT_FLOAT, 132, 32);
		Fields[22].fieldinfo(&aDT_FLOAT, 136, 32);
		Fields[23].fieldinfo(&aDT_FLOAT, 440, 32);
		Fields[24].fieldinfo(&aDT_FLOAT, 444, 32);
		Fields[25].fieldinfo(&aDT_FLOAT, 140, 32);
		Fields[26].fieldinfo(&aDT_FLOAT, 144, 32);
		Fields[27].fieldinfo(&aDT_FLOAT, 460, 32);
		Fields[28].fieldinfo(&aDT_FLOAT, 464, 32);
		Fields[29].fieldinfo(&aDT_FLOAT, 468, 32);
		Fields[30].fieldinfo(&aDT_FLOAT, 472, 32);
		Fields[31].fieldinfo(&aDT_FLOAT, 476, 32);
		Fields[32].fieldinfo(&aDT_FLOAT, 504, 32);
		Fields[33].fieldinfo(&aDT_FLOAT, 148, 32);
		Fields[34].fieldinfo(&aDT_FLOAT, 152, 32);
		Fields[35].fieldinfo(&aDT_FLOAT, 156, 32);
		Fields[36].fieldinfo(&aDT_FLOAT, 160, 32);
		Fields[37].fieldinfo(&aDT_FLOAT, 220, 32);
		Fields[38].fieldinfo(&aDT_FLOAT, 224, 32);
		Fields[39].fieldinfo(&aDT_FLOAT, 176, 32);
		Fields[40].fieldinfo(&aDT_FLOAT, 520, 32);
		Fields[41].fieldinfo(&aDT_FLOAT, 180, 32);
		Fields[42].fieldinfo(&aDT_FLOAT, 232, 32);
		Fields[43].fieldinfo(&aDT_FLOAT, 236, 32);
		Fields[44].fieldinfo(&aDT_FLOAT, 268, 32);
		Fields[45].fieldinfo(&aDT_FLOAT, 272, 32);
		Fields[46].fieldinfo(&aDT_FLOAT, 276, 32);
		Fields[47].fieldinfo(&aDT_FLOAT, 280, 32);
		Fields[48].fieldinfo(&aDT_FLOAT, 284, 32);
		Fields[49].fieldinfo(&aDT_FLOAT, 288, 32);
		Fields[50].fieldinfo(&aDT_FLOAT, 292, 32);
		Fields[51].fieldinfo(&aDT_FLOAT, 296, 32);
		Fields[52].fieldinfo(&aDT_FLOAT, 300, 32);
		Fields[54 - 1].fieldinfo(NULL, 0, 0);
	}
MonsterLevelDefinition::~MonsterLevelDefinition() {
		free(Fields);
}

const char* MonsterLevelDefinition::Name() {
		return "MonsterLevelDefinition";
}
	
int* MonsterLevelDefinition::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* MonsterLevelDefinition::unknow_field_1(void *Data) {
	return ((char*)Data) + 484;
}
void* MonsterLevelDefinition::unknow_field_2(void *Data) {
	return ((char*)Data) + 488;
}
void* MonsterLevelDefinition::unknow_field_3(void *Data) {
	return ((char*)Data) + 496;
}
void* MonsterLevelDefinition::unknow_field_4(void *Data) {
	return ((char*)Data) + 492;
}
void* MonsterLevelDefinition::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* MonsterLevelDefinition::unknow_field_6(void *Data) {
	return ((char*)Data) + 32;
}
void* MonsterLevelDefinition::unknow_field_7(void *Data) {
	return ((char*)Data) + 36;
}
void* MonsterLevelDefinition::unknow_field_8(void *Data) {
	return ((char*)Data) + 40;
}
void* MonsterLevelDefinition::unknow_field_9(void *Data) {
	return ((char*)Data) + 48;
}
void* MonsterLevelDefinition::unknow_field_10(void *Data) {
	return ((char*)Data) + 184;
}
void* MonsterLevelDefinition::unknow_field_11(void *Data) {
	return ((char*)Data) + 92;
}
void* MonsterLevelDefinition::unknow_field_12(void *Data) {
	return ((char*)Data) + 96;
}
void* MonsterLevelDefinition::unknow_field_13(void *Data) {
	return ((char*)Data) + 100;
}
void* MonsterLevelDefinition::unknow_field_14(void *Data) {
	return ((char*)Data) + 104;
}
void* MonsterLevelDefinition::unknow_field_15(void *Data) {
	return ((char*)Data) + 108;
}
void* MonsterLevelDefinition::unknow_field_16(void *Data) {
	return ((char*)Data) + 112;
}
void* MonsterLevelDefinition::unknow_field_17(void *Data) {
	return ((char*)Data) + 116;
}
void* MonsterLevelDefinition::unknow_field_18(void *Data) {
	return ((char*)Data) + 120;
}
void* MonsterLevelDefinition::unknow_field_19(void *Data) {
	return ((char*)Data) + 124;
}
void* MonsterLevelDefinition::unknow_field_20(void *Data) {
	return ((char*)Data) + 128;
}
void* MonsterLevelDefinition::unknow_field_21(void *Data) {
	return ((char*)Data) + 132;
}
void* MonsterLevelDefinition::unknow_field_22(void *Data) {
	return ((char*)Data) + 136;
}
void* MonsterLevelDefinition::unknow_field_23(void *Data) {
	return ((char*)Data) + 440;
}
void* MonsterLevelDefinition::unknow_field_24(void *Data) {
	return ((char*)Data) + 444;
}
void* MonsterLevelDefinition::unknow_field_25(void *Data) {
	return ((char*)Data) + 140;
}
void* MonsterLevelDefinition::unknow_field_26(void *Data) {
	return ((char*)Data) + 144;
}
void* MonsterLevelDefinition::unknow_field_27(void *Data) {
	return ((char*)Data) + 460;
}
void* MonsterLevelDefinition::unknow_field_28(void *Data) {
	return ((char*)Data) + 464;
}
void* MonsterLevelDefinition::unknow_field_29(void *Data) {
	return ((char*)Data) + 468;
}
void* MonsterLevelDefinition::unknow_field_30(void *Data) {
	return ((char*)Data) + 472;
}
void* MonsterLevelDefinition::unknow_field_31(void *Data) {
	return ((char*)Data) + 476;
}
void* MonsterLevelDefinition::unknow_field_32(void *Data) {
	return ((char*)Data) + 504;
}
void* MonsterLevelDefinition::unknow_field_33(void *Data) {
	return ((char*)Data) + 148;
}
void* MonsterLevelDefinition::unknow_field_34(void *Data) {
	return ((char*)Data) + 152;
}
void* MonsterLevelDefinition::unknow_field_35(void *Data) {
	return ((char*)Data) + 156;
}
void* MonsterLevelDefinition::unknow_field_36(void *Data) {
	return ((char*)Data) + 160;
}
void* MonsterLevelDefinition::unknow_field_37(void *Data) {
	return ((char*)Data) + 220;
}
void* MonsterLevelDefinition::unknow_field_38(void *Data) {
	return ((char*)Data) + 224;
}
void* MonsterLevelDefinition::unknow_field_39(void *Data) {
	return ((char*)Data) + 176;
}
void* MonsterLevelDefinition::unknow_field_40(void *Data) {
	return ((char*)Data) + 520;
}
void* MonsterLevelDefinition::unknow_field_41(void *Data) {
	return ((char*)Data) + 180;
}
void* MonsterLevelDefinition::unknow_field_42(void *Data) {
	return ((char*)Data) + 232;
}
void* MonsterLevelDefinition::unknow_field_43(void *Data) {
	return ((char*)Data) + 236;
}
void* MonsterLevelDefinition::unknow_field_44(void *Data) {
	return ((char*)Data) + 268;
}
void* MonsterLevelDefinition::unknow_field_45(void *Data) {
	return ((char*)Data) + 272;
}
void* MonsterLevelDefinition::unknow_field_46(void *Data) {
	return ((char*)Data) + 276;
}
void* MonsterLevelDefinition::unknow_field_47(void *Data) {
	return ((char*)Data) + 280;
}
void* MonsterLevelDefinition::unknow_field_48(void *Data) {
	return ((char*)Data) + 284;
}
void* MonsterLevelDefinition::unknow_field_49(void *Data) {
	return ((char*)Data) + 288;
}
void* MonsterLevelDefinition::unknow_field_50(void *Data) {
	return ((char*)Data) + 292;
}
void* MonsterLevelDefinition::unknow_field_51(void *Data) {
	return ((char*)Data) + 296;
}
void* MonsterLevelDefinition::unknow_field_52(void *Data) {
	return ((char*)Data) + 300;
}

MonsterLevelDefinition aMonsterLevelDefinition;
// MonsterLevelTable
//
// { serMonsterLevels }
// { unknow_field_1 }


void* MonsterLevelTable::New() {
}

MonsterLevelTable::MonsterLevelTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
MonsterLevelTable::~MonsterLevelTable() {
		free(Fields);
}

const char* MonsterLevelTable::Name() {
		return "MonsterLevelTable";
}
	
void* MonsterLevelTable::serMonsterLevels(void *Data) {
	return ((char*)Data) + 0;
}
void* MonsterLevelTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

MonsterLevelTable aMonsterLevelTable;
// AffixTableEntry
//
// { Name }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { RareNamePrefixStringList }
// { RareNameSuffixStringList }
// { AffixFamily0 }
// { AffixFamily1 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }
// { AssociatedAffix }
// { ExclusionCategory }
// { unknow_field_18 }
// { unknow_field_19 }


void* AffixTableEntry::New() {
}

AffixTableEntry::AffixTableEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 21);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_INT, 260, 32);
		Fields[2].fieldinfo(&aDT_INT, 264, 32);
		Fields[3].fieldinfo(&aDT_INT, 268, 32);
		Fields[4].fieldinfo(&aDT_INT, 272, 32);
		Fields[5].fieldinfo(&aDT_INT, 276, 32);
		Fields[6].fieldinfo(&aDT_INT, 280, 32);
		Fields[7].fieldinfo(&aDT_ENUM, 284, 4);
		Fields[8].fieldinfo(&aDT_INT, 288, 32);
		Fields[9].fieldinfo(&aDT_SNO, 292, 32);
		Fields[10].fieldinfo(&aDT_SNO, 296, 32);
		Fields[11].fieldinfo(&aDT_GBID, 300, 32);
		Fields[12].fieldinfo(&aDT_GBID, 304, 32);
		Fields[13].fieldinfo(&aDT_INT, 360, 32);
		Fields[14].fieldinfo(&aDT_ENUM, 364, 4);
		Fields[15].fieldinfo(&aDT_FIXEDARRAY, 336, 32);
		Fields[16].fieldinfo(&aDT_GBID, 368, 32);
		Fields[17].fieldinfo(&aDT_GBID, 308, 32);
		Fields[18].fieldinfo(&aDT_FIXEDARRAY, 312, 32);
		Fields[19].fieldinfo(&aDT_FIXEDARRAY, 376, 0);
		Fields[21 - 1].fieldinfo(NULL, 0, 0);
	}
AffixTableEntry::~AffixTableEntry() {
		free(Fields);
}

const char* AffixTableEntry::Name() {
		return "AffixTableEntry";
}
	
void* AffixTableEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
int* AffixTableEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 260;
}
int* AffixTableEntry::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 264;
}
int* AffixTableEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 268;
}
int* AffixTableEntry::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 272;
}
int* AffixTableEntry::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 276;
}
int* AffixTableEntry::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 280;
}
void* AffixTableEntry::unknow_field_7(void *Data) {
	return ((char*)Data) + 284;
}
int* AffixTableEntry::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 288;
}
void* AffixTableEntry::RareNamePrefixStringList(void *Data) {
	return ((char*)Data) + 292;
}
void* AffixTableEntry::RareNameSuffixStringList(void *Data) {
	return ((char*)Data) + 296;
}
void* AffixTableEntry::AffixFamily0(void *Data) {
	return ((char*)Data) + 300;
}
void* AffixTableEntry::AffixFamily1(void *Data) {
	return ((char*)Data) + 304;
}
int* AffixTableEntry::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 360;
}
void* AffixTableEntry::unknow_field_14(void *Data) {
	return ((char*)Data) + 364;
}
void* AffixTableEntry::unknow_field_15(void *Data) {
	return ((char*)Data) + 336;
}
void* AffixTableEntry::AssociatedAffix(void *Data) {
	return ((char*)Data) + 368;
}
void* AffixTableEntry::ExclusionCategory(void *Data) {
	return ((char*)Data) + 308;
}
void* AffixTableEntry::unknow_field_18(void *Data) {
	return ((char*)Data) + 312;
}
void* AffixTableEntry::unknow_field_19(void *Data) {
	return ((char*)Data) + 376;
}

AffixTableEntry aAffixTableEntry;
// AffixTable
//
// { serAffixes }
// { unknow_field_1 }


void* AffixTable::New() {
}

AffixTable::AffixTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
AffixTable::~AffixTable() {
		free(Fields);
}

const char* AffixTable::Name() {
		return "AffixTable";
}
	
void* AffixTable::serAffixes(void *Data) {
	return ((char*)Data) + 0;
}
void* AffixTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

AffixTable aAffixTable;
// SetItemBonusTableEntry
//
// { Name }
// { unknow_field_1 }
// { Set }
// { unknow_field_3 }


void* SetItemBonusTableEntry::New() {
}

SetItemBonusTableEntry::SetItemBonusTableEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_INT, 264, 32);
		Fields[2].fieldinfo(&aDT_GBID, 260, 32);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 272, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
SetItemBonusTableEntry::~SetItemBonusTableEntry() {
		free(Fields);
}

const char* SetItemBonusTableEntry::Name() {
		return "SetItemBonusTableEntry";
}
	
void* SetItemBonusTableEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
int* SetItemBonusTableEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 264;
}
void* SetItemBonusTableEntry::Set(void *Data) {
	return ((char*)Data) + 260;
}
void* SetItemBonusTableEntry::unknow_field_3(void *Data) {
	return ((char*)Data) + 272;
}

SetItemBonusTableEntry aSetItemBonusTableEntry;
// SetItemBonusTable
//
// { serSetItemBonuses }
// { unknow_field_1 }


void* SetItemBonusTable::New() {
}

SetItemBonusTable::SetItemBonusTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SetItemBonusTable::~SetItemBonusTable() {
		free(Fields);
}

const char* SetItemBonusTable::Name() {
		return "SetItemBonusTable";
}
	
void* SetItemBonusTable::serSetItemBonuses(void *Data) {
	return ((char*)Data) + 0;
}
void* SetItemBonusTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

SetItemBonusTable aSetItemBonusTable;
// MonsterAffixesEntry
//
// { Name }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { On_Spawn_Power_Minion }
// { On_Spawn_Power_Rare }
// { On_Spawn_Power_Champion }
// { unknow_field_13 }
// { Param0 }
// { ptAttributes_0__serAttributeFormula }
// { Value0 }
// { unknow_field_17 }
// { Param1 }
// { ptAttributes_1__serAttributeFormula }
// { Value1 }
// { unknow_field_21 }
// { Param2 }
// { ptAttributes_2__serAttributeFormula }
// { Value2 }
// { unknow_field_25 }
// { Param3 }
// { ptAttributes_3__serAttributeFormula }
// { Value3 }
// { unknow_field_29 }
// { Param4 }
// { ptAttributes_4__serAttributeFormula }
// { Value4 }
// { unknow_field_33 }
// { Param5 }
// { ptAttributes_5__serAttributeFormula }
// { Value5 }
// { unknow_field_37 }
// { Param6 }
// { ptAttributes_6__serAttributeFormula }
// { Value6 }
// { unknow_field_41 }
// { Param7 }
// { ptAttributes_7__serAttributeFormula }
// { Value7 }
// { unknow_field_45 }
// { Param8 }
// { ptAttributes_8__serAttributeFormula }
// { Value8 }
// { unknow_field_49 }
// { Param9 }
// { ptAttributes_9__serAttributeFormula }
// { Value9 }
// { unknow_field_53 }
// { MinionParam0 }
// { ptMinionAttributes_0__serAttributeFormula }
// { MinionValue0 }
// { unknow_field_57 }
// { MinionParam1 }
// { ptMinionAttributes_1__serAttributeFormula }
// { MinionValue1 }
// { unknow_field_61 }
// { MinionParam2 }
// { ptMinionAttributes_2__serAttributeFormula }
// { MinionValue2 }
// { unknow_field_65 }
// { MinionParam3 }
// { ptMinionAttributes_3__serAttributeFormula }
// { MinionValue3 }
// { unknow_field_69 }
// { MinionParam4 }
// { ptMinionAttributes_4__serAttributeFormula }
// { MinionValue4 }
// { unknow_field_73 }
// { MinionParam5 }
// { ptMinionAttributes_5__serAttributeFormula }
// { MinionValue5 }
// { unknow_field_77 }
// { MinionParam6 }
// { ptMinionAttributes_6__serAttributeFormula }
// { MinionValue6 }
// { unknow_field_81 }
// { MinionParam7 }
// { ptMinionAttributes_7__serAttributeFormula }
// { MinionValue7 }
// { unknow_field_85 }
// { MinionParam8 }
// { ptMinionAttributes_8__serAttributeFormula }
// { MinionValue8 }
// { unknow_field_89 }
// { MinionParam9 }
// { ptMinionAttributes_9__serAttributeFormula }
// { MinionValue9 }


void* MonsterAffixesEntry::New() {
}

MonsterAffixesEntry::MonsterAffixesEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 94);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_INT, 260, 32);
		Fields[2].fieldinfo(&aDT_INT, 264, 32);
		Fields[3].fieldinfo(&aDT_INT, 268, 32);
		Fields[4].fieldinfo(&aDT_ENUM, 280, 4);
		Fields[5].fieldinfo(&aDT_ENUM, 272, 2);
		Fields[6].fieldinfo(&aDT_ENUM, 276, 3);
		Fields[7].fieldinfo(&aDT_INT, 284, 32);
		Fields[8].fieldinfo(&aDT_INT, 288, 32);
		Fields[9].fieldinfo(&aDT_INT, 292, 32);
		Fields[10].fieldinfo(&aDT_SNO, 780, 32);
		Fields[11].fieldinfo(&aDT_SNO, 788, 32);
		Fields[12].fieldinfo(&aDT_SNO, 784, 32);
		Fields[13].fieldinfo(&aDT_TRANSLATEABLE, 296, 0);
		Fields[14].fieldinfo(&aDT_ATTRIBUTEPARAM, 300, 32);
		Fields[15].fieldinfo(&aSerializeData, 312, 0);
		Fields[16].fieldinfo(&aDT_FORMULA, 304, 0);
		Fields[17].fieldinfo(&aDT_TRANSLATEABLE, 320, 0);
		Fields[18].fieldinfo(&aDT_ATTRIBUTEPARAM, 324, 32);
		Fields[19].fieldinfo(&aSerializeData, 336, 0);
		Fields[20].fieldinfo(&aDT_FORMULA, 328, 0);
		Fields[21].fieldinfo(&aDT_TRANSLATEABLE, 344, 0);
		Fields[22].fieldinfo(&aDT_ATTRIBUTEPARAM, 348, 32);
		Fields[23].fieldinfo(&aSerializeData, 360, 0);
		Fields[24].fieldinfo(&aDT_FORMULA, 352, 0);
		Fields[25].fieldinfo(&aDT_TRANSLATEABLE, 368, 0);
		Fields[26].fieldinfo(&aDT_ATTRIBUTEPARAM, 372, 32);
		Fields[27].fieldinfo(&aSerializeData, 384, 0);
		Fields[28].fieldinfo(&aDT_FORMULA, 376, 0);
		Fields[29].fieldinfo(&aDT_TRANSLATEABLE, 392, 0);
		Fields[30].fieldinfo(&aDT_ATTRIBUTEPARAM, 396, 32);
		Fields[31].fieldinfo(&aSerializeData, 408, 0);
		Fields[32].fieldinfo(&aDT_FORMULA, 400, 0);
		Fields[33].fieldinfo(&aDT_TRANSLATEABLE, 416, 0);
		Fields[34].fieldinfo(&aDT_ATTRIBUTEPARAM, 420, 32);
		Fields[35].fieldinfo(&aSerializeData, 432, 0);
		Fields[36].fieldinfo(&aDT_FORMULA, 424, 0);
		Fields[37].fieldinfo(&aDT_TRANSLATEABLE, 440, 0);
		Fields[38].fieldinfo(&aDT_ATTRIBUTEPARAM, 444, 32);
		Fields[39].fieldinfo(&aSerializeData, 456, 0);
		Fields[40].fieldinfo(&aDT_FORMULA, 448, 0);
		Fields[41].fieldinfo(&aDT_TRANSLATEABLE, 464, 0);
		Fields[42].fieldinfo(&aDT_ATTRIBUTEPARAM, 468, 32);
		Fields[43].fieldinfo(&aSerializeData, 480, 0);
		Fields[44].fieldinfo(&aDT_FORMULA, 472, 0);
		Fields[45].fieldinfo(&aDT_TRANSLATEABLE, 488, 0);
		Fields[46].fieldinfo(&aDT_ATTRIBUTEPARAM, 492, 32);
		Fields[47].fieldinfo(&aSerializeData, 504, 0);
		Fields[48].fieldinfo(&aDT_FORMULA, 496, 0);
		Fields[49].fieldinfo(&aDT_TRANSLATEABLE, 512, 0);
		Fields[50].fieldinfo(&aDT_ATTRIBUTEPARAM, 516, 32);
		Fields[51].fieldinfo(&aSerializeData, 528, 0);
		Fields[52].fieldinfo(&aDT_FORMULA, 520, 0);
		Fields[53].fieldinfo(&aDT_TRANSLATEABLE, 536, 0);
		Fields[54].fieldinfo(&aDT_ATTRIBUTEPARAM, 540, 32);
		Fields[55].fieldinfo(&aSerializeData, 552, 0);
		Fields[56].fieldinfo(&aDT_FORMULA, 544, 0);
		Fields[57].fieldinfo(&aDT_TRANSLATEABLE, 560, 0);
		Fields[58].fieldinfo(&aDT_ATTRIBUTEPARAM, 564, 32);
		Fields[59].fieldinfo(&aSerializeData, 576, 0);
		Fields[60].fieldinfo(&aDT_FORMULA, 568, 0);
		Fields[61].fieldinfo(&aDT_TRANSLATEABLE, 584, 0);
		Fields[62].fieldinfo(&aDT_ATTRIBUTEPARAM, 588, 32);
		Fields[63].fieldinfo(&aSerializeData, 600, 0);
		Fields[64].fieldinfo(&aDT_FORMULA, 592, 0);
		Fields[65].fieldinfo(&aDT_TRANSLATEABLE, 608, 0);
		Fields[66].fieldinfo(&aDT_ATTRIBUTEPARAM, 612, 32);
		Fields[67].fieldinfo(&aSerializeData, 624, 0);
		Fields[68].fieldinfo(&aDT_FORMULA, 616, 0);
		Fields[69].fieldinfo(&aDT_TRANSLATEABLE, 632, 0);
		Fields[70].fieldinfo(&aDT_ATTRIBUTEPARAM, 636, 32);
		Fields[71].fieldinfo(&aSerializeData, 648, 0);
		Fields[72].fieldinfo(&aDT_FORMULA, 640, 0);
		Fields[73].fieldinfo(&aDT_TRANSLATEABLE, 656, 0);
		Fields[74].fieldinfo(&aDT_ATTRIBUTEPARAM, 660, 32);
		Fields[75].fieldinfo(&aSerializeData, 672, 0);
		Fields[76].fieldinfo(&aDT_FORMULA, 664, 0);
		Fields[77].fieldinfo(&aDT_TRANSLATEABLE, 680, 0);
		Fields[78].fieldinfo(&aDT_ATTRIBUTEPARAM, 684, 32);
		Fields[79].fieldinfo(&aSerializeData, 696, 0);
		Fields[80].fieldinfo(&aDT_FORMULA, 688, 0);
		Fields[81].fieldinfo(&aDT_TRANSLATEABLE, 704, 0);
		Fields[82].fieldinfo(&aDT_ATTRIBUTEPARAM, 708, 32);
		Fields[83].fieldinfo(&aSerializeData, 720, 0);
		Fields[84].fieldinfo(&aDT_FORMULA, 712, 0);
		Fields[85].fieldinfo(&aDT_TRANSLATEABLE, 728, 0);
		Fields[86].fieldinfo(&aDT_ATTRIBUTEPARAM, 732, 32);
		Fields[87].fieldinfo(&aSerializeData, 744, 0);
		Fields[88].fieldinfo(&aDT_FORMULA, 736, 0);
		Fields[89].fieldinfo(&aDT_TRANSLATEABLE, 752, 0);
		Fields[90].fieldinfo(&aDT_ATTRIBUTEPARAM, 756, 32);
		Fields[91].fieldinfo(&aSerializeData, 768, 0);
		Fields[92].fieldinfo(&aDT_FORMULA, 760, 0);
		Fields[94 - 1].fieldinfo(NULL, 0, 0);
	}
MonsterAffixesEntry::~MonsterAffixesEntry() {
		free(Fields);
}

const char* MonsterAffixesEntry::Name() {
		return "MonsterAffixesEntry";
}
	
void* MonsterAffixesEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
int* MonsterAffixesEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 260;
}
int* MonsterAffixesEntry::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 264;
}
int* MonsterAffixesEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 268;
}
void* MonsterAffixesEntry::unknow_field_4(void *Data) {
	return ((char*)Data) + 280;
}
void* MonsterAffixesEntry::unknow_field_5(void *Data) {
	return ((char*)Data) + 272;
}
void* MonsterAffixesEntry::unknow_field_6(void *Data) {
	return ((char*)Data) + 276;
}
int* MonsterAffixesEntry::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 284;
}
int* MonsterAffixesEntry::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 288;
}
int* MonsterAffixesEntry::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 292;
}
void* MonsterAffixesEntry::On_Spawn_Power_Minion(void *Data) {
	return ((char*)Data) + 780;
}
void* MonsterAffixesEntry::On_Spawn_Power_Rare(void *Data) {
	return ((char*)Data) + 788;
}
void* MonsterAffixesEntry::On_Spawn_Power_Champion(void *Data) {
	return ((char*)Data) + 784;
}
void* MonsterAffixesEntry::unknow_field_13(void *Data) {
	return ((char*)Data) + 296;
}
void* MonsterAffixesEntry::Param0(void *Data) {
	return ((char*)Data) + 300;
}
void* MonsterAffixesEntry::ptAttributes_0__serAttributeFormula(void *Data) {
	return ((char*)Data) + 312;
}
void* MonsterAffixesEntry::Value0(void *Data) {
	return ((char*)Data) + 304;
}
void* MonsterAffixesEntry::unknow_field_17(void *Data) {
	return ((char*)Data) + 320;
}
void* MonsterAffixesEntry::Param1(void *Data) {
	return ((char*)Data) + 324;
}
void* MonsterAffixesEntry::ptAttributes_1__serAttributeFormula(void *Data) {
	return ((char*)Data) + 336;
}
void* MonsterAffixesEntry::Value1(void *Data) {
	return ((char*)Data) + 328;
}
void* MonsterAffixesEntry::unknow_field_21(void *Data) {
	return ((char*)Data) + 344;
}
void* MonsterAffixesEntry::Param2(void *Data) {
	return ((char*)Data) + 348;
}
void* MonsterAffixesEntry::ptAttributes_2__serAttributeFormula(void *Data) {
	return ((char*)Data) + 360;
}
void* MonsterAffixesEntry::Value2(void *Data) {
	return ((char*)Data) + 352;
}
void* MonsterAffixesEntry::unknow_field_25(void *Data) {
	return ((char*)Data) + 368;
}
void* MonsterAffixesEntry::Param3(void *Data) {
	return ((char*)Data) + 372;
}
void* MonsterAffixesEntry::ptAttributes_3__serAttributeFormula(void *Data) {
	return ((char*)Data) + 384;
}
void* MonsterAffixesEntry::Value3(void *Data) {
	return ((char*)Data) + 376;
}
void* MonsterAffixesEntry::unknow_field_29(void *Data) {
	return ((char*)Data) + 392;
}
void* MonsterAffixesEntry::Param4(void *Data) {
	return ((char*)Data) + 396;
}
void* MonsterAffixesEntry::ptAttributes_4__serAttributeFormula(void *Data) {
	return ((char*)Data) + 408;
}
void* MonsterAffixesEntry::Value4(void *Data) {
	return ((char*)Data) + 400;
}
void* MonsterAffixesEntry::unknow_field_33(void *Data) {
	return ((char*)Data) + 416;
}
void* MonsterAffixesEntry::Param5(void *Data) {
	return ((char*)Data) + 420;
}
void* MonsterAffixesEntry::ptAttributes_5__serAttributeFormula(void *Data) {
	return ((char*)Data) + 432;
}
void* MonsterAffixesEntry::Value5(void *Data) {
	return ((char*)Data) + 424;
}
void* MonsterAffixesEntry::unknow_field_37(void *Data) {
	return ((char*)Data) + 440;
}
void* MonsterAffixesEntry::Param6(void *Data) {
	return ((char*)Data) + 444;
}
void* MonsterAffixesEntry::ptAttributes_6__serAttributeFormula(void *Data) {
	return ((char*)Data) + 456;
}
void* MonsterAffixesEntry::Value6(void *Data) {
	return ((char*)Data) + 448;
}
void* MonsterAffixesEntry::unknow_field_41(void *Data) {
	return ((char*)Data) + 464;
}
void* MonsterAffixesEntry::Param7(void *Data) {
	return ((char*)Data) + 468;
}
void* MonsterAffixesEntry::ptAttributes_7__serAttributeFormula(void *Data) {
	return ((char*)Data) + 480;
}
void* MonsterAffixesEntry::Value7(void *Data) {
	return ((char*)Data) + 472;
}
void* MonsterAffixesEntry::unknow_field_45(void *Data) {
	return ((char*)Data) + 488;
}
void* MonsterAffixesEntry::Param8(void *Data) {
	return ((char*)Data) + 492;
}
void* MonsterAffixesEntry::ptAttributes_8__serAttributeFormula(void *Data) {
	return ((char*)Data) + 504;
}
void* MonsterAffixesEntry::Value8(void *Data) {
	return ((char*)Data) + 496;
}
void* MonsterAffixesEntry::unknow_field_49(void *Data) {
	return ((char*)Data) + 512;
}
void* MonsterAffixesEntry::Param9(void *Data) {
	return ((char*)Data) + 516;
}
void* MonsterAffixesEntry::ptAttributes_9__serAttributeFormula(void *Data) {
	return ((char*)Data) + 528;
}
void* MonsterAffixesEntry::Value9(void *Data) {
	return ((char*)Data) + 520;
}
void* MonsterAffixesEntry::unknow_field_53(void *Data) {
	return ((char*)Data) + 536;
}
void* MonsterAffixesEntry::MinionParam0(void *Data) {
	return ((char*)Data) + 540;
}
void* MonsterAffixesEntry::ptMinionAttributes_0__serAttributeFormula(void *Data) {
	return ((char*)Data) + 552;
}
void* MonsterAffixesEntry::MinionValue0(void *Data) {
	return ((char*)Data) + 544;
}
void* MonsterAffixesEntry::unknow_field_57(void *Data) {
	return ((char*)Data) + 560;
}
void* MonsterAffixesEntry::MinionParam1(void *Data) {
	return ((char*)Data) + 564;
}
void* MonsterAffixesEntry::ptMinionAttributes_1__serAttributeFormula(void *Data) {
	return ((char*)Data) + 576;
}
void* MonsterAffixesEntry::MinionValue1(void *Data) {
	return ((char*)Data) + 568;
}
void* MonsterAffixesEntry::unknow_field_61(void *Data) {
	return ((char*)Data) + 584;
}
void* MonsterAffixesEntry::MinionParam2(void *Data) {
	return ((char*)Data) + 588;
}
void* MonsterAffixesEntry::ptMinionAttributes_2__serAttributeFormula(void *Data) {
	return ((char*)Data) + 600;
}
void* MonsterAffixesEntry::MinionValue2(void *Data) {
	return ((char*)Data) + 592;
}
void* MonsterAffixesEntry::unknow_field_65(void *Data) {
	return ((char*)Data) + 608;
}
void* MonsterAffixesEntry::MinionParam3(void *Data) {
	return ((char*)Data) + 612;
}
void* MonsterAffixesEntry::ptMinionAttributes_3__serAttributeFormula(void *Data) {
	return ((char*)Data) + 624;
}
void* MonsterAffixesEntry::MinionValue3(void *Data) {
	return ((char*)Data) + 616;
}
void* MonsterAffixesEntry::unknow_field_69(void *Data) {
	return ((char*)Data) + 632;
}
void* MonsterAffixesEntry::MinionParam4(void *Data) {
	return ((char*)Data) + 636;
}
void* MonsterAffixesEntry::ptMinionAttributes_4__serAttributeFormula(void *Data) {
	return ((char*)Data) + 648;
}
void* MonsterAffixesEntry::MinionValue4(void *Data) {
	return ((char*)Data) + 640;
}
void* MonsterAffixesEntry::unknow_field_73(void *Data) {
	return ((char*)Data) + 656;
}
void* MonsterAffixesEntry::MinionParam5(void *Data) {
	return ((char*)Data) + 660;
}
void* MonsterAffixesEntry::ptMinionAttributes_5__serAttributeFormula(void *Data) {
	return ((char*)Data) + 672;
}
void* MonsterAffixesEntry::MinionValue5(void *Data) {
	return ((char*)Data) + 664;
}
void* MonsterAffixesEntry::unknow_field_77(void *Data) {
	return ((char*)Data) + 680;
}
void* MonsterAffixesEntry::MinionParam6(void *Data) {
	return ((char*)Data) + 684;
}
void* MonsterAffixesEntry::ptMinionAttributes_6__serAttributeFormula(void *Data) {
	return ((char*)Data) + 696;
}
void* MonsterAffixesEntry::MinionValue6(void *Data) {
	return ((char*)Data) + 688;
}
void* MonsterAffixesEntry::unknow_field_81(void *Data) {
	return ((char*)Data) + 704;
}
void* MonsterAffixesEntry::MinionParam7(void *Data) {
	return ((char*)Data) + 708;
}
void* MonsterAffixesEntry::ptMinionAttributes_7__serAttributeFormula(void *Data) {
	return ((char*)Data) + 720;
}
void* MonsterAffixesEntry::MinionValue7(void *Data) {
	return ((char*)Data) + 712;
}
void* MonsterAffixesEntry::unknow_field_85(void *Data) {
	return ((char*)Data) + 728;
}
void* MonsterAffixesEntry::MinionParam8(void *Data) {
	return ((char*)Data) + 732;
}
void* MonsterAffixesEntry::ptMinionAttributes_8__serAttributeFormula(void *Data) {
	return ((char*)Data) + 744;
}
void* MonsterAffixesEntry::MinionValue8(void *Data) {
	return ((char*)Data) + 736;
}
void* MonsterAffixesEntry::unknow_field_89(void *Data) {
	return ((char*)Data) + 752;
}
void* MonsterAffixesEntry::MinionParam9(void *Data) {
	return ((char*)Data) + 756;
}
void* MonsterAffixesEntry::ptMinionAttributes_9__serAttributeFormula(void *Data) {
	return ((char*)Data) + 768;
}
void* MonsterAffixesEntry::MinionValue9(void *Data) {
	return ((char*)Data) + 760;
}

MonsterAffixesEntry aMonsterAffixesEntry;
// MonsterAffixesTable
//
// { serMonsterAffixes }
// { unknow_field_1 }


void* MonsterAffixesTable::New() {
}

MonsterAffixesTable::MonsterAffixesTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
MonsterAffixesTable::~MonsterAffixesTable() {
		free(Fields);
}

const char* MonsterAffixesTable::Name() {
		return "MonsterAffixesTable";
}
	
void* MonsterAffixesTable::serMonsterAffixes(void *Data) {
	return ((char*)Data) + 0;
}
void* MonsterAffixesTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

MonsterAffixesTable aMonsterAffixesTable;
// RareMonsterNamesEntry
//
// { Name }
// { unknow_field_1 }
// { unknow_field_2 }


void* RareMonsterNamesEntry::New() {
}

RareMonsterNamesEntry::RareMonsterNamesEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_ENUM, 260, 4);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 264, 8);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
RareMonsterNamesEntry::~RareMonsterNamesEntry() {
		free(Fields);
}

const char* RareMonsterNamesEntry::Name() {
		return "RareMonsterNamesEntry";
}
	
void* RareMonsterNamesEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* RareMonsterNamesEntry::unknow_field_1(void *Data) {
	return ((char*)Data) + 260;
}
void* RareMonsterNamesEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 264;
}

RareMonsterNamesEntry aRareMonsterNamesEntry;
// RareMonsterNamesTable
//
// { serRareMonsterNames }
// { unknow_field_1 }


void* RareMonsterNamesTable::New() {
}

RareMonsterNamesTable::RareMonsterNamesTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
RareMonsterNamesTable::~RareMonsterNamesTable() {
		free(Fields);
}

const char* RareMonsterNamesTable::Name() {
		return "RareMonsterNamesTable";
}
	
void* RareMonsterNamesTable::serRareMonsterNames(void *Data) {
	return ((char*)Data) + 0;
}
void* RareMonsterNamesTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

RareMonsterNamesTable aRareMonsterNamesTable;
// RareItemNamesEntry
//
// { Name }
// { RelatedAffixOrItemType }
// { unknow_field_2 }
// { unknow_field_3 }


void* RareItemNamesEntry::New() {
}

RareItemNamesEntry::RareItemNamesEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_GBID, 264, 32);
		Fields[2].fieldinfo(&aDT_ENUM, 260, 6);
		Fields[3].fieldinfo(&aDT_ENUM, 268, 4);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
RareItemNamesEntry::~RareItemNamesEntry() {
		free(Fields);
}

const char* RareItemNamesEntry::Name() {
		return "RareItemNamesEntry";
}
	
void* RareItemNamesEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* RareItemNamesEntry::RelatedAffixOrItemType(void *Data) {
	return ((char*)Data) + 264;
}
void* RareItemNamesEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 260;
}
void* RareItemNamesEntry::unknow_field_3(void *Data) {
	return ((char*)Data) + 268;
}

RareItemNamesEntry aRareItemNamesEntry;
// RareItemNamesTable
//
// { serRareItemNames }
// { unknow_field_1 }


void* RareItemNamesTable::New() {
}

RareItemNamesTable::RareItemNamesTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
RareItemNamesTable::~RareItemNamesTable() {
		free(Fields);
}

const char* RareItemNamesTable::Name() {
		return "RareItemNamesTable";
}
	
void* RareItemNamesTable::serRareItemNames(void *Data) {
	return ((char*)Data) + 0;
}
void* RareItemNamesTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

RareItemNamesTable aRareItemNamesTable;
// SocketedEffectsTableEntry
//
// { Name }
// { Item }
// { ItemType }
// { unknow_field_3 }
// { AttributeParam1 }
// { ptAttributes_0__serAttributeFormula }
// { AttributeFormula1 }
// { unknow_field_7 }
// { AttributeParam2 }
// { ptAttributes_1__serAttributeFormula }
// { AttributeFormula2 }
// { unknow_field_11 }
// { AttributeParam3 }
// { ptAttributes_2__serAttributeFormula }
// { AttributeFormula3 }
// { unknow_field_15 }
// { ReqAttribParam1 }
// { ptRequirements_0__serAttributeFormula }
// { ReqAttribFormula1 }
// { unknow_field_19 }
// { ReqAttribParam2 }
// { ptRequirements_1__serAttributeFormula }
// { ReqAttribFormula2 }
// { unknow_field_23 }


void* SocketedEffectsTableEntry::New() {
}

SocketedEffectsTableEntry::SocketedEffectsTableEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 25);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_GBID, 260, 32);
		Fields[2].fieldinfo(&aDT_GBID, 264, 32);
		Fields[3].fieldinfo(&aDT_TRANSLATEABLE, 272, 0);
		Fields[4].fieldinfo(&aDT_ATTRIBUTEPARAM, 276, 32);
		Fields[5].fieldinfo(&aSerializeData, 288, 0);
		Fields[6].fieldinfo(&aDT_FORMULA, 280, 0);
		Fields[7].fieldinfo(&aDT_TRANSLATEABLE, 296, 0);
		Fields[8].fieldinfo(&aDT_ATTRIBUTEPARAM, 300, 32);
		Fields[9].fieldinfo(&aSerializeData, 312, 0);
		Fields[10].fieldinfo(&aDT_FORMULA, 304, 0);
		Fields[11].fieldinfo(&aDT_TRANSLATEABLE, 320, 0);
		Fields[12].fieldinfo(&aDT_ATTRIBUTEPARAM, 324, 32);
		Fields[13].fieldinfo(&aSerializeData, 336, 0);
		Fields[14].fieldinfo(&aDT_FORMULA, 328, 0);
		Fields[15].fieldinfo(&aDT_TRANSLATEABLE, 344, 0);
		Fields[16].fieldinfo(&aDT_ATTRIBUTEPARAM, 348, 32);
		Fields[17].fieldinfo(&aSerializeData, 360, 0);
		Fields[18].fieldinfo(&aDT_FORMULA, 352, 0);
		Fields[19].fieldinfo(&aDT_TRANSLATEABLE, 368, 0);
		Fields[20].fieldinfo(&aDT_ATTRIBUTEPARAM, 372, 32);
		Fields[21].fieldinfo(&aSerializeData, 384, 0);
		Fields[22].fieldinfo(&aDT_FORMULA, 376, 0);
		Fields[23].fieldinfo(&aDT_CHARARRAY, 392, 11);
		Fields[25 - 1].fieldinfo(NULL, 0, 0);
	}
SocketedEffectsTableEntry::~SocketedEffectsTableEntry() {
		free(Fields);
}

const char* SocketedEffectsTableEntry::Name() {
		return "SocketedEffectsTableEntry";
}
	
void* SocketedEffectsTableEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* SocketedEffectsTableEntry::Item(void *Data) {
	return ((char*)Data) + 260;
}
void* SocketedEffectsTableEntry::ItemType(void *Data) {
	return ((char*)Data) + 264;
}
void* SocketedEffectsTableEntry::unknow_field_3(void *Data) {
	return ((char*)Data) + 272;
}
void* SocketedEffectsTableEntry::AttributeParam1(void *Data) {
	return ((char*)Data) + 276;
}
void* SocketedEffectsTableEntry::ptAttributes_0__serAttributeFormula(void *Data) {
	return ((char*)Data) + 288;
}
void* SocketedEffectsTableEntry::AttributeFormula1(void *Data) {
	return ((char*)Data) + 280;
}
void* SocketedEffectsTableEntry::unknow_field_7(void *Data) {
	return ((char*)Data) + 296;
}
void* SocketedEffectsTableEntry::AttributeParam2(void *Data) {
	return ((char*)Data) + 300;
}
void* SocketedEffectsTableEntry::ptAttributes_1__serAttributeFormula(void *Data) {
	return ((char*)Data) + 312;
}
void* SocketedEffectsTableEntry::AttributeFormula2(void *Data) {
	return ((char*)Data) + 304;
}
void* SocketedEffectsTableEntry::unknow_field_11(void *Data) {
	return ((char*)Data) + 320;
}
void* SocketedEffectsTableEntry::AttributeParam3(void *Data) {
	return ((char*)Data) + 324;
}
void* SocketedEffectsTableEntry::ptAttributes_2__serAttributeFormula(void *Data) {
	return ((char*)Data) + 336;
}
void* SocketedEffectsTableEntry::AttributeFormula3(void *Data) {
	return ((char*)Data) + 328;
}
void* SocketedEffectsTableEntry::unknow_field_15(void *Data) {
	return ((char*)Data) + 344;
}
void* SocketedEffectsTableEntry::ReqAttribParam1(void *Data) {
	return ((char*)Data) + 348;
}
void* SocketedEffectsTableEntry::ptRequirements_0__serAttributeFormula(void *Data) {
	return ((char*)Data) + 360;
}
void* SocketedEffectsTableEntry::ReqAttribFormula1(void *Data) {
	return ((char*)Data) + 352;
}
void* SocketedEffectsTableEntry::unknow_field_19(void *Data) {
	return ((char*)Data) + 368;
}
void* SocketedEffectsTableEntry::ReqAttribParam2(void *Data) {
	return ((char*)Data) + 372;
}
void* SocketedEffectsTableEntry::ptRequirements_1__serAttributeFormula(void *Data) {
	return ((char*)Data) + 384;
}
void* SocketedEffectsTableEntry::ReqAttribFormula2(void *Data) {
	return ((char*)Data) + 376;
}
void* SocketedEffectsTableEntry::unknow_field_23(void *Data) {
	return ((char*)Data) + 392;
}

SocketedEffectsTableEntry aSocketedEffectsTableEntry;
// SocketedEffectsTable
//
// { serSocketedEffects }
// { unknow_field_1 }


void* SocketedEffectsTable::New() {
}

SocketedEffectsTable::SocketedEffectsTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SocketedEffectsTable::~SocketedEffectsTable() {
		free(Fields);
}

const char* SocketedEffectsTable::Name() {
		return "SocketedEffectsTable";
}
	
void* SocketedEffectsTable::serSocketedEffects(void *Data) {
	return ((char*)Data) + 0;
}
void* SocketedEffectsTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

SocketedEffectsTable aSocketedEffectsTable;
// ItemDropTableEntry
//
// { Name }
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { unknow_field_34 }
// { unknow_field_35 }
// { unknow_field_36 }
// { unknow_field_37 }
// { unknow_field_38 }
// { unknow_field_39 }
// { unknow_field_40 }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }
// { unknow_field_44 }
// { unknow_field_45 }
// { unknow_field_46 }
// { unknow_field_47 }
// { unknow_field_48 }
// { unknow_field_49 }
// { unknow_field_50 }
// { unknow_field_51 }
// { unknow_field_52 }
// { unknow_field_53 }
// { unknow_field_54 }
// { unknow_field_55 }
// { unknow_field_56 }
// { unknow_field_57 }
// { unknow_field_58 }
// { unknow_field_59 }
// { unknow_field_60 }
// { unknow_field_61 }
// { unknow_field_62 }
// { unknow_field_63 }
// { unknow_field_64 }
// { unknow_field_65 }
// { unknow_field_66 }
// { unknow_field_67 }
// { unknow_field_68 }
// { unknow_field_69 }
// { unknow_field_70 }
// { unknow_field_71 }
// { unknow_field_72 }
// { unknow_field_73 }
// { unknow_field_74 }
// { unknow_field_75 }
// { unknow_field_76 }
// { unknow_field_77 }
// { unknow_field_78 }
// { unknow_field_79 }
// { unknow_field_80 }
// { unknow_field_81 }
// { unknow_field_82 }
// { unknow_field_83 }
// { unknow_field_84 }
// { unknow_field_85 }
// { unknow_field_86 }
// { unknow_field_87 }
// { unknow_field_88 }
// { unknow_field_89 }
// { unknow_field_90 }
// { unknow_field_91 }
// { unknow_field_92 }
// { unknow_field_93 }
// { unknow_field_94 }
// { unknow_field_95 }
// { unknow_field_96 }
// { unknow_field_97 }
// { unknow_field_98 }
// { unknow_field_99 }
// { unknow_field_100 }
// { unknow_field_101 }
// { unknow_field_102 }
// { unknow_field_103 }
// { unknow_field_104 }
// { unknow_field_105 }
// { unknow_field_106 }
// { unknow_field_107 }
// { unknow_field_108 }
// { unknow_field_109 }
// { unknow_field_110 }
// { unknow_field_111 }
// { unknow_field_112 }
// { unknow_field_113 }
// { unknow_field_114 }
// { unknow_field_115 }
// { unknow_field_116 }
// { unknow_field_117 }
// { unknow_field_118 }
// { unknow_field_119 }
// { unknow_field_120 }
// { unknow_field_121 }
// { unknow_field_122 }
// { unknow_field_123 }
// { unknow_field_124 }
// { unknow_field_125 }
// { unknow_field_126 }
// { unknow_field_127 }
// { unknow_field_128 }
// { unknow_field_129 }
// { unknow_field_130 }
// { unknow_field_131 }
// { unknow_field_132 }
// { unknow_field_133 }
// { unknow_field_134 }
// { unknow_field_135 }
// { unknow_field_136 }
// { unknow_field_137 }
// { unknow_field_138 }
// { unknow_field_139 }
// { unknow_field_140 }
// { unknow_field_141 }
// { unknow_field_142 }
// { unknow_field_143 }
// { unknow_field_144 }
// { unknow_field_145 }
// { unknow_field_146 }
// { unknow_field_147 }
// { unknow_field_148 }
// { unknow_field_149 }
// { unknow_field_150 }
// { unknow_field_151 }
// { unknow_field_152 }
// { unknow_field_153 }
// { unknow_field_154 }
// { unknow_field_155 }
// { unknow_field_156 }
// { unknow_field_157 }
// { unknow_field_158 }
// { unknow_field_159 }
// { unknow_field_160 }
// { unknow_field_161 }
// { unknow_field_162 }
// { unknow_field_163 }
// { unknow_field_164 }
// { unknow_field_165 }
// { unknow_field_166 }
// { unknow_field_167 }
// { unknow_field_168 }
// { unknow_field_169 }
// { unknow_field_170 }
// { unknow_field_171 }
// { unknow_field_172 }
// { unknow_field_173 }
// { unknow_field_174 }
// { unknow_field_175 }
// { unknow_field_176 }
// { unknow_field_177 }
// { unknow_field_178 }
// { unknow_field_179 }
// { unknow_field_180 }
// { unknow_field_181 }
// { unknow_field_182 }
// { unknow_field_183 }
// { unknow_field_184 }
// { unknow_field_185 }
// { unknow_field_186 }
// { unknow_field_187 }
// { unknow_field_188 }
// { unknow_field_189 }
// { unknow_field_190 }
// { unknow_field_191 }
// { unknow_field_192 }
// { unknow_field_193 }
// { unknow_field_194 }
// { unknow_field_195 }
// { unknow_field_196 }
// { unknow_field_197 }
// { unknow_field_198 }
// { unknow_field_199 }
// { unknow_field_200 }
// { unknow_field_201 }
// { unknow_field_202 }
// { unknow_field_203 }
// { unknow_field_204 }
// { unknow_field_205 }
// { unknow_field_206 }
// { unknow_field_207 }
// { unknow_field_208 }
// { unknow_field_209 }
// { unknow_field_210 }
// { unknow_field_211 }
// { unknow_field_212 }
// { unknow_field_213 }
// { unknow_field_214 }
// { unknow_field_215 }
// { unknow_field_216 }
// { unknow_field_217 }
// { unknow_field_218 }
// { unknow_field_219 }


void* ItemDropTableEntry::New() {
}

ItemDropTableEntry::ItemDropTableEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 221);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_INT, 260, 32);
		Fields[2].fieldinfo(&aDT_INT, 264, 32);
		Fields[3].fieldinfo(&aDT_INT, 268, 32);
		Fields[4].fieldinfo(&aDT_INT, 272, 32);
		Fields[5].fieldinfo(&aDT_INT, 276, 32);
		Fields[6].fieldinfo(&aDT_INT, 280, 32);
		Fields[7].fieldinfo(&aDT_INT, 284, 32);
		Fields[8].fieldinfo(&aDT_INT, 288, 32);
		Fields[9].fieldinfo(&aDT_INT, 292, 32);
		Fields[10].fieldinfo(&aDT_INT, 296, 32);
		Fields[11].fieldinfo(&aDT_INT, 300, 32);
		Fields[12].fieldinfo(&aDT_INT, 304, 32);
		Fields[13].fieldinfo(&aDT_INT, 308, 32);
		Fields[14].fieldinfo(&aDT_INT, 312, 32);
		Fields[15].fieldinfo(&aDT_INT, 316, 32);
		Fields[16].fieldinfo(&aDT_INT, 320, 32);
		Fields[17].fieldinfo(&aDT_INT, 324, 32);
		Fields[18].fieldinfo(&aDT_INT, 328, 32);
		Fields[19].fieldinfo(&aDT_INT, 332, 32);
		Fields[20].fieldinfo(&aDT_INT, 336, 32);
		Fields[21].fieldinfo(&aDT_INT, 340, 32);
		Fields[22].fieldinfo(&aDT_INT, 344, 32);
		Fields[23].fieldinfo(&aDT_INT, 348, 32);
		Fields[24].fieldinfo(&aDT_INT, 352, 32);
		Fields[25].fieldinfo(&aDT_INT, 356, 32);
		Fields[26].fieldinfo(&aDT_INT, 360, 32);
		Fields[27].fieldinfo(&aDT_INT, 364, 32);
		Fields[28].fieldinfo(&aDT_INT, 368, 32);
		Fields[29].fieldinfo(&aDT_INT, 372, 32);
		Fields[30].fieldinfo(&aDT_INT, 376, 32);
		Fields[31].fieldinfo(&aDT_INT, 380, 32);
		Fields[32].fieldinfo(&aDT_INT, 384, 32);
		Fields[33].fieldinfo(&aDT_INT, 388, 32);
		Fields[34].fieldinfo(&aDT_INT, 392, 32);
		Fields[35].fieldinfo(&aDT_INT, 396, 32);
		Fields[36].fieldinfo(&aDT_INT, 400, 32);
		Fields[37].fieldinfo(&aDT_INT, 404, 32);
		Fields[38].fieldinfo(&aDT_INT, 408, 32);
		Fields[39].fieldinfo(&aDT_INT, 412, 32);
		Fields[40].fieldinfo(&aDT_INT, 416, 32);
		Fields[41].fieldinfo(&aDT_INT, 420, 32);
		Fields[42].fieldinfo(&aDT_INT, 424, 32);
		Fields[43].fieldinfo(&aDT_INT, 428, 32);
		Fields[44].fieldinfo(&aDT_INT, 432, 32);
		Fields[45].fieldinfo(&aDT_INT, 436, 32);
		Fields[46].fieldinfo(&aDT_INT, 440, 32);
		Fields[47].fieldinfo(&aDT_INT, 444, 32);
		Fields[48].fieldinfo(&aDT_INT, 448, 32);
		Fields[49].fieldinfo(&aDT_INT, 452, 32);
		Fields[50].fieldinfo(&aDT_INT, 456, 32);
		Fields[51].fieldinfo(&aDT_INT, 460, 32);
		Fields[52].fieldinfo(&aDT_INT, 464, 32);
		Fields[53].fieldinfo(&aDT_INT, 468, 32);
		Fields[54].fieldinfo(&aDT_INT, 472, 32);
		Fields[55].fieldinfo(&aDT_INT, 476, 32);
		Fields[56].fieldinfo(&aDT_INT, 480, 32);
		Fields[57].fieldinfo(&aDT_INT, 484, 32);
		Fields[58].fieldinfo(&aDT_INT, 488, 32);
		Fields[59].fieldinfo(&aDT_INT, 492, 32);
		Fields[60].fieldinfo(&aDT_INT, 496, 32);
		Fields[61].fieldinfo(&aDT_INT, 500, 32);
		Fields[62].fieldinfo(&aDT_INT, 504, 32);
		Fields[63].fieldinfo(&aDT_INT, 508, 32);
		Fields[64].fieldinfo(&aDT_INT, 512, 32);
		Fields[65].fieldinfo(&aDT_INT, 516, 32);
		Fields[66].fieldinfo(&aDT_INT, 520, 32);
		Fields[67].fieldinfo(&aDT_INT, 524, 32);
		Fields[68].fieldinfo(&aDT_INT, 528, 32);
		Fields[69].fieldinfo(&aDT_INT, 532, 32);
		Fields[70].fieldinfo(&aDT_INT, 536, 32);
		Fields[71].fieldinfo(&aDT_INT, 540, 32);
		Fields[72].fieldinfo(&aDT_INT, 544, 32);
		Fields[73].fieldinfo(&aDT_INT, 548, 32);
		Fields[74].fieldinfo(&aDT_INT, 552, 32);
		Fields[75].fieldinfo(&aDT_INT, 556, 32);
		Fields[76].fieldinfo(&aDT_INT, 560, 32);
		Fields[77].fieldinfo(&aDT_INT, 564, 32);
		Fields[78].fieldinfo(&aDT_INT, 568, 32);
		Fields[79].fieldinfo(&aDT_INT, 572, 32);
		Fields[80].fieldinfo(&aDT_INT, 576, 32);
		Fields[81].fieldinfo(&aDT_INT, 580, 32);
		Fields[82].fieldinfo(&aDT_INT, 584, 32);
		Fields[83].fieldinfo(&aDT_INT, 588, 32);
		Fields[84].fieldinfo(&aDT_INT, 592, 32);
		Fields[85].fieldinfo(&aDT_INT, 596, 32);
		Fields[86].fieldinfo(&aDT_INT, 600, 32);
		Fields[87].fieldinfo(&aDT_INT, 604, 32);
		Fields[88].fieldinfo(&aDT_INT, 608, 32);
		Fields[89].fieldinfo(&aDT_INT, 612, 32);
		Fields[90].fieldinfo(&aDT_INT, 616, 32);
		Fields[91].fieldinfo(&aDT_INT, 620, 32);
		Fields[92].fieldinfo(&aDT_INT, 624, 32);
		Fields[93].fieldinfo(&aDT_INT, 628, 32);
		Fields[94].fieldinfo(&aDT_INT, 632, 32);
		Fields[95].fieldinfo(&aDT_INT, 636, 32);
		Fields[96].fieldinfo(&aDT_INT, 640, 32);
		Fields[97].fieldinfo(&aDT_INT, 644, 32);
		Fields[98].fieldinfo(&aDT_INT, 648, 32);
		Fields[99].fieldinfo(&aDT_INT, 652, 32);
		Fields[100].fieldinfo(&aDT_INT, 656, 32);
		Fields[101].fieldinfo(&aDT_INT, 660, 32);
		Fields[102].fieldinfo(&aDT_INT, 664, 32);
		Fields[103].fieldinfo(&aDT_INT, 668, 32);
		Fields[104].fieldinfo(&aDT_INT, 672, 32);
		Fields[105].fieldinfo(&aDT_INT, 676, 32);
		Fields[106].fieldinfo(&aDT_INT, 680, 32);
		Fields[107].fieldinfo(&aDT_INT, 684, 32);
		Fields[108].fieldinfo(&aDT_INT, 688, 32);
		Fields[109].fieldinfo(&aDT_INT, 692, 32);
		Fields[110].fieldinfo(&aDT_INT, 696, 32);
		Fields[111].fieldinfo(&aDT_INT, 700, 32);
		Fields[112].fieldinfo(&aDT_INT, 704, 32);
		Fields[113].fieldinfo(&aDT_INT, 708, 32);
		Fields[114].fieldinfo(&aDT_INT, 712, 32);
		Fields[115].fieldinfo(&aDT_INT, 716, 32);
		Fields[116].fieldinfo(&aDT_INT, 720, 32);
		Fields[117].fieldinfo(&aDT_INT, 724, 32);
		Fields[118].fieldinfo(&aDT_INT, 728, 32);
		Fields[119].fieldinfo(&aDT_INT, 732, 32);
		Fields[120].fieldinfo(&aDT_INT, 736, 32);
		Fields[121].fieldinfo(&aDT_INT, 740, 32);
		Fields[122].fieldinfo(&aDT_INT, 744, 32);
		Fields[123].fieldinfo(&aDT_INT, 748, 32);
		Fields[124].fieldinfo(&aDT_INT, 752, 32);
		Fields[125].fieldinfo(&aDT_INT, 756, 32);
		Fields[126].fieldinfo(&aDT_INT, 760, 32);
		Fields[127].fieldinfo(&aDT_INT, 764, 32);
		Fields[128].fieldinfo(&aDT_INT, 768, 32);
		Fields[129].fieldinfo(&aDT_INT, 772, 32);
		Fields[130].fieldinfo(&aDT_INT, 776, 32);
		Fields[131].fieldinfo(&aDT_INT, 780, 32);
		Fields[132].fieldinfo(&aDT_INT, 784, 32);
		Fields[133].fieldinfo(&aDT_INT, 788, 32);
		Fields[134].fieldinfo(&aDT_INT, 792, 32);
		Fields[135].fieldinfo(&aDT_INT, 796, 32);
		Fields[136].fieldinfo(&aDT_INT, 800, 32);
		Fields[137].fieldinfo(&aDT_INT, 804, 32);
		Fields[138].fieldinfo(&aDT_INT, 808, 32);
		Fields[139].fieldinfo(&aDT_INT, 812, 32);
		Fields[140].fieldinfo(&aDT_INT, 816, 32);
		Fields[141].fieldinfo(&aDT_INT, 820, 32);
		Fields[142].fieldinfo(&aDT_INT, 824, 32);
		Fields[143].fieldinfo(&aDT_INT, 828, 32);
		Fields[144].fieldinfo(&aDT_INT, 832, 32);
		Fields[145].fieldinfo(&aDT_INT, 836, 32);
		Fields[146].fieldinfo(&aDT_INT, 840, 32);
		Fields[147].fieldinfo(&aDT_INT, 844, 32);
		Fields[148].fieldinfo(&aDT_INT, 848, 32);
		Fields[149].fieldinfo(&aDT_INT, 852, 32);
		Fields[150].fieldinfo(&aDT_INT, 856, 32);
		Fields[151].fieldinfo(&aDT_INT, 860, 32);
		Fields[152].fieldinfo(&aDT_INT, 864, 32);
		Fields[153].fieldinfo(&aDT_INT, 868, 32);
		Fields[154].fieldinfo(&aDT_INT, 872, 32);
		Fields[155].fieldinfo(&aDT_INT, 876, 32);
		Fields[156].fieldinfo(&aDT_INT, 880, 32);
		Fields[157].fieldinfo(&aDT_INT, 884, 32);
		Fields[158].fieldinfo(&aDT_INT, 888, 32);
		Fields[159].fieldinfo(&aDT_INT, 892, 32);
		Fields[160].fieldinfo(&aDT_INT, 896, 32);
		Fields[161].fieldinfo(&aDT_INT, 900, 32);
		Fields[162].fieldinfo(&aDT_INT, 904, 32);
		Fields[163].fieldinfo(&aDT_INT, 908, 32);
		Fields[164].fieldinfo(&aDT_INT, 912, 32);
		Fields[165].fieldinfo(&aDT_INT, 916, 32);
		Fields[166].fieldinfo(&aDT_INT, 920, 32);
		Fields[167].fieldinfo(&aDT_INT, 924, 32);
		Fields[168].fieldinfo(&aDT_INT, 928, 32);
		Fields[169].fieldinfo(&aDT_INT, 932, 32);
		Fields[170].fieldinfo(&aDT_INT, 936, 32);
		Fields[171].fieldinfo(&aDT_INT, 940, 32);
		Fields[172].fieldinfo(&aDT_INT, 944, 32);
		Fields[173].fieldinfo(&aDT_INT, 948, 32);
		Fields[174].fieldinfo(&aDT_INT, 952, 32);
		Fields[175].fieldinfo(&aDT_INT, 956, 32);
		Fields[176].fieldinfo(&aDT_INT, 960, 32);
		Fields[177].fieldinfo(&aDT_INT, 964, 32);
		Fields[178].fieldinfo(&aDT_INT, 968, 32);
		Fields[179].fieldinfo(&aDT_INT, 972, 32);
		Fields[180].fieldinfo(&aDT_INT, 976, 32);
		Fields[181].fieldinfo(&aDT_INT, 980, 32);
		Fields[182].fieldinfo(&aDT_INT, 984, 32);
		Fields[183].fieldinfo(&aDT_INT, 988, 32);
		Fields[184].fieldinfo(&aDT_INT, 992, 32);
		Fields[185].fieldinfo(&aDT_INT, 996, 32);
		Fields[186].fieldinfo(&aDT_INT, 1000, 32);
		Fields[187].fieldinfo(&aDT_INT, 1004, 32);
		Fields[188].fieldinfo(&aDT_INT, 1008, 32);
		Fields[189].fieldinfo(&aDT_INT, 1012, 32);
		Fields[190].fieldinfo(&aDT_INT, 1016, 32);
		Fields[191].fieldinfo(&aDT_INT, 1024, 32);
		Fields[192].fieldinfo(&aDT_INT, 1028, 32);
		Fields[193].fieldinfo(&aDT_INT, 1032, 32);
		Fields[194].fieldinfo(&aDT_INT, 1036, 32);
		Fields[195].fieldinfo(&aDT_INT, 1040, 32);
		Fields[196].fieldinfo(&aDT_INT, 1044, 32);
		Fields[197].fieldinfo(&aDT_INT, 1048, 32);
		Fields[198].fieldinfo(&aDT_INT, 1052, 32);
		Fields[199].fieldinfo(&aDT_INT, 1056, 32);
		Fields[200].fieldinfo(&aDT_INT, 1060, 32);
		Fields[201].fieldinfo(&aDT_INT, 1064, 32);
		Fields[202].fieldinfo(&aDT_INT, 1068, 32);
		Fields[203].fieldinfo(&aDT_INT, 1072, 32);
		Fields[204].fieldinfo(&aDT_INT, 1076, 32);
		Fields[205].fieldinfo(&aDT_INT, 1080, 32);
		Fields[206].fieldinfo(&aDT_INT, 1084, 32);
		Fields[207].fieldinfo(&aDT_INT, 1088, 32);
		Fields[208].fieldinfo(&aDT_INT, 1092, 32);
		Fields[209].fieldinfo(&aDT_INT, 1096, 32);
		Fields[210].fieldinfo(&aDT_INT, 1100, 32);
		Fields[211].fieldinfo(&aDT_INT, 1104, 32);
		Fields[212].fieldinfo(&aDT_INT, 1108, 32);
		Fields[213].fieldinfo(&aDT_INT, 1112, 32);
		Fields[214].fieldinfo(&aDT_INT, 1116, 32);
		Fields[215].fieldinfo(&aDT_INT, 1120, 32);
		Fields[216].fieldinfo(&aDT_INT, 1124, 32);
		Fields[217].fieldinfo(&aDT_INT, 1128, 32);
		Fields[218].fieldinfo(&aDT_INT, 1132, 32);
		Fields[219].fieldinfo(&aDT_INT, 1136, 32);
		Fields[221 - 1].fieldinfo(NULL, 0, 0);
	}
ItemDropTableEntry::~ItemDropTableEntry() {
		free(Fields);
}

const char* ItemDropTableEntry::Name() {
		return "ItemDropTableEntry";
}
	
void* ItemDropTableEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
int* ItemDropTableEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 260;
}
int* ItemDropTableEntry::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 264;
}
int* ItemDropTableEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 268;
}
int* ItemDropTableEntry::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 272;
}
int* ItemDropTableEntry::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 276;
}
int* ItemDropTableEntry::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 280;
}
int* ItemDropTableEntry::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 284;
}
int* ItemDropTableEntry::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 288;
}
int* ItemDropTableEntry::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 292;
}
int* ItemDropTableEntry::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 296;
}
int* ItemDropTableEntry::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 300;
}
int* ItemDropTableEntry::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 304;
}
int* ItemDropTableEntry::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 308;
}
int* ItemDropTableEntry::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 312;
}
int* ItemDropTableEntry::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 316;
}
int* ItemDropTableEntry::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 320;
}
int* ItemDropTableEntry::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 324;
}
int* ItemDropTableEntry::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 328;
}
int* ItemDropTableEntry::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 332;
}
int* ItemDropTableEntry::unknow_field_20(void *Data) {
	return (int*)((char*)Data) + 336;
}
int* ItemDropTableEntry::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 340;
}
int* ItemDropTableEntry::unknow_field_22(void *Data) {
	return (int*)((char*)Data) + 344;
}
int* ItemDropTableEntry::unknow_field_23(void *Data) {
	return (int*)((char*)Data) + 348;
}
int* ItemDropTableEntry::unknow_field_24(void *Data) {
	return (int*)((char*)Data) + 352;
}
int* ItemDropTableEntry::unknow_field_25(void *Data) {
	return (int*)((char*)Data) + 356;
}
int* ItemDropTableEntry::unknow_field_26(void *Data) {
	return (int*)((char*)Data) + 360;
}
int* ItemDropTableEntry::unknow_field_27(void *Data) {
	return (int*)((char*)Data) + 364;
}
int* ItemDropTableEntry::unknow_field_28(void *Data) {
	return (int*)((char*)Data) + 368;
}
int* ItemDropTableEntry::unknow_field_29(void *Data) {
	return (int*)((char*)Data) + 372;
}
int* ItemDropTableEntry::unknow_field_30(void *Data) {
	return (int*)((char*)Data) + 376;
}
int* ItemDropTableEntry::unknow_field_31(void *Data) {
	return (int*)((char*)Data) + 380;
}
int* ItemDropTableEntry::unknow_field_32(void *Data) {
	return (int*)((char*)Data) + 384;
}
int* ItemDropTableEntry::unknow_field_33(void *Data) {
	return (int*)((char*)Data) + 388;
}
int* ItemDropTableEntry::unknow_field_34(void *Data) {
	return (int*)((char*)Data) + 392;
}
int* ItemDropTableEntry::unknow_field_35(void *Data) {
	return (int*)((char*)Data) + 396;
}
int* ItemDropTableEntry::unknow_field_36(void *Data) {
	return (int*)((char*)Data) + 400;
}
int* ItemDropTableEntry::unknow_field_37(void *Data) {
	return (int*)((char*)Data) + 404;
}
int* ItemDropTableEntry::unknow_field_38(void *Data) {
	return (int*)((char*)Data) + 408;
}
int* ItemDropTableEntry::unknow_field_39(void *Data) {
	return (int*)((char*)Data) + 412;
}
int* ItemDropTableEntry::unknow_field_40(void *Data) {
	return (int*)((char*)Data) + 416;
}
int* ItemDropTableEntry::unknow_field_41(void *Data) {
	return (int*)((char*)Data) + 420;
}
int* ItemDropTableEntry::unknow_field_42(void *Data) {
	return (int*)((char*)Data) + 424;
}
int* ItemDropTableEntry::unknow_field_43(void *Data) {
	return (int*)((char*)Data) + 428;
}
int* ItemDropTableEntry::unknow_field_44(void *Data) {
	return (int*)((char*)Data) + 432;
}
int* ItemDropTableEntry::unknow_field_45(void *Data) {
	return (int*)((char*)Data) + 436;
}
int* ItemDropTableEntry::unknow_field_46(void *Data) {
	return (int*)((char*)Data) + 440;
}
int* ItemDropTableEntry::unknow_field_47(void *Data) {
	return (int*)((char*)Data) + 444;
}
int* ItemDropTableEntry::unknow_field_48(void *Data) {
	return (int*)((char*)Data) + 448;
}
int* ItemDropTableEntry::unknow_field_49(void *Data) {
	return (int*)((char*)Data) + 452;
}
int* ItemDropTableEntry::unknow_field_50(void *Data) {
	return (int*)((char*)Data) + 456;
}
int* ItemDropTableEntry::unknow_field_51(void *Data) {
	return (int*)((char*)Data) + 460;
}
int* ItemDropTableEntry::unknow_field_52(void *Data) {
	return (int*)((char*)Data) + 464;
}
int* ItemDropTableEntry::unknow_field_53(void *Data) {
	return (int*)((char*)Data) + 468;
}
int* ItemDropTableEntry::unknow_field_54(void *Data) {
	return (int*)((char*)Data) + 472;
}
int* ItemDropTableEntry::unknow_field_55(void *Data) {
	return (int*)((char*)Data) + 476;
}
int* ItemDropTableEntry::unknow_field_56(void *Data) {
	return (int*)((char*)Data) + 480;
}
int* ItemDropTableEntry::unknow_field_57(void *Data) {
	return (int*)((char*)Data) + 484;
}
int* ItemDropTableEntry::unknow_field_58(void *Data) {
	return (int*)((char*)Data) + 488;
}
int* ItemDropTableEntry::unknow_field_59(void *Data) {
	return (int*)((char*)Data) + 492;
}
int* ItemDropTableEntry::unknow_field_60(void *Data) {
	return (int*)((char*)Data) + 496;
}
int* ItemDropTableEntry::unknow_field_61(void *Data) {
	return (int*)((char*)Data) + 500;
}
int* ItemDropTableEntry::unknow_field_62(void *Data) {
	return (int*)((char*)Data) + 504;
}
int* ItemDropTableEntry::unknow_field_63(void *Data) {
	return (int*)((char*)Data) + 508;
}
int* ItemDropTableEntry::unknow_field_64(void *Data) {
	return (int*)((char*)Data) + 512;
}
int* ItemDropTableEntry::unknow_field_65(void *Data) {
	return (int*)((char*)Data) + 516;
}
int* ItemDropTableEntry::unknow_field_66(void *Data) {
	return (int*)((char*)Data) + 520;
}
int* ItemDropTableEntry::unknow_field_67(void *Data) {
	return (int*)((char*)Data) + 524;
}
int* ItemDropTableEntry::unknow_field_68(void *Data) {
	return (int*)((char*)Data) + 528;
}
int* ItemDropTableEntry::unknow_field_69(void *Data) {
	return (int*)((char*)Data) + 532;
}
int* ItemDropTableEntry::unknow_field_70(void *Data) {
	return (int*)((char*)Data) + 536;
}
int* ItemDropTableEntry::unknow_field_71(void *Data) {
	return (int*)((char*)Data) + 540;
}
int* ItemDropTableEntry::unknow_field_72(void *Data) {
	return (int*)((char*)Data) + 544;
}
int* ItemDropTableEntry::unknow_field_73(void *Data) {
	return (int*)((char*)Data) + 548;
}
int* ItemDropTableEntry::unknow_field_74(void *Data) {
	return (int*)((char*)Data) + 552;
}
int* ItemDropTableEntry::unknow_field_75(void *Data) {
	return (int*)((char*)Data) + 556;
}
int* ItemDropTableEntry::unknow_field_76(void *Data) {
	return (int*)((char*)Data) + 560;
}
int* ItemDropTableEntry::unknow_field_77(void *Data) {
	return (int*)((char*)Data) + 564;
}
int* ItemDropTableEntry::unknow_field_78(void *Data) {
	return (int*)((char*)Data) + 568;
}
int* ItemDropTableEntry::unknow_field_79(void *Data) {
	return (int*)((char*)Data) + 572;
}
int* ItemDropTableEntry::unknow_field_80(void *Data) {
	return (int*)((char*)Data) + 576;
}
int* ItemDropTableEntry::unknow_field_81(void *Data) {
	return (int*)((char*)Data) + 580;
}
int* ItemDropTableEntry::unknow_field_82(void *Data) {
	return (int*)((char*)Data) + 584;
}
int* ItemDropTableEntry::unknow_field_83(void *Data) {
	return (int*)((char*)Data) + 588;
}
int* ItemDropTableEntry::unknow_field_84(void *Data) {
	return (int*)((char*)Data) + 592;
}
int* ItemDropTableEntry::unknow_field_85(void *Data) {
	return (int*)((char*)Data) + 596;
}
int* ItemDropTableEntry::unknow_field_86(void *Data) {
	return (int*)((char*)Data) + 600;
}
int* ItemDropTableEntry::unknow_field_87(void *Data) {
	return (int*)((char*)Data) + 604;
}
int* ItemDropTableEntry::unknow_field_88(void *Data) {
	return (int*)((char*)Data) + 608;
}
int* ItemDropTableEntry::unknow_field_89(void *Data) {
	return (int*)((char*)Data) + 612;
}
int* ItemDropTableEntry::unknow_field_90(void *Data) {
	return (int*)((char*)Data) + 616;
}
int* ItemDropTableEntry::unknow_field_91(void *Data) {
	return (int*)((char*)Data) + 620;
}
int* ItemDropTableEntry::unknow_field_92(void *Data) {
	return (int*)((char*)Data) + 624;
}
int* ItemDropTableEntry::unknow_field_93(void *Data) {
	return (int*)((char*)Data) + 628;
}
int* ItemDropTableEntry::unknow_field_94(void *Data) {
	return (int*)((char*)Data) + 632;
}
int* ItemDropTableEntry::unknow_field_95(void *Data) {
	return (int*)((char*)Data) + 636;
}
int* ItemDropTableEntry::unknow_field_96(void *Data) {
	return (int*)((char*)Data) + 640;
}
int* ItemDropTableEntry::unknow_field_97(void *Data) {
	return (int*)((char*)Data) + 644;
}
int* ItemDropTableEntry::unknow_field_98(void *Data) {
	return (int*)((char*)Data) + 648;
}
int* ItemDropTableEntry::unknow_field_99(void *Data) {
	return (int*)((char*)Data) + 652;
}
int* ItemDropTableEntry::unknow_field_100(void *Data) {
	return (int*)((char*)Data) + 656;
}
int* ItemDropTableEntry::unknow_field_101(void *Data) {
	return (int*)((char*)Data) + 660;
}
int* ItemDropTableEntry::unknow_field_102(void *Data) {
	return (int*)((char*)Data) + 664;
}
int* ItemDropTableEntry::unknow_field_103(void *Data) {
	return (int*)((char*)Data) + 668;
}
int* ItemDropTableEntry::unknow_field_104(void *Data) {
	return (int*)((char*)Data) + 672;
}
int* ItemDropTableEntry::unknow_field_105(void *Data) {
	return (int*)((char*)Data) + 676;
}
int* ItemDropTableEntry::unknow_field_106(void *Data) {
	return (int*)((char*)Data) + 680;
}
int* ItemDropTableEntry::unknow_field_107(void *Data) {
	return (int*)((char*)Data) + 684;
}
int* ItemDropTableEntry::unknow_field_108(void *Data) {
	return (int*)((char*)Data) + 688;
}
int* ItemDropTableEntry::unknow_field_109(void *Data) {
	return (int*)((char*)Data) + 692;
}
int* ItemDropTableEntry::unknow_field_110(void *Data) {
	return (int*)((char*)Data) + 696;
}
int* ItemDropTableEntry::unknow_field_111(void *Data) {
	return (int*)((char*)Data) + 700;
}
int* ItemDropTableEntry::unknow_field_112(void *Data) {
	return (int*)((char*)Data) + 704;
}
int* ItemDropTableEntry::unknow_field_113(void *Data) {
	return (int*)((char*)Data) + 708;
}
int* ItemDropTableEntry::unknow_field_114(void *Data) {
	return (int*)((char*)Data) + 712;
}
int* ItemDropTableEntry::unknow_field_115(void *Data) {
	return (int*)((char*)Data) + 716;
}
int* ItemDropTableEntry::unknow_field_116(void *Data) {
	return (int*)((char*)Data) + 720;
}
int* ItemDropTableEntry::unknow_field_117(void *Data) {
	return (int*)((char*)Data) + 724;
}
int* ItemDropTableEntry::unknow_field_118(void *Data) {
	return (int*)((char*)Data) + 728;
}
int* ItemDropTableEntry::unknow_field_119(void *Data) {
	return (int*)((char*)Data) + 732;
}
int* ItemDropTableEntry::unknow_field_120(void *Data) {
	return (int*)((char*)Data) + 736;
}
int* ItemDropTableEntry::unknow_field_121(void *Data) {
	return (int*)((char*)Data) + 740;
}
int* ItemDropTableEntry::unknow_field_122(void *Data) {
	return (int*)((char*)Data) + 744;
}
int* ItemDropTableEntry::unknow_field_123(void *Data) {
	return (int*)((char*)Data) + 748;
}
int* ItemDropTableEntry::unknow_field_124(void *Data) {
	return (int*)((char*)Data) + 752;
}
int* ItemDropTableEntry::unknow_field_125(void *Data) {
	return (int*)((char*)Data) + 756;
}
int* ItemDropTableEntry::unknow_field_126(void *Data) {
	return (int*)((char*)Data) + 760;
}
int* ItemDropTableEntry::unknow_field_127(void *Data) {
	return (int*)((char*)Data) + 764;
}
int* ItemDropTableEntry::unknow_field_128(void *Data) {
	return (int*)((char*)Data) + 768;
}
int* ItemDropTableEntry::unknow_field_129(void *Data) {
	return (int*)((char*)Data) + 772;
}
int* ItemDropTableEntry::unknow_field_130(void *Data) {
	return (int*)((char*)Data) + 776;
}
int* ItemDropTableEntry::unknow_field_131(void *Data) {
	return (int*)((char*)Data) + 780;
}
int* ItemDropTableEntry::unknow_field_132(void *Data) {
	return (int*)((char*)Data) + 784;
}
int* ItemDropTableEntry::unknow_field_133(void *Data) {
	return (int*)((char*)Data) + 788;
}
int* ItemDropTableEntry::unknow_field_134(void *Data) {
	return (int*)((char*)Data) + 792;
}
int* ItemDropTableEntry::unknow_field_135(void *Data) {
	return (int*)((char*)Data) + 796;
}
int* ItemDropTableEntry::unknow_field_136(void *Data) {
	return (int*)((char*)Data) + 800;
}
int* ItemDropTableEntry::unknow_field_137(void *Data) {
	return (int*)((char*)Data) + 804;
}
int* ItemDropTableEntry::unknow_field_138(void *Data) {
	return (int*)((char*)Data) + 808;
}
int* ItemDropTableEntry::unknow_field_139(void *Data) {
	return (int*)((char*)Data) + 812;
}
int* ItemDropTableEntry::unknow_field_140(void *Data) {
	return (int*)((char*)Data) + 816;
}
int* ItemDropTableEntry::unknow_field_141(void *Data) {
	return (int*)((char*)Data) + 820;
}
int* ItemDropTableEntry::unknow_field_142(void *Data) {
	return (int*)((char*)Data) + 824;
}
int* ItemDropTableEntry::unknow_field_143(void *Data) {
	return (int*)((char*)Data) + 828;
}
int* ItemDropTableEntry::unknow_field_144(void *Data) {
	return (int*)((char*)Data) + 832;
}
int* ItemDropTableEntry::unknow_field_145(void *Data) {
	return (int*)((char*)Data) + 836;
}
int* ItemDropTableEntry::unknow_field_146(void *Data) {
	return (int*)((char*)Data) + 840;
}
int* ItemDropTableEntry::unknow_field_147(void *Data) {
	return (int*)((char*)Data) + 844;
}
int* ItemDropTableEntry::unknow_field_148(void *Data) {
	return (int*)((char*)Data) + 848;
}
int* ItemDropTableEntry::unknow_field_149(void *Data) {
	return (int*)((char*)Data) + 852;
}
int* ItemDropTableEntry::unknow_field_150(void *Data) {
	return (int*)((char*)Data) + 856;
}
int* ItemDropTableEntry::unknow_field_151(void *Data) {
	return (int*)((char*)Data) + 860;
}
int* ItemDropTableEntry::unknow_field_152(void *Data) {
	return (int*)((char*)Data) + 864;
}
int* ItemDropTableEntry::unknow_field_153(void *Data) {
	return (int*)((char*)Data) + 868;
}
int* ItemDropTableEntry::unknow_field_154(void *Data) {
	return (int*)((char*)Data) + 872;
}
int* ItemDropTableEntry::unknow_field_155(void *Data) {
	return (int*)((char*)Data) + 876;
}
int* ItemDropTableEntry::unknow_field_156(void *Data) {
	return (int*)((char*)Data) + 880;
}
int* ItemDropTableEntry::unknow_field_157(void *Data) {
	return (int*)((char*)Data) + 884;
}
int* ItemDropTableEntry::unknow_field_158(void *Data) {
	return (int*)((char*)Data) + 888;
}
int* ItemDropTableEntry::unknow_field_159(void *Data) {
	return (int*)((char*)Data) + 892;
}
int* ItemDropTableEntry::unknow_field_160(void *Data) {
	return (int*)((char*)Data) + 896;
}
int* ItemDropTableEntry::unknow_field_161(void *Data) {
	return (int*)((char*)Data) + 900;
}
int* ItemDropTableEntry::unknow_field_162(void *Data) {
	return (int*)((char*)Data) + 904;
}
int* ItemDropTableEntry::unknow_field_163(void *Data) {
	return (int*)((char*)Data) + 908;
}
int* ItemDropTableEntry::unknow_field_164(void *Data) {
	return (int*)((char*)Data) + 912;
}
int* ItemDropTableEntry::unknow_field_165(void *Data) {
	return (int*)((char*)Data) + 916;
}
int* ItemDropTableEntry::unknow_field_166(void *Data) {
	return (int*)((char*)Data) + 920;
}
int* ItemDropTableEntry::unknow_field_167(void *Data) {
	return (int*)((char*)Data) + 924;
}
int* ItemDropTableEntry::unknow_field_168(void *Data) {
	return (int*)((char*)Data) + 928;
}
int* ItemDropTableEntry::unknow_field_169(void *Data) {
	return (int*)((char*)Data) + 932;
}
int* ItemDropTableEntry::unknow_field_170(void *Data) {
	return (int*)((char*)Data) + 936;
}
int* ItemDropTableEntry::unknow_field_171(void *Data) {
	return (int*)((char*)Data) + 940;
}
int* ItemDropTableEntry::unknow_field_172(void *Data) {
	return (int*)((char*)Data) + 944;
}
int* ItemDropTableEntry::unknow_field_173(void *Data) {
	return (int*)((char*)Data) + 948;
}
int* ItemDropTableEntry::unknow_field_174(void *Data) {
	return (int*)((char*)Data) + 952;
}
int* ItemDropTableEntry::unknow_field_175(void *Data) {
	return (int*)((char*)Data) + 956;
}
int* ItemDropTableEntry::unknow_field_176(void *Data) {
	return (int*)((char*)Data) + 960;
}
int* ItemDropTableEntry::unknow_field_177(void *Data) {
	return (int*)((char*)Data) + 964;
}
int* ItemDropTableEntry::unknow_field_178(void *Data) {
	return (int*)((char*)Data) + 968;
}
int* ItemDropTableEntry::unknow_field_179(void *Data) {
	return (int*)((char*)Data) + 972;
}
int* ItemDropTableEntry::unknow_field_180(void *Data) {
	return (int*)((char*)Data) + 976;
}
int* ItemDropTableEntry::unknow_field_181(void *Data) {
	return (int*)((char*)Data) + 980;
}
int* ItemDropTableEntry::unknow_field_182(void *Data) {
	return (int*)((char*)Data) + 984;
}
int* ItemDropTableEntry::unknow_field_183(void *Data) {
	return (int*)((char*)Data) + 988;
}
int* ItemDropTableEntry::unknow_field_184(void *Data) {
	return (int*)((char*)Data) + 992;
}
int* ItemDropTableEntry::unknow_field_185(void *Data) {
	return (int*)((char*)Data) + 996;
}
int* ItemDropTableEntry::unknow_field_186(void *Data) {
	return (int*)((char*)Data) + 1000;
}
int* ItemDropTableEntry::unknow_field_187(void *Data) {
	return (int*)((char*)Data) + 1004;
}
int* ItemDropTableEntry::unknow_field_188(void *Data) {
	return (int*)((char*)Data) + 1008;
}
int* ItemDropTableEntry::unknow_field_189(void *Data) {
	return (int*)((char*)Data) + 1012;
}
int* ItemDropTableEntry::unknow_field_190(void *Data) {
	return (int*)((char*)Data) + 1016;
}
int* ItemDropTableEntry::unknow_field_191(void *Data) {
	return (int*)((char*)Data) + 1024;
}
int* ItemDropTableEntry::unknow_field_192(void *Data) {
	return (int*)((char*)Data) + 1028;
}
int* ItemDropTableEntry::unknow_field_193(void *Data) {
	return (int*)((char*)Data) + 1032;
}
int* ItemDropTableEntry::unknow_field_194(void *Data) {
	return (int*)((char*)Data) + 1036;
}
int* ItemDropTableEntry::unknow_field_195(void *Data) {
	return (int*)((char*)Data) + 1040;
}
int* ItemDropTableEntry::unknow_field_196(void *Data) {
	return (int*)((char*)Data) + 1044;
}
int* ItemDropTableEntry::unknow_field_197(void *Data) {
	return (int*)((char*)Data) + 1048;
}
int* ItemDropTableEntry::unknow_field_198(void *Data) {
	return (int*)((char*)Data) + 1052;
}
int* ItemDropTableEntry::unknow_field_199(void *Data) {
	return (int*)((char*)Data) + 1056;
}
int* ItemDropTableEntry::unknow_field_200(void *Data) {
	return (int*)((char*)Data) + 1060;
}
int* ItemDropTableEntry::unknow_field_201(void *Data) {
	return (int*)((char*)Data) + 1064;
}
int* ItemDropTableEntry::unknow_field_202(void *Data) {
	return (int*)((char*)Data) + 1068;
}
int* ItemDropTableEntry::unknow_field_203(void *Data) {
	return (int*)((char*)Data) + 1072;
}
int* ItemDropTableEntry::unknow_field_204(void *Data) {
	return (int*)((char*)Data) + 1076;
}
int* ItemDropTableEntry::unknow_field_205(void *Data) {
	return (int*)((char*)Data) + 1080;
}
int* ItemDropTableEntry::unknow_field_206(void *Data) {
	return (int*)((char*)Data) + 1084;
}
int* ItemDropTableEntry::unknow_field_207(void *Data) {
	return (int*)((char*)Data) + 1088;
}
int* ItemDropTableEntry::unknow_field_208(void *Data) {
	return (int*)((char*)Data) + 1092;
}
int* ItemDropTableEntry::unknow_field_209(void *Data) {
	return (int*)((char*)Data) + 1096;
}
int* ItemDropTableEntry::unknow_field_210(void *Data) {
	return (int*)((char*)Data) + 1100;
}
int* ItemDropTableEntry::unknow_field_211(void *Data) {
	return (int*)((char*)Data) + 1104;
}
int* ItemDropTableEntry::unknow_field_212(void *Data) {
	return (int*)((char*)Data) + 1108;
}
int* ItemDropTableEntry::unknow_field_213(void *Data) {
	return (int*)((char*)Data) + 1112;
}
int* ItemDropTableEntry::unknow_field_214(void *Data) {
	return (int*)((char*)Data) + 1116;
}
int* ItemDropTableEntry::unknow_field_215(void *Data) {
	return (int*)((char*)Data) + 1120;
}
int* ItemDropTableEntry::unknow_field_216(void *Data) {
	return (int*)((char*)Data) + 1124;
}
int* ItemDropTableEntry::unknow_field_217(void *Data) {
	return (int*)((char*)Data) + 1128;
}
int* ItemDropTableEntry::unknow_field_218(void *Data) {
	return (int*)((char*)Data) + 1132;
}
int* ItemDropTableEntry::unknow_field_219(void *Data) {
	return (int*)((char*)Data) + 1136;
}

ItemDropTableEntry aItemDropTableEntry;
// ItemDropTable
//
// { serItemDrops }
// { unknow_field_1 }


void* ItemDropTable::New() {
}

ItemDropTable::ItemDropTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ItemDropTable::~ItemDropTable() {
		free(Fields);
}

const char* ItemDropTable::Name() {
		return "ItemDropTable";
}
	
void* ItemDropTable::serItemDrops(void *Data) {
	return ((char*)Data) + 0;
}
void* ItemDropTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ItemDropTable aItemDropTable;
// HirelingEntry
//
// { Name }
// { Actor }
// { Proxy }
// { Inventory }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }


void* HirelingEntry::New() {
}

HirelingEntry::HirelingEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_SNO, 260, 32);
		Fields[2].fieldinfo(&aDT_SNO, 264, 32);
		Fields[3].fieldinfo(&aDT_SNO, 268, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 752, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 756, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 764, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 760, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 776, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 780, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 784, 32);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
HirelingEntry::~HirelingEntry() {
		free(Fields);
}

const char* HirelingEntry::Name() {
		return "HirelingEntry";
}
	
void* HirelingEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* HirelingEntry::Actor(void *Data) {
	return ((char*)Data) + 260;
}
void* HirelingEntry::Proxy(void *Data) {
	return ((char*)Data) + 264;
}
void* HirelingEntry::Inventory(void *Data) {
	return ((char*)Data) + 268;
}
void* HirelingEntry::unknow_field_4(void *Data) {
	return ((char*)Data) + 752;
}
void* HirelingEntry::unknow_field_5(void *Data) {
	return ((char*)Data) + 756;
}
void* HirelingEntry::unknow_field_6(void *Data) {
	return ((char*)Data) + 764;
}
void* HirelingEntry::unknow_field_7(void *Data) {
	return ((char*)Data) + 760;
}
void* HirelingEntry::unknow_field_8(void *Data) {
	return ((char*)Data) + 776;
}
void* HirelingEntry::unknow_field_9(void *Data) {
	return ((char*)Data) + 780;
}
void* HirelingEntry::unknow_field_10(void *Data) {
	return ((char*)Data) + 784;
}

HirelingEntry aHirelingEntry;
// Hirelings
//
// { serHirelings }
// { unknow_field_1 }


void* Hirelings::New() {
}

Hirelings::Hirelings() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Hirelings::~Hirelings() {
		free(Fields);
}

const char* Hirelings::Name() {
		return "Hirelings";
}
	
void* Hirelings::serHirelings(void *Data) {
	return ((char*)Data) + 0;
}
void* Hirelings::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

Hirelings aHirelings;
// EliteModifierData
//
// { Name }
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }


void* EliteModifierData::New() {
}

EliteModifierData::EliteModifierData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 23);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_FLOAT, 260, 32);
		Fields[2].fieldinfo(&aDT_TIME, 264, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 268, 32);
		Fields[4].fieldinfo(&aDT_TIME, 272, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 276, 32);
		Fields[6].fieldinfo(&aDT_TIME, 280, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 284, 32);
		Fields[8].fieldinfo(&aDT_TIME, 288, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 292, 32);
		Fields[10].fieldinfo(&aDT_TIME, 296, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 300, 32);
		Fields[12].fieldinfo(&aDT_TIME, 304, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 308, 32);
		Fields[14].fieldinfo(&aDT_TIME, 312, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 316, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 320, 32);
		Fields[17].fieldinfo(&aDT_TIME, 324, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 328, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 332, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 336, 32);
		Fields[21].fieldinfo(&aDT_FLOAT, 340, 32);
		Fields[23 - 1].fieldinfo(NULL, 0, 0);
	}
EliteModifierData::~EliteModifierData() {
		free(Fields);
}

const char* EliteModifierData::Name() {
		return "EliteModifierData";
}
	
void* EliteModifierData::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* EliteModifierData::unknow_field_1(void *Data) {
	return ((char*)Data) + 260;
}
void* EliteModifierData::unknow_field_2(void *Data) {
	return ((char*)Data) + 264;
}
void* EliteModifierData::unknow_field_3(void *Data) {
	return ((char*)Data) + 268;
}
void* EliteModifierData::unknow_field_4(void *Data) {
	return ((char*)Data) + 272;
}
void* EliteModifierData::unknow_field_5(void *Data) {
	return ((char*)Data) + 276;
}
void* EliteModifierData::unknow_field_6(void *Data) {
	return ((char*)Data) + 280;
}
void* EliteModifierData::unknow_field_7(void *Data) {
	return ((char*)Data) + 284;
}
void* EliteModifierData::unknow_field_8(void *Data) {
	return ((char*)Data) + 288;
}
void* EliteModifierData::unknow_field_9(void *Data) {
	return ((char*)Data) + 292;
}
void* EliteModifierData::unknow_field_10(void *Data) {
	return ((char*)Data) + 296;
}
void* EliteModifierData::unknow_field_11(void *Data) {
	return ((char*)Data) + 300;
}
void* EliteModifierData::unknow_field_12(void *Data) {
	return ((char*)Data) + 304;
}
void* EliteModifierData::unknow_field_13(void *Data) {
	return ((char*)Data) + 308;
}
void* EliteModifierData::unknow_field_14(void *Data) {
	return ((char*)Data) + 312;
}
void* EliteModifierData::unknow_field_15(void *Data) {
	return ((char*)Data) + 316;
}
void* EliteModifierData::unknow_field_16(void *Data) {
	return ((char*)Data) + 320;
}
void* EliteModifierData::unknow_field_17(void *Data) {
	return ((char*)Data) + 324;
}
void* EliteModifierData::unknow_field_18(void *Data) {
	return ((char*)Data) + 328;
}
void* EliteModifierData::unknow_field_19(void *Data) {
	return ((char*)Data) + 332;
}
void* EliteModifierData::unknow_field_20(void *Data) {
	return ((char*)Data) + 336;
}
void* EliteModifierData::unknow_field_21(void *Data) {
	return ((char*)Data) + 340;
}

EliteModifierData aEliteModifierData;
// EliteModifiers
//
// { serMods }
// { unknow_field_1 }


void* EliteModifiers::New() {
}

EliteModifiers::EliteModifiers() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
EliteModifiers::~EliteModifiers() {
		free(Fields);
}

const char* EliteModifiers::Name() {
		return "EliteModifiers";
}
	
void* EliteModifiers::serMods(void *Data) {
	return ((char*)Data) + 0;
}
void* EliteModifiers::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

EliteModifiers aEliteModifiers;
// RecipeEntry
//
// { Name }
// { snoRecipe }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* RecipeEntry::New() {
}

RecipeEntry::RecipeEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[1].fieldinfo(&aDT_SNO, 260, 32);
		Fields[2].fieldinfo(&aDT_ENUM, 264, 2);
		Fields[3].fieldinfo(&aDT_INT, 268, 32);
		Fields[4].fieldinfo(&aDT_INT, 272, 32);
		Fields[5].fieldinfo(&aDT_INT, 276, 32);
		Fields[6].fieldinfo(&aDT_INT, 280, 32);
		Fields[7].fieldinfo(&aDT_FIXEDARRAY, 284, 0);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
RecipeEntry::~RecipeEntry() {
		free(Fields);
}

const char* RecipeEntry::Name() {
		return "RecipeEntry";
}
	
void* RecipeEntry::Name(void *Data) {
	return ((char*)Data) + 4;
}
void* RecipeEntry::snoRecipe(void *Data) {
	return ((char*)Data) + 260;
}
void* RecipeEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 264;
}
int* RecipeEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 268;
}
int* RecipeEntry::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 272;
}
int* RecipeEntry::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 276;
}
int* RecipeEntry::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 280;
}
void* RecipeEntry::unknow_field_7(void *Data) {
	return ((char*)Data) + 284;
}

RecipeEntry aRecipeEntry;
// RecipesTable
//
// { serRecipes }
// { unknow_field_1 }


void* RecipesTable::New() {
}

RecipesTable::RecipesTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
RecipesTable::~RecipesTable() {
		free(Fields);
}

const char* RecipesTable::Name() {
		return "RecipesTable";
}
	
void* RecipesTable::serRecipes(void *Data) {
	return ((char*)Data) + 0;
}
void* RecipesTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

RecipesTable aRecipesTable;
// ScriptedAchievementEvent
//
// { Name }


void* ScriptedAchievementEvent::New() {
}

ScriptedAchievementEvent::ScriptedAchievementEvent() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
ScriptedAchievementEvent::~ScriptedAchievementEvent() {
		free(Fields);
}

const char* ScriptedAchievementEvent::Name() {
		return "ScriptedAchievementEvent";
}
	
void* ScriptedAchievementEvent::Name(void *Data) {
	return ((char*)Data) + 4;
}

ScriptedAchievementEvent aScriptedAchievementEvent;
// ScriptedAchievementEventsTable
//
// { serScriptedAchievementEvents }
// { unknow_field_1 }


void* ScriptedAchievementEventsTable::New() {
}

ScriptedAchievementEventsTable::ScriptedAchievementEventsTable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ScriptedAchievementEventsTable::~ScriptedAchievementEventsTable() {
		free(Fields);
}

const char* ScriptedAchievementEventsTable::Name() {
		return "ScriptedAchievementEventsTable";
}
	
void* ScriptedAchievementEventsTable::serScriptedAchievementEvents(void *Data) {
	return ((char*)Data) + 0;
}
void* ScriptedAchievementEventsTable::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ScriptedAchievementEventsTable aScriptedAchievementEventsTable;
// GameBalance
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { tItemTypeTable }
// { tItemTable }
// { tExperienceTable }
// { tHelpCodesTable }
// { tMonsterLevelTable }
// { tHeroTable }
// { tMovementStyleTable }
// { tLabelGBIDTable }
// { tAffixTable }
// { tLootDistTable }
// { tRareItemNamesTable }
// { tMonsterAffixesTable }
// { tMonsterNamesTable }
// { tSocketedEffectTable }
// { tItemEnhancementTable }
// { tItemDropTable }
// { tItemLevelModTable }
// { tQualityClassTable }
// { tHirelingTable }
// { tSetItemBonusTable }
// { tEliteModTable }
// { tItemTierTable }
// { tPowerFormulaTable }
// { tRecipeTable }
// { tScriptedAchievementEventsTable }


void* GameBalance::New() {
}

GameBalance::GameBalance() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 31);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 16, 9);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 272, 9);
		Fields[3].fieldinfo(&aDT_INT, 528, 32);
		Fields[4].fieldinfo(&aDT_INT, 532, 32);
		Fields[5].fieldinfo(&aItems_1, 536, 0);
		Fields[6].fieldinfo(&aItems, 552, 0);
		Fields[7].fieldinfo(&aExperienceTable, 568, 0);
		Fields[8].fieldinfo(&aHelpCodes_1, 584, 0);
		Fields[9].fieldinfo(&aMonsterLevelTable, 600, 0);
		Fields[10].fieldinfo(&aHeros, 632, 0);
		Fields[11].fieldinfo(&aMovementStyles, 648, 0);
		Fields[12].fieldinfo(&aLabels, 664, 0);
		Fields[13].fieldinfo(&aAffixTable, 616, 0);
		Fields[14].fieldinfo(&aLootDistributionTable, 680, 0);
		Fields[15].fieldinfo(&aRareItemNamesTable, 696, 0);
		Fields[16].fieldinfo(&aMonsterAffixesTable, 712, 0);
		Fields[17].fieldinfo(&aRareMonsterNamesTable, 728, 0);
		Fields[18].fieldinfo(&aSocketedEffectsTable, 744, 0);
		Fields[19].fieldinfo(&aItemEnhancementTable, 760, 0);
		Fields[20].fieldinfo(&aItemDropTable, 776, 0);
		Fields[21].fieldinfo(&aItemLevelModTable, 792, 0);
		Fields[22].fieldinfo(&aQualityClassTable, 808, 0);
		Fields[23].fieldinfo(&aHirelings, 824, 0);
		Fields[24].fieldinfo(&aSetItemBonusTable, 840, 0);
		Fields[25].fieldinfo(&aEliteModifiers, 856, 0);
		Fields[26].fieldinfo(&aItemTiers, 872, 0);
		Fields[27].fieldinfo(&aPowerFormulaTable, 888, 0);
		Fields[28].fieldinfo(&aRecipesTable, 904, 0);
		Fields[29].fieldinfo(&aScriptedAchievementEventsTable, 920, 0);
		Fields[31 - 1].fieldinfo(NULL, 0, 0);
	}
GameBalance::~GameBalance() {
		free(Fields);
}

const char* GameBalance::Name() {
		return "GameBalance";
}
	
int* GameBalance::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* GameBalance::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* GameBalance::unknow_field_2(void *Data) {
	return ((char*)Data) + 272;
}
int* GameBalance::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 528;
}
int* GameBalance::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 532;
}
void* GameBalance::tItemTypeTable(void *Data) {
	return ((char*)Data) + 536;
}
void* GameBalance::tItemTable(void *Data) {
	return ((char*)Data) + 552;
}
void* GameBalance::tExperienceTable(void *Data) {
	return ((char*)Data) + 568;
}
void* GameBalance::tHelpCodesTable(void *Data) {
	return ((char*)Data) + 584;
}
void* GameBalance::tMonsterLevelTable(void *Data) {
	return ((char*)Data) + 600;
}
void* GameBalance::tHeroTable(void *Data) {
	return ((char*)Data) + 632;
}
void* GameBalance::tMovementStyleTable(void *Data) {
	return ((char*)Data) + 648;
}
void* GameBalance::tLabelGBIDTable(void *Data) {
	return ((char*)Data) + 664;
}
void* GameBalance::tAffixTable(void *Data) {
	return ((char*)Data) + 616;
}
void* GameBalance::tLootDistTable(void *Data) {
	return ((char*)Data) + 680;
}
void* GameBalance::tRareItemNamesTable(void *Data) {
	return ((char*)Data) + 696;
}
void* GameBalance::tMonsterAffixesTable(void *Data) {
	return ((char*)Data) + 712;
}
void* GameBalance::tMonsterNamesTable(void *Data) {
	return ((char*)Data) + 728;
}
void* GameBalance::tSocketedEffectTable(void *Data) {
	return ((char*)Data) + 744;
}
void* GameBalance::tItemEnhancementTable(void *Data) {
	return ((char*)Data) + 760;
}
void* GameBalance::tItemDropTable(void *Data) {
	return ((char*)Data) + 776;
}
void* GameBalance::tItemLevelModTable(void *Data) {
	return ((char*)Data) + 792;
}
void* GameBalance::tQualityClassTable(void *Data) {
	return ((char*)Data) + 808;
}
void* GameBalance::tHirelingTable(void *Data) {
	return ((char*)Data) + 824;
}
void* GameBalance::tSetItemBonusTable(void *Data) {
	return ((char*)Data) + 840;
}
void* GameBalance::tEliteModTable(void *Data) {
	return ((char*)Data) + 856;
}
void* GameBalance::tItemTierTable(void *Data) {
	return ((char*)Data) + 872;
}
void* GameBalance::tPowerFormulaTable(void *Data) {
	return ((char*)Data) + 888;
}
void* GameBalance::tRecipeTable(void *Data) {
	return ((char*)Data) + 904;
}
void* GameBalance::tScriptedAchievementEventsTable(void *Data) {
	return ((char*)Data) + 920;
}

GameBalance aGameBalance;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 24, 1);
		Fields[5].fieldinfo(&aDT_INT, 20, 1);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
QuestUpdateMessage::~QuestUpdateMessage() {
		free(Fields);
}

const char* QuestUpdateMessage::Name() {
		return "QuestUpdateMessage";
}
	
void* QuestUpdateMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* QuestUpdateMessage::snoQuest(void *Data) {
	return ((char*)Data) + 8;
}
void* QuestUpdateMessage::snoLevelArea(void *Data) {
	return ((char*)Data) + 12;
}
int* QuestUpdateMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* QuestUpdateMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* QuestUpdateMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}

QuestUpdateMessage aQuestUpdateMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
QuestMeterMessage::~QuestMeterMessage() {
		free(Fields);
}

const char* QuestMeterMessage::Name() {
		return "QuestMeterMessage";
}
	
void* QuestMeterMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* QuestMeterMessage::snoQuest(void *Data) {
	return ((char*)Data) + 8;
}
int* QuestMeterMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* QuestMeterMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

QuestMeterMessage aQuestMeterMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 32);
		Fields[5].fieldinfo(&aDT_INT, 24, 32);
		Fields[6].fieldinfo(&aDT_INT, 28, 32);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
QuestCounterMessage::~QuestCounterMessage() {
		free(Fields);
}

const char* QuestCounterMessage::Name() {
		return "QuestCounterMessage";
}
	
void* QuestCounterMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* QuestCounterMessage::snoQuest(void *Data) {
	return ((char*)Data) + 8;
}
void* QuestCounterMessage::snoLevelArea(void *Data) {
	return ((char*)Data) + 12;
}
int* QuestCounterMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* QuestCounterMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* QuestCounterMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* QuestCounterMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 28;
}

QuestCounterMessage aQuestCounterMessage;
// SkillKeyMapping
//
// { Power }
// { unknow_field_1 }
// { unknow_field_2 }


void* SkillKeyMapping::New() {
}

SkillKeyMapping::SkillKeyMapping() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 4);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SkillKeyMapping::~SkillKeyMapping() {
		free(Fields);
}

const char* SkillKeyMapping::Name() {
		return "SkillKeyMapping";
}
	
void* SkillKeyMapping::Power(void *Data) {
	return ((char*)Data) + 0;
}
int* SkillKeyMapping::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* SkillKeyMapping::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

SkillKeyMapping aSkillKeyMapping;
// PlayerSavedQuest
//
// { snoQuest }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* PlayerSavedQuest::New() {
}

PlayerSavedQuest::PlayerSavedQuest() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 12, 32);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 92, 32);
		Fields[4].fieldinfo(&aDT_ENUM, 4, 2);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerSavedQuest::~PlayerSavedQuest() {
		free(Fields);
}

const char* PlayerSavedQuest::Name() {
		return "PlayerSavedQuest";
}
	
void* PlayerSavedQuest::snoQuest(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerSavedQuest::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* PlayerSavedQuest::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* PlayerSavedQuest::unknow_field_3(void *Data) {
	return ((char*)Data) + 92;
}
void* PlayerSavedQuest::unknow_field_4(void *Data) {
	return ((char*)Data) + 4;
}

PlayerSavedQuest aPlayerSavedQuest;
// PlayerQuestHistoryEntry
//
// { snoQuest }
// { unknow_field_1 }


void* PlayerQuestHistoryEntry::New() {
}

PlayerQuestHistoryEntry::PlayerQuestHistoryEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_ENUM, 4, 2);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerQuestHistoryEntry::~PlayerQuestHistoryEntry() {
		free(Fields);
}

const char* PlayerQuestHistoryEntry::Name() {
		return "PlayerQuestHistoryEntry";
}
	
void* PlayerQuestHistoryEntry::snoQuest(void *Data) {
	return ((char*)Data) + 0;
}
void* PlayerQuestHistoryEntry::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

PlayerQuestHistoryEntry aPlayerQuestHistoryEntry;
// PlayerQuestRewardHistoryEntry
//
// { snoQuest }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerQuestRewardHistoryEntry::New() {
}

PlayerQuestRewardHistoryEntry::PlayerQuestRewardHistoryEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_ENUM, 8, 2);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerQuestRewardHistoryEntry::~PlayerQuestRewardHistoryEntry() {
		free(Fields);
}

const char* PlayerQuestRewardHistoryEntry::Name() {
		return "PlayerQuestRewardHistoryEntry";
}
	
void* PlayerQuestRewardHistoryEntry::snoQuest(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerQuestRewardHistoryEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* PlayerQuestRewardHistoryEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

PlayerQuestRewardHistoryEntry aPlayerQuestRewardHistoryEntry;
// HirelingInfo
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


void* HirelingInfo::New() {
}

HirelingInfo::HirelingInfo() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 2);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 7);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 1);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aDT_INT, 24, 32);
		Fields[7].fieldinfo(&aDT_INT, 28, 32);
		Fields[8].fieldinfo(&aDT_INT, 32, 32);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
HirelingInfo::~HirelingInfo() {
		free(Fields);
}

const char* HirelingInfo::Name() {
		return "HirelingInfo";
}
	
int* HirelingInfo::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* HirelingInfo::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* HirelingInfo::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* HirelingInfo::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* HirelingInfo::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* HirelingInfo::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* HirelingInfo::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* HirelingInfo::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* HirelingInfo::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 32;
}

HirelingInfo aHirelingInfo;
// HirelingSavedData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* HirelingSavedData::New() {
}

HirelingSavedData::HirelingSavedData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 144, 2);
		Fields[2].fieldinfo(&aDT_INT, 148, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
HirelingSavedData::~HirelingSavedData() {
		free(Fields);
}

const char* HirelingSavedData::Name() {
		return "HirelingSavedData";
}
	
void* HirelingSavedData::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* HirelingSavedData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 144;
}
int* HirelingSavedData::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 148;
}

HirelingSavedData aHirelingSavedData;
// LearnedLore
//
// { unknow_field_0 }
// { m_snoLoreLearned }


void* LearnedLore::New() {
}

LearnedLore::LearnedLore() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LearnedLore::~LearnedLore() {
		free(Fields);
}

const char* LearnedLore::Name() {
		return "LearnedLore";
}
	
int* LearnedLore::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* LearnedLore::m_snoLoreLearned(void *Data) {
	return ((char*)Data) + 4;
}

LearnedLore aLearnedLore;
// SavedConversations
//
// { unknow_field_0 }
// { unknow_field_1 }
// { m_snoSavedConv }


void* SavedConversations::New() {
}

SavedConversations::SavedConversations() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 4, 8);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 36, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SavedConversations::~SavedConversations() {
		free(Fields);
}

const char* SavedConversations::Name() {
		return "SavedConversations";
}
	
int* SavedConversations::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* SavedConversations::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* SavedConversations::m_snoSavedConv(void *Data) {
	return ((char*)Data) + 36;
}

SavedConversations aSavedConversations;
// SavePointData
//
// { snoWorld }
// { unknow_field_1 }


void* SavePointData::New() {
}

SavePointData::SavePointData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SavePointData::~SavePointData() {
		free(Fields);
}

const char* SavePointData::Name() {
		return "SavePointData";
}
	
void* SavePointData::snoWorld(void *Data) {
	return ((char*)Data) + 0;
}
int* SavePointData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

SavePointData aSavePointData;
// PlayerSavedData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { snoActiveSkills }
// { snoTraits }
// { unknow_field_9 }
// { m_SeenTutorials }


void* PlayerSavedData::New() {
}

PlayerSavedData::PlayerSavedData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 0);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 72, 0);
		Fields[2].fieldinfo(&aDT_TIME, 252, 32);
		Fields[3].fieldinfo(&aDT_INT, 256, 32);
		Fields[4].fieldinfo(&aHirelingSavedData, 260, 0);
		Fields[5].fieldinfo(&aDT_INT, 412, 32);
		Fields[6].fieldinfo(&aLearnedLore, 416, 0);
		Fields[7].fieldinfo(&aDT_FIXEDARRAY, 2504, 32);
		Fields[8].fieldinfo(&aDT_FIXEDARRAY, 2528, 32);
		Fields[9].fieldinfo(&aSavePointData, 2796, 0);
		Fields[10].fieldinfo(&aDT_FIXEDARRAY, 2540, 32);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerSavedData::~PlayerSavedData() {
		free(Fields);
}

const char* PlayerSavedData::Name() {
		return "PlayerSavedData";
}
	
void* PlayerSavedData::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PlayerSavedData::unknow_field_1(void *Data) {
	return ((char*)Data) + 72;
}
void* PlayerSavedData::unknow_field_2(void *Data) {
	return ((char*)Data) + 252;
}
int* PlayerSavedData::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 256;
}
void* PlayerSavedData::unknow_field_4(void *Data) {
	return ((char*)Data) + 260;
}
int* PlayerSavedData::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 412;
}
void* PlayerSavedData::unknow_field_6(void *Data) {
	return ((char*)Data) + 416;
}
void* PlayerSavedData::snoActiveSkills(void *Data) {
	return ((char*)Data) + 2504;
}
void* PlayerSavedData::snoTraits(void *Data) {
	return ((char*)Data) + 2528;
}
void* PlayerSavedData::unknow_field_9(void *Data) {
	return ((char*)Data) + 2796;
}
void* PlayerSavedData::m_SeenTutorials(void *Data) {
	return ((char*)Data) + 2540;
}

PlayerSavedData aPlayerSavedData;
// Hero
//
// { serProtoData }
// { unknow_field_1 }


void* Hero::New() {
}

Hero::Hero() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 12, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Hero::~Hero() {
		free(Fields);
}

const char* Hero::Name() {
		return "Hero";
}
	
void* Hero::serProtoData(void *Data) {
	return ((char*)Data) + 12;
}
void* Hero::unknow_field_1(void *Data) {
	return ((char*)Data) + 24;
}

Hero aHero;
// Account
//
// { serProtoData }
// { unknow_field_1 }


void* Account::New() {
}

Account::Account() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 12, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Account::~Account() {
		free(Fields);
}

const char* Account::Name() {
		return "Account";
}
	
void* Account::serProtoData(void *Data) {
	return ((char*)Data) + 12;
}
void* Account::unknow_field_1(void *Data) {
	return ((char*)Data) + 24;
}

Account aAccount;
// Tutorial
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* Tutorial::New() {
}

Tutorial::Tutorial() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_TIME, 20, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
Tutorial::~Tutorial() {
		free(Fields);
}

const char* Tutorial::Name() {
		return "Tutorial";
}
	
int* Tutorial::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Tutorial::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Tutorial::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}

Tutorial aTutorial;
// BossEncounter
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
// { snoQuestRange }
// { arrWorlds }
// { arrScripts }


void* BossEncounter::New() {
}

BossEncounter::BossEncounter() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_INT, 24, 32);
		Fields[4].fieldinfo(&aDT_INT, 28, 32);
		Fields[5].fieldinfo(&aDT_INT, 32, 32);
		Fields[6].fieldinfo(&aDT_INT, 36, 32);
		Fields[7].fieldinfo(&aDT_INT, 40, 32);
		Fields[8].fieldinfo(&aDT_INT, 44, 32);
		Fields[9].fieldinfo(&aDT_INT, 48, 32);
		Fields[10].fieldinfo(&aDT_SNO, 52, 32);
		Fields[11].fieldinfo(&aDT_FIXEDARRAY, 56, 32);
		Fields[12].fieldinfo(&aDT_FIXEDARRAY, 72, 32);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
BossEncounter::~BossEncounter() {
		free(Fields);
}

const char* BossEncounter::Name() {
		return "BossEncounter";
}
	
int* BossEncounter::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* BossEncounter::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* BossEncounter::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* BossEncounter::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* BossEncounter::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* BossEncounter::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 32;
}
int* BossEncounter::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* BossEncounter::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 40;
}
int* BossEncounter::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 44;
}
int* BossEncounter::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 48;
}
void* BossEncounter::snoQuestRange(void *Data) {
	return ((char*)Data) + 52;
}
void* BossEncounter::arrWorlds(void *Data) {
	return ((char*)Data) + 56;
}
void* BossEncounter::arrScripts(void *Data) {
	return ((char*)Data) + 72;
}

BossEncounter aBossEncounter;
// ItemSpecifierData
//
// { gbidItem }
// { unknow_field_1 }
// { gbidAffixes }
// { unknow_field_3 }


void* ItemSpecifierData::New() {
}

ItemSpecifierData::ItemSpecifierData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_GBID, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 20, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ItemSpecifierData::~ItemSpecifierData() {
		free(Fields);
}

const char* ItemSpecifierData::Name() {
		return "ItemSpecifierData";
}
	
void* ItemSpecifierData::gbidItem(void *Data) {
	return ((char*)Data) + 0;
}
int* ItemSpecifierData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* ItemSpecifierData::gbidAffixes(void *Data) {
	return ((char*)Data) + 8;
}
int* ItemSpecifierData::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 20;
}

ItemSpecifierData aItemSpecifierData;
// LootDropModifier
//
// { unknow_field_0 }
// { snoSubTreasureClass }
// { unknow_field_2 }
// { gbidQualityClass }
// { unknow_field_4 }
// { unknow_field_5 }
// { snoCondition }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }


void* LootDropModifier::New() {
}

LootDropModifier::LootDropModifier() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_SNO, 4, 32);
		Fields[2].fieldinfo(&aItemSpecifierData, 32, 0);
		Fields[3].fieldinfo(&aDT_GBID, 16, 32);
		Fields[4].fieldinfo(&aDT_HIGHPRECISIONPERCENT, 8, 32);
		Fields[5].fieldinfo(&aDT_INT, 12, 32);
		Fields[6].fieldinfo(&aDT_SNO, 28, 32);
		Fields[7].fieldinfo(&aDT_INT, 20, 32);
		Fields[8].fieldinfo(&aDT_INT, 24, 32);
		Fields[9].fieldinfo(&aDT_FIXEDARRAY, 60, 32);
		Fields[10].fieldinfo(&aDT_INT, 56, 32);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
LootDropModifier::~LootDropModifier() {
		free(Fields);
}

const char* LootDropModifier::Name() {
		return "LootDropModifier";
}
	
int* LootDropModifier::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* LootDropModifier::snoSubTreasureClass(void *Data) {
	return ((char*)Data) + 4;
}
void* LootDropModifier::unknow_field_2(void *Data) {
	return ((char*)Data) + 32;
}
void* LootDropModifier::gbidQualityClass(void *Data) {
	return ((char*)Data) + 16;
}
void* LootDropModifier::unknow_field_4(void *Data) {
	return ((char*)Data) + 8;
}
int* LootDropModifier::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* LootDropModifier::snoCondition(void *Data) {
	return ((char*)Data) + 28;
}
int* LootDropModifier::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* LootDropModifier::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 24;
}
void* LootDropModifier::unknow_field_9(void *Data) {
	return ((char*)Data) + 60;
}
int* LootDropModifier::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 56;
}

LootDropModifier aLootDropModifier;
// TreasureClass
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { serModifierList }
// { unknow_field_4 }


void* TreasureClass::New() {
}

TreasureClass::TreasureClass() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_HIGHPRECISIONPERCENT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aSerializeData, 32, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
TreasureClass::~TreasureClass() {
		free(Fields);
}

const char* TreasureClass::Name() {
		return "TreasureClass";
}
	
void* TreasureClass::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}
int* TreasureClass::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* TreasureClass::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* TreasureClass::serModifierList(void *Data) {
	return ((char*)Data) + 32;
}
void* TreasureClass::unknow_field_4(void *Data) {
	return ((char*)Data) + 24;
}

TreasureClass aTreasureClass;
// QuestSubcondition
//
// { snoQuest }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* QuestSubcondition::New() {
}

QuestSubcondition::QuestSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
QuestSubcondition::~QuestSubcondition() {
		free(Fields);
}

const char* QuestSubcondition::Name() {
		return "QuestSubcondition";
}
	
void* QuestSubcondition::snoQuest(void *Data) {
	return ((char*)Data) + 0;
}
int* QuestSubcondition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* QuestSubcondition::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* QuestSubcondition::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

QuestSubcondition aQuestSubcondition;
// LoreSubcondition
//
// { snoLore }
// { unknow_field_1 }


void* LoreSubcondition::New() {
}

LoreSubcondition::LoreSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LoreSubcondition::~LoreSubcondition() {
		free(Fields);
}

const char* LoreSubcondition::Name() {
		return "LoreSubcondition";
}
	
void* LoreSubcondition::snoLore(void *Data) {
	return ((char*)Data) + 0;
}
int* LoreSubcondition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

LoreSubcondition aLoreSubcondition;
// ItemSubcondition
//
// { gbidItem }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ItemSubcondition::New() {
}

ItemSubcondition::ItemSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_GBID, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ItemSubcondition::~ItemSubcondition() {
		free(Fields);
}

const char* ItemSubcondition::Name() {
		return "ItemSubcondition";
}
	
void* ItemSubcondition::gbidItem(void *Data) {
	return ((char*)Data) + 0;
}
int* ItemSubcondition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* ItemSubcondition::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ItemSubcondition::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

ItemSubcondition aItemSubcondition;
// LabelSubcondition
//
// { gbidLabel }
// { unknow_field_1 }


void* LabelSubcondition::New() {
}

LabelSubcondition::LabelSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_GBID, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LabelSubcondition::~LabelSubcondition() {
		free(Fields);
}

const char* LabelSubcondition::Name() {
		return "LabelSubcondition";
}
	
void* LabelSubcondition::gbidLabel(void *Data) {
	return ((char*)Data) + 0;
}
int* LabelSubcondition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

LabelSubcondition aLabelSubcondition;
// SkillSubcondition
//
// { snoSkillPower }
// { unknow_field_1 }
// { unknow_field_2 }


void* SkillSubcondition::New() {
}

SkillSubcondition::SkillSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SkillSubcondition::~SkillSubcondition() {
		free(Fields);
}

const char* SkillSubcondition::Name() {
		return "SkillSubcondition";
}
	
void* SkillSubcondition::snoSkillPower(void *Data) {
	return ((char*)Data) + 0;
}
int* SkillSubcondition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* SkillSubcondition::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

SkillSubcondition aSkillSubcondition;
// MonsterSubcondition
//
// { snoMonsterActor }


void* MonsterSubcondition::New() {
}

MonsterSubcondition::MonsterSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
MonsterSubcondition::~MonsterSubcondition() {
		free(Fields);
}

const char* MonsterSubcondition::Name() {
		return "MonsterSubcondition";
}
	
void* MonsterSubcondition::snoMonsterActor(void *Data) {
	return ((char*)Data) + 0;
}

MonsterSubcondition aMonsterSubcondition;
// GameFlagSubcondition
//
// { unknow_field_0 }


void* GameFlagSubcondition::New() {
}

GameFlagSubcondition::GameFlagSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
GameFlagSubcondition::~GameFlagSubcondition() {
		free(Fields);
}

const char* GameFlagSubcondition::Name() {
		return "GameFlagSubcondition";
}
	
void* GameFlagSubcondition::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

GameFlagSubcondition aGameFlagSubcondition;
// PlayerFlagSubcondition
//
// { unknow_field_0 }


void* PlayerFlagSubcondition::New() {
}

PlayerFlagSubcondition::PlayerFlagSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerFlagSubcondition::~PlayerFlagSubcondition() {
		free(Fields);
}

const char* PlayerFlagSubcondition::Name() {
		return "PlayerFlagSubcondition";
}
	
void* PlayerFlagSubcondition::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

PlayerFlagSubcondition aPlayerFlagSubcondition;
// FollowerSubcondition
//
// { unknow_field_0 }
// { unknow_field_1 }


void* FollowerSubcondition::New() {
}

FollowerSubcondition::FollowerSubcondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ENUM, 0, 2);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
FollowerSubcondition::~FollowerSubcondition() {
		free(Fields);
}

const char* FollowerSubcondition::Name() {
		return "FollowerSubcondition";
}
	
void* FollowerSubcondition::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* FollowerSubcondition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

FollowerSubcondition aFollowerSubcondition;
// Condition
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
// { snoCurrentWorld }
// { snoCurrentLevelArea }
// { snoQuestRange }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }


void* Condition::New() {
}

Condition::Condition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 25);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 20, 32);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 40, 32);
		Fields[4].fieldinfo(&aDT_FIXEDARRAY, 56, 0);
		Fields[5].fieldinfo(&aDT_FIXEDARRAY, 80, 0);
		Fields[6].fieldinfo(&aDT_FIXEDARRAY, 128, 0);
		Fields[7].fieldinfo(&aDT_INT, 176, 32);
		Fields[8].fieldinfo(&aDT_INT, 180, 32);
		Fields[9].fieldinfo(&aDT_INT, 184, 32);
		Fields[10].fieldinfo(&aDT_INT, 188, 32);
		Fields[11].fieldinfo(&aDT_INT, 196, 32);
		Fields[12].fieldinfo(&aDT_INT, 200, 32);
		Fields[13].fieldinfo(&aDT_INT, 204, 32);
		Fields[14].fieldinfo(&aDT_INT, 208, 32);
		Fields[15].fieldinfo(&aDT_SNO, 212, 32);
		Fields[16].fieldinfo(&aDT_SNO, 216, 32);
		Fields[17].fieldinfo(&aDT_SNO, 220, 32);
		Fields[18].fieldinfo(&aFollowerSubcondition, 224, 0);
		Fields[19].fieldinfo(&aDT_FIXEDARRAY, 232, 0);
		Fields[20].fieldinfo(&aDT_FIXEDARRAY, 256, 0);
		Fields[21].fieldinfo(&aDT_FIXEDARRAY, 292, 0);
		Fields[22].fieldinfo(&aDT_FIXEDARRAY, 304, 0);
		Fields[23].fieldinfo(&aDT_FIXEDARRAY, 688, 0);
		Fields[25 - 1].fieldinfo(NULL, 0, 0);
	}
Condition::~Condition() {
		free(Fields);
}

const char* Condition::Name() {
		return "Condition";
}
	
int* Condition::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Condition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Condition::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Condition::unknow_field_3(void *Data) {
	return ((char*)Data) + 40;
}
void* Condition::unknow_field_4(void *Data) {
	return ((char*)Data) + 56;
}
void* Condition::unknow_field_5(void *Data) {
	return ((char*)Data) + 80;
}
void* Condition::unknow_field_6(void *Data) {
	return ((char*)Data) + 128;
}
int* Condition::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 176;
}
int* Condition::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 180;
}
int* Condition::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 184;
}
int* Condition::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 188;
}
int* Condition::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 196;
}
int* Condition::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 200;
}
int* Condition::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 204;
}
int* Condition::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 208;
}
void* Condition::snoCurrentWorld(void *Data) {
	return ((char*)Data) + 212;
}
void* Condition::snoCurrentLevelArea(void *Data) {
	return ((char*)Data) + 216;
}
void* Condition::snoQuestRange(void *Data) {
	return ((char*)Data) + 220;
}
void* Condition::unknow_field_18(void *Data) {
	return ((char*)Data) + 224;
}
void* Condition::unknow_field_19(void *Data) {
	return ((char*)Data) + 232;
}
void* Condition::unknow_field_20(void *Data) {
	return ((char*)Data) + 256;
}
void* Condition::unknow_field_21(void *Data) {
	return ((char*)Data) + 292;
}
void* Condition::unknow_field_22(void *Data) {
	return ((char*)Data) + 304;
}
void* Condition::unknow_field_23(void *Data) {
	return ((char*)Data) + 688;
}

Condition aCondition;
// Lore
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { snoConversation }
// { unknow_field_5 }


void* Lore::New() {
}

Lore::Lore() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_INT, 24, 32);
		Fields[4].fieldinfo(&aDT_SNO, 28, 32);
		Fields[5].fieldinfo(&aDT_INT, 32, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
Lore::~Lore() {
		free(Fields);
}

const char* Lore::Name() {
		return "Lore";
}
	
int* Lore::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Lore::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* Lore::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* Lore::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 24;
}
void* Lore::snoConversation(void *Data) {
	return ((char*)Data) + 28;
}
int* Lore::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 32;
}

Lore aLore;
// ResolvedPortalDestination
//
// { snoWorld }
// { unknow_field_1 }
// { snoDestLevelArea }


void* ResolvedPortalDestination::New() {
}

ResolvedPortalDestination::ResolvedPortalDestination() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_SNO, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ResolvedPortalDestination::~ResolvedPortalDestination() {
		free(Fields);
}

const char* ResolvedPortalDestination::Name() {
		return "ResolvedPortalDestination";
}
	
void* ResolvedPortalDestination::snoWorld(void *Data) {
	return ((char*)Data) + 0;
}
int* ResolvedPortalDestination::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* ResolvedPortalDestination::snoDestLevelArea(void *Data) {
	return ((char*)Data) + 8;
}

ResolvedPortalDestination aResolvedPortalDestination;
// WaypointInfo
//
// { snoWorld }
// { snoLevelArea }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { snoQuestRange }
// { unknow_field_6 }


void* WaypointInfo::New() {
}

WaypointInfo::WaypointInfo() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_SNO, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_SNO, 20, 32);
		Fields[6].fieldinfo(&aDT_INT, 24, 32);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
WaypointInfo::~WaypointInfo() {
		free(Fields);
}

const char* WaypointInfo::Name() {
		return "WaypointInfo";
}
	
void* WaypointInfo::snoWorld(void *Data) {
	return ((char*)Data) + 0;
}
void* WaypointInfo::snoLevelArea(void *Data) {
	return ((char*)Data) + 4;
}
int* WaypointInfo::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* WaypointInfo::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* WaypointInfo::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* WaypointInfo::snoQuestRange(void *Data) {
	return ((char*)Data) + 20;
}
int* WaypointInfo::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 24;
}

WaypointInfo aWaypointInfo;
// ActQuestInfo
//
// { snoQuest }


void* ActQuestInfo::New() {
}

ActQuestInfo::ActQuestInfo() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
ActQuestInfo::~ActQuestInfo() {
		free(Fields);
}

const char* ActQuestInfo::Name() {
		return "ActQuestInfo";
}
	
void* ActQuestInfo::snoQuest(void *Data) {
	return ((char*)Data) + 0;
}

ActQuestInfo aActQuestInfo;
// ActStartLocOverride
//
// { unknow_field_0 }
// { snoQuestRange }


void* ActStartLocOverride::New() {
}

ActStartLocOverride::ActStartLocOverride() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aResolvedPortalDestination, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 12, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ActStartLocOverride::~ActStartLocOverride() {
		free(Fields);
}

const char* ActStartLocOverride::Name() {
		return "ActStartLocOverride";
}
	
void* ActStartLocOverride::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ActStartLocOverride::snoQuestRange(void *Data) {
	return ((char*)Data) + 12;
}

ActStartLocOverride aActStartLocOverride;
// Act
//
// { serQuests }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* Act::New() {
}

Act::Act() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 12, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 32, 0);
		Fields[3].fieldinfo(&aResolvedPortalDestination, 732, 0);
		Fields[4].fieldinfo(&aDT_FIXEDARRAY, 744, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
Act::~Act() {
		free(Fields);
}

const char* Act::Name() {
		return "Act";
}
	
void* Act::serQuests(void *Data) {
	return ((char*)Data) + 12;
}
void* Act::unknow_field_1(void *Data) {
	return ((char*)Data) + 24;
}
void* Act::unknow_field_2(void *Data) {
	return ((char*)Data) + 32;
}
void* Act::unknow_field_3(void *Data) {
	return ((char*)Data) + 732;
}
void* Act::unknow_field_4(void *Data) {
	return ((char*)Data) + 744;
}

Act aAct;
// TimedEvent
//
// { unknow_field_0 }


void* TimedEvent::New() {
}

TimedEvent::TimedEvent() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_TIME, 12, 32);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
TimedEvent::~TimedEvent() {
		free(Fields);
}

const char* TimedEvent::Name() {
		return "TimedEvent";
}
	
void* TimedEvent::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}

TimedEvent aTimedEvent;
// Recipe
//
// { unknow_field_0 }


void* Recipe::New() {
}

Recipe::Recipe() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aItemSpecifierData, 12, 0);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
Recipe::~Recipe() {
		free(Fields);
}

const char* Recipe::Name() {
		return "Recipe";
}
	
void* Recipe::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}

Recipe aRecipe;
// HealthDropInfo
//
// { unknow_field_0 }
// { gbidHealthItem }
// { unknow_field_2 }


void* HealthDropInfo::New() {
}

HealthDropInfo::HealthDropInfo() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_GBID, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
HealthDropInfo::~HealthDropInfo() {
		free(Fields);
}

const char* HealthDropInfo::Name() {
		return "HealthDropInfo";
}
	
void* HealthDropInfo::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* HealthDropInfo::gbidHealthItem(void *Data) {
	return ((char*)Data) + 4;
}
int* HealthDropInfo::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

HealthDropInfo aHealthDropInfo;
// SkillDeclaration
//
// { snoPower }
// { unknow_field_1 }


void* SkillDeclaration::New() {
}

SkillDeclaration::SkillDeclaration() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SkillDeclaration::~SkillDeclaration() {
		free(Fields);
}

const char* SkillDeclaration::Name() {
		return "SkillDeclaration";
}
	
void* SkillDeclaration::snoPower(void *Data) {
	return ((char*)Data) + 0;
}
int* SkillDeclaration::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

SkillDeclaration aSkillDeclaration;
// MonsterSkillDeclaration
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* MonsterSkillDeclaration::New() {
}

MonsterSkillDeclaration::MonsterSkillDeclaration() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
MonsterSkillDeclaration::~MonsterSkillDeclaration() {
		free(Fields);
}

const char* MonsterSkillDeclaration::Name() {
		return "MonsterSkillDeclaration";
}
	
void* MonsterSkillDeclaration::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* MonsterSkillDeclaration::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* MonsterSkillDeclaration::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* MonsterSkillDeclaration::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}

MonsterSkillDeclaration aMonsterSkillDeclaration;
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
// MonsterMinionSpawnItem
//
// { snoSpawn }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* MonsterMinionSpawnItem::New() {
}

MonsterMinionSpawnItem::MonsterMinionSpawnItem() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
MonsterMinionSpawnItem::~MonsterMinionSpawnItem() {
		free(Fields);
}

const char* MonsterMinionSpawnItem::Name() {
		return "MonsterMinionSpawnItem";
}
	
void* MonsterMinionSpawnItem::snoSpawn(void *Data) {
	return ((char*)Data) + 0;
}
int* MonsterMinionSpawnItem::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* MonsterMinionSpawnItem::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* MonsterMinionSpawnItem::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* MonsterMinionSpawnItem::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}

MonsterMinionSpawnItem aMonsterMinionSpawnItem;
// MonsterMinionSpawnGroup
//
// { unknow_field_0 }
// { unknow_field_1 }
// { serSpawnItems }
// { unknow_field_3 }


void* MonsterMinionSpawnGroup::New() {
}

MonsterMinionSpawnGroup::MonsterMinionSpawnGroup() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aSerializeData, 16, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
MonsterMinionSpawnGroup::~MonsterMinionSpawnGroup() {
		free(Fields);
}

const char* MonsterMinionSpawnGroup::Name() {
		return "MonsterMinionSpawnGroup";
}
	
void* MonsterMinionSpawnGroup::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* MonsterMinionSpawnGroup::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* MonsterMinionSpawnGroup::serSpawnItems(void *Data) {
	return ((char*)Data) + 16;
}
void* MonsterMinionSpawnGroup::unknow_field_3(void *Data) {
	return ((char*)Data) + 8;
}

MonsterMinionSpawnGroup aMonsterMinionSpawnGroup;
// Monster_1
//
// { unknow_field_0 }
// { snoActor }
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
// { snoInventory }
// { snoSecondaryInventory }
// { snoLore }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { snoSkillKit }
// { unknow_field_26 }
// { unknow_field_27 }
// { snoTreasureClassFirstKill }
// { snoTreasureClass }
// { snoTreasureClassRare }
// { snoTreasureClassChampion }
// { snoTreasureClassChampionLight }
// { unknow_field_33 }
// { unknow_field_34 }
// { unknow_field_35 }
// { unknow_field_36 }
// { unknow_field_37 }
// { unknow_field_38 }
// { unknow_field_39 }
// { unknow_field_40 }
// { unknow_field_41 }
// { arAIBehaviors }
// { unknow_field_43 }
// { snoSummonActor }
// { unknow_field_45 }
// { unknow_field_46 }
// { unknow_field_47 }
// { unknow_field_48 }
// { unknow_field_49 }
// { unknow_field_50 }
// { serTagMap }
// { hTagMap }
// { unknow_field_53 }
// { serSpawnGroups }
// { unknow_field_55 }


void* Monster_1::New() {
}

Monster_1::Monster_1() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 57);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_SNO, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_ENUM, 24, 4);
		Fields[4].fieldinfo(&aDT_ENUM, 28, 4);
		Fields[5].fieldinfo(&aDT_ENUM, 32, 4);
		Fields[6].fieldinfo(&aDT_ENUM, 56, 3);
		Fields[7].fieldinfo(&aDT_INT, 60, 32);
		Fields[8].fieldinfo(&aDT_INT, 64, 32);
		Fields[9].fieldinfo(&aDT_FIXEDARRAY, 68, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 636, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 640, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 644, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 648, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 652, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 656, 32);
		Fields[16].fieldinfo(&aDT_SNO, 948, 32);
		Fields[17].fieldinfo(&aDT_SNO, 952, 32);
		Fields[18].fieldinfo(&aDT_SNO, 956, 32);
		Fields[19].fieldinfo(&aHealthDropInfo, 664, 0);
		Fields[20].fieldinfo(&aHealthDropInfo, 676, 0);
		Fields[21].fieldinfo(&aHealthDropInfo, 688, 0);
		Fields[22].fieldinfo(&aDT_INT, 660, 32);
		Fields[23].fieldinfo(&aDT_ENUM, 1092, 3);
		Fields[24].fieldinfo(&aDT_FIXEDARRAY, 84, 32);
		Fields[25].fieldinfo(&aDT_SNO, 700, 32);
		Fields[26].fieldinfo(&aDT_FIXEDARRAY, 704, 0);
		Fields[27].fieldinfo(&aDT_FIXEDARRAY, 768, 0);
		Fields[28].fieldinfo(&aDT_SNO, 896, 32);
		Fields[29].fieldinfo(&aDT_SNO, 900, 32);
		Fields[30].fieldinfo(&aDT_SNO, 904, 32);
		Fields[31].fieldinfo(&aDT_SNO, 908, 32);
		Fields[32].fieldinfo(&aDT_SNO, 912, 32);
		Fields[33].fieldinfo(&aMonster, 36, 0);
		Fields[34].fieldinfo(&aDT_FLOAT, 916, 32);
		Fields[35].fieldinfo(&aDT_FLOAT, 920, 32);
		Fields[36].fieldinfo(&aDT_FLOAT, 924, 32);
		Fields[37].fieldinfo(&aDT_FLOAT, 928, 32);
		Fields[38].fieldinfo(&aDT_INT, 932, 32);
		Fields[39].fieldinfo(&aDT_FLOAT, 936, 32);
		Fields[40].fieldinfo(&aDT_INT, 940, 32);
		Fields[41].fieldinfo(&aDT_INT, 944, 32);
		Fields[42].fieldinfo(&aDT_FIXEDARRAY, 960, 32);
		Fields[43].fieldinfo(&aDT_FIXEDARRAY, 984, 32);
		Fields[44].fieldinfo(&aDT_FIXEDARRAY, 1016, 32);
		Fields[45].fieldinfo(&aDT_FIXEDARRAY, 1040, 32);
		Fields[46].fieldinfo(&aDT_FIXEDARRAY, 1056, 32);
		Fields[47].fieldinfo(&aDT_INT, 1080, 32);
		Fields[48].fieldinfo(&aDT_INT, 1084, 32);
		Fields[49].fieldinfo(&aDT_INT, 1088, 32);
		Fields[50].fieldinfo(&aDT_CHARARRAY, 1160, 8);
		Fields[51].fieldinfo(&aSerializeData, 1120, 0);
		Fields[52].fieldinfo(&aDT_TAGMAP, 1128, 0);
		Fields[53].fieldinfo(&aDT_INT, 1136, 32);
		Fields[54].fieldinfo(&aSerializeData, 1152, 0);
		Fields[55].fieldinfo(&aDT_VARIABLEARRAY, 1144, 0);
		Fields[57 - 1].fieldinfo(NULL, 0, 0);
	}
Monster_1::~Monster_1() {
		free(Fields);
}

const char* Monster_1::Name() {
		return "Monster_1";
}
	
int* Monster_1::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Monster_1::snoActor(void *Data) {
	return ((char*)Data) + 16;
}
int* Monster_1::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* Monster_1::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Monster_1::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Monster_1::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* Monster_1::unknow_field_6(void *Data) {
	return ((char*)Data) + 56;
}
int* Monster_1::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 60;
}
int* Monster_1::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* Monster_1::unknow_field_9(void *Data) {
	return ((char*)Data) + 68;
}
void* Monster_1::unknow_field_10(void *Data) {
	return ((char*)Data) + 636;
}
void* Monster_1::unknow_field_11(void *Data) {
	return ((char*)Data) + 640;
}
void* Monster_1::unknow_field_12(void *Data) {
	return ((char*)Data) + 644;
}
void* Monster_1::unknow_field_13(void *Data) {
	return ((char*)Data) + 648;
}
void* Monster_1::unknow_field_14(void *Data) {
	return ((char*)Data) + 652;
}
void* Monster_1::unknow_field_15(void *Data) {
	return ((char*)Data) + 656;
}
void* Monster_1::snoInventory(void *Data) {
	return ((char*)Data) + 948;
}
void* Monster_1::snoSecondaryInventory(void *Data) {
	return ((char*)Data) + 952;
}
void* Monster_1::snoLore(void *Data) {
	return ((char*)Data) + 956;
}
void* Monster_1::unknow_field_19(void *Data) {
	return ((char*)Data) + 664;
}
void* Monster_1::unknow_field_20(void *Data) {
	return ((char*)Data) + 676;
}
void* Monster_1::unknow_field_21(void *Data) {
	return ((char*)Data) + 688;
}
int* Monster_1::unknow_field_22(void *Data) {
	return (int*)((char*)Data) + 660;
}
void* Monster_1::unknow_field_23(void *Data) {
	return ((char*)Data) + 1092;
}
void* Monster_1::unknow_field_24(void *Data) {
	return ((char*)Data) + 84;
}
void* Monster_1::snoSkillKit(void *Data) {
	return ((char*)Data) + 700;
}
void* Monster_1::unknow_field_26(void *Data) {
	return ((char*)Data) + 704;
}
void* Monster_1::unknow_field_27(void *Data) {
	return ((char*)Data) + 768;
}
void* Monster_1::snoTreasureClassFirstKill(void *Data) {
	return ((char*)Data) + 896;
}
void* Monster_1::snoTreasureClass(void *Data) {
	return ((char*)Data) + 900;
}
void* Monster_1::snoTreasureClassRare(void *Data) {
	return ((char*)Data) + 904;
}
void* Monster_1::snoTreasureClassChampion(void *Data) {
	return ((char*)Data) + 908;
}
void* Monster_1::snoTreasureClassChampionLight(void *Data) {
	return ((char*)Data) + 912;
}
void* Monster_1::unknow_field_33(void *Data) {
	return ((char*)Data) + 36;
}
void* Monster_1::unknow_field_34(void *Data) {
	return ((char*)Data) + 916;
}
void* Monster_1::unknow_field_35(void *Data) {
	return ((char*)Data) + 920;
}
void* Monster_1::unknow_field_36(void *Data) {
	return ((char*)Data) + 924;
}
void* Monster_1::unknow_field_37(void *Data) {
	return ((char*)Data) + 928;
}
int* Monster_1::unknow_field_38(void *Data) {
	return (int*)((char*)Data) + 932;
}
void* Monster_1::unknow_field_39(void *Data) {
	return ((char*)Data) + 936;
}
int* Monster_1::unknow_field_40(void *Data) {
	return (int*)((char*)Data) + 940;
}
int* Monster_1::unknow_field_41(void *Data) {
	return (int*)((char*)Data) + 944;
}
void* Monster_1::arAIBehaviors(void *Data) {
	return ((char*)Data) + 960;
}
void* Monster_1::unknow_field_43(void *Data) {
	return ((char*)Data) + 984;
}
void* Monster_1::snoSummonActor(void *Data) {
	return ((char*)Data) + 1016;
}
void* Monster_1::unknow_field_45(void *Data) {
	return ((char*)Data) + 1040;
}
void* Monster_1::unknow_field_46(void *Data) {
	return ((char*)Data) + 1056;
}
int* Monster_1::unknow_field_47(void *Data) {
	return (int*)((char*)Data) + 1080;
}
int* Monster_1::unknow_field_48(void *Data) {
	return (int*)((char*)Data) + 1084;
}
int* Monster_1::unknow_field_49(void *Data) {
	return (int*)((char*)Data) + 1088;
}
void* Monster_1::unknow_field_50(void *Data) {
	return ((char*)Data) + 1160;
}
void* Monster_1::serTagMap(void *Data) {
	return ((char*)Data) + 1120;
}
void* Monster_1::hTagMap(void *Data) {
	return ((char*)Data) + 1128;
}
int* Monster_1::unknow_field_53(void *Data) {
	return (int*)((char*)Data) + 1136;
}
void* Monster_1::serSpawnGroups(void *Data) {
	return ((char*)Data) + 1152;
}
void* Monster_1::unknow_field_55(void *Data) {
	return ((char*)Data) + 1144;
}

Monster_1 aMonster_1;
// TraitEntry
//
// { snoPower }
// { unknow_field_1 }
// { unknow_field_2 }


void* TraitEntry::New() {
}

TraitEntry::TraitEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
TraitEntry::~TraitEntry() {
		free(Fields);
}

const char* TraitEntry::Name() {
		return "TraitEntry";
}
	
void* TraitEntry::snoPower(void *Data) {
	return ((char*)Data) + 0;
}
int* TraitEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* TraitEntry::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

TraitEntry aTraitEntry;
// ActiveSkillEntry
//
// { snoPower }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ActiveSkillEntry::New() {
}

ActiveSkillEntry::ActiveSkillEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ActiveSkillEntry::~ActiveSkillEntry() {
		free(Fields);
}

const char* ActiveSkillEntry::Name() {
		return "ActiveSkillEntry";
}
	
void* ActiveSkillEntry::snoPower(void *Data) {
	return ((char*)Data) + 0;
}
int* ActiveSkillEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* ActiveSkillEntry::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ActiveSkillEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

ActiveSkillEntry aActiveSkillEntry;
// SkillKit
//
// { serTraitEntries }
// { unknow_field_1 }
// { serActiveSkillEntries }
// { unknow_field_3 }


void* SkillKit::New() {
}

SkillKit::SkillKit() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 24, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[2].fieldinfo(&aSerializeData, 40, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 32, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
SkillKit::~SkillKit() {
		free(Fields);
}

const char* SkillKit::Name() {
		return "SkillKit";
}
	
void* SkillKit::serTraitEntries(void *Data) {
	return ((char*)Data) + 24;
}
void* SkillKit::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* SkillKit::serActiveSkillEntries(void *Data) {
	return ((char*)Data) + 40;
}
void* SkillKit::unknow_field_3(void *Data) {
	return ((char*)Data) + 32;
}

SkillKit aSkillKit;
// QuestTime
//
// { snoQuest }
// { unknow_field_1 }


void* QuestTime::New() {
}

QuestTime::QuestTime() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
QuestTime::~QuestTime() {
		free(Fields);
}

const char* QuestTime::Name() {
		return "QuestTime";
}
	
void* QuestTime::snoQuest(void *Data) {
	return ((char*)Data) + 0;
}
int* QuestTime::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

QuestTime aQuestTime;
// QuestRange
//
// { unknow_field_0 }
// { unknow_field_1 }


void* QuestRange::New() {
}

QuestRange::QuestRange() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aQuestTime, 12, 0);
		Fields[1].fieldinfo(&aQuestTime, 20, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
QuestRange::~QuestRange() {
		free(Fields);
}

const char* QuestRange::Name() {
		return "QuestRange";
}
	
void* QuestRange::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}
void* QuestRange::unknow_field_1(void *Data) {
	return ((char*)Data) + 20;
}

QuestRange aQuestRange;
// QuestStepObjective
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
// { gbidItemToShow }


void* QuestStepObjective::New() {
}

QuestStepObjective::QuestStepObjective() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_ENUM, 4, 4);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aSNOName, 16, 0);
		Fields[5].fieldinfo(&aSNOName, 24, 0);
		Fields[6].fieldinfo(&aDT_GBID, 32, 32);
		Fields[7].fieldinfo(&aDT_GBID, 36, 32);
		Fields[8].fieldinfo(&aDT_CHARARRAY, 40, 9);
		Fields[9].fieldinfo(&aDT_CHARARRAY, 296, 9);
		Fields[10].fieldinfo(&aDT_INT, 552, 1);
		Fields[11].fieldinfo(&aDT_INT, 556, 32);
		Fields[12].fieldinfo(&aDT_GBID, 560, 32);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
QuestStepObjective::~QuestStepObjective() {
		free(Fields);
}

const char* QuestStepObjective::Name() {
		return "QuestStepObjective";
}
	
int* QuestStepObjective::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* QuestStepObjective::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* QuestStepObjective::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* QuestStepObjective::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* QuestStepObjective::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* QuestStepObjective::unknow_field_5(void *Data) {
	return ((char*)Data) + 24;
}
void* QuestStepObjective::unknow_field_6(void *Data) {
	return ((char*)Data) + 32;
}
void* QuestStepObjective::unknow_field_7(void *Data) {
	return ((char*)Data) + 36;
}
void* QuestStepObjective::unknow_field_8(void *Data) {
	return ((char*)Data) + 40;
}
void* QuestStepObjective::unknow_field_9(void *Data) {
	return ((char*)Data) + 296;
}
int* QuestStepObjective::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 552;
}
int* QuestStepObjective::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 556;
}
void* QuestStepObjective::gbidItemToShow(void *Data) {
	return ((char*)Data) + 560;
}

QuestStepObjective aQuestStepObjective;
// QuestStepObjectiveSet
//
// { unknow_field_0 }
// { serStepObjectives }
// { unknow_field_2 }


void* QuestStepObjectiveSet::New() {
}

QuestStepObjectiveSet::QuestStepObjectiveSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
QuestStepObjectiveSet::~QuestStepObjectiveSet() {
		free(Fields);
}

const char* QuestStepObjectiveSet::Name() {
		return "QuestStepObjectiveSet";
}
	
int* QuestStepObjectiveSet::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* QuestStepObjectiveSet::serStepObjectives(void *Data) {
	return ((char*)Data) + 16;
}
void* QuestStepObjectiveSet::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

QuestStepObjectiveSet aQuestStepObjectiveSet;
// QuestStepBonusObjectiveSet
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { serStepBonusObjectives }
// { unknow_field_6 }


void* QuestStepBonusObjectiveSet::New() {
}

QuestStepBonusObjectiveSet::QuestStepBonusObjectiveSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_INT, 24, 1);
		Fields[4].fieldinfo(&aDT_INT, 28, 1);
		Fields[5].fieldinfo(&aSerializeData, 40, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 32, 0);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
QuestStepBonusObjectiveSet::~QuestStepBonusObjectiveSet() {
		free(Fields);
}

const char* QuestStepBonusObjectiveSet::Name() {
		return "QuestStepBonusObjectiveSet";
}
	
void* QuestStepBonusObjectiveSet::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* QuestStepBonusObjectiveSet::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* QuestStepBonusObjectiveSet::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* QuestStepBonusObjectiveSet::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* QuestStepBonusObjectiveSet::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 28;
}
void* QuestStepBonusObjectiveSet::serStepBonusObjectives(void *Data) {
	return ((char*)Data) + 40;
}
void* QuestStepBonusObjectiveSet::unknow_field_6(void *Data) {
	return ((char*)Data) + 32;
}

QuestStepBonusObjectiveSet aQuestStepBonusObjectiveSet;
// QuestStepFailureCondition
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


void* QuestStepFailureCondition::New() {
}

QuestStepFailureCondition::QuestStepFailureCondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ENUM, 0, 3);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aSNOName, 12, 0);
		Fields[4].fieldinfo(&aSNOName, 20, 0);
		Fields[5].fieldinfo(&aDT_GBID, 28, 32);
		Fields[6].fieldinfo(&aDT_GBID, 32, 32);
		Fields[7].fieldinfo(&aDT_CHARARRAY, 36, 9);
		Fields[8].fieldinfo(&aDT_CHARARRAY, 292, 9);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
QuestStepFailureCondition::~QuestStepFailureCondition() {
		free(Fields);
}

const char* QuestStepFailureCondition::Name() {
		return "QuestStepFailureCondition";
}
	
void* QuestStepFailureCondition::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* QuestStepFailureCondition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* QuestStepFailureCondition::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* QuestStepFailureCondition::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* QuestStepFailureCondition::unknow_field_4(void *Data) {
	return ((char*)Data) + 20;
}
void* QuestStepFailureCondition::unknow_field_5(void *Data) {
	return ((char*)Data) + 28;
}
void* QuestStepFailureCondition::unknow_field_6(void *Data) {
	return ((char*)Data) + 32;
}
void* QuestStepFailureCondition::unknow_field_7(void *Data) {
	return ((char*)Data) + 36;
}
void* QuestStepFailureCondition::unknow_field_8(void *Data) {
	return ((char*)Data) + 292;
}

QuestStepFailureCondition aQuestStepFailureCondition;
// QuestStepFailureConditionSet
//
// { serStepFailureConditions }
// { unknow_field_1 }


void* QuestStepFailureConditionSet::New() {
}

QuestStepFailureConditionSet::QuestStepFailureConditionSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 8, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 0, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
QuestStepFailureConditionSet::~QuestStepFailureConditionSet() {
		free(Fields);
}

const char* QuestStepFailureConditionSet::Name() {
		return "QuestStepFailureConditionSet";
}
	
void* QuestStepFailureConditionSet::serStepFailureConditions(void *Data) {
	return ((char*)Data) + 8;
}
void* QuestStepFailureConditionSet::unknow_field_1(void *Data) {
	return ((char*)Data) + 0;
}

QuestStepFailureConditionSet aQuestStepFailureConditionSet;
// QuestUnassignedStep
//
// { unknow_field_0 }
// { serStepObjectiveSets }
// { unknow_field_2 }
// { serStepFailureConditionSets }
// { unknow_field_4 }


void* QuestUnassignedStep::New() {
}

QuestUnassignedStep::QuestUnassignedStep() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3].fieldinfo(&aSerializeData, 32, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
QuestUnassignedStep::~QuestUnassignedStep() {
		free(Fields);
}

const char* QuestUnassignedStep::Name() {
		return "QuestUnassignedStep";
}
	
int* QuestUnassignedStep::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* QuestUnassignedStep::serStepObjectiveSets(void *Data) {
	return ((char*)Data) + 16;
}
void* QuestUnassignedStep::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* QuestUnassignedStep::serStepFailureConditionSets(void *Data) {
	return ((char*)Data) + 32;
}
void* QuestUnassignedStep::unknow_field_4(void *Data) {
	return ((char*)Data) + 24;
}

QuestUnassignedStep aQuestUnassignedStep;
// QuestStep
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { snoRewardRecipe }
// { snoRewardTreasureClass }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { snoReplayRewardRecipe }
// { snoReplayRewardTreasureClass }
// { unknow_field_11 }
// { unknow_field_12 }
// { serStepObjectiveSets }
// { unknow_field_14 }
// { serStepBonusObjectiveSets }
// { unknow_field_16 }
// { serStepFailureConditionSets }
// { unknow_field_18 }
// { unknow_field_19 }
// { snoPowerGranted }
// { snoWaypointLevelAreas }


void* QuestStep::New() {
}

QuestStep::QuestStep() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 23);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_INT, 64, 32);
		Fields[2].fieldinfo(&aDT_ENUM, 88, 2);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 92, 32);
		Fields[4].fieldinfo(&aDT_SNO, 112, 32);
		Fields[5].fieldinfo(&aDT_FIXEDARRAY, 72, 32);
		Fields[6].fieldinfo(&aDT_INT, 116, 32);
		Fields[7].fieldinfo(&aDT_INT, 120, 32);
		Fields[8].fieldinfo(&aDT_ENUM, 124, 2);
		Fields[9].fieldinfo(&aDT_FIXEDARRAY, 128, 32);
		Fields[10].fieldinfo(&aDT_SNO, 148, 32);
		Fields[11].fieldinfo(&aDT_INT, 152, 32);
		Fields[12].fieldinfo(&aDT_INT, 156, 32);
		Fields[13].fieldinfo(&aSerializeData, 184, 0);
		Fields[14].fieldinfo(&aDT_VARIABLEARRAY, 176, 0);
		Fields[15].fieldinfo(&aSerializeData, 200, 0);
		Fields[16].fieldinfo(&aDT_VARIABLEARRAY, 192, 0);
		Fields[17].fieldinfo(&aSerializeData, 216, 0);
		Fields[18].fieldinfo(&aDT_VARIABLEARRAY, 208, 0);
		Fields[19].fieldinfo(&aDT_INT, 68, 32);
		Fields[20].fieldinfo(&aDT_SNO, 160, 32);
		Fields[21].fieldinfo(&aDT_FIXEDARRAY, 164, 32);
		Fields[23 - 1].fieldinfo(NULL, 0, 0);
	}
QuestStep::~QuestStep() {
		free(Fields);
}

const char* QuestStep::Name() {
		return "QuestStep";
}
	
void* QuestStep::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* QuestStep::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* QuestStep::unknow_field_2(void *Data) {
	return ((char*)Data) + 88;
}
void* QuestStep::snoRewardRecipe(void *Data) {
	return ((char*)Data) + 92;
}
void* QuestStep::snoRewardTreasureClass(void *Data) {
	return ((char*)Data) + 112;
}
void* QuestStep::unknow_field_5(void *Data) {
	return ((char*)Data) + 72;
}
int* QuestStep::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 116;
}
int* QuestStep::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 120;
}
void* QuestStep::unknow_field_8(void *Data) {
	return ((char*)Data) + 124;
}
void* QuestStep::snoReplayRewardRecipe(void *Data) {
	return ((char*)Data) + 128;
}
void* QuestStep::snoReplayRewardTreasureClass(void *Data) {
	return ((char*)Data) + 148;
}
int* QuestStep::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 152;
}
int* QuestStep::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 156;
}
void* QuestStep::serStepObjectiveSets(void *Data) {
	return ((char*)Data) + 184;
}
void* QuestStep::unknow_field_14(void *Data) {
	return ((char*)Data) + 176;
}
void* QuestStep::serStepBonusObjectiveSets(void *Data) {
	return ((char*)Data) + 200;
}
void* QuestStep::unknow_field_16(void *Data) {
	return ((char*)Data) + 192;
}
void* QuestStep::serStepFailureConditionSets(void *Data) {
	return ((char*)Data) + 216;
}
void* QuestStep::unknow_field_18(void *Data) {
	return ((char*)Data) + 208;
}
int* QuestStep::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 68;
}
void* QuestStep::snoPowerGranted(void *Data) {
	return ((char*)Data) + 160;
}
void* QuestStep::snoWaypointLevelAreas(void *Data) {
	return ((char*)Data) + 164;
}

QuestStep aQuestStep;
// QuestCompletionStep
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* QuestCompletionStep::New() {
}

QuestCompletionStep::QuestCompletionStep() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_INT, 64, 32);
		Fields[2].fieldinfo(&aDT_INT, 68, 1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
QuestCompletionStep::~QuestCompletionStep() {
		free(Fields);
}

const char* QuestCompletionStep::Name() {
		return "QuestCompletionStep";
}
	
void* QuestCompletionStep::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* QuestCompletionStep::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 64;
}
int* QuestCompletionStep::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 68;
}

QuestCompletionStep aQuestCompletionStep;
// QuestLevelRange
//
// { unknow_field_0 }
// { unknow_field_1 }


void* QuestLevelRange::New() {
}

QuestLevelRange::QuestLevelRange() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
QuestLevelRange::~QuestLevelRange() {
		free(Fields);
}

const char* QuestLevelRange::Name() {
		return "QuestLevelRange";
}
	
int* QuestLevelRange::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* QuestLevelRange::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

QuestLevelRange aQuestLevelRange;
// Quest
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { serQuestSteps }
// { unknow_field_6 }
// { serQuestCompletionSteps }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }


void* Quest::New() {
}

Quest::Quest() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 17);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ENUM, 12, 2);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_INT, 24, 32);
		Fields[4].fieldinfo(&aQuestUnassignedStep, 40, 0);
		Fields[5].fieldinfo(&aSerializeData, 88, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 80, 0);
		Fields[7].fieldinfo(&aSerializeData, 104, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 96, 0);
		Fields[9].fieldinfo(&aDT_INT, 28, 32);
		Fields[10].fieldinfo(&aDT_INT, 32, 32);
		Fields[11].fieldinfo(&aDT_INT, 36, 32);
		Fields[12].fieldinfo(&aQuestLevelRange, 112, 0);
		Fields[13].fieldinfo(&aQuestLevelRange, 120, 0);
		Fields[14].fieldinfo(&aQuestLevelRange, 128, 0);
		Fields[15].fieldinfo(&aQuestLevelRange, 136, 0);
		Fields[17 - 1].fieldinfo(NULL, 0, 0);
	}
Quest::~Quest() {
		free(Fields);
}

const char* Quest::Name() {
		return "Quest";
}
	
void* Quest::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}
int* Quest::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* Quest::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* Quest::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 24;
}
void* Quest::unknow_field_4(void *Data) {
	return ((char*)Data) + 40;
}
void* Quest::serQuestSteps(void *Data) {
	return ((char*)Data) + 88;
}
void* Quest::unknow_field_6(void *Data) {
	return ((char*)Data) + 80;
}
void* Quest::serQuestCompletionSteps(void *Data) {
	return ((char*)Data) + 104;
}
void* Quest::unknow_field_8(void *Data) {
	return ((char*)Data) + 96;
}
int* Quest::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* Quest::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 32;
}
int* Quest::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 36;
}
void* Quest::unknow_field_12(void *Data) {
	return ((char*)Data) + 112;
}
void* Quest::unknow_field_13(void *Data) {
	return ((char*)Data) + 120;
}
void* Quest::unknow_field_14(void *Data) {
	return ((char*)Data) + 128;
}
void* Quest::unknow_field_15(void *Data) {
	return ((char*)Data) + 136;
}

Quest aQuest;
// LevelAreaSpawnItem
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* LevelAreaSpawnItem::New() {
}

LevelAreaSpawnItem::LevelAreaSpawnItem() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSNOName, 0, 0);
		Fields[1].fieldinfo(&aDT_ENUM, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 32);
		Fields[5].fieldinfo(&aDT_INT, 24, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
LevelAreaSpawnItem::~LevelAreaSpawnItem() {
		free(Fields);
}

const char* LevelAreaSpawnItem::Name() {
		return "LevelAreaSpawnItem";
}
	
void* LevelAreaSpawnItem::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* LevelAreaSpawnItem::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* LevelAreaSpawnItem::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* LevelAreaSpawnItem::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* LevelAreaSpawnItem::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* LevelAreaSpawnItem::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 24;
}

LevelAreaSpawnItem aLevelAreaSpawnItem;
// LevelAreaSpawnGroup
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { serSpawnItems }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }


void* LevelAreaSpawnGroup::New() {
}

LevelAreaSpawnGroup::LevelAreaSpawnGroup() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ENUM, 0, 1);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aSerializeData, 32, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[7].fieldinfo(&aDT_INT, 40, 32);
		Fields[8].fieldinfo(&aDT_INT, 44, 32);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
LevelAreaSpawnGroup::~LevelAreaSpawnGroup() {
		free(Fields);
}

const char* LevelAreaSpawnGroup::Name() {
		return "LevelAreaSpawnGroup";
}
	
void* LevelAreaSpawnGroup::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* LevelAreaSpawnGroup::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* LevelAreaSpawnGroup::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* LevelAreaSpawnGroup::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* LevelAreaSpawnGroup::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* LevelAreaSpawnGroup::serSpawnItems(void *Data) {
	return ((char*)Data) + 32;
}
void* LevelAreaSpawnGroup::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
int* LevelAreaSpawnGroup::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 40;
}
int* LevelAreaSpawnGroup::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 44;
}

LevelAreaSpawnGroup aLevelAreaSpawnGroup;
// LevelAreaSpawnPopulation
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serSpawnGroups }
// { unknow_field_5 }


void* LevelAreaSpawnPopulation::New() {
}

LevelAreaSpawnPopulation::LevelAreaSpawnPopulation() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_INT, 64, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 68, 32);
		Fields[3].fieldinfo(&aDT_INT, 84, 32);
		Fields[4].fieldinfo(&aSerializeData, 96, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 88, 0);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
LevelAreaSpawnPopulation::~LevelAreaSpawnPopulation() {
		free(Fields);
}

const char* LevelAreaSpawnPopulation::Name() {
		return "LevelAreaSpawnPopulation";
}
	
void* LevelAreaSpawnPopulation::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* LevelAreaSpawnPopulation::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* LevelAreaSpawnPopulation::unknow_field_2(void *Data) {
	return ((char*)Data) + 68;
}
int* LevelAreaSpawnPopulation::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 84;
}
void* LevelAreaSpawnPopulation::serSpawnGroups(void *Data) {
	return ((char*)Data) + 96;
}
void* LevelAreaSpawnPopulation::unknow_field_5(void *Data) {
	return ((char*)Data) + 88;
}

LevelAreaSpawnPopulation aLevelAreaSpawnPopulation;
// LevelArea
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoLevelAreaOverrideForGizmoLocs }
// { unknow_field_3 }
// { unknow_field_4 }
// { serSpawnPopulations }
// { unknow_field_6 }


void* LevelArea::New() {
}

LevelArea::LevelArea() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_SNO, 20, 32);
		Fields[3].fieldinfo(&aGizmoLocSet, 24, 0);
		Fields[4].fieldinfo(&aDT_INT, 9176, 32);
		Fields[5].fieldinfo(&aSerializeData, 9192, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 9184, 0);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
LevelArea::~LevelArea() {
		free(Fields);
}

const char* LevelArea::Name() {
		return "LevelArea";
}
	
int* LevelArea::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* LevelArea::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* LevelArea::snoLevelAreaOverrideForGizmoLocs(void *Data) {
	return ((char*)Data) + 20;
}
void* LevelArea::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
int* LevelArea::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 9176;
}
void* LevelArea::serSpawnPopulations(void *Data) {
	return ((char*)Data) + 9192;
}
void* LevelArea::unknow_field_6(void *Data) {
	return ((char*)Data) + 9184;
}

LevelArea aLevelArea;
// SceneGroupItem
//
// { snoScene }
// { unknow_field_1 }
// { gbidLabel }


void* SceneGroupItem::New() {
}

SceneGroupItem::SceneGroupItem() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_GBID, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SceneGroupItem::~SceneGroupItem() {
		free(Fields);
}

const char* SceneGroupItem::Name() {
		return "SceneGroupItem";
}
	
void* SceneGroupItem::snoScene(void *Data) {
	return ((char*)Data) + 0;
}
int* SceneGroupItem::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* SceneGroupItem::gbidLabel(void *Data) {
	return ((char*)Data) + 8;
}

SceneGroupItem aSceneGroupItem;
// SceneGroup
//
// { unknow_field_0 }
// { serScenes }
// { unknow_field_2 }
// { unknow_field_3 }


void* SceneGroup::New() {
}

SceneGroup::SceneGroup() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[3].fieldinfo(&aDT_INT, 32, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
SceneGroup::~SceneGroup() {
		free(Fields);
}

const char* SceneGroup::Name() {
		return "SceneGroup";
}
	
int* SceneGroup::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* SceneGroup::serScenes(void *Data) {
	return ((char*)Data) + 16;
}
void* SceneGroup::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}
int* SceneGroup::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 32;
}

SceneGroup aSceneGroup;
// FlagLookup
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* FlagLookup::New() {
}

FlagLookup::FlagLookup() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 8);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 132, 9);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
FlagLookup::~FlagLookup() {
		free(Fields);
}

const char* FlagLookup::Name() {
		return "FlagLookup";
}
	
int* FlagLookup::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* FlagLookup::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* FlagLookup::unknow_field_2(void *Data) {
	return ((char*)Data) + 132;
}

FlagLookup aFlagLookup;
// FlagSet
//
// { serFlagLookups }
// { unknow_field_1 }


void* FlagSet::New() {
}

FlagSet::FlagSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 24, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
FlagSet::~FlagSet() {
		free(Fields);
}

const char* FlagSet::Name() {
		return "FlagSet";
}
	
void* FlagSet::serFlagLookups(void *Data) {
	return ((char*)Data) + 24;
}
void* FlagSet::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}

FlagSet aFlagSet;
// ConversationListEntry
//
// { snoConv }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { gbidItem }
// { unknow_field_5 }
// { unknow_field_6 }
// { snoQuestCurrent }
// { unknow_field_8 }
// { snoQuestAssigned }
// { snoQuestActive }
// { snoQuestComplete }
// { snoQuestRange }
// { snoLevelArea }


void* ConversationListEntry::New() {
}

ConversationListEntry::ConversationListEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 15);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_GBID, 16, 32);
		Fields[5].fieldinfo(&aDT_CHARARRAY, 20, 8);
		Fields[6].fieldinfo(&aDT_CHARARRAY, 148, 8);
		Fields[7].fieldinfo(&aDT_SNO, 276, 32);
		Fields[8].fieldinfo(&aDT_INT, 280, 32);
		Fields[9].fieldinfo(&aDT_SNO, 284, 32);
		Fields[10].fieldinfo(&aDT_SNO, 288, 32);
		Fields[11].fieldinfo(&aDT_SNO, 292, 32);
		Fields[12].fieldinfo(&aDT_SNO, 296, 32);
		Fields[13].fieldinfo(&aDT_SNO, 300, 32);
		Fields[15 - 1].fieldinfo(NULL, 0, 0);
	}
ConversationListEntry::~ConversationListEntry() {
		free(Fields);
}

const char* ConversationListEntry::Name() {
		return "ConversationListEntry";
}
	
void* ConversationListEntry::snoConv(void *Data) {
	return ((char*)Data) + 0;
}
int* ConversationListEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* ConversationListEntry::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ConversationListEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* ConversationListEntry::gbidItem(void *Data) {
	return ((char*)Data) + 16;
}
void* ConversationListEntry::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* ConversationListEntry::unknow_field_6(void *Data) {
	return ((char*)Data) + 148;
}
void* ConversationListEntry::snoQuestCurrent(void *Data) {
	return ((char*)Data) + 276;
}
int* ConversationListEntry::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 280;
}
void* ConversationListEntry::snoQuestAssigned(void *Data) {
	return ((char*)Data) + 284;
}
void* ConversationListEntry::snoQuestActive(void *Data) {
	return ((char*)Data) + 288;
}
void* ConversationListEntry::snoQuestComplete(void *Data) {
	return ((char*)Data) + 292;
}
void* ConversationListEntry::snoQuestRange(void *Data) {
	return ((char*)Data) + 296;
}
void* ConversationListEntry::snoLevelArea(void *Data) {
	return ((char*)Data) + 300;
}

ConversationListEntry aConversationListEntry;
// ConversationList
//
// { serConvList }
// { unknow_field_1 }


void* ConversationList::New() {
}

ConversationList::ConversationList() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 24, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ConversationList::~ConversationList() {
		free(Fields);
}

const char* ConversationList::Name() {
		return "ConversationList";
}
	
void* ConversationList::serConvList(void *Data) {
	return ((char*)Data) + 24;
}
void* ConversationList::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}

ConversationList aConversationList;
// ConvLocaleDisplayTimes
//
// { unknow_field_0 }


void* ConvLocaleDisplayTimes::New() {
}

ConvLocaleDisplayTimes::ConvLocaleDisplayTimes() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 32);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
ConvLocaleDisplayTimes::~ConvLocaleDisplayTimes() {
		free(Fields);
}

const char* ConvLocaleDisplayTimes::Name() {
		return "ConvLocaleDisplayTimes";
}
	
void* ConvLocaleDisplayTimes::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

ConvLocaleDisplayTimes aConvLocaleDisplayTimes;
// ConversationTreeNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { serComment }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { serTrueNodes }
// { unknow_field_13 }
// { serFalseNodes }
// { unknow_field_15 }
// { serChildNodes }
// { unknow_field_17 }


void* ConversationTreeNode::New() {
}

ConversationTreeNode::ConversationTreeNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 19);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 20, 32);
		Fields[4].fieldinfo(&aDT_INT, 24, 32);
		Fields[5].fieldinfo(&aDT_INT, 28, 32);
		Fields[6].fieldinfo(&aDT_FIXEDARRAY, 32, 0);
		Fields[7].fieldinfo(&aSerializeData, 760, 0);
		Fields[8].fieldinfo(&aDT_CSTRING, 752, 0);
		Fields[9].fieldinfo(&aDT_ENUM, 12, 4);
		Fields[10].fieldinfo(&aDT_ENUM, 16, 4);
		Fields[11].fieldinfo(&aDT_INT, 768, 32);
		Fields[12].fieldinfo(&aSerializeData, 784, 0);
		Fields[13].fieldinfo(&aDT_VARIABLEARRAY, 776, 0);
		Fields[14].fieldinfo(&aSerializeData, 800, 0);
		Fields[15].fieldinfo(&aDT_VARIABLEARRAY, 792, 0);
		Fields[16].fieldinfo(&aSerializeData, 816, 0);
		Fields[17].fieldinfo(&aDT_VARIABLEARRAY, 808, 0);
		Fields[19 - 1].fieldinfo(NULL, 0, 0);
	}
ConversationTreeNode::~ConversationTreeNode() {
		free(Fields);
}

const char* ConversationTreeNode::Name() {
		return "ConversationTreeNode";
}
	
int* ConversationTreeNode::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* ConversationTreeNode::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* ConversationTreeNode::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ConversationTreeNode::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* ConversationTreeNode::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* ConversationTreeNode::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 28;
}
void* ConversationTreeNode::unknow_field_6(void *Data) {
	return ((char*)Data) + 32;
}
void* ConversationTreeNode::serComment(void *Data) {
	return ((char*)Data) + 760;
}
void* ConversationTreeNode::unknow_field_8(void *Data) {
	return ((char*)Data) + 752;
}
void* ConversationTreeNode::unknow_field_9(void *Data) {
	return ((char*)Data) + 12;
}
void* ConversationTreeNode::unknow_field_10(void *Data) {
	return ((char*)Data) + 16;
}
int* ConversationTreeNode::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 768;
}
void* ConversationTreeNode::serTrueNodes(void *Data) {
	return ((char*)Data) + 784;
}
void* ConversationTreeNode::unknow_field_13(void *Data) {
	return ((char*)Data) + 776;
}
void* ConversationTreeNode::serFalseNodes(void *Data) {
	return ((char*)Data) + 800;
}
void* ConversationTreeNode::unknow_field_15(void *Data) {
	return ((char*)Data) + 792;
}
void* ConversationTreeNode::serChildNodes(void *Data) {
	return ((char*)Data) + 816;
}
void* ConversationTreeNode::unknow_field_17(void *Data) {
	return ((char*)Data) + 808;
}

ConversationTreeNode aConversationTreeNode;
// Conversation
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { snoQuest }
// { unknow_field_4 }
// { unknow_field_5 }
// { snoConvPiggyback }
// { snoConvUnlock }
// { unknow_field_8 }
// { unknow_field_9 }
// { snoPrimaryNpc }
// { snoAltNpc1 }
// { snoAltNpc2 }
// { snoAltNpc3 }
// { snoAltNpc4 }
// { unknow_field_15 }
// { serRootTreeNodes }
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { serCompiledScript }
// { unknow_field_21 }
// { snoBossEncounter }


void* Conversation::New() {
}

Conversation::Conversation() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 24);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ENUM, 12, 4);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_SNO, 24, 32);
		Fields[4].fieldinfo(&aDT_INT, 28, 32);
		Fields[5].fieldinfo(&aDT_INT, 32, 32);
		Fields[6].fieldinfo(&aDT_SNO, 36, 32);
		Fields[7].fieldinfo(&aDT_SNO, 40, 32);
		Fields[8].fieldinfo(&aDT_INT, 44, 32);
		Fields[9].fieldinfo(&aDT_CHARARRAY, 48, 8);
		Fields[10].fieldinfo(&aDT_SNO, 176, 32);
		Fields[11].fieldinfo(&aDT_SNO, 180, 32);
		Fields[12].fieldinfo(&aDT_SNO, 184, 32);
		Fields[13].fieldinfo(&aDT_SNO, 188, 32);
		Fields[14].fieldinfo(&aDT_SNO, 192, 32);
		Fields[15].fieldinfo(&aDT_INT, 196, 32);
		Fields[16].fieldinfo(&aSerializeData, 208, 0);
		Fields[17].fieldinfo(&aDT_VARIABLEARRAY, 200, 0);
		Fields[18].fieldinfo(&aDT_CHARARRAY, 216, 9);
		Fields[19].fieldinfo(&aDT_INT, 472, 32);
		Fields[20].fieldinfo(&aSerializeData, 488, 0);
		Fields[21].fieldinfo(&aDT_VARIABLEARRAY, 480, 0);
		Fields[22].fieldinfo(&aDT_SNO, 536, 32);
		Fields[24 - 1].fieldinfo(NULL, 0, 0);
	}
Conversation::~Conversation() {
		free(Fields);
}

const char* Conversation::Name() {
		return "Conversation";
}
	
void* Conversation::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}
int* Conversation::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* Conversation::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* Conversation::snoQuest(void *Data) {
	return ((char*)Data) + 24;
}
int* Conversation::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* Conversation::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* Conversation::snoConvPiggyback(void *Data) {
	return ((char*)Data) + 36;
}
void* Conversation::snoConvUnlock(void *Data) {
	return ((char*)Data) + 40;
}
int* Conversation::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 44;
}
void* Conversation::unknow_field_9(void *Data) {
	return ((char*)Data) + 48;
}
void* Conversation::snoPrimaryNpc(void *Data) {
	return ((char*)Data) + 176;
}
void* Conversation::snoAltNpc1(void *Data) {
	return ((char*)Data) + 180;
}
void* Conversation::snoAltNpc2(void *Data) {
	return ((char*)Data) + 184;
}
void* Conversation::snoAltNpc3(void *Data) {
	return ((char*)Data) + 188;
}
void* Conversation::snoAltNpc4(void *Data) {
	return ((char*)Data) + 192;
}
int* Conversation::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 196;
}
void* Conversation::serRootTreeNodes(void *Data) {
	return ((char*)Data) + 208;
}
void* Conversation::unknow_field_17(void *Data) {
	return ((char*)Data) + 200;
}
void* Conversation::unknow_field_18(void *Data) {
	return ((char*)Data) + 216;
}
int* Conversation::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 472;
}
void* Conversation::serCompiledScript(void *Data) {
	return ((char*)Data) + 488;
}
void* Conversation::unknow_field_21(void *Data) {
	return ((char*)Data) + 480;
}
void* Conversation::snoBossEncounter(void *Data) {
	return ((char*)Data) + 536;
}

Conversation aConversation;
// Adventure
//
// { snoSymbolActor }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { snoMarkerSet }


void* Adventure::New() {
}

Adventure::Adventure() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 12, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[2].fieldinfo(&aDT_ANGLE, 20, 32);
		Fields[3].fieldinfo(&aDT_ANGLE, 24, 32);
		Fields[4].fieldinfo(&aDT_ANGLE, 28, 32);
		Fields[5].fieldinfo(&aDT_SNO, 32, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
Adventure::~Adventure() {
		free(Fields);
}

const char* Adventure::Name() {
		return "Adventure";
}
	
void* Adventure::snoSymbolActor(void *Data) {
	return ((char*)Data) + 12;
}
void* Adventure::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* Adventure::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Adventure::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Adventure::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Adventure::snoMarkerSet(void *Data) {
	return ((char*)Data) + 32;
}

Adventure aAdventure;
// EncounterSpawnOption
//
// { snoSpawn }
// { unknow_field_1 }
// { unknow_field_2 }


void* EncounterSpawnOption::New() {
}

EncounterSpawnOption::EncounterSpawnOption() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 5);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
EncounterSpawnOption::~EncounterSpawnOption() {
		free(Fields);
}

const char* EncounterSpawnOption::Name() {
		return "EncounterSpawnOption";
}
	
void* EncounterSpawnOption::snoSpawn(void *Data) {
	return ((char*)Data) + 0;
}
int* EncounterSpawnOption::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* EncounterSpawnOption::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

EncounterSpawnOption aEncounterSpawnOption;
// Encounter
//
// { snoSymbol }
// { serSpawnOptions }
// { unknow_field_2 }


void* Encounter::New() {
}

Encounter::Encounter() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 12, 32);
		Fields[1].fieldinfo(&aSerializeData, 24, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
Encounter::~Encounter() {
		free(Fields);
}

const char* Encounter::Name() {
		return "Encounter";
}
	
void* Encounter::snoSymbol(void *Data) {
	return ((char*)Data) + 12;
}
void* Encounter::serSpawnOptions(void *Data) {
	return ((char*)Data) + 24;
}
void* Encounter::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

Encounter aEncounter;
// MarkerSet
//
// { serMarkers }
// { unknow_field_1 }
// { serNoSpawns }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { nLabel }
// { nSpecialIndexCount }
// { serSpecialIndexList }
// { unknow_field_10 }


void* MarkerSet::New() {
}

MarkerSet::MarkerSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 12, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[2].fieldinfo(&aSerializeData, 80, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 88, 0);
		Fields[4].fieldinfo(&aDT_INT, 168, 32);
		Fields[5].fieldinfo(&aAABB, 144, 0);
		Fields[6].fieldinfo(&aDT_CHARARRAY, 172, 9);
		Fields[7].fieldinfo(&aDT_GBID, 428, 32);
		Fields[8].fieldinfo(&aDT_INT, 432, 32);
		Fields[9].fieldinfo(&aSerializeData, 436, 0);
		Fields[10].fieldinfo(&aDT_VARIABLEARRAY, 448, 0);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
MarkerSet::~MarkerSet() {
		free(Fields);
}

const char* MarkerSet::Name() {
		return "MarkerSet";
}
	
void* MarkerSet::serMarkers(void *Data) {
	return ((char*)Data) + 12;
}
void* MarkerSet::unknow_field_1(void *Data) {
	return ((char*)Data) + 24;
}
void* MarkerSet::serNoSpawns(void *Data) {
	return ((char*)Data) + 80;
}
void* MarkerSet::unknow_field_3(void *Data) {
	return ((char*)Data) + 88;
}
int* MarkerSet::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 168;
}
void* MarkerSet::unknow_field_5(void *Data) {
	return ((char*)Data) + 144;
}
void* MarkerSet::unknow_field_6(void *Data) {
	return ((char*)Data) + 172;
}
void* MarkerSet::nLabel(void *Data) {
	return ((char*)Data) + 428;
}
int* MarkerSet::nSpecialIndexCount(void *Data) {
	return (int*)((char*)Data) + 432;
}
void* MarkerSet::serSpecialIndexList(void *Data) {
	return ((char*)Data) + 436;
}
void* MarkerSet::unknow_field_10(void *Data) {
	return ((char*)Data) + 448;
}

MarkerSet aMarkerSet;
// ScriptFormulaDetails
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ScriptFormulaDetails::New() {
}

ScriptFormulaDetails::ScriptFormulaDetails() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 9);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 256, 10);
		Fields[2].fieldinfo(&aDT_INT, 768, 32);
		Fields[3].fieldinfo(&aDT_INT, 772, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ScriptFormulaDetails::~ScriptFormulaDetails() {
		free(Fields);
}

const char* ScriptFormulaDetails::Name() {
		return "ScriptFormulaDetails";
}
	
void* ScriptFormulaDetails::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ScriptFormulaDetails::unknow_field_1(void *Data) {
	return ((char*)Data) + 256;
}
int* ScriptFormulaDetails::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 768;
}
int* ScriptFormulaDetails::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 772;
}

ScriptFormulaDetails aScriptFormulaDetails;
// Power
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { serScriptFormulaDetails }
// { unknow_field_7 }
// { unknow_field_8 }
// { serCompiledScript }
// { unknow_field_10 }
// { snoQuestMetaData }


void* Power::New() {
}

Power::Power() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 13);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 12, 7);
		Fields[1].fieldinfo(&aPowerDef, 80, 0);
		Fields[2].fieldinfo(&aDT_INT, 424, 1);
		Fields[3].fieldinfo(&aDT_INT, 428, 1);
		Fields[4].fieldinfo(&aDT_CHARARRAY, 432, 9);
		Fields[5].fieldinfo(&aDT_INT, 688, 32);
		Fields[6].fieldinfo(&aSerializeData, 692, 0);
		Fields[7].fieldinfo(&aDT_VARIABLEARRAY, 704, 0);
		Fields[8].fieldinfo(&aDT_INT, 712, 32);
		Fields[9].fieldinfo(&aSerializeData, 728, 0);
		Fields[10].fieldinfo(&aDT_VARIABLEARRAY, 720, 0);
		Fields[11].fieldinfo(&aDT_SNO, 736, 32);
		Fields[13 - 1].fieldinfo(NULL, 0, 0);
	}
Power::~Power() {
		free(Fields);
}

const char* Power::Name() {
		return "Power";
}
	
void* Power::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}
void* Power::unknow_field_1(void *Data) {
	return ((char*)Data) + 80;
}
int* Power::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 424;
}
int* Power::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 428;
}
void* Power::unknow_field_4(void *Data) {
	return ((char*)Data) + 432;
}
int* Power::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 688;
}
void* Power::serScriptFormulaDetails(void *Data) {
	return ((char*)Data) + 692;
}
void* Power::unknow_field_7(void *Data) {
	return ((char*)Data) + 704;
}
int* Power::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 712;
}
void* Power::serCompiledScript(void *Data) {
	return ((char*)Data) + 728;
}
void* Power::unknow_field_10(void *Data) {
	return ((char*)Data) + 720;
}
void* Power::snoQuestMetaData(void *Data) {
	return ((char*)Data) + 736;
}

Power aPower;
// StringTableEntry
//
// { serLabel }
// { unknow_field_1 }
// { serText }
// { unknow_field_3 }
// { serComment }
// { unknow_field_5 }
// { serSpeaker }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }


void* StringTableEntry::New() {
}

StringTableEntry::StringTableEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 8, 0);
		Fields[1].fieldinfo(&aDT_CSTRING, 0, 0);
		Fields[2].fieldinfo(&aSerializeData, 24, 0);
		Fields[3].fieldinfo(&aDT_CSTRING, 16, 0);
		Fields[4].fieldinfo(&aSerializeData, 40, 0);
		Fields[5].fieldinfo(&aDT_CSTRING, 32, 0);
		Fields[6].fieldinfo(&aSerializeData, 56, 0);
		Fields[7].fieldinfo(&aDT_CSTRING, 48, 0);
		Fields[8].fieldinfo(&aDT_INT, 64, 32);
		Fields[9].fieldinfo(&aDT_INT, 68, 32);
		Fields[10].fieldinfo(&aDT_INT, 72, 32);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
StringTableEntry::~StringTableEntry() {
		free(Fields);
}

const char* StringTableEntry::Name() {
		return "StringTableEntry";
}
	
void* StringTableEntry::serLabel(void *Data) {
	return ((char*)Data) + 8;
}
void* StringTableEntry::unknow_field_1(void *Data) {
	return ((char*)Data) + 0;
}
void* StringTableEntry::serText(void *Data) {
	return ((char*)Data) + 24;
}
void* StringTableEntry::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
void* StringTableEntry::serComment(void *Data) {
	return ((char*)Data) + 40;
}
void* StringTableEntry::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* StringTableEntry::serSpeaker(void *Data) {
	return ((char*)Data) + 56;
}
void* StringTableEntry::unknow_field_7(void *Data) {
	return ((char*)Data) + 48;
}
int* StringTableEntry::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 64;
}
int* StringTableEntry::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 68;
}
int* StringTableEntry::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 72;
}

StringTableEntry aStringTableEntry;
// StringList
//
// { serStrings }
// { unknow_field_1 }


void* StringList::New() {
}

StringList::StringList() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 24, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
StringList::~StringList() {
		free(Fields);
}

const char* StringList::Name() {
		return "StringList";
}
	
void* StringList::serStrings(void *Data) {
	return ((char*)Data) + 24;
}
void* StringList::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}

StringList aStringList;
// TranslationKey
//
// { unknow_field_0 }
// { unknow_field_1 }


void* TranslationKey::New() {
}

TranslationKey::TranslationKey() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aVector3D, 4, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
TranslationKey::~TranslationKey() {
		free(Fields);
}

const char* TranslationKey::Name() {
		return "TranslationKey";
}
	
int* TranslationKey::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* TranslationKey::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

TranslationKey aTranslationKey;
// RotationKey
//
// { unknow_field_0 }
// { unknow_field_1 }


void* RotationKey::New() {
}

RotationKey::RotationKey() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aQuaternion16, 4, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
RotationKey::~RotationKey() {
		free(Fields);
}

const char* RotationKey::Name() {
		return "RotationKey";
}
	
int* RotationKey::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* RotationKey::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

RotationKey aRotationKey;
// ScaleKey
//
// { unknow_field_0 }
// { unknow_field_1 }


void* ScaleKey::New() {
}

ScaleKey::ScaleKey() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ScaleKey::~ScaleKey() {
		free(Fields);
}

const char* ScaleKey::Name() {
		return "ScaleKey";
}
	
int* ScaleKey::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* ScaleKey::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

ScaleKey aScaleKey;
// TranslationCurve
//
// { unknow_field_0 }
// { serKeys }
// { unknow_field_2 }


void* TranslationCurve::New() {
}

TranslationCurve::TranslationCurve() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 4, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
TranslationCurve::~TranslationCurve() {
		free(Fields);
}

const char* TranslationCurve::Name() {
		return "TranslationCurve";
}
	
int* TranslationCurve::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* TranslationCurve::serKeys(void *Data) {
	return ((char*)Data) + 4;
}
void* TranslationCurve::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

TranslationCurve aTranslationCurve;
// RotationCurve
//
// { unknow_field_0 }
// { serKeys }
// { unknow_field_2 }


void* RotationCurve::New() {
}

RotationCurve::RotationCurve() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 4, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
RotationCurve::~RotationCurve() {
		free(Fields);
}

const char* RotationCurve::Name() {
		return "RotationCurve";
}
	
int* RotationCurve::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* RotationCurve::serKeys(void *Data) {
	return ((char*)Data) + 4;
}
void* RotationCurve::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

RotationCurve aRotationCurve;
// ScaleCurve
//
// { unknow_field_0 }
// { serKeys }
// { unknow_field_2 }


void* ScaleCurve::New() {
}

ScaleCurve::ScaleCurve() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 4, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ScaleCurve::~ScaleCurve() {
		free(Fields);
}

const char* ScaleCurve::Name() {
		return "ScaleCurve";
}
	
int* ScaleCurve::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* ScaleCurve::serKeys(void *Data) {
	return ((char*)Data) + 4;
}
void* ScaleCurve::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

ScaleCurve aScaleCurve;
// KeyframedAttachment
//
// { unknow_field_0 }
// { unknow_field_1 }


void* KeyframedAttachment::New() {
}

KeyframedAttachment::KeyframedAttachment() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aTriggerEvent, 4, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
KeyframedAttachment::~KeyframedAttachment() {
		free(Fields);
}

const char* KeyframedAttachment::Name() {
		return "KeyframedAttachment";
}
	
void* KeyframedAttachment::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* KeyframedAttachment::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

KeyframedAttachment aKeyframedAttachment;
// BoneName
//
// { unknow_field_0 }


void* BoneName::New() {
}

BoneName::BoneName() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
BoneName::~BoneName() {
		free(Fields);
}

const char* BoneName::Name() {
		return "BoneName";
}
	
void* BoneName::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

BoneName aBoneName;
// AnimPermutation
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
// { serBoneNames }
// { unknow_field_16 }
// { unknow_field_17 }
// { serTranslationCurves }
// { unknow_field_19 }
// { serRotationCurves }
// { unknow_field_21 }
// { serScaleCurves }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { serKeyedAttachments }
// { unknow_field_35 }
// { serKeyframePosList }
// { unknow_field_37 }
// { serNonlinearOffset }
// { unknow_field_39 }
// { unknow_field_40 }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }


void* AnimPermutation::New() {
}

AnimPermutation::AnimPermutation() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 45);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 7);
		Fields[2].fieldinfo(&aDT_VELOCITY, 72, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 80, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 84, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 88, 32);
		Fields[7].fieldinfo(&aDT_TIME, 92, 32);
		Fields[8].fieldinfo(&aDT_TIME, 96, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 104, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 108, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 112, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 116, 32);
		Fields[13].fieldinfo(&aDT_INT, 100, 32);
		Fields[14].fieldinfo(&aDT_INT, 120, 32);
		Fields[15].fieldinfo(&aSerializeData, 124, 0);
		Fields[16].fieldinfo(&aDT_VARIABLEARRAY, 136, 0);
		Fields[17].fieldinfo(&aDT_INT, 144, 32);
		Fields[18].fieldinfo(&aSerializeData, 148, 0);
		Fields[19].fieldinfo(&aDT_VARIABLEARRAY, 160, 0);
		Fields[20].fieldinfo(&aSerializeData, 168, 0);
		Fields[21].fieldinfo(&aDT_VARIABLEARRAY, 176, 0);
		Fields[22].fieldinfo(&aSerializeData, 184, 0);
		Fields[23].fieldinfo(&aDT_VARIABLEARRAY, 192, 0);
		Fields[24].fieldinfo(&aDT_FLOAT, 200, 32);
		Fields[25].fieldinfo(&aDT_FLOAT, 204, 32);
		Fields[26].fieldinfo(&aDT_FLOAT, 208, 32);
		Fields[27].fieldinfo(&aDT_FLOAT, 212, 32);
		Fields[28].fieldinfo(&aVector3D, 216, 0);
		Fields[29].fieldinfo(&aVector3D, 228, 0);
		Fields[30].fieldinfo(&aVector3D, 240, 0);
		Fields[31].fieldinfo(&aVector3D, 252, 0);
		Fields[32].fieldinfo(&aDT_FLOAT, 264, 32);
		Fields[33].fieldinfo(&aDT_INT, 276, 32);
		Fields[34].fieldinfo(&aSerializeData, 268, 0);
		Fields[35].fieldinfo(&aDT_VARIABLEARRAY, 280, 0);
		Fields[36].fieldinfo(&aSerializeData, 288, 0);
		Fields[37].fieldinfo(&aDT_VARIABLEARRAY, 296, 0);
		Fields[38].fieldinfo(&aSerializeData, 304, 0);
		Fields[39].fieldinfo(&aDT_VARIABLEARRAY, 312, 0);
		Fields[40].fieldinfo(&aVelocityVector3D, 320, 0);
		Fields[41].fieldinfo(&aHardpointLink, 332, 0);
		Fields[42].fieldinfo(&aDT_CHARARRAY, 400, 9);
		Fields[43].fieldinfo(&aDT_CHARARRAY, 656, 9);
		Fields[45 - 1].fieldinfo(NULL, 0, 0);
	}
AnimPermutation::~AnimPermutation() {
		free(Fields);
}

const char* AnimPermutation::Name() {
		return "AnimPermutation";
}
	
int* AnimPermutation::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* AnimPermutation::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* AnimPermutation::unknow_field_2(void *Data) {
	return ((char*)Data) + 72;
}
void* AnimPermutation::unknow_field_3(void *Data) {
	return ((char*)Data) + 76;
}
void* AnimPermutation::unknow_field_4(void *Data) {
	return ((char*)Data) + 80;
}
void* AnimPermutation::unknow_field_5(void *Data) {
	return ((char*)Data) + 84;
}
void* AnimPermutation::unknow_field_6(void *Data) {
	return ((char*)Data) + 88;
}
void* AnimPermutation::unknow_field_7(void *Data) {
	return ((char*)Data) + 92;
}
void* AnimPermutation::unknow_field_8(void *Data) {
	return ((char*)Data) + 96;
}
void* AnimPermutation::unknow_field_9(void *Data) {
	return ((char*)Data) + 104;
}
void* AnimPermutation::unknow_field_10(void *Data) {
	return ((char*)Data) + 108;
}
void* AnimPermutation::unknow_field_11(void *Data) {
	return ((char*)Data) + 112;
}
void* AnimPermutation::unknow_field_12(void *Data) {
	return ((char*)Data) + 116;
}
int* AnimPermutation::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 100;
}
int* AnimPermutation::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 120;
}
void* AnimPermutation::serBoneNames(void *Data) {
	return ((char*)Data) + 124;
}
void* AnimPermutation::unknow_field_16(void *Data) {
	return ((char*)Data) + 136;
}
int* AnimPermutation::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 144;
}
void* AnimPermutation::serTranslationCurves(void *Data) {
	return ((char*)Data) + 148;
}
void* AnimPermutation::unknow_field_19(void *Data) {
	return ((char*)Data) + 160;
}
void* AnimPermutation::serRotationCurves(void *Data) {
	return ((char*)Data) + 168;
}
void* AnimPermutation::unknow_field_21(void *Data) {
	return ((char*)Data) + 176;
}
void* AnimPermutation::serScaleCurves(void *Data) {
	return ((char*)Data) + 184;
}
void* AnimPermutation::unknow_field_23(void *Data) {
	return ((char*)Data) + 192;
}
void* AnimPermutation::unknow_field_24(void *Data) {
	return ((char*)Data) + 200;
}
void* AnimPermutation::unknow_field_25(void *Data) {
	return ((char*)Data) + 204;
}
void* AnimPermutation::unknow_field_26(void *Data) {
	return ((char*)Data) + 208;
}
void* AnimPermutation::unknow_field_27(void *Data) {
	return ((char*)Data) + 212;
}
void* AnimPermutation::unknow_field_28(void *Data) {
	return ((char*)Data) + 216;
}
void* AnimPermutation::unknow_field_29(void *Data) {
	return ((char*)Data) + 228;
}
void* AnimPermutation::unknow_field_30(void *Data) {
	return ((char*)Data) + 240;
}
void* AnimPermutation::unknow_field_31(void *Data) {
	return ((char*)Data) + 252;
}
void* AnimPermutation::unknow_field_32(void *Data) {
	return ((char*)Data) + 264;
}
int* AnimPermutation::unknow_field_33(void *Data) {
	return (int*)((char*)Data) + 276;
}
void* AnimPermutation::serKeyedAttachments(void *Data) {
	return ((char*)Data) + 268;
}
void* AnimPermutation::unknow_field_35(void *Data) {
	return ((char*)Data) + 280;
}
void* AnimPermutation::serKeyframePosList(void *Data) {
	return ((char*)Data) + 288;
}
void* AnimPermutation::unknow_field_37(void *Data) {
	return ((char*)Data) + 296;
}
void* AnimPermutation::serNonlinearOffset(void *Data) {
	return ((char*)Data) + 304;
}
void* AnimPermutation::unknow_field_39(void *Data) {
	return ((char*)Data) + 312;
}
void* AnimPermutation::unknow_field_40(void *Data) {
	return ((char*)Data) + 320;
}
void* AnimPermutation::unknow_field_41(void *Data) {
	return ((char*)Data) + 332;
}
void* AnimPermutation::unknow_field_42(void *Data) {
	return ((char*)Data) + 400;
}
void* AnimPermutation::unknow_field_43(void *Data) {
	return ((char*)Data) + 656;
}

AnimPermutation aAnimPermutation;
// Anim
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoAppearance }
// { unknow_field_3 }
// { serPermutations }
// { unknow_field_5 }
// { unknow_field_6 }


void* Anim::New() {
}

Anim::Anim() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_SNO, 20, 32);
		Fields[3].fieldinfo(&aDT_INT, 32, 32);
		Fields[4].fieldinfo(&aSerializeData, 24, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 40, 0);
		Fields[6].fieldinfo(&aDT_INT, 48, 32);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
Anim::~Anim() {
		free(Fields);
}

const char* Anim::Name() {
		return "Anim";
}
	
int* Anim::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Anim::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Anim::snoAppearance(void *Data) {
	return ((char*)Data) + 20;
}
int* Anim::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* Anim::serPermutations(void *Data) {
	return ((char*)Data) + 24;
}
void* Anim::unknow_field_5(void *Data) {
	return ((char*)Data) + 40;
}
int* Anim::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 48;
}

Anim aAnim;
// AnimSetTagMap
//
// { serTagMap }
// { hTagMap }


void* AnimSetTagMap::New() {
}

AnimSetTagMap::AnimSetTagMap() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_TAGMAP, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
AnimSetTagMap::~AnimSetTagMap() {
		free(Fields);
}

const char* AnimSetTagMap::Name() {
		return "AnimSetTagMap";
}
	
void* AnimSetTagMap::serTagMap(void *Data) {
	return ((char*)Data) + 0;
}
void* AnimSetTagMap::hTagMap(void *Data) {
	return ((char*)Data) + 8;
}

AnimSetTagMap aAnimSetTagMap;
// AnimSet
//
// { snoParentAnimSet }
// { serTagMapAnimDefault }
// { hTagMapAnimDefault }
// { unknow_field_3 }


void* AnimSet::New() {
}

AnimSet::AnimSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 12, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_TAGMAP, 24, 0);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 32, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
AnimSet::~AnimSet() {
		free(Fields);
}

const char* AnimSet::Name() {
		return "AnimSet";
}
	
void* AnimSet::snoParentAnimSet(void *Data) {
	return ((char*)Data) + 12;
}
void* AnimSet::serTagMapAnimDefault(void *Data) {
	return ((char*)Data) + 16;
}
void* AnimSet::hTagMapAnimDefault(void *Data) {
	return ((char*)Data) + 24;
}
void* AnimSet::unknow_field_3(void *Data) {
	return ((char*)Data) + 32;
}

AnimSet aAnimSet;
// ActorCollisionFlags
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* ActorCollisionFlags::New() {
}

ActorCollisionFlags::ActorCollisionFlags() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ActorCollisionFlags::~ActorCollisionFlags() {
		free(Fields);
}

const char* ActorCollisionFlags::Name() {
		return "ActorCollisionFlags";
}
	
int* ActorCollisionFlags::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* ActorCollisionFlags::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* ActorCollisionFlags::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ActorCollisionFlags::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

ActorCollisionFlags aActorCollisionFlags;
// ActorCollisionData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* ActorCollisionData::New() {
}

ActorCollisionData::ActorCollisionData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aActorCollisionFlags, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aAxialCylinder, 20, 0);
		Fields[3].fieldinfo(&aAABB, 40, 0);
		Fields[4].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
ActorCollisionData::~ActorCollisionData() {
		free(Fields);
}

const char* ActorCollisionData::Name() {
		return "ActorCollisionData";
}
	
void* ActorCollisionData::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ActorCollisionData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* ActorCollisionData::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* ActorCollisionData::unknow_field_3(void *Data) {
	return ((char*)Data) + 40;
}
void* ActorCollisionData::unknow_field_4(void *Data) {
	return ((char*)Data) + 64;
}

ActorCollisionData aActorCollisionData;
// WeightedLook
//
// { unknow_field_0 }
// { unknow_field_1 }


void* WeightedLook::New() {
}

WeightedLook::WeightedLook() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aLookLink, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 64, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
WeightedLook::~WeightedLook() {
		free(Fields);
}

const char* WeightedLook::Name() {
		return "WeightedLook";
}
	
void* WeightedLook::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* WeightedLook::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 64;
}

WeightedLook aWeightedLook;
// InventoryImages
//
// { unknow_field_0 }
// { unknow_field_1 }


void* InventoryImages::New() {
}

InventoryImages::InventoryImages() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
InventoryImages::~InventoryImages() {
		free(Fields);
}

const char* InventoryImages::Name() {
		return "InventoryImages";
}
	
int* InventoryImages::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* InventoryImages::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

InventoryImages aInventoryImages;
// Actor
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoAppearance }
// { snoPhysMesh }
// { unknow_field_4 }
// { unknow_field_5 }
// { aabbBounds }
// { serTagMap }
// { hTagMap }
// { snoAnimSet }
// { snoMonster }
// { unknow_field_11 }
// { serMsgTriggeredEvents }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }
// { snoPhysics }
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { serVOCastingNotes }
// { unknow_field_26 }
// { serVORole }
// { unknow_field_28 }


void* Actor::New() {
}

Actor::Actor() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 30);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_ENUM, 16, 4);
		Fields[2].fieldinfo(&aDT_SNO, 20, 32);
		Fields[3].fieldinfo(&aDT_SNO, 24, 32);
		Fields[4].fieldinfo(&aAxialCylinder, 28, 0);
		Fields[5].fieldinfo(&aSphere, 48, 0);
		Fields[6].fieldinfo(&aAABB, 64, 0);
		Fields[7].fieldinfo(&aSerializeData, 88, 0);
		Fields[8].fieldinfo(&aDT_TAGMAP, 96, 0);
		Fields[9].fieldinfo(&aDT_SNO, 104, 32);
		Fields[10].fieldinfo(&aDT_SNO, 108, 32);
		Fields[11].fieldinfo(&aDT_INT, 120, 32);
		Fields[12].fieldinfo(&aSerializeData, 112, 0);
		Fields[13].fieldinfo(&aDT_VARIABLEARRAY, 128, 0);
		Fields[14].fieldinfo(&aVector3D, 136, 0);
		Fields[15].fieldinfo(&aDT_FIXEDARRAY, 148, 0);
		Fields[16].fieldinfo(&aDT_SNO, 692, 32);
		Fields[17].fieldinfo(&aDT_INT, 696, 32);
		Fields[18].fieldinfo(&aDT_INT, 700, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 704, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 708, 32);
		Fields[21].fieldinfo(&aDT_FLOAT, 712, 32);
		Fields[22].fieldinfo(&aActorCollisionData, 716, 0);
		Fields[23].fieldinfo(&aDT_FIXEDARRAY, 784, 0);
		Fields[24].fieldinfo(&aDT_INT, 824, 32);
		Fields[25].fieldinfo(&aSerializeData, 840, 0);
		Fields[26].fieldinfo(&aDT_CSTRING, 832, 0);
		Fields[27].fieldinfo(&aSerializeData, 856, 0);
		Fields[28].fieldinfo(&aDT_CSTRING, 848, 0);
		Fields[30 - 1].fieldinfo(NULL, 0, 0);
	}
Actor::~Actor() {
		free(Fields);
}

const char* Actor::Name() {
		return "Actor";
}
	
int* Actor::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Actor::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* Actor::snoAppearance(void *Data) {
	return ((char*)Data) + 20;
}
void* Actor::snoPhysMesh(void *Data) {
	return ((char*)Data) + 24;
}
void* Actor::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Actor::unknow_field_5(void *Data) {
	return ((char*)Data) + 48;
}
void* Actor::aabbBounds(void *Data) {
	return ((char*)Data) + 64;
}
void* Actor::serTagMap(void *Data) {
	return ((char*)Data) + 88;
}
void* Actor::hTagMap(void *Data) {
	return ((char*)Data) + 96;
}
void* Actor::snoAnimSet(void *Data) {
	return ((char*)Data) + 104;
}
void* Actor::snoMonster(void *Data) {
	return ((char*)Data) + 108;
}
int* Actor::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 120;
}
void* Actor::serMsgTriggeredEvents(void *Data) {
	return ((char*)Data) + 112;
}
void* Actor::unknow_field_13(void *Data) {
	return ((char*)Data) + 128;
}
void* Actor::unknow_field_14(void *Data) {
	return ((char*)Data) + 136;
}
void* Actor::unknow_field_15(void *Data) {
	return ((char*)Data) + 148;
}
void* Actor::snoPhysics(void *Data) {
	return ((char*)Data) + 692;
}
int* Actor::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 696;
}
int* Actor::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 700;
}
void* Actor::unknow_field_19(void *Data) {
	return ((char*)Data) + 704;
}
void* Actor::unknow_field_20(void *Data) {
	return ((char*)Data) + 708;
}
void* Actor::unknow_field_21(void *Data) {
	return ((char*)Data) + 712;
}
void* Actor::unknow_field_22(void *Data) {
	return ((char*)Data) + 716;
}
void* Actor::unknow_field_23(void *Data) {
	return ((char*)Data) + 784;
}
int* Actor::unknow_field_24(void *Data) {
	return (int*)((char*)Data) + 824;
}
void* Actor::serVOCastingNotes(void *Data) {
	return ((char*)Data) + 840;
}
void* Actor::unknow_field_26(void *Data) {
	return ((char*)Data) + 832;
}
void* Actor::serVORole(void *Data) {
	return ((char*)Data) + 856;
}
void* Actor::unknow_field_28(void *Data) {
	return ((char*)Data) + 848;
}

Actor aActor;
// PostFXParams
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PostFXParams::New() {
}

PostFXParams::PostFXParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 32);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 16, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PostFXParams::~PostFXParams() {
		free(Fields);
}

const char* PostFXParams::Name() {
		return "PostFXParams";
}
	
void* PostFXParams::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PostFXParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}

PostFXParams aPostFXParams;
// Environment
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { snoMusic }
// { snoCombatMusic }
// { snoAmbient }
// { snoReverb }
// { snoWeather }
// { snoIrradianceTex }
// { snoIrradianceTexDead }


void* Environment::New() {
}

Environment::Environment() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 13);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRGBAColor, 0, 0);
		Fields[1].fieldinfo(&aPostFXParams, 4, 0);
		Fields[2].fieldinfo(&aDT_INT, 36, 32);
		Fields[3].fieldinfo(&aDT_INT, 40, 32);
		Fields[4].fieldinfo(&aUberMaterial, 48, 0);
		Fields[5].fieldinfo(&aDT_SNO, 152, 32);
		Fields[6].fieldinfo(&aDT_SNO, 156, 32);
		Fields[7].fieldinfo(&aDT_SNO, 160, 32);
		Fields[8].fieldinfo(&aDT_SNO, 164, 32);
		Fields[9].fieldinfo(&aDT_SNO, 168, 32);
		Fields[10].fieldinfo(&aDT_SNO, 172, 32);
		Fields[11].fieldinfo(&aDT_SNO, 176, 32);
		Fields[13 - 1].fieldinfo(NULL, 0, 0);
	}
Environment::~Environment() {
		free(Fields);
}

const char* Environment::Name() {
		return "Environment";
}
	
void* Environment::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Environment::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* Environment::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* Environment::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 40;
}
void* Environment::unknow_field_4(void *Data) {
	return ((char*)Data) + 48;
}
void* Environment::snoMusic(void *Data) {
	return ((char*)Data) + 152;
}
void* Environment::snoCombatMusic(void *Data) {
	return ((char*)Data) + 156;
}
void* Environment::snoAmbient(void *Data) {
	return ((char*)Data) + 160;
}
void* Environment::snoReverb(void *Data) {
	return ((char*)Data) + 164;
}
void* Environment::snoWeather(void *Data) {
	return ((char*)Data) + 168;
}
void* Environment::snoIrradianceTex(void *Data) {
	return ((char*)Data) + 172;
}
void* Environment::snoIrradianceTexDead(void *Data) {
	return ((char*)Data) + 176;
}

Environment aEnvironment;
// SceneCachedValues
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


void* SceneCachedValues::New() {
}

SceneCachedValues::SceneCachedValues() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aAABB, 12, 0);
		Fields[4].fieldinfo(&aAABB, 36, 0);
		Fields[5].fieldinfo(&aDT_FIXEDARRAY, 60, 32);
		Fields[6].fieldinfo(&aDT_INT, 76, 32);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
SceneCachedValues::~SceneCachedValues() {
		free(Fields);
}

const char* SceneCachedValues::Name() {
		return "SceneCachedValues";
}
	
int* SceneCachedValues::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* SceneCachedValues::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* SceneCachedValues::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* SceneCachedValues::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* SceneCachedValues::unknow_field_4(void *Data) {
	return ((char*)Data) + 36;
}
void* SceneCachedValues::unknow_field_5(void *Data) {
	return ((char*)Data) + 60;
}
int* SceneCachedValues::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 76;
}

SceneCachedValues aSceneCachedValues;
// SceneSpecification
//
// { unknow_field_0 }
// { unknow_field_1 }
// { arSnoLevelAreas }
// { snoPrevWorld }
// { unknow_field_4 }
// { snoPrevLevelArea }
// { snoNextWorld }
// { unknow_field_7 }
// { snoNextLevelArea }
// { snoMusic }
// { snoCombatMusic }
// { snoAmbient }
// { snoReverb }
// { snoWeather }
// { snoPresetWorld }
// { unknow_field_15 }
// { unknow_field_16 }
// { unknow_field_17 }
// { unknow_field_18 }
// { tCachedValues }


void* SceneSpecification::New() {
}

SceneSpecification::SceneSpecification() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 21);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aIVector2D, 4, 0);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 12, 32);
		Fields[3].fieldinfo(&aDT_SNO, 28, 32);
		Fields[4].fieldinfo(&aDT_INT, 32, 32);
		Fields[5].fieldinfo(&aDT_SNO, 36, 32);
		Fields[6].fieldinfo(&aDT_SNO, 40, 32);
		Fields[7].fieldinfo(&aDT_INT, 44, 32);
		Fields[8].fieldinfo(&aDT_SNO, 48, 32);
		Fields[9].fieldinfo(&aDT_SNO, 52, 32);
		Fields[10].fieldinfo(&aDT_SNO, 56, 32);
		Fields[11].fieldinfo(&aDT_SNO, 60, 32);
		Fields[12].fieldinfo(&aDT_SNO, 64, 32);
		Fields[13].fieldinfo(&aDT_SNO, 68, 32);
		Fields[14].fieldinfo(&aDT_SNO, 72, 32);
		Fields[15].fieldinfo(&aDT_INT, 76, 32);
		Fields[16].fieldinfo(&aDT_INT, 80, 32);
		Fields[17].fieldinfo(&aDT_INT, 84, 32);
		Fields[18].fieldinfo(&aDT_INT, 124, 32);
		Fields[19].fieldinfo(&aSceneCachedValues, 128, 0);
		Fields[21 - 1].fieldinfo(NULL, 0, 0);
	}
SceneSpecification::~SceneSpecification() {
		free(Fields);
}

const char* SceneSpecification::Name() {
		return "SceneSpecification";
}
	
int* SceneSpecification::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* SceneSpecification::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* SceneSpecification::arSnoLevelAreas(void *Data) {
	return ((char*)Data) + 12;
}
void* SceneSpecification::snoPrevWorld(void *Data) {
	return ((char*)Data) + 28;
}
int* SceneSpecification::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* SceneSpecification::snoPrevLevelArea(void *Data) {
	return ((char*)Data) + 36;
}
void* SceneSpecification::snoNextWorld(void *Data) {
	return ((char*)Data) + 40;
}
int* SceneSpecification::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 44;
}
void* SceneSpecification::snoNextLevelArea(void *Data) {
	return ((char*)Data) + 48;
}
void* SceneSpecification::snoMusic(void *Data) {
	return ((char*)Data) + 52;
}
void* SceneSpecification::snoCombatMusic(void *Data) {
	return ((char*)Data) + 56;
}
void* SceneSpecification::snoAmbient(void *Data) {
	return ((char*)Data) + 60;
}
void* SceneSpecification::snoReverb(void *Data) {
	return ((char*)Data) + 64;
}
void* SceneSpecification::snoWeather(void *Data) {
	return ((char*)Data) + 68;
}
void* SceneSpecification::snoPresetWorld(void *Data) {
	return ((char*)Data) + 72;
}
int* SceneSpecification::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 76;
}
int* SceneSpecification::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 80;
}
int* SceneSpecification::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 84;
}
int* SceneSpecification::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 124;
}
void* SceneSpecification::tCachedValues(void *Data) {
	return ((char*)Data) + 128;
}

SceneSpecification aSceneSpecification;
// SceneChunk
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* SceneChunk::New() {
}

SceneChunk::SceneChunk() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSNOName, 0, 0);
		Fields[1].fieldinfo(&aPRTransform, 8, 0);
		Fields[2].fieldinfo(&aSceneSpecification, 36, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SceneChunk::~SceneChunk() {
		free(Fields);
}

const char* SceneChunk::Name() {
		return "SceneChunk";
}
	
void* SceneChunk::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* SceneChunk::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* SceneChunk::unknow_field_2(void *Data) {
	return ((char*)Data) + 36;
}

SceneChunk aSceneChunk;
// SceneParams
//
// { serSceneChunks }
// { unknow_field_1 }
// { unknow_field_2 }


void* SceneParams::New() {
}

SceneParams::SceneParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SceneParams::~SceneParams() {
		free(Fields);
}

const char* SceneParams::Name() {
		return "SceneParams";
}
	
void* SceneParams::serSceneChunks(void *Data) {
	return ((char*)Data) + 0;
}
void* SceneParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
int* SceneParams::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

SceneParams aSceneParams;
// CustomTileCell
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { snoScene }
// { unknow_field_4 }
// { unknow_field_5 }


void* CustomTileCell::New() {
}

CustomTileCell::CustomTileCell() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 1);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_FIXEDARRAY, 20, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
CustomTileCell::~CustomTileCell() {
		free(Fields);
}

const char* CustomTileCell::Name() {
		return "CustomTileCell";
}
	
int* CustomTileCell::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* CustomTileCell::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* CustomTileCell::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* CustomTileCell::snoScene(void *Data) {
	return ((char*)Data) + 12;
}
int* CustomTileCell::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* CustomTileCell::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}

CustomTileCell aCustomTileCell;
// CustomTileInfo
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serTiles }
// { unknow_field_5 }


void* CustomTileInfo::New() {
}

CustomTileInfo::CustomTileInfo() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 2);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aIVector2D, 12, 0);
		Fields[4].fieldinfo(&aSerializeData, 20, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 32, 0);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
CustomTileInfo::~CustomTileInfo() {
		free(Fields);
}

const char* CustomTileInfo::Name() {
		return "CustomTileInfo";
}
	
int* CustomTileInfo::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* CustomTileInfo::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* CustomTileInfo::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* CustomTileInfo::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* CustomTileInfo::serTiles(void *Data) {
	return ((char*)Data) + 20;
}
void* CustomTileInfo::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}

CustomTileInfo aCustomTileInfo;
// TileInfo
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { snoScene }
// { serTileTagMap }
// { hTileTagMap }
// { unknow_field_6 }


void* TileInfo::New() {
}

TileInfo::TileInfo() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 12, 32);
		Fields[2].fieldinfo(&aDT_INT, 4, 32);
		Fields[3].fieldinfo(&aDT_SNO, 8, 32);
		Fields[4].fieldinfo(&aSerializeData, 16, 0);
		Fields[5].fieldinfo(&aDT_TAGMAP, 24, 0);
		Fields[6].fieldinfo(&aCustomTileInfo, 32, 0);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
TileInfo::~TileInfo() {
		free(Fields);
}

const char* TileInfo::Name() {
		return "TileInfo";
}
	
int* TileInfo::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* TileInfo::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* TileInfo::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* TileInfo::snoScene(void *Data) {
	return ((char*)Data) + 8;
}
void* TileInfo::serTileTagMap(void *Data) {
	return ((char*)Data) + 16;
}
void* TileInfo::hTileTagMap(void *Data) {
	return ((char*)Data) + 24;
}
void* TileInfo::unknow_field_6(void *Data) {
	return ((char*)Data) + 32;
}

TileInfo aTileInfo;
// DRLGCommand
//
// { unknow_field_0 }
// { unknow_field_1 }
// { serCommandTagMap }
// { hCommandTagMap }


void* DRLGCommand::New() {
}

DRLGCommand::DRLGCommand() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[1].fieldinfo(&aDT_INT, 128, 32);
		Fields[2].fieldinfo(&aSerializeData, 132, 0);
		Fields[3].fieldinfo(&aDT_TAGMAP, 144, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
DRLGCommand::~DRLGCommand() {
		free(Fields);
}

const char* DRLGCommand::Name() {
		return "DRLGCommand";
}
	
void* DRLGCommand::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* DRLGCommand::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 128;
}
void* DRLGCommand::serCommandTagMap(void *Data) {
	return ((char*)Data) + 132;
}
void* DRLGCommand::hCommandTagMap(void *Data) {
	return ((char*)Data) + 144;
}

DRLGCommand aDRLGCommand;
// DRLGParams
//
// { serTiles }
// { unknow_field_1 }
// { unknow_field_2 }
// { serCommands }
// { unknow_field_4 }
// { serParentIndices }
// { unknow_field_6 }
// { serDRLGTagMap }
// { hDRLGTagMap }


void* DRLGParams::New() {
}

DRLGParams::DRLGParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[2].fieldinfo(&aDT_INT, 64, 32);
		Fields[3].fieldinfo(&aSerializeData, 68, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 80, 0);
		Fields[5].fieldinfo(&aSerializeData, 88, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 96, 0);
		Fields[7].fieldinfo(&aSerializeData, 104, 0);
		Fields[8].fieldinfo(&aDT_TAGMAP, 112, 0);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
DRLGParams::~DRLGParams() {
		free(Fields);
}

const char* DRLGParams::Name() {
		return "DRLGParams";
}
	
void* DRLGParams::serTiles(void *Data) {
	return ((char*)Data) + 0;
}
void* DRLGParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* DRLGParams::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* DRLGParams::serCommands(void *Data) {
	return ((char*)Data) + 68;
}
void* DRLGParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 80;
}
void* DRLGParams::serParentIndices(void *Data) {
	return ((char*)Data) + 88;
}
void* DRLGParams::unknow_field_6(void *Data) {
	return ((char*)Data) + 96;
}
void* DRLGParams::serDRLGTagMap(void *Data) {
	return ((char*)Data) + 104;
}
void* DRLGParams::hDRLGTagMap(void *Data) {
	return ((char*)Data) + 112;
}

DRLGParams aDRLGParams;
// Worlds
//
// { serDLRGParams }
// { unknow_field_1 }
// { serSceneParams }
// { unknow_field_3 }
// { serMarkerSets }
// { arMarkerSets }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { arNavMeshFuncs }
// { unknow_field_11 }
// { unknow_field_12 }
// { snoScript }
// { unknow_field_14 }


void* Worlds::New() {
}

Worlds::Worlds() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 16);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 12, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[2].fieldinfo(&aSerializeData, 32, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 40, 0);
		Fields[4].fieldinfo(&aSerializeData, 48, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 56, 0);
		Fields[6].fieldinfo(&aEnvironment, 112, 0);
		Fields[7].fieldinfo(&aLabelRuleSet, 296, 0);
		Fields[8].fieldinfo(&aDT_INT, 320, 32);
		Fields[9].fieldinfo(&aSceneClusterSet, 328, 0);
		Fields[10].fieldinfo(&aDT_FIXEDARRAY, 352, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 372, 32);
		Fields[12].fieldinfo(&aDT_INT, 376, 32);
		Fields[13].fieldinfo(&aDT_SNO, 380, 32);
		Fields[14].fieldinfo(&aDT_INT, 384, 32);
		Fields[16 - 1].fieldinfo(NULL, 0, 0);
	}
Worlds::~Worlds() {
		free(Fields);
}

const char* Worlds::Name() {
		return "Worlds";
}
	
void* Worlds::serDLRGParams(void *Data) {
	return ((char*)Data) + 12;
}
void* Worlds::unknow_field_1(void *Data) {
	return ((char*)Data) + 24;
}
void* Worlds::serSceneParams(void *Data) {
	return ((char*)Data) + 32;
}
void* Worlds::unknow_field_3(void *Data) {
	return ((char*)Data) + 40;
}
void* Worlds::serMarkerSets(void *Data) {
	return ((char*)Data) + 48;
}
void* Worlds::arMarkerSets(void *Data) {
	return ((char*)Data) + 56;
}
void* Worlds::unknow_field_6(void *Data) {
	return ((char*)Data) + 112;
}
void* Worlds::unknow_field_7(void *Data) {
	return ((char*)Data) + 296;
}
int* Worlds::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 320;
}
void* Worlds::unknow_field_9(void *Data) {
	return ((char*)Data) + 328;
}
void* Worlds::arNavMeshFuncs(void *Data) {
	return ((char*)Data) + 352;
}
void* Worlds::unknow_field_11(void *Data) {
	return ((char*)Data) + 372;
}
int* Worlds::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 376;
}
void* Worlds::snoScript(void *Data) {
	return ((char*)Data) + 380;
}
int* Worlds::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 384;
}

Worlds aWorlds;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aSceneSpecification, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 220, 32);
		Fields[4].fieldinfo(&aDT_SNO, 224, 32);
		Fields[5].fieldinfo(&aPRTransform, 228, 0);
		Fields[6].fieldinfo(&aDT_INT, 256, 32);
		Fields[7].fieldinfo(&aDT_SNO, 260, 32);
		Fields[8].fieldinfo(&aDT_FIXEDARRAY, 268, 32);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
RevealSceneMessage::~RevealSceneMessage() {
		free(Fields);
}

const char* RevealSceneMessage::Name() {
		return "RevealSceneMessage";
}
	
void* RevealSceneMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* RevealSceneMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* RevealSceneMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* RevealSceneMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 220;
}
void* RevealSceneMessage::snoScene(void *Data) {
	return ((char*)Data) + 224;
}
void* RevealSceneMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 228;
}
int* RevealSceneMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 256;
}
void* RevealSceneMessage::snoSceneGroup(void *Data) {
	return ((char*)Data) + 260;
}
void* RevealSceneMessage::arAppliedLabels(void *Data) {
	return ((char*)Data) + 268;
}

RevealSceneMessage aRevealSceneMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
DestroySceneMessage::~DestroySceneMessage() {
		free(Fields);
}

const char* DestroySceneMessage::Name() {
		return "DestroySceneMessage";
}
	
void* DestroySceneMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* DestroySceneMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* DestroySceneMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

DestroySceneMessage aDestroySceneMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 16, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
SwapSceneMessage::~SwapSceneMessage() {
		free(Fields);
}

const char* SwapSceneMessage::Name() {
		return "SwapSceneMessage";
}
	
void* SwapSceneMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* SwapSceneMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* SwapSceneMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* SwapSceneMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

SwapSceneMessage aSwapSceneMessage;
// NavMeshDef
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { serNavMeshArraySquares }
// { unknow_field_6 }
// { unknow_field_7 }


void* NavMeshDef::New() {
}

NavMeshDef::NavMeshDef() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aSerializeData, 20, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 32, 0);
		Fields[7].fieldinfo(&aDT_CHARARRAY, 40, 9);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
NavMeshDef::~NavMeshDef() {
		free(Fields);
}

const char* NavMeshDef::Name() {
		return "NavMeshDef";
}
	
int* NavMeshDef::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* NavMeshDef::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* NavMeshDef::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* NavMeshDef::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* NavMeshDef::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* NavMeshDef::serNavMeshArraySquares(void *Data) {
	return ((char*)Data) + 20;
}
void* NavMeshDef::unknow_field_6(void *Data) {
	return ((char*)Data) + 32;
}
void* NavMeshDef::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}

NavMeshDef aNavMeshDef;
// NavCell
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* NavCell::New() {
}

NavCell::NavCell() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 12, 0);
		Fields[2].fieldinfo(&aDT_WORD, 24, 16);
		Fields[3].fieldinfo(&aDT_WORD, 26, 16);
		Fields[4].fieldinfo(&aDT_INT, 28, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
NavCell::~NavCell() {
		free(Fields);
}

const char* NavCell::Name() {
		return "NavCell";
}
	
void* NavCell::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* NavCell::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* NavCell::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}
void* NavCell::unknow_field_3(void *Data) {
	return ((char*)Data) + 26;
}
int* NavCell::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 28;
}

NavCell aNavCell;
// NavGridSquare
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* NavGridSquare::New() {
}

NavGridSquare::NavGridSquare() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_WORD, 0, 16);
		Fields[1].fieldinfo(&aDT_WORD, 2, 16);
		Fields[2].fieldinfo(&aDT_WORD, 4, 16);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
NavGridSquare::~NavGridSquare() {
		free(Fields);
}

const char* NavGridSquare::Name() {
		return "NavGridSquare";
}
	
void* NavGridSquare::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* NavGridSquare::unknow_field_1(void *Data) {
	return ((char*)Data) + 2;
}
void* NavGridSquare::unknow_field_2(void *Data) {
	return ((char*)Data) + 4;
}

NavGridSquare aNavGridSquare;
// NavCellLookup
//
// { unknow_field_0 }
// { unknow_field_1 }


void* NavCellLookup::New() {
}

NavCellLookup::NavCellLookup() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_WORD, 0, 16);
		Fields[1].fieldinfo(&aDT_WORD, 2, 16);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
NavCellLookup::~NavCellLookup() {
		free(Fields);
}

const char* NavCellLookup::Name() {
		return "NavCellLookup";
}
	
void* NavCellLookup::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* NavCellLookup::unknow_field_1(void *Data) {
	return ((char*)Data) + 2;
}

NavCellLookup aNavCellLookup;
// NavCellBorderData
//
// { unknow_field_0 }
// { unknow_field_1 }


void* NavCellBorderData::New() {
}

NavCellBorderData::NavCellBorderData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_WORD, 0, 16);
		Fields[1].fieldinfo(&aDT_WORD, 2, 16);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
NavCellBorderData::~NavCellBorderData() {
		free(Fields);
}

const char* NavCellBorderData::Name() {
		return "NavCellBorderData";
}
	
void* NavCellBorderData::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* NavCellBorderData::unknow_field_1(void *Data) {
	return ((char*)Data) + 2;
}

NavCellBorderData aNavCellBorderData;
// NavZoneDefinition
//
// { unknow_field_0 }
// { serNavCells }
// { unknow_field_2 }
// { unknow_field_3 }
// { serNavCellNeighbors }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { serGridSquares }
// { unknow_field_11 }
// { unknow_field_12 }
// { serCellLookups }
// { unknow_field_14 }
// { unknow_field_15 }
// { serBorderData }
// { unknow_field_17 }


void* NavZoneDefinition::New() {
}

NavZoneDefinition::NavZoneDefinition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 19);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3].fieldinfo(&aDT_INT, 24, 32);
		Fields[4].fieldinfo(&aSerializeData, 40, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 32, 0);
		Fields[6].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 52, 32);
		Fields[8].fieldinfo(&aDT_INT, 56, 32);
		Fields[9].fieldinfo(&aIVector2D, 60, 0);
		Fields[10].fieldinfo(&aSerializeData, 80, 0);
		Fields[11].fieldinfo(&aDT_VARIABLEARRAY, 72, 0);
		Fields[12].fieldinfo(&aDT_INT, 88, 32);
		Fields[13].fieldinfo(&aSerializeData, 104, 0);
		Fields[14].fieldinfo(&aDT_VARIABLEARRAY, 96, 0);
		Fields[15].fieldinfo(&aDT_INT, 112, 32);
		Fields[16].fieldinfo(&aSerializeData, 128, 0);
		Fields[17].fieldinfo(&aDT_VARIABLEARRAY, 120, 0);
		Fields[19 - 1].fieldinfo(NULL, 0, 0);
	}
NavZoneDefinition::~NavZoneDefinition() {
		free(Fields);
}

const char* NavZoneDefinition::Name() {
		return "NavZoneDefinition";
}
	
int* NavZoneDefinition::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* NavZoneDefinition::serNavCells(void *Data) {
	return ((char*)Data) + 16;
}
void* NavZoneDefinition::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* NavZoneDefinition::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 24;
}
void* NavZoneDefinition::serNavCellNeighbors(void *Data) {
	return ((char*)Data) + 40;
}
void* NavZoneDefinition::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* NavZoneDefinition::unknow_field_6(void *Data) {
	return ((char*)Data) + 48;
}
void* NavZoneDefinition::unknow_field_7(void *Data) {
	return ((char*)Data) + 52;
}
int* NavZoneDefinition::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 56;
}
void* NavZoneDefinition::unknow_field_9(void *Data) {
	return ((char*)Data) + 60;
}
void* NavZoneDefinition::serGridSquares(void *Data) {
	return ((char*)Data) + 80;
}
void* NavZoneDefinition::unknow_field_11(void *Data) {
	return ((char*)Data) + 72;
}
int* NavZoneDefinition::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 88;
}
void* NavZoneDefinition::serCellLookups(void *Data) {
	return ((char*)Data) + 104;
}
void* NavZoneDefinition::unknow_field_14(void *Data) {
	return ((char*)Data) + 96;
}
int* NavZoneDefinition::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 112;
}
void* NavZoneDefinition::serBorderData(void *Data) {
	return ((char*)Data) + 128;
}
void* NavZoneDefinition::unknow_field_17(void *Data) {
	return ((char*)Data) + 120;
}

NavZoneDefinition aNavZoneDefinition;
// Scene
//
// { unknow_field_0 }
// { snoAppearance }
// { snoPhysMesh }
// { aabbBounds }
// { aabbMarkerSetBounds }
// { unknow_field_5 }
// { serExclusions }
// { arExclusions }
// { serInclusions }
// { arInclusions }
// { serMarkerSets }
// { arMarkerSets }
// { unknow_field_12 }
// { unknow_field_13 }
// { serMsgTriggeredEvents }
// { unknow_field_15 }
// { tNavZoneDef }


void* Scene::New() {
}

Scene::Scene() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 18);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_SNO, 776, 32);
		Fields[2].fieldinfo(&aDT_SNO, 780, 32);
		Fields[3].fieldinfo(&aAABB, 16, 0);
		Fields[4].fieldinfo(&aAABB, 40, 0);
		Fields[5].fieldinfo(&aNavMeshDef, 64, 0);
		Fields[6].fieldinfo(&aSerializeData, 360, 0);
		Fields[7].fieldinfo(&aDT_VARIABLEARRAY, 368, 0);
		Fields[8].fieldinfo(&aSerializeData, 424, 0);
		Fields[9].fieldinfo(&aDT_VARIABLEARRAY, 432, 0);
		Fields[10].fieldinfo(&aSerializeData, 488, 0);
		Fields[11].fieldinfo(&aDT_VARIABLEARRAY, 496, 0);
		Fields[12].fieldinfo(&aLookLink, 552, 0);
		Fields[13].fieldinfo(&aDT_INT, 624, 32);
		Fields[14].fieldinfo(&aSerializeData, 616, 0);
		Fields[15].fieldinfo(&aDT_VARIABLEARRAY, 632, 0);
		Fields[16].fieldinfo(&aNavZoneDefinition, 640, 0);
		Fields[18 - 1].fieldinfo(NULL, 0, 0);
	}
Scene::~Scene() {
		free(Fields);
}

const char* Scene::Name() {
		return "Scene";
}
	
int* Scene::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Scene::snoAppearance(void *Data) {
	return ((char*)Data) + 776;
}
void* Scene::snoPhysMesh(void *Data) {
	return ((char*)Data) + 780;
}
void* Scene::aabbBounds(void *Data) {
	return ((char*)Data) + 16;
}
void* Scene::aabbMarkerSetBounds(void *Data) {
	return ((char*)Data) + 40;
}
void* Scene::unknow_field_5(void *Data) {
	return ((char*)Data) + 64;
}
void* Scene::serExclusions(void *Data) {
	return ((char*)Data) + 360;
}
void* Scene::arExclusions(void *Data) {
	return ((char*)Data) + 368;
}
void* Scene::serInclusions(void *Data) {
	return ((char*)Data) + 424;
}
void* Scene::arInclusions(void *Data) {
	return ((char*)Data) + 432;
}
void* Scene::serMarkerSets(void *Data) {
	return ((char*)Data) + 488;
}
void* Scene::arMarkerSets(void *Data) {
	return ((char*)Data) + 496;
}
void* Scene::unknow_field_12(void *Data) {
	return ((char*)Data) + 552;
}
int* Scene::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 624;
}
void* Scene::serMsgTriggeredEvents(void *Data) {
	return ((char*)Data) + 616;
}
void* Scene::unknow_field_15(void *Data) {
	return ((char*)Data) + 632;
}
void* Scene::tNavZoneDef(void *Data) {
	return ((char*)Data) + 640;
}

Scene aScene;
// Observer
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


void* Observer::New() {
}

Observer::Observer() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 15);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_ANGLE, 16, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4].fieldinfo(&aDT_VELOCITY, 28, 32);
		Fields[5].fieldinfo(&aDT_ANGLE, 32, 32);
		Fields[6].fieldinfo(&aDT_ANGLE, 36, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[8].fieldinfo(&aVector3D, 44, 0);
		Fields[9].fieldinfo(&aVector3D, 56, 0);
		Fields[10].fieldinfo(&aDT_FLOAT, 68, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 72, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 80, 32);
		Fields[15 - 1].fieldinfo(NULL, 0, 0);
	}
Observer::~Observer() {
		free(Fields);
}

const char* Observer::Name() {
		return "Observer";
}
	
int* Observer::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Observer::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* Observer::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Observer::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Observer::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Observer::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* Observer::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}
void* Observer::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}
void* Observer::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}
void* Observer::unknow_field_9(void *Data) {
	return ((char*)Data) + 56;
}
void* Observer::unknow_field_10(void *Data) {
	return ((char*)Data) + 68;
}
void* Observer::unknow_field_11(void *Data) {
	return ((char*)Data) + 72;
}
void* Observer::unknow_field_12(void *Data) {
	return ((char*)Data) + 76;
}
void* Observer::unknow_field_13(void *Data) {
	return ((char*)Data) + 80;
}

Observer aObserver;
// ActorGroup
//
// { uHash }
// { unknow_field_1 }


void* ActorGroup::New() {
}

ActorGroup::ActorGroup() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 7);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ActorGroup::~ActorGroup() {
		free(Fields);
}

const char* ActorGroup::Name() {
		return "ActorGroup";
}
	
int* ActorGroup::uHash(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* ActorGroup::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

ActorGroup aActorGroup;
// StartLocationName
//
// { unknow_field_0 }
// { unknow_field_1 }


void* StartLocationName::New() {
}

StartLocationName::StartLocationName() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 7);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
StartLocationName::~StartLocationName() {
		free(Fields);
}

const char* StartLocationName::Name() {
		return "StartLocationName";
}
	
int* StartLocationName::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* StartLocationName::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

StartLocationName aStartLocationName;
// GlobalScriptVariable
//
// { uHash }
// { unknow_field_1 }
// { unknow_field_2 }


void* GlobalScriptVariable::New() {
}

GlobalScriptVariable::GlobalScriptVariable() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 6);
		Fields[2].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
GlobalScriptVariable::~GlobalScriptVariable() {
		free(Fields);
}

const char* GlobalScriptVariable::Name() {
		return "GlobalScriptVariable";
}
	
int* GlobalScriptVariable::uHash(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* GlobalScriptVariable::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* GlobalScriptVariable::unknow_field_2(void *Data) {
	return ((char*)Data) + 36;
}

GlobalScriptVariable aGlobalScriptVariable;
// DifficultyTuningParams
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


void* DifficultyTuningParams::New() {
}

DifficultyTuningParams::DifficultyTuningParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
DifficultyTuningParams::~DifficultyTuningParams() {
		free(Fields);
}

const char* DifficultyTuningParams::Name() {
		return "DifficultyTuningParams";
}
	
void* DifficultyTuningParams::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* DifficultyTuningParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* DifficultyTuningParams::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* DifficultyTuningParams::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* DifficultyTuningParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* DifficultyTuningParams::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* DifficultyTuningParams::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}

DifficultyTuningParams aDifficultyTuningParams;
// BannerTexturePair
//
// { snoTexture }
// { unknow_field_1 }


void* BannerTexturePair::New() {
}

BannerTexturePair::BannerTexturePair() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
BannerTexturePair::~BannerTexturePair() {
		free(Fields);
}

const char* BannerTexturePair::Name() {
		return "BannerTexturePair";
}
	
void* BannerTexturePair::snoTexture(void *Data) {
	return ((char*)Data) + 0;
}
int* BannerTexturePair::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

BannerTexturePair aBannerTexturePair;
// BannerColorSet
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* BannerColorSet::New() {
}

BannerColorSet::BannerColorSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 1);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 12, 7);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
BannerColorSet::~BannerColorSet() {
		free(Fields);
}

const char* BannerColorSet::Name() {
		return "BannerColorSet";
}
	
void* BannerColorSet::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* BannerColorSet::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* BannerColorSet::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

BannerColorSet aBannerColorSet;
// BannerParams
//
// { serTexBackgrounds }
// { unknow_field_1 }
// { unknow_field_2 }
// { serTexPatterns }
// { unknow_field_4 }
// { unknow_field_5 }
// { serTexMainSigils }
// { unknow_field_7 }
// { serTexVariantSigils }
// { unknow_field_9 }
// { unknow_field_10 }
// { serTexSigilAccents }
// { unknow_field_12 }
// { unknow_field_13 }
// { serColorSets }
// { unknow_field_15 }
// { serActorBases }
// { arActorBases }
// { serActorCaps }
// { arActorCaps }
// { serActorPoles }
// { arActorPoles }
// { serActorRibbons }
// { arActorRibbons }


void* BannerParams::New() {
}

BannerParams::BannerParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 25);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 8, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 0, 0);
		Fields[2].fieldinfo(&aDT_INT, 16, 32);
		Fields[3].fieldinfo(&aSerializeData, 32, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[5].fieldinfo(&aDT_INT, 40, 32);
		Fields[6].fieldinfo(&aSerializeData, 56, 0);
		Fields[7].fieldinfo(&aDT_VARIABLEARRAY, 48, 0);
		Fields[8].fieldinfo(&aSerializeData, 72, 0);
		Fields[9].fieldinfo(&aDT_VARIABLEARRAY, 64, 0);
		Fields[10].fieldinfo(&aDT_INT, 80, 32);
		Fields[11].fieldinfo(&aSerializeData, 96, 0);
		Fields[12].fieldinfo(&aDT_VARIABLEARRAY, 88, 0);
		Fields[13].fieldinfo(&aDT_INT, 104, 32);
		Fields[14].fieldinfo(&aSerializeData, 120, 0);
		Fields[15].fieldinfo(&aDT_VARIABLEARRAY, 112, 0);
		Fields[16].fieldinfo(&aSerializeData, 136, 0);
		Fields[17].fieldinfo(&aDT_VARIABLEARRAY, 128, 0);
		Fields[18].fieldinfo(&aSerializeData, 152, 0);
		Fields[19].fieldinfo(&aDT_VARIABLEARRAY, 144, 0);
		Fields[20].fieldinfo(&aSerializeData, 168, 0);
		Fields[21].fieldinfo(&aDT_VARIABLEARRAY, 160, 0);
		Fields[22].fieldinfo(&aSerializeData, 184, 0);
		Fields[23].fieldinfo(&aDT_VARIABLEARRAY, 176, 0);
		Fields[25 - 1].fieldinfo(NULL, 0, 0);
	}
BannerParams::~BannerParams() {
		free(Fields);
}

const char* BannerParams::Name() {
		return "BannerParams";
}
	
void* BannerParams::serTexBackgrounds(void *Data) {
	return ((char*)Data) + 8;
}
void* BannerParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 0;
}
int* BannerParams::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* BannerParams::serTexPatterns(void *Data) {
	return ((char*)Data) + 32;
}
void* BannerParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 24;
}
int* BannerParams::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 40;
}
void* BannerParams::serTexMainSigils(void *Data) {
	return ((char*)Data) + 56;
}
void* BannerParams::unknow_field_7(void *Data) {
	return ((char*)Data) + 48;
}
void* BannerParams::serTexVariantSigils(void *Data) {
	return ((char*)Data) + 72;
}
void* BannerParams::unknow_field_9(void *Data) {
	return ((char*)Data) + 64;
}
int* BannerParams::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 80;
}
void* BannerParams::serTexSigilAccents(void *Data) {
	return ((char*)Data) + 96;
}
void* BannerParams::unknow_field_12(void *Data) {
	return ((char*)Data) + 88;
}
int* BannerParams::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 104;
}
void* BannerParams::serColorSets(void *Data) {
	return ((char*)Data) + 120;
}
void* BannerParams::unknow_field_15(void *Data) {
	return ((char*)Data) + 112;
}
void* BannerParams::serActorBases(void *Data) {
	return ((char*)Data) + 136;
}
void* BannerParams::arActorBases(void *Data) {
	return ((char*)Data) + 128;
}
void* BannerParams::serActorCaps(void *Data) {
	return ((char*)Data) + 152;
}
void* BannerParams::arActorCaps(void *Data) {
	return ((char*)Data) + 144;
}
void* BannerParams::serActorPoles(void *Data) {
	return ((char*)Data) + 168;
}
void* BannerParams::arActorPoles(void *Data) {
	return ((char*)Data) + 160;
}
void* BannerParams::serActorRibbons(void *Data) {
	return ((char*)Data) + 184;
}
void* BannerParams::arActorRibbons(void *Data) {
	return ((char*)Data) + 176;
}

BannerParams aBannerParams;
// Globals
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { unknow_field_34 }
// { serActorGroups }
// { unknow_field_36 }
// { unknow_field_37 }
// { serStartLocationNames }
// { unknow_field_39 }
// { serScriptGlobalVars }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }
// { unknow_field_44 }
// { unknow_field_45 }
// { unknow_field_46 }
// { unknow_field_47 }
// { unknow_field_48 }
// { unknow_field_49 }
// { unknow_field_50 }
// { unknow_field_51 }
// { unknow_field_52 }


void* Globals::New() {
}

Globals::Globals() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 54);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 12, 9);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 268, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 380, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 384, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 388, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 460, 32);
		Fields[6].fieldinfo(&aDT_INT, 392, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 456, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 464, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 468, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 472, 32);
		Fields[11].fieldinfo(&aDT_INT, 2076, 32);
		Fields[12].fieldinfo(&aDT_INT, 2080, 32);
		Fields[13].fieldinfo(&aDT_INT, 2084, 32);
		Fields[14].fieldinfo(&aDT_INT, 2088, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 2092, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 2096, 32);
		Fields[17].fieldinfo(&aDT_INT, 2100, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 2104, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 2108, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 2112, 32);
		Fields[21].fieldinfo(&aDT_FLOAT, 2116, 32);
		Fields[22].fieldinfo(&aDT_FLOAT, 2120, 32);
		Fields[23].fieldinfo(&aDT_INT, 2132, 32);
		Fields[24].fieldinfo(&aDT_INT, 2136, 32);
		Fields[25].fieldinfo(&aDT_FLOAT, 2124, 32);
		Fields[26].fieldinfo(&aDT_FLOAT, 2128, 32);
		Fields[27].fieldinfo(&aDT_FLOAT, 2140, 32);
		Fields[28].fieldinfo(&aDT_FLOAT, 2144, 32);
		Fields[29].fieldinfo(&aDT_FLOAT, 2148, 32);
		Fields[30].fieldinfo(&aDT_FLOAT, 2152, 32);
		Fields[31].fieldinfo(&aDT_FLOAT, 2156, 32);
		Fields[32].fieldinfo(&aDT_INT, 2160, 32);
		Fields[33].fieldinfo(&aDT_FIXEDARRAY, 2164, 32);
		Fields[34].fieldinfo(&aDT_FIXEDARRAY, 476, 0);
		Fields[35].fieldinfo(&aSerializeData, 408, 0);
		Fields[36].fieldinfo(&aDT_VARIABLEARRAY, 400, 0);
		Fields[37].fieldinfo(&aDT_INT, 416, 32);
		Fields[38].fieldinfo(&aSerializeData, 432, 0);
		Fields[39].fieldinfo(&aDT_VARIABLEARRAY, 424, 0);
		Fields[40].fieldinfo(&aSerializeData, 448, 0);
		Fields[41].fieldinfo(&aDT_VARIABLEARRAY, 440, 0);
		Fields[42].fieldinfo(&aBannerParams, 2184, 0);
		Fields[43].fieldinfo(&aDT_INT, 2376, 32);
		Fields[44].fieldinfo(&aDT_INT, 2380, 32);
		Fields[45].fieldinfo(&aDT_INT, 2384, 32);
		Fields[46].fieldinfo(&aDT_INT, 2388, 32);
		Fields[47].fieldinfo(&aDT_INT, 2392, 32);
		Fields[48].fieldinfo(&aDT_FLOAT, 2396, 32);
		Fields[49].fieldinfo(&aDT_FLOAT, 2400, 32);
		Fields[50].fieldinfo(&aDT_FLOAT, 2404, 32);
		Fields[51].fieldinfo(&aDT_FLOAT, 2408, 32);
		Fields[52].fieldinfo(&aDT_FLOAT, 2412, 32);
		Fields[54 - 1].fieldinfo(NULL, 0, 0);
	}
Globals::~Globals() {
		free(Fields);
}

const char* Globals::Name() {
		return "Globals";
}
	
void* Globals::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}
void* Globals::unknow_field_1(void *Data) {
	return ((char*)Data) + 268;
}
void* Globals::unknow_field_2(void *Data) {
	return ((char*)Data) + 380;
}
void* Globals::unknow_field_3(void *Data) {
	return ((char*)Data) + 384;
}
void* Globals::unknow_field_4(void *Data) {
	return ((char*)Data) + 388;
}
void* Globals::unknow_field_5(void *Data) {
	return ((char*)Data) + 460;
}
int* Globals::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 392;
}
void* Globals::unknow_field_7(void *Data) {
	return ((char*)Data) + 456;
}
void* Globals::unknow_field_8(void *Data) {
	return ((char*)Data) + 464;
}
void* Globals::unknow_field_9(void *Data) {
	return ((char*)Data) + 468;
}
void* Globals::unknow_field_10(void *Data) {
	return ((char*)Data) + 472;
}
int* Globals::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 2076;
}
int* Globals::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 2080;
}
int* Globals::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 2084;
}
int* Globals::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 2088;
}
void* Globals::unknow_field_15(void *Data) {
	return ((char*)Data) + 2092;
}
void* Globals::unknow_field_16(void *Data) {
	return ((char*)Data) + 2096;
}
int* Globals::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 2100;
}
void* Globals::unknow_field_18(void *Data) {
	return ((char*)Data) + 2104;
}
void* Globals::unknow_field_19(void *Data) {
	return ((char*)Data) + 2108;
}
void* Globals::unknow_field_20(void *Data) {
	return ((char*)Data) + 2112;
}
void* Globals::unknow_field_21(void *Data) {
	return ((char*)Data) + 2116;
}
void* Globals::unknow_field_22(void *Data) {
	return ((char*)Data) + 2120;
}
int* Globals::unknow_field_23(void *Data) {
	return (int*)((char*)Data) + 2132;
}
int* Globals::unknow_field_24(void *Data) {
	return (int*)((char*)Data) + 2136;
}
void* Globals::unknow_field_25(void *Data) {
	return ((char*)Data) + 2124;
}
void* Globals::unknow_field_26(void *Data) {
	return ((char*)Data) + 2128;
}
void* Globals::unknow_field_27(void *Data) {
	return ((char*)Data) + 2140;
}
void* Globals::unknow_field_28(void *Data) {
	return ((char*)Data) + 2144;
}
void* Globals::unknow_field_29(void *Data) {
	return ((char*)Data) + 2148;
}
void* Globals::unknow_field_30(void *Data) {
	return ((char*)Data) + 2152;
}
void* Globals::unknow_field_31(void *Data) {
	return ((char*)Data) + 2156;
}
int* Globals::unknow_field_32(void *Data) {
	return (int*)((char*)Data) + 2160;
}
void* Globals::unknow_field_33(void *Data) {
	return ((char*)Data) + 2164;
}
void* Globals::unknow_field_34(void *Data) {
	return ((char*)Data) + 476;
}
void* Globals::serActorGroups(void *Data) {
	return ((char*)Data) + 408;
}
void* Globals::unknow_field_36(void *Data) {
	return ((char*)Data) + 400;
}
int* Globals::unknow_field_37(void *Data) {
	return (int*)((char*)Data) + 416;
}
void* Globals::serStartLocationNames(void *Data) {
	return ((char*)Data) + 432;
}
void* Globals::unknow_field_39(void *Data) {
	return ((char*)Data) + 424;
}
void* Globals::serScriptGlobalVars(void *Data) {
	return ((char*)Data) + 448;
}
void* Globals::unknow_field_41(void *Data) {
	return ((char*)Data) + 440;
}
void* Globals::unknow_field_42(void *Data) {
	return ((char*)Data) + 2184;
}
int* Globals::unknow_field_43(void *Data) {
	return (int*)((char*)Data) + 2376;
}
int* Globals::unknow_field_44(void *Data) {
	return (int*)((char*)Data) + 2380;
}
int* Globals::unknow_field_45(void *Data) {
	return (int*)((char*)Data) + 2384;
}
int* Globals::unknow_field_46(void *Data) {
	return (int*)((char*)Data) + 2388;
}
int* Globals::unknow_field_47(void *Data) {
	return (int*)((char*)Data) + 2392;
}
void* Globals::unknow_field_48(void *Data) {
	return ((char*)Data) + 2396;
}
void* Globals::unknow_field_49(void *Data) {
	return ((char*)Data) + 2400;
}
void* Globals::unknow_field_50(void *Data) {
	return ((char*)Data) + 2404;
}
void* Globals::unknow_field_51(void *Data) {
	return ((char*)Data) + 2408;
}
void* Globals::unknow_field_52(void *Data) {
	return ((char*)Data) + 2412;
}

Globals aGlobals;
// dmMeshNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* dmMeshNode::New() {
}

dmMeshNode::dmMeshNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_WORD, 4, 16);
		Fields[2].fieldinfo(&aDT_WORD, 6, 16);
		Fields[3].fieldinfo(&aDT_BYTE, 8, 8);
		Fields[4].fieldinfo(&aDT_BYTE, 9, 8);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
dmMeshNode::~dmMeshNode() {
		free(Fields);
}

const char* dmMeshNode::Name() {
		return "dmMeshNode";
}
	
int* dmMeshNode::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* dmMeshNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* dmMeshNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 6;
}
void* dmMeshNode::unknow_field_3(void *Data) {
	return ((char*)Data) + 8;
}
void* dmMeshNode::unknow_field_4(void *Data) {
	return ((char*)Data) + 9;
}

dmMeshNode admMeshNode;
// dmMeshTriangle
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


void* dmMeshTriangle::New() {
}

dmMeshTriangle::dmMeshTriangle() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aDT_WORD, 24, 16);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
dmMeshTriangle::~dmMeshTriangle() {
		free(Fields);
}

const char* dmMeshTriangle::Name() {
		return "dmMeshTriangle";
}
	
int* dmMeshTriangle::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* dmMeshTriangle::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* dmMeshTriangle::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* dmMeshTriangle::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* dmMeshTriangle::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* dmMeshTriangle::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* dmMeshTriangle::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}

dmMeshTriangle admMeshTriangle;
// dmMeshEdge
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* dmMeshEdge::New() {
}

dmMeshEdge::dmMeshEdge() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
dmMeshEdge::~dmMeshEdge() {
		free(Fields);
}

const char* dmMeshEdge::Name() {
		return "dmMeshEdge";
}
	
int* dmMeshEdge::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* dmMeshEdge::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* dmMeshEdge::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* dmMeshEdge::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* dmMeshEdge::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}

dmMeshEdge admMeshEdge;
// dmFloat3
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* dmFloat3::New() {
}

dmFloat3::dmFloat3() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
dmFloat3::~dmFloat3() {
		free(Fields);
}

const char* dmFloat3::Name() {
		return "dmFloat3";
}
	
void* dmFloat3::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* dmFloat3::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* dmFloat3::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

dmFloat3 admFloat3;
// dmPlane
//
// { unknow_field_0 }
// { unknow_field_1 }


void* dmPlane::New() {
}

dmPlane::dmPlane() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&admFloat3, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
dmPlane::~dmPlane() {
		free(Fields);
}

const char* dmPlane::Name() {
		return "dmPlane";
}
	
void* dmPlane::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* dmPlane::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}

dmPlane admPlane;
// CollisionMesh
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serDominoVertices }
// { unknow_field_5 }
// { unknow_field_6 }
// { serDominoTriangles }
// { unknow_field_8 }
// { unknow_field_9 }
// { serDominoEdges }
// { unknow_field_11 }
// { unknow_field_12 }
// { serDominoNodes }
// { unknow_field_14 }
// { unknow_field_15 }
// { unknow_field_16 }
// { unknow_field_17 }
// { unknow_field_18 }


void* CollisionMesh::New() {
}

CollisionMesh::CollisionMesh() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 20);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&admFloat3, 0, 0);
		Fields[1].fieldinfo(&admFloat3, 12, 0);
		Fields[2].fieldinfo(&admFloat3, 24, 0);
		Fields[3].fieldinfo(&aDT_INT, 76, 32);
		Fields[4].fieldinfo(&aSerializeData, 96, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 48, 0);
		Fields[6].fieldinfo(&aDT_INT, 80, 32);
		Fields[7].fieldinfo(&aSerializeData, 104, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 56, 0);
		Fields[9].fieldinfo(&aDT_INT, 84, 32);
		Fields[10].fieldinfo(&aSerializeData, 120, 0);
		Fields[11].fieldinfo(&aDT_VARIABLEARRAY, 64, 0);
		Fields[12].fieldinfo(&aDT_INT, 72, 32);
		Fields[13].fieldinfo(&aSerializeData, 112, 0);
		Fields[14].fieldinfo(&aDT_VARIABLEARRAY, 40, 0);
		Fields[15].fieldinfo(&aDT_INT, 88, 32);
		Fields[16].fieldinfo(&aDT_INT, 92, 32);
		Fields[17].fieldinfo(&aDT_INT, 128, 32);
		Fields[18].fieldinfo(&aDT_INT, 132, 32);
		Fields[20 - 1].fieldinfo(NULL, 0, 0);
	}
CollisionMesh::~CollisionMesh() {
		free(Fields);
}

const char* CollisionMesh::Name() {
		return "CollisionMesh";
}
	
void* CollisionMesh::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* CollisionMesh::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* CollisionMesh::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}
int* CollisionMesh::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 76;
}
void* CollisionMesh::serDominoVertices(void *Data) {
	return ((char*)Data) + 96;
}
void* CollisionMesh::unknow_field_5(void *Data) {
	return ((char*)Data) + 48;
}
int* CollisionMesh::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 80;
}
void* CollisionMesh::serDominoTriangles(void *Data) {
	return ((char*)Data) + 104;
}
void* CollisionMesh::unknow_field_8(void *Data) {
	return ((char*)Data) + 56;
}
int* CollisionMesh::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 84;
}
void* CollisionMesh::serDominoEdges(void *Data) {
	return ((char*)Data) + 120;
}
void* CollisionMesh::unknow_field_11(void *Data) {
	return ((char*)Data) + 64;
}
int* CollisionMesh::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 72;
}
void* CollisionMesh::serDominoNodes(void *Data) {
	return ((char*)Data) + 112;
}
void* CollisionMesh::unknow_field_14(void *Data) {
	return ((char*)Data) + 40;
}
int* CollisionMesh::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 88;
}
int* CollisionMesh::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 92;
}
int* CollisionMesh::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 128;
}
int* CollisionMesh::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 132;
}

CollisionMesh aCollisionMesh;
// PhysMesh
//
// { unknow_field_0 }
// { nCollisionMeshCount }
// { serCollisionMeshes }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


void* PhysMesh::New() {
}

PhysMesh::PhysMesh() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aSerializeData, 20, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 32, 0);
		Fields[4].fieldinfo(&aDT_CHARARRAY, 44, 9);
		Fields[5].fieldinfo(&aDT_CHARARRAY, 300, 9);
		Fields[6].fieldinfo(&aDT_INT, 40, 32);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
PhysMesh::~PhysMesh() {
		free(Fields);
}

const char* PhysMesh::Name() {
		return "PhysMesh";
}
	
int* PhysMesh::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* PhysMesh::nCollisionMeshCount(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* PhysMesh::serCollisionMeshes(void *Data) {
	return ((char*)Data) + 20;
}
void* PhysMesh::unknow_field_3(void *Data) {
	return ((char*)Data) + 32;
}
void* PhysMesh::unknow_field_4(void *Data) {
	return ((char*)Data) + 44;
}
void* PhysMesh::unknow_field_5(void *Data) {
	return ((char*)Data) + 300;
}
int* PhysMesh::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 40;
}

PhysMesh aPhysMesh;
// MarkerLink
//
// { unknow_field_0 }
// { unknow_field_1 }


void* MarkerLink::New() {
}

MarkerLink::MarkerLink() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 128, 8);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
MarkerLink::~MarkerLink() {
		free(Fields);
}

const char* MarkerLink::Name() {
		return "MarkerLink";
}
	
void* MarkerLink::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* MarkerLink::unknow_field_1(void *Data) {
	return ((char*)Data) + 128;
}

MarkerLink aMarkerLink;
// Marker
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serTagMap }
// { hTagMap }
// { unknow_field_6 }
// { serMarkerLinks }
// { unknow_field_8 }


void* Marker::New() {
}

Marker::Marker() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[1].fieldinfo(&aDT_INT, 128, 32);
		Fields[2].fieldinfo(&aPRTransform, 132, 0);
		Fields[3].fieldinfo(&aSNOName, 160, 0);
		Fields[4].fieldinfo(&aSerializeData, 168, 0);
		Fields[5].fieldinfo(&aDT_TAGMAP, 176, 0);
		Fields[6].fieldinfo(&aDT_INT, 184, 32);
		Fields[7].fieldinfo(&aSerializeData, 188, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 200, 0);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
Marker::~Marker() {
		free(Fields);
}

const char* Marker::Name() {
		return "Marker";
}
	
void* Marker::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* Marker::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 128;
}
void* Marker::unknow_field_2(void *Data) {
	return ((char*)Data) + 132;
}
void* Marker::unknow_field_3(void *Data) {
	return ((char*)Data) + 160;
}
void* Marker::serTagMap(void *Data) {
	return ((char*)Data) + 168;
}
void* Marker::hTagMap(void *Data) {
	return ((char*)Data) + 176;
}
int* Marker::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 184;
}
void* Marker::serMarkerLinks(void *Data) {
	return ((char*)Data) + 188;
}
void* Marker::unknow_field_8(void *Data) {
	return ((char*)Data) + 200;
}

Marker aMarker;
// GameErrorData
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GameErrorData::New() {
}

GameErrorData::GameErrorData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 7);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
GameErrorData::~GameErrorData() {
		free(Fields);
}

const char* GameErrorData::Name() {
		return "GameErrorData";
}
	
int* GameErrorData::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* GameErrorData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

GameErrorData aGameErrorData;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 12, 8);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 140, 7);
		Fields[4].fieldinfo(&aDT_INT, 244, 5);
		Fields[5].fieldinfo(&aDT_INT, 248, 3);
		Fields[6].fieldinfo(&aDT_SNO, 252, 32);
		Fields[7].fieldinfo(&aDT_INT, 256, 7);
		Fields[8].fieldinfo(&aHeroStateData, 260, 0);
		Fields[9].fieldinfo(&aDT_INT, 16904, 1);
		Fields[10].fieldinfo(&aDT_INT, 16908, 32);
		Fields[11].fieldinfo(&aDT_INT, 16912, 32);
		Fields[13 - 1].fieldinfo(NULL, 0, 0);
	}
NewPlayerMessage::~NewPlayerMessage() {
		free(Fields);
}

const char* NewPlayerMessage::Name() {
		return "NewPlayerMessage";
}
	
void* NewPlayerMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* NewPlayerMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* NewPlayerMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* NewPlayerMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 140;
}
int* NewPlayerMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 244;
}
int* NewPlayerMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 248;
}
void* NewPlayerMessage::snoActorPortrait(void *Data) {
	return ((char*)Data) + 252;
}
int* NewPlayerMessage::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 256;
}
void* NewPlayerMessage::unknow_field_8(void *Data) {
	return ((char*)Data) + 260;
}
int* NewPlayerMessage::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 16904;
}
int* NewPlayerMessage::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 16908;
}
int* NewPlayerMessage::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 16912;
}

NewPlayerMessage aNewPlayerMessage;
// HeroStateData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { tQuestRewardHistory }


void* HeroStateData::New() {
}

HeroStateData::HeroStateData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 29);
		Fields[4].fieldinfo(&aPlayerSavedData, 16, 0);
		Fields[5].fieldinfo(&aDT_INT, 2828, 32);
		Fields[6].fieldinfo(&aDT_FIXEDARRAY, 2832, 0);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
HeroStateData::~HeroStateData() {
		free(Fields);
}

const char* HeroStateData::Name() {
		return "HeroStateData";
}
	
int* HeroStateData::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* HeroStateData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* HeroStateData::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* HeroStateData::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* HeroStateData::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
int* HeroStateData::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 2828;
}
void* HeroStateData::tQuestRewardHistory(void *Data) {
	return ((char*)Data) + 2832;
}

HeroStateData aHeroStateData;
// HeroStateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* HeroStateMessage::New() {
}

HeroStateMessage::HeroStateMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aHeroStateData, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
HeroStateMessage::~HeroStateMessage() {
		free(Fields);
}

const char* HeroStateMessage::Name() {
		return "HeroStateMessage";
}
	
void* HeroStateMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* HeroStateMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

HeroStateMessage aHeroStateMessage;
// LogoutContextMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* LogoutContextMessage::New() {
}

LogoutContextMessage::LogoutContextMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LogoutContextMessage::~LogoutContextMessage() {
		free(Fields);
}

const char* LogoutContextMessage::Name() {
		return "LogoutContextMessage";
}
	
void* LogoutContextMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* LogoutContextMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

LogoutContextMessage aLogoutContextMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 12, 32);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 20, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
RareMonsterNamesMessage::~RareMonsterNamesMessage() {
		free(Fields);
}

const char* RareMonsterNamesMessage::Name() {
		return "RareMonsterNamesMessage";
}
	
void* RareMonsterNamesMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* RareMonsterNamesMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* RareMonsterNamesMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* RareMonsterNamesMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 20;
}

RareMonsterNamesMessage aRareMonsterNamesMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aRareItemName, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
RareItemNameMessage::~RareItemNameMessage() {
		free(Fields);
}

const char* RareItemNameMessage::Name() {
		return "RareItemNameMessage";
}
	
void* RareItemNameMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* RareItemNameMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* RareItemNameMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

RareItemNameMessage aRareItemNameMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 12);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ACDCollFlagsMessage::~ACDCollFlagsMessage() {
		free(Fields);
}

const char* ACDCollFlagsMessage::Name() {
		return "ACDCollFlagsMessage";
}
	
void* ACDCollFlagsMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDCollFlagsMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* ACDCollFlagsMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

ACDCollFlagsMessage aACDCollFlagsMessage;
// GoldModifiedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GoldModifiedMessage::New() {
}

GoldModifiedMessage::GoldModifiedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
GoldModifiedMessage::~GoldModifiedMessage() {
		free(Fields);
}

const char* GoldModifiedMessage::Name() {
		return "GoldModifiedMessage";
}
	
void* GoldModifiedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* GoldModifiedMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

GoldModifiedMessage aGoldModifiedMessage;
// SNOName
//
// { unknow_field_0 }
// { unknow_field_1 }


void* SNOName::New() {
}

SNOName::SNOName() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO_GROUP, 0, 32);
		Fields[1].fieldinfo(&aDT_SNONAME_HANDLE, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SNOName::~SNOName() {
		free(Fields);
}

const char* SNOName::Name() {
		return "SNOName";
}
	
void* SNOName::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* SNOName::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

SNOName aSNOName;
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
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_SNO, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
PlayAnimationMessageSpec::~PlayAnimationMessageSpec() {
		free(Fields);
}

const char* PlayAnimationMessageSpec::Name() {
		return "PlayAnimationMessageSpec";
}
	
int* PlayAnimationMessageSpec::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* PlayAnimationMessageSpec::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* PlayAnimationMessageSpec::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* PlayAnimationMessageSpec::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}

PlayAnimationMessageSpec aPlayAnimationMessageSpec;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 4);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[4].fieldinfo(&aDT_FIXEDARRAY, 24, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
PlayAnimationMessage::~PlayAnimationMessage() {
		free(Fields);
}

const char* PlayAnimationMessage::Name() {
		return "PlayAnimationMessage";
}
	
void* PlayAnimationMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayAnimationMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayAnimationMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* PlayAnimationMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
void* PlayAnimationMessage::tAnim(void *Data) {
	return ((char*)Data) + 24;
}

PlayAnimationMessage aPlayAnimationMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SetIdleAnimationMessage::~SetIdleAnimationMessage() {
		free(Fields);
}

const char* SetIdleAnimationMessage::Name() {
		return "SetIdleAnimationMessage";
}
	
void* SetIdleAnimationMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* SetIdleAnimationMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* SetIdleAnimationMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

SetIdleAnimationMessage aSetIdleAnimationMessage;
// RequiredMessageHeader
//
// { unknow_field_0 }


void* RequiredMessageHeader::New() {
}

RequiredMessageHeader::RequiredMessageHeader() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 4, 9);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
RequiredMessageHeader::~RequiredMessageHeader() {
		free(Fields);
}

const char* RequiredMessageHeader::Name() {
		return "RequiredMessageHeader";
}
	
int* RequiredMessageHeader::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 4;
}

RequiredMessageHeader aRequiredMessageHeader;
// SimpleMessage
//
// { unknow_field_0 }


void* SimpleMessage::New() {
}

SimpleMessage::SimpleMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
SimpleMessage::~SimpleMessage() {
		free(Fields);
}

const char* SimpleMessage::Name() {
		return "SimpleMessage";
}
	
void* SimpleMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

SimpleMessage aSimpleMessage;
// GenericBlobMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GenericBlobMessage::New() {
}

GenericBlobMessage::GenericBlobMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
GenericBlobMessage::~GenericBlobMessage() {
		free(Fields);
}

const char* GenericBlobMessage::Name() {
		return "GenericBlobMessage";
}
	
void* GenericBlobMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* GenericBlobMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

GenericBlobMessage aGenericBlobMessage;
// BoolDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* BoolDataMessage::New() {
}

BoolDataMessage::BoolDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 1);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
BoolDataMessage::~BoolDataMessage() {
		free(Fields);
}

const char* BoolDataMessage::Name() {
		return "BoolDataMessage";
}
	
void* BoolDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* BoolDataMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

BoolDataMessage aBoolDataMessage;
// ByteDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* ByteDataMessage::New() {
}

ByteDataMessage::ByteDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_BYTE, 8, 8);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ByteDataMessage::~ByteDataMessage() {
		free(Fields);
}

const char* ByteDataMessage::Name() {
		return "ByteDataMessage";
}
	
void* ByteDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ByteDataMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

ByteDataMessage aByteDataMessage;
// PlayerIndexMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PlayerIndexMessage::New() {
}

PlayerIndexMessage::PlayerIndexMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 4);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerIndexMessage::~PlayerIndexMessage() {
		free(Fields);
}

const char* PlayerIndexMessage::Name() {
		return "PlayerIndexMessage";
}
	
void* PlayerIndexMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerIndexMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

PlayerIndexMessage aPlayerIndexMessage;
// DataIDDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* DataIDDataMessage::New() {
}

DataIDDataMessage::DataIDDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
DataIDDataMessage::~DataIDDataMessage() {
		free(Fields);
}

const char* DataIDDataMessage::Name() {
		return "DataIDDataMessage";
}
	
void* DataIDDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* DataIDDataMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

DataIDDataMessage aDataIDDataMessage;
// DWordDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* DWordDataMessage::New() {
}

DWordDataMessage::DWordDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
DWordDataMessage::~DWordDataMessage() {
		free(Fields);
}

const char* DWordDataMessage::Name() {
		return "DWordDataMessage";
}
	
void* DWordDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* DWordDataMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

DWordDataMessage aDWordDataMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_WORD, 12, 16);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
NetworkAddressMessage::~NetworkAddressMessage() {
		free(Fields);
}

const char* NetworkAddressMessage::Name() {
		return "NetworkAddressMessage";
}
	
void* NetworkAddressMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* NetworkAddressMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* NetworkAddressMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

NetworkAddressMessage aNetworkAddressMessage;
// IntDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* IntDataMessage::New() {
}

IntDataMessage::IntDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
IntDataMessage::~IntDataMessage() {
		free(Fields);
}

const char* IntDataMessage::Name() {
		return "IntDataMessage";
}
	
void* IntDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* IntDataMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

IntDataMessage aIntDataMessage;
// Int64DataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Int64DataMessage::New() {
}

Int64DataMessage::Int64DataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT64, 8, 64);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Int64DataMessage::~Int64DataMessage() {
		free(Fields);
}

const char* Int64DataMessage::Name() {
		return "Int64DataMessage";
}
	
void* Int64DataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Int64DataMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

Int64DataMessage aInt64DataMessage;
// UInt64DataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UInt64DataMessage::New() {
}

UInt64DataMessage::UInt64DataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT64, 8, 64);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UInt64DataMessage::~UInt64DataMessage() {
		free(Fields);
}

const char* UInt64DataMessage::Name() {
		return "UInt64DataMessage";
}
	
void* UInt64DataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* UInt64DataMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

UInt64DataMessage aUInt64DataMessage;
// FloatDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* FloatDataMessage::New() {
}

FloatDataMessage::FloatDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
FloatDataMessage::~FloatDataMessage() {
		free(Fields);
}

const char* FloatDataMessage::Name() {
		return "FloatDataMessage";
}
	
void* FloatDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* FloatDataMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

FloatDataMessage aFloatDataMessage;
// SNODataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* SNODataMessage::New() {
}

SNODataMessage::SNODataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SNODataMessage::~SNODataMessage() {
		free(Fields);
}

const char* SNODataMessage::Name() {
		return "SNODataMessage";
}
	
void* SNODataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* SNODataMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aSNOName, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SNONameDataMessage::~SNONameDataMessage() {
		free(Fields);
}

const char* SNONameDataMessage::Name() {
		return "SNONameDataMessage";
}
	
void* SNONameDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* SNONameDataMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

SNONameDataMessage aSNONameDataMessage;
// GBIDDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GBIDDataMessage::New() {
}

GBIDDataMessage::GBIDDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_GBID, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
GBIDDataMessage::~GBIDDataMessage() {
		free(Fields);
}

const char* GBIDDataMessage::Name() {
		return "GBIDDataMessage";
}
	
void* GBIDDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* GBIDDataMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

GBIDDataMessage aGBIDDataMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 8, 10);
		Fields[2].fieldinfo(&aDT_OPTIONAL, 520, 32);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 528, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
DisplayGameTextMessage::~DisplayGameTextMessage() {
		free(Fields);
}

const char* DisplayGameTextMessage::Name() {
		return "DisplayGameTextMessage";
}
	
void* DisplayGameTextMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* DisplayGameTextMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* DisplayGameTextMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 520;
}
void* DisplayGameTextMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 528;
}

DisplayGameTextMessage aDisplayGameTextMessage;
// BroadcastTextMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* BroadcastTextMessage::New() {
}

BroadcastTextMessage::BroadcastTextMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 8, 10);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
BroadcastTextMessage::~BroadcastTextMessage() {
		free(Fields);
}

const char* BroadcastTextMessage::Name() {
		return "BroadcastTextMessage";
}
	
void* BroadcastTextMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* BroadcastTextMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

BroadcastTextMessage aBroadcastTextMessage;
// ANNDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* ANNDataMessage::New() {
}

ANNDataMessage::ANNDataMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ANNDataMessage::~ANNDataMessage() {
		free(Fields);
}

const char* ANNDataMessage::Name() {
		return "ANNDataMessage";
}
	
void* ANNDataMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ANNDataMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

ANNDataMessage aANNDataMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 12, 8);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 140, 6);
		Fields[4].fieldinfo(&aDT_INT, 192, 4);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
JoinLANGameMessage::~JoinLANGameMessage() {
		free(Fields);
}

const char* JoinLANGameMessage::Name() {
		return "JoinLANGameMessage";
}
	
void* JoinLANGameMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* JoinLANGameMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* JoinLANGameMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* JoinLANGameMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 140;
}
int* JoinLANGameMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 192;
}

JoinLANGameMessage aJoinLANGameMessage;
// QuitGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* QuitGameMessage::New() {
}

QuitGameMessage::QuitGameMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
QuitGameMessage::~QuitGameMessage() {
		free(Fields);
}

const char* QuitGameMessage::Name() {
		return "QuitGameMessage";
}
	
void* QuitGameMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* QuitGameMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

QuitGameMessage aQuitGameMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ConnectionEstablishedMessage::~ConnectionEstablishedMessage() {
		free(Fields);
}

const char* ConnectionEstablishedMessage::Name() {
		return "ConnectionEstablishedMessage";
}
	
void* ConnectionEstablishedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ConnectionEstablishedMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ConnectionEstablishedMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* ConnectionEstablishedMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

ConnectionEstablishedMessage aConnectionEstablishedMessage;
// GameSetupMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* GameSetupMessage::New() {
}

GameSetupMessage::GameSetupMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
GameSetupMessage::~GameSetupMessage() {
		free(Fields);
}

const char* GameSetupMessage::Name() {
		return "GameSetupMessage";
}
	
void* GameSetupMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* GameSetupMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

GameSetupMessage aGameSetupMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 8, 0);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_SNO, 24, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
EnterWorldMessage::~EnterWorldMessage() {
		free(Fields);
}

const char* EnterWorldMessage::Name() {
		return "EnterWorldMessage";
}
	
void* EnterWorldMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* EnterWorldMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* EnterWorldMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* EnterWorldMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}

EnterWorldMessage aEnterWorldMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
RevealWorldMessage::~RevealWorldMessage() {
		free(Fields);
}

const char* RevealWorldMessage::Name() {
		return "RevealWorldMessage";
}
	
void* RevealWorldMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* RevealWorldMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* RevealWorldMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

RevealWorldMessage aRevealWorldMessage;
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
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aPRTransform, 4, 0);
		Fields[2].fieldinfo(&aDT_INT, 32, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
WorldLocationMessageData::~WorldLocationMessageData() {
		free(Fields);
}

const char* WorldLocationMessageData::Name() {
		return "WorldLocationMessageData";
}
	
void* WorldLocationMessageData::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* WorldLocationMessageData::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* WorldLocationMessageData::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 32;
}

WorldLocationMessageData aWorldLocationMessageData;
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
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 5);
		Fields[2].fieldinfo(&aIVector2D, 8, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
InventoryLocationMessageData::~InventoryLocationMessageData() {
		free(Fields);
}

const char* InventoryLocationMessageData::Name() {
		return "InventoryLocationMessageData";
}
	
int* InventoryLocationMessageData::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* InventoryLocationMessageData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* InventoryLocationMessageData::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

InventoryLocationMessageData aInventoryLocationMessageData;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 5);
		Fields[4].fieldinfo(&aDT_INT, 20, 2);
		Fields[5].fieldinfo(&aDT_OPTIONAL, 24, 0);
		Fields[6].fieldinfo(&aDT_OPTIONAL, 64, 0);
		Fields[7].fieldinfo(&aGBHandle, 84, 0);
		Fields[8].fieldinfo(&aDT_INT, 92, 32);
		Fields[9].fieldinfo(&aDT_INT, 96, 32);
		Fields[10].fieldinfo(&aDT_INT, 100, 4);
		Fields[11].fieldinfo(&aDT_BYTE, 104, 8);
		Fields[12].fieldinfo(&aDT_OPTIONAL, 121, 32);
		Fields[13].fieldinfo(&aDT_OPTIONAL, 105, 32);
		Fields[14].fieldinfo(&aDT_OPTIONAL, 113, 32);
		Fields[16 - 1].fieldinfo(NULL, 0, 0);
	}
ACDEnterKnownMessage::~ACDEnterKnownMessage() {
		free(Fields);
}

const char* ACDEnterKnownMessage::Name() {
		return "ACDEnterKnownMessage";
}
	
void* ACDEnterKnownMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDEnterKnownMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* ACDEnterKnownMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* ACDEnterKnownMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* ACDEnterKnownMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* ACDEnterKnownMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 24;
}
void* ACDEnterKnownMessage::unknow_field_6(void *Data) {
	return ((char*)Data) + 64;
}
void* ACDEnterKnownMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 84;
}
int* ACDEnterKnownMessage::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 92;
}
int* ACDEnterKnownMessage::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 96;
}
int* ACDEnterKnownMessage::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 100;
}
void* ACDEnterKnownMessage::unknow_field_11(void *Data) {
	return ((char*)Data) + 104;
}
void* ACDEnterKnownMessage::unknow_field_12(void *Data) {
	return ((char*)Data) + 121;
}
void* ACDEnterKnownMessage::unknow_field_13(void *Data) {
	return ((char*)Data) + 105;
}
void* ACDEnterKnownMessage::unknow_field_14(void *Data) {
	return ((char*)Data) + 113;
}

ACDEnterKnownMessage aACDEnterKnownMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerEnterKnownMessage::~PlayerEnterKnownMessage() {
		free(Fields);
}

const char* PlayerEnterKnownMessage::Name() {
		return "PlayerEnterKnownMessage";
}
	
void* PlayerEnterKnownMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerEnterKnownMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayerEnterKnownMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

PlayerEnterKnownMessage aPlayerEnterKnownMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aInventoryLocationMessageData, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 28, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ACDInventoryPositionMessage::~ACDInventoryPositionMessage() {
		free(Fields);
}

const char* ACDInventoryPositionMessage::Name() {
		return "ACDInventoryPositionMessage";
}
	
void* ACDInventoryPositionMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDInventoryPositionMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* ACDInventoryPositionMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* ACDInventoryPositionMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 28;
}

ACDInventoryPositionMessage aACDInventoryPositionMessage;
// ACDInventoryUpdateActorSNO
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ACDInventoryUpdateActorSNO::New() {
}

ACDInventoryUpdateActorSNO::ACDInventoryUpdateActorSNO() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ACDInventoryUpdateActorSNO::~ACDInventoryUpdateActorSNO() {
		free(Fields);
}

const char* ACDInventoryUpdateActorSNO::Name() {
		return "ACDInventoryUpdateActorSNO";
}
	
void* ACDInventoryUpdateActorSNO::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDInventoryUpdateActorSNO::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* ACDInventoryUpdateActorSNO::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

ACDInventoryUpdateActorSNO aACDInventoryUpdateActorSNO;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aWorldLocationMessageData, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ACDWorldPositionMessage::~ACDWorldPositionMessage() {
		free(Fields);
}

const char* ACDWorldPositionMessage::Name() {
		return "ACDWorldPositionMessage";
}
	
void* ACDWorldPositionMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDWorldPositionMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* ACDWorldPositionMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

ACDWorldPositionMessage aACDWorldPositionMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ACDShearMessage::~ACDShearMessage() {
		free(Fields);
}

const char* ACDShearMessage::Name() {
		return "ACDShearMessage";
}
	
void* ACDShearMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDShearMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* ACDShearMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

ACDShearMessage aACDShearMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ACDGroupMessage::~ACDGroupMessage() {
		free(Fields);
}

const char* ACDGroupMessage::Name() {
		return "ACDGroupMessage";
}
	
void* ACDGroupMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDGroupMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ACDGroupMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* ACDGroupMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

ACDGroupMessage aACDGroupMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ACDChangeActorMessage::~ACDChangeActorMessage() {
		free(Fields);
}

const char* ACDChangeActorMessage::Name() {
		return "ACDChangeActorMessage";
}
	
void* ACDChangeActorMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDChangeActorMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* ACDChangeActorMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

ACDChangeActorMessage aACDChangeActorMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 3);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ACDPickupFailedMessage::~ACDPickupFailedMessage() {
		free(Fields);
}

const char* ACDPickupFailedMessage::Name() {
		return "ACDPickupFailedMessage";
}
	
void* ACDPickupFailedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDPickupFailedMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ACDPickupFailedMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

ACDPickupFailedMessage aACDPickupFailedMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 2);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
AffixMessage::~AffixMessage() {
		free(Fields);
}

const char* AffixMessage::Name() {
		return "AffixMessage";
}
	
void* AffixMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* AffixMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* AffixMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* AffixMessage::aAffixGBIDs(void *Data) {
	return ((char*)Data) + 16;
}

AffixMessage aAffixMessage;
// LearnedSkillMessage
//
// { unknow_field_0 }
// { aSkillSNOs }


void* LearnedSkillMessage::New() {
}

LearnedSkillMessage::LearnedSkillMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LearnedSkillMessage::~LearnedSkillMessage() {
		free(Fields);
}

const char* LearnedSkillMessage::Name() {
		return "LearnedSkillMessage";
}
	
void* LearnedSkillMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* LearnedSkillMessage::aSkillSNOs(void *Data) {
	return ((char*)Data) + 8;
}

LearnedSkillMessage aLearnedSkillMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
AttributeCreateMessage::~AttributeCreateMessage() {
		free(Fields);
}

const char* AttributeCreateMessage::Name() {
		return "AttributeCreateMessage";
}
	
void* AttributeCreateMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* AttributeCreateMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* AttributeCreateMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* AttributeCreateMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* AttributeCreateMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AttributeDeleteMessage::~AttributeDeleteMessage() {
		free(Fields);
}

const char* AttributeDeleteMessage::Name() {
		return "AttributeDeleteMessage";
}
	
void* AttributeDeleteMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* AttributeDeleteMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* AttributeDeleteMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

AttributeDeleteMessage aAttributeDeleteMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 8, 0);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_SNO, 24, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ProjectileStickMessage::~ProjectileStickMessage() {
		free(Fields);
}

const char* ProjectileStickMessage::Name() {
		return "ProjectileStickMessage";
}
	
void* ProjectileStickMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ProjectileStickMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* ProjectileStickMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* ProjectileStickMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}

ProjectileStickMessage aProjectileStickMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 3);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerActorSetInitialMessage::~PlayerActorSetInitialMessage() {
		free(Fields);
}

const char* PlayerActorSetInitialMessage::Name() {
		return "PlayerActorSetInitialMessage";
}
	
void* PlayerActorSetInitialMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerActorSetInitialMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayerActorSetInitialMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

PlayerActorSetInitialMessage aPlayerActorSetInitialMessage;
// AnimPreplayData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AnimPreplayData::New() {
}

AnimPreplayData::AnimPreplayData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AnimPreplayData::~AnimPreplayData() {
		free(Fields);
}

const char* AnimPreplayData::Name() {
		return "AnimPreplayData";
}
	
int* AnimPreplayData::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* AnimPreplayData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* AnimPreplayData::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

AnimPreplayData aAnimPreplayData;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 2);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aWorldPlace, 16, 0);
		Fields[4].fieldinfo(&aDT_SNO, 32, 32);
		Fields[5].fieldinfo(&aDT_INT, 36, 32);
		Fields[6].fieldinfo(&aDT_INT, 40, 2);
		Fields[7].fieldinfo(&aDT_OPTIONAL, 44, 0);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
TargetMessage::~TargetMessage() {
		free(Fields);
}

const char* TargetMessage::Name() {
		return "TargetMessage";
}
	
void* TargetMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* TargetMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* TargetMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* TargetMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
void* TargetMessage::snoPower(void *Data) {
	return ((char*)Data) + 32;
}
int* TargetMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* TargetMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 40;
}
void* TargetMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 44;
}

TargetMessage aTargetMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_OPTIONAL, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SecondaryAnimationPowerMessage::~SecondaryAnimationPowerMessage() {
		free(Fields);
}

const char* SecondaryAnimationPowerMessage::Name() {
		return "SecondaryAnimationPowerMessage";
}
	
void* SecondaryAnimationPowerMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* SecondaryAnimationPowerMessage::snoPower(void *Data) {
	return ((char*)Data) + 8;
}
void* SecondaryAnimationPowerMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

SecondaryAnimationPowerMessage aSecondaryAnimationPowerMessage;
// TryConsoleCommand
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* TryConsoleCommand::New() {
}

TryConsoleCommand::TryConsoleCommand() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 12, 10);
		Fields[2].fieldinfo(&aDT_INT, 8, 4);
		Fields[3].fieldinfo(&aWorldPlace, 524, 0);
		Fields[4].fieldinfo(&aDT_INT, 540, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
TryConsoleCommand::~TryConsoleCommand() {
		free(Fields);
}

const char* TryConsoleCommand::Name() {
		return "TryConsoleCommand";
}
	
void* TryConsoleCommand::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* TryConsoleCommand::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
int* TryConsoleCommand::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* TryConsoleCommand::unknow_field_3(void *Data) {
	return ((char*)Data) + 524;
}
int* TryConsoleCommand::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 540;
}

TryConsoleCommand aTryConsoleCommand;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 4);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 16, 10);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
TryChatMessage::~TryChatMessage() {
		free(Fields);
}

const char* TryChatMessage::Name() {
		return "TryChatMessage";
}
	
void* TryChatMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* TryChatMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* TryChatMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* TryChatMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

TryChatMessage aTryChatMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 2);
		Fields[2].fieldinfo(&aDT_INT, 12, 4);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 16, 10);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ChatMessage::~ChatMessage() {
		free(Fields);
}

const char* ChatMessage::Name() {
		return "ChatMessage";
}
	
void* ChatMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ChatMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ChatMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* ChatMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

ChatMessage aChatMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 7);
		Fields[3].fieldinfo(&aDT_INT, 16, 4);
		Fields[4].fieldinfo(&aDT_INT, 20, 4);
		Fields[5].fieldinfo(&aDT_SNO, 24, 32);
		Fields[6].fieldinfo(&aDT_SNO, 28, 32);
		Fields[7].fieldinfo(&aDT_INT, 32, 5);
		Fields[8].fieldinfo(&aDT_FIXEDARRAY, 36, 32);
		Fields[9].fieldinfo(&aDT_SNO, 44, 32);
		Fields[11 - 1].fieldinfo(NULL, 0, 0);
	}
VictimMessage::~VictimMessage() {
		free(Fields);
}

const char* VictimMessage::Name() {
		return "VictimMessage";
}
	
void* VictimMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* VictimMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* VictimMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* VictimMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* VictimMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* VictimMessage::snoKillerMonster(void *Data) {
	return ((char*)Data) + 24;
}
void* VictimMessage::snoKillerActor(void *Data) {
	return ((char*)Data) + 28;
}
int* VictimMessage::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* VictimMessage::unknow_field_8(void *Data) {
	return ((char*)Data) + 36;
}
void* VictimMessage::snoPowerDmgSource(void *Data) {
	return ((char*)Data) + 44;
}

VictimMessage aVictimMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
KillCountMessage::~KillCountMessage() {
		free(Fields);
}

const char* KillCountMessage::Name() {
		return "KillCountMessage";
}
	
void* KillCountMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* KillCountMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* KillCountMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* KillCountMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* KillCountMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}

KillCountMessage aKillCountMessage;
// InvLoc
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* InvLoc::New() {
}

InvLoc::InvLoc() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 5);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
InvLoc::~InvLoc() {
		free(Fields);
}

const char* InvLoc::Name() {
		return "InvLoc";
}
	
int* InvLoc::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* InvLoc::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* InvLoc::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* InvLoc::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

InvLoc aInvLoc;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aInvLoc, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
InventoryRequestMoveMessage::~InventoryRequestMoveMessage() {
		free(Fields);
}

const char* InventoryRequestMoveMessage::Name() {
		return "InventoryRequestMoveMessage";
}
	
void* InventoryRequestMoveMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* InventoryRequestMoveMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* InventoryRequestMoveMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

InventoryRequestMoveMessage aInventoryRequestMoveMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT64, 16, 64);
		Fields[3].fieldinfo(&aInvLoc, 24, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
InventorySplitStackMessage::~InventorySplitStackMessage() {
		free(Fields);
}

const char* InventorySplitStackMessage::Name() {
		return "InventorySplitStackMessage";
}
	
void* InventorySplitStackMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* InventorySplitStackMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* InventorySplitStackMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}
void* InventorySplitStackMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT64, 16, 64);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
InventoryStackTransferMessage::~InventoryStackTransferMessage() {
		free(Fields);
}

const char* InventoryStackTransferMessage::Name() {
		return "InventoryStackTransferMessage";
}
	
void* InventoryStackTransferMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* InventoryStackTransferMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* InventoryStackTransferMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* InventoryStackTransferMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

InventoryStackTransferMessage aInventoryStackTransferMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 2);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aWorldPlace, 20, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
InventoryRequestUseMessage::~InventoryRequestUseMessage() {
		free(Fields);
}

const char* InventoryRequestUseMessage::Name() {
		return "InventoryRequestUseMessage";
}
	
void* InventoryRequestUseMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* InventoryRequestUseMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* InventoryRequestUseMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* InventoryRequestUseMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* InventoryRequestUseMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 20;
}

InventoryRequestUseMessage aInventoryRequestUseMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
InventoryRequestSocketMessage::~InventoryRequestSocketMessage() {
		free(Fields);
}

const char* InventoryRequestSocketMessage::Name() {
		return "InventoryRequestSocketMessage";
}
	
void* InventoryRequestSocketMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* InventoryRequestSocketMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* InventoryRequestSocketMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

InventoryRequestSocketMessage aInventoryRequestSocketMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SocketSpellMessage::~SocketSpellMessage() {
		free(Fields);
}

const char* SocketSpellMessage::Name() {
		return "SocketSpellMessage";
}
	
void* SocketSpellMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* SocketSpellMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* SocketSpellMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

SocketSpellMessage aSocketSpellMessage;
// HelperDetachMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* HelperDetachMessage::New() {
}

HelperDetachMessage::HelperDetachMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
HelperDetachMessage::~HelperDetachMessage() {
		free(Fields);
}

const char* HelperDetachMessage::Name() {
		return "HelperDetachMessage";
}
	
void* HelperDetachMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* HelperDetachMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

HelperDetachMessage aHelperDetachMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 5);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 5);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
PetMessage::~PetMessage() {
		free(Fields);
}

const char* PetMessage::Name() {
		return "PetMessage";
}
	
void* PetMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PetMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PetMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* PetMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* PetMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}

PetMessage aPetMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[3].fieldinfo(&aDT_SNO, 16, 32);
		Fields[4].fieldinfo(&aVector3D, 20, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
FlippyMessage::~FlippyMessage() {
		free(Fields);
}

const char* FlippyMessage::Name() {
		return "FlippyMessage";
}
	
void* FlippyMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* FlippyMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* FlippyMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* FlippyMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
void* FlippyMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 20;
}

FlippyMessage aFlippyMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_SNO, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 32);
		Fields[5].fieldinfo(&aDT_INT, 24, 32);
		Fields[6].fieldinfo(&aDT_INT, 28, 32);
		Fields[7].fieldinfo(&aDT_INT, 32, 32);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
ComplexEffectAddMessage::~ComplexEffectAddMessage() {
		free(Fields);
}

const char* ComplexEffectAddMessage::Name() {
		return "ComplexEffectAddMessage";
}
	
void* ComplexEffectAddMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ComplexEffectAddMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ComplexEffectAddMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* ComplexEffectAddMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
int* ComplexEffectAddMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* ComplexEffectAddMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* ComplexEffectAddMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* ComplexEffectAddMessage::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 32;
}

ComplexEffectAddMessage aComplexEffectAddMessage;
// PlayerLevel
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* PlayerLevel::New() {
}

PlayerLevel::PlayerLevel() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 7);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerLevel::~PlayerLevel() {
		free(Fields);
}

const char* PlayerLevel::Name() {
		return "PlayerLevel";
}
	
void* PlayerLevel::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerLevel::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayerLevel::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

PlayerLevel aPlayerLevel;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 2);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aWorldPlace, 20, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
AimTargetMessage::~AimTargetMessage() {
		free(Fields);
}

const char* AimTargetMessage::Name() {
		return "AimTargetMessage";
}
	
void* AimTargetMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* AimTargetMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* AimTargetMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* AimTargetMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* AimTargetMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 20;
}

AimTargetMessage aAimTargetMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aGBHandle, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ACDChangeGBHandleMessage::~ACDChangeGBHandleMessage() {
		free(Fields);
}

const char* ACDChangeGBHandleMessage::Name() {
		return "ACDChangeGBHandleMessage";
}
	
void* ACDChangeGBHandleMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDChangeGBHandleMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* ACDChangeGBHandleMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

ACDChangeGBHandleMessage aACDChangeGBHandleMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[3].fieldinfo(&aWorldPlace, 16, 0);
		Fields[4].fieldinfo(&aDT_OPTIONAL, 32, 4);
		Fields[5].fieldinfo(&aDT_SNO, 40, 32);
		Fields[6].fieldinfo(&aDT_OPTIONAL, 44, 32);
		Fields[7].fieldinfo(&aDT_INT, 52, 4);
		Fields[8].fieldinfo(&aDT_INT, 56, 6);
		Fields[9].fieldinfo(&aDT_OPTIONAL, 60, 32);
		Fields[10].fieldinfo(&aDT_OPTIONAL, 68, 32);
		Fields[11].fieldinfo(&aDT_OPTIONAL, 76, 32);
		Fields[12].fieldinfo(&aDT_OPTIONAL, 84, 32);
		Fields[13].fieldinfo(&aDT_OPTIONAL, 92, 32);
		Fields[14].fieldinfo(&aDT_OPTIONAL, 100, 32);
		Fields[15].fieldinfo(&aDT_OPTIONAL, 108, 32);
		Fields[17 - 1].fieldinfo(NULL, 0, 0);
	}
TrickleMessage::~TrickleMessage() {
		free(Fields);
}

const char* TrickleMessage::Name() {
		return "TrickleMessage";
}
	
void* TrickleMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* TrickleMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* TrickleMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* TrickleMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
void* TrickleMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 32;
}
void* TrickleMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 40;
}
void* TrickleMessage::unknow_field_6(void *Data) {
	return ((char*)Data) + 44;
}
int* TrickleMessage::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* TrickleMessage::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 56;
}
void* TrickleMessage::unknow_field_9(void *Data) {
	return ((char*)Data) + 60;
}
void* TrickleMessage::unknow_field_10(void *Data) {
	return ((char*)Data) + 68;
}
void* TrickleMessage::unknow_field_11(void *Data) {
	return ((char*)Data) + 76;
}
void* TrickleMessage::unknow_field_12(void *Data) {
	return ((char*)Data) + 84;
}
void* TrickleMessage::unknow_field_13(void *Data) {
	return ((char*)Data) + 92;
}
void* TrickleMessage::unknow_field_14(void *Data) {
	return ((char*)Data) + 100;
}
void* TrickleMessage::unknow_field_15(void *Data) {
	return ((char*)Data) + 108;
}

TrickleMessage aTrickleMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerInteractMessage::~PlayerInteractMessage() {
		free(Fields);
}

const char* PlayerInteractMessage::Name() {
		return "PlayerInteractMessage";
}
	
void* PlayerInteractMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerInteractMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayerInteractMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

PlayerInteractMessage aPlayerInteractMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerIntValMessage::~PlayerIntValMessage() {
		free(Fields);
}

const char* PlayerIntValMessage::Name() {
		return "PlayerIntValMessage";
}
	
void* PlayerIntValMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerIntValMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayerIntValMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

PlayerIntValMessage aPlayerIntValMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 4);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
UIElementMessage::~UIElementMessage() {
		free(Fields);
}

const char* UIElementMessage::Name() {
		return "UIElementMessage";
}
	
void* UIElementMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* UIElementMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* UIElementMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

UIElementMessage aUIElementMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlasmaAttachMessage::~PlasmaAttachMessage() {
		free(Fields);
}

const char* PlasmaAttachMessage::Name() {
		return "PlasmaAttachMessage";
}
	
void* PlasmaAttachMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlasmaAttachMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlasmaAttachMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

PlasmaAttachMessage aPlasmaAttachMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aWorldPlace, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
RitualTetherEffectMessage::~RitualTetherEffectMessage() {
		free(Fields);
}

const char* RitualTetherEffectMessage::Name() {
		return "RitualTetherEffectMessage";
}
	
void* RitualTetherEffectMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* RitualTetherEffectMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* RitualTetherEffectMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

RitualTetherEffectMessage aRitualTetherEffectMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 2);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 7);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
HirelingInfoUpdateMessage::~HirelingInfoUpdateMessage() {
		free(Fields);
}

const char* HirelingInfoUpdateMessage::Name() {
		return "HirelingInfoUpdateMessage";
}
	
void* HirelingInfoUpdateMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* HirelingInfoUpdateMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* HirelingInfoUpdateMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* HirelingInfoUpdateMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* HirelingInfoUpdateMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}

HirelingInfoUpdateMessage aHirelingInfoUpdateMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 5);
		Fields[2].fieldinfo(&aDT_INT, 12, 2);
		Fields[3].fieldinfo(&aDT_INT, 16, 2);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
RevealTeamMessage::~RevealTeamMessage() {
		free(Fields);
}

const char* RevealTeamMessage::Name() {
		return "RevealTeamMessage";
}
	
void* RevealTeamMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* RevealTeamMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* RevealTeamMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* RevealTeamMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

RevealTeamMessage aRevealTeamMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 11);
		Fields[3].fieldinfo(&aDT_INT, 16, 11);
		Fields[4].fieldinfo(&aDT_INT, 20, 1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
DeathFadeTimeMessage::~DeathFadeTimeMessage() {
		free(Fields);
}

const char* DeathFadeTimeMessage::Name() {
		return "DeathFadeTimeMessage";
}
	
void* DeathFadeTimeMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* DeathFadeTimeMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* DeathFadeTimeMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* DeathFadeTimeMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* DeathFadeTimeMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}

DeathFadeTimeMessage aDeathFadeTimeMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[3].fieldinfo(&aPRTransform, 16, 0);
		Fields[4].fieldinfo(&aDT_INT, 44, 32);
		Fields[5].fieldinfo(&aDT_INT, 48, 3);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
MapRevealSceneMessage::~MapRevealSceneMessage() {
		free(Fields);
}

const char* MapRevealSceneMessage::Name() {
		return "MapRevealSceneMessage";
}
	
void* MapRevealSceneMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* MapRevealSceneMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* MapRevealSceneMessage::snoScene(void *Data) {
	return ((char*)Data) + 12;
}
void* MapRevealSceneMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
int* MapRevealSceneMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 44;
}
int* MapRevealSceneMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 48;
}

MapRevealSceneMessage aMapRevealSceneMessage;
// SavePointInfoMessage
//
// { unknow_field_0 }
// { snoLevelArea }


void* SavePointInfoMessage::New() {
}

SavePointInfoMessage::SavePointInfoMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SavePointInfoMessage::~SavePointInfoMessage() {
		free(Fields);
}

const char* SavePointInfoMessage::Name() {
		return "SavePointInfoMessage";
}
	
void* SavePointInfoMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* SavePointInfoMessage::snoLevelArea(void *Data) {
	return ((char*)Data) + 8;
}

SavePointInfoMessage aSavePointInfoMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
HearthPortalInfoMessage::~HearthPortalInfoMessage() {
		free(Fields);
}

const char* HearthPortalInfoMessage::Name() {
		return "HearthPortalInfoMessage";
}
	
void* HearthPortalInfoMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* HearthPortalInfoMessage::snoLevelArea(void *Data) {
	return ((char*)Data) + 8;
}
int* HearthPortalInfoMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

HearthPortalInfoMessage aHearthPortalInfoMessage;
// ReturnPointInfoMessage
//
// { unknow_field_0 }
// { snoLevelArea }


void* ReturnPointInfoMessage::New() {
}

ReturnPointInfoMessage::ReturnPointInfoMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
ReturnPointInfoMessage::~ReturnPointInfoMessage() {
		free(Fields);
}

const char* ReturnPointInfoMessage::Name() {
		return "ReturnPointInfoMessage";
}
	
void* ReturnPointInfoMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ReturnPointInfoMessage::snoLevelArea(void *Data) {
	return ((char*)Data) + 8;
}

ReturnPointInfoMessage aReturnPointInfoMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ACDLookAtMessage::~ACDLookAtMessage() {
		free(Fields);
}

const char* ACDLookAtMessage::Name() {
		return "ACDLookAtMessage";
}
	
void* ACDLookAtMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ACDLookAtMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ACDLookAtMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

ACDLookAtMessage aACDLookAtMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 2);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
KillCounterUpdateMessage::~KillCounterUpdateMessage() {
		free(Fields);
}

const char* KillCounterUpdateMessage::Name() {
		return "KillCounterUpdateMessage";
}
	
void* KillCounterUpdateMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* KillCounterUpdateMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* KillCounterUpdateMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* KillCounterUpdateMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* KillCounterUpdateMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}

KillCounterUpdateMessage aKillCounterUpdateMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
LowHealthCombatMessage::~LowHealthCombatMessage() {
		free(Fields);
}

const char* LowHealthCombatMessage::Name() {
		return "LowHealthCombatMessage";
}
	
void* LowHealthCombatMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* LowHealthCombatMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* LowHealthCombatMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

LowHealthCombatMessage aLowHealthCombatMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SaviorMessage::~SaviorMessage() {
		free(Fields);
}

const char* SaviorMessage::Name() {
		return "SaviorMessage";
}
	
void* SaviorMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* SaviorMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* SaviorMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

SaviorMessage aSaviorMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 6);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
FloatingNumberMessage::~FloatingNumberMessage() {
		free(Fields);
}

const char* FloatingNumberMessage::Name() {
		return "FloatingNumberMessage";
}
	
void* FloatingNumberMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* FloatingNumberMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* FloatingNumberMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* FloatingNumberMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

FloatingNumberMessage aFloatingNumberMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aWorldPlace, 8, 0);
		Fields[2].fieldinfo(&aDT_INT, 24, 32);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 28, 32);
		Fields[4].fieldinfo(&aDT_INT, 36, 6);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
FloatingAmountMessage::~FloatingAmountMessage() {
		free(Fields);
}

const char* FloatingAmountMessage::Name() {
		return "FloatingAmountMessage";
}
	
void* FloatingAmountMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* FloatingAmountMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* FloatingAmountMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 24;
}
void* FloatingAmountMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 28;
}
int* FloatingAmountMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 36;
}

FloatingAmountMessage aFloatingAmountMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
RemoveRagdollMessage::~RemoveRagdollMessage() {
		free(Fields);
}

const char* RemoveRagdollMessage::Name() {
		return "RemoveRagdollMessage";
}
	
void* RemoveRagdollMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* RemoveRagdollMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* RemoveRagdollMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

RemoveRagdollMessage aRemoveRagdollMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
WorldStatusMessage::~WorldStatusMessage() {
		free(Fields);
}

const char* WorldStatusMessage::Name() {
		return "WorldStatusMessage";
}
	
void* WorldStatusMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* WorldStatusMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* WorldStatusMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

WorldStatusMessage aWorldStatusMessage;
// WorldDeletedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* WorldDeletedMessage::New() {
}

WorldDeletedMessage::WorldDeletedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
WorldDeletedMessage::~WorldDeletedMessage() {
		free(Fields);
}

const char* WorldDeletedMessage::Name() {
		return "WorldDeletedMessage";
}
	
void* WorldDeletedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* WorldDeletedMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

WorldDeletedMessage aWorldDeletedMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 1);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[3].fieldinfo(&aDT_INT, 16, 1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
BlizzconCVarsMessage::~BlizzconCVarsMessage() {
		free(Fields);
}

const char* BlizzconCVarsMessage::Name() {
		return "BlizzconCVarsMessage";
}
	
void* BlizzconCVarsMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* BlizzconCVarsMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* BlizzconCVarsMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* BlizzconCVarsMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

BlizzconCVarsMessage aBlizzconCVarsMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
WeatherOverrideMessage::~WeatherOverrideMessage() {
		free(Fields);
}

const char* WeatherOverrideMessage::Name() {
		return "WeatherOverrideMessage";
}
	
void* WeatherOverrideMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* WeatherOverrideMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* WeatherOverrideMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

WeatherOverrideMessage aWeatherOverrideMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_SNO, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
WaypointActivatedMessage::~WaypointActivatedMessage() {
		free(Fields);
}

const char* WaypointActivatedMessage::Name() {
		return "WaypointActivatedMessage";
}
	
void* WaypointActivatedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* WaypointActivatedMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* WaypointActivatedMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* WaypointActivatedMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

WaypointActivatedMessage aWaypointActivatedMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 5);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
TryWaypointMessage::~TryWaypointMessage() {
		free(Fields);
}

const char* TryWaypointMessage::Name() {
		return "TryWaypointMessage";
}
	
void* TryWaypointMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* TryWaypointMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* TryWaypointMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

TryWaypointMessage aTryWaypointMessage;
// LoreMessage
//
// { unknow_field_0 }
// { snoLore }


void* LoreMessage::New() {
}

LoreMessage::LoreMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
LoreMessage::~LoreMessage() {
		free(Fields);
}

const char* LoreMessage::Name() {
		return "LoreMessage";
}
	
void* LoreMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* LoreMessage::snoLore(void *Data) {
	return ((char*)Data) + 8;
}

LoreMessage aLoreMessage;
// PRTransformMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PRTransformMessage::New() {
}

PRTransformMessage::PRTransformMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aPRTransform, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PRTransformMessage::~PRTransformMessage() {
		free(Fields);
}

const char* PRTransformMessage::Name() {
		return "PRTransformMessage";
}
	
void* PRTransformMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PRTransformMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

PRTransformMessage aPRTransformMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 4);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerQuestMessage::~PlayerQuestMessage() {
		free(Fields);
}

const char* PlayerQuestMessage::Name() {
		return "PlayerQuestMessage";
}
	
void* PlayerQuestMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerQuestMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* PlayerQuestMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

PlayerQuestMessage aPlayerQuestMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aWorldPlace, 8, 0);
		Fields[2].fieldinfo(&aDT_SNO, 24, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerDeSyncSnapMessage::~PlayerDeSyncSnapMessage() {
		free(Fields);
}

const char* PlayerDeSyncSnapMessage::Name() {
		return "PlayerDeSyncSnapMessage";
}
	
void* PlayerDeSyncSnapMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PlayerDeSyncSnapMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* PlayerDeSyncSnapMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}

PlayerDeSyncSnapMessage aPlayerDeSyncSnapMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 4);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT64, 24, 64);
		Fields[5].fieldinfo(&aDT_INT, 32, 32);
		Fields[6].fieldinfo(&aDT_FIXEDARRAY, 36, 32);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
TradeMessage::~TradeMessage() {
		free(Fields);
}

const char* TradeMessage::Name() {
		return "TradeMessage";
}
	
void* TradeMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* TradeMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* TradeMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* TradeMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* TradeMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 24;
}
int* TradeMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* TradeMessage::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}

TradeMessage aTradeMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aWorldPlace, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 28, 32);
		Fields[4].fieldinfo(&aDT_SNO, 36, 32);
		Fields[5].fieldinfo(&aDT_INT, 40, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 60, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[9].fieldinfo(&aDT_INT, 32, 32);
		Fields[10].fieldinfo(&aDT_INT, 44, 1);
		Fields[11].fieldinfo(&aDT_INT, 48, 1);
		Fields[12].fieldinfo(&aDT_INT, 52, 1);
		Fields[13].fieldinfo(&aDT_INT, 68, 32);
		Fields[15 - 1].fieldinfo(NULL, 0, 0);
	}
MapMarkerInfoMessage::~MapMarkerInfoMessage() {
		free(Fields);
}

const char* MapMarkerInfoMessage::Name() {
		return "MapMarkerInfoMessage";
}
	
void* MapMarkerInfoMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* MapMarkerInfoMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* MapMarkerInfoMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* MapMarkerInfoMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 28;
}
void* MapMarkerInfoMessage::m_snoStringList(void *Data) {
	return ((char*)Data) + 36;
}
int* MapMarkerInfoMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 40;
}
void* MapMarkerInfoMessage::unknow_field_6(void *Data) {
	return ((char*)Data) + 56;
}
void* MapMarkerInfoMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 60;
}
void* MapMarkerInfoMessage::unknow_field_8(void *Data) {
	return ((char*)Data) + 64;
}
int* MapMarkerInfoMessage::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 32;
}
int* MapMarkerInfoMessage::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 44;
}
int* MapMarkerInfoMessage::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 48;
}
int* MapMarkerInfoMessage::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* MapMarkerInfoMessage::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 68;
}

MapMarkerInfoMessage aMapMarkerInfoMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 5);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AssignSkillMessage::~AssignSkillMessage() {
		free(Fields);
}

const char* AssignSkillMessage::Name() {
		return "AssignSkillMessage";
}
	
void* AssignSkillMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AssignSkillMessage::snoPower(void *Data) {
	return ((char*)Data) + 8;
}
int* AssignSkillMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

AssignSkillMessage aAssignSkillMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
BossEncounterMessage::~BossEncounterMessage() {
		free(Fields);
}

const char* BossEncounterMessage::Name() {
		return "BossEncounterMessage";
}
	
void* BossEncounterMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* BossEncounterMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* BossEncounterMessage::snoEncounter(void *Data) {
	return ((char*)Data) + 12;
}

BossEncounterMessage aBossEncounterMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 9, 32);
		Fields[3].fieldinfo(&aDT_INT, 10, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
EncounterInviteStateMessage::~EncounterInviteStateMessage() {
		free(Fields);
}

const char* EncounterInviteStateMessage::Name() {
		return "EncounterInviteStateMessage";
}
	
void* EncounterInviteStateMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* EncounterInviteStateMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* EncounterInviteStateMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 9;
}
int* EncounterInviteStateMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 10;
}

EncounterInviteStateMessage aEncounterInviteStateMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 10);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ActTransitionMessage::~ActTransitionMessage() {
		free(Fields);
}

const char* ActTransitionMessage::Name() {
		return "ActTransitionMessage";
}
	
void* ActTransitionMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ActTransitionMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ActTransitionMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

ActTransitionMessage aActTransitionMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
InterstitialMessage::~InterstitialMessage() {
		free(Fields);
}

const char* InterstitialMessage::Name() {
		return "InterstitialMessage";
}
	
void* InterstitialMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* InterstitialMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* InterstitialMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

InterstitialMessage aInterstitialMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
CameraFocusMessage::~CameraFocusMessage() {
		free(Fields);
}

const char* CameraFocusMessage::Name() {
		return "CameraFocusMessage";
}
	
void* CameraFocusMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* CameraFocusMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* CameraFocusMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* CameraFocusMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

CameraFocusMessage aCameraFocusMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aVector3D, 20, 0);
		Fields[5].fieldinfo(&aVector3D, 32, 0);
		Fields[6].fieldinfo(&aDT_FLOAT, 44, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[8].fieldinfo(&aDT_INT, 52, 32);
		Fields[9].fieldinfo(&aRGBAColor, 56, 0);
		Fields[10].fieldinfo(&aDT_CHARARRAY, 60, 8);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
DebugDrawPrimMessage::~DebugDrawPrimMessage() {
		free(Fields);
}

const char* DebugDrawPrimMessage::Name() {
		return "DebugDrawPrimMessage";
}
	
void* DebugDrawPrimMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* DebugDrawPrimMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* DebugDrawPrimMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* DebugDrawPrimMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* DebugDrawPrimMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 20;
}
void* DebugDrawPrimMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* DebugDrawPrimMessage::unknow_field_6(void *Data) {
	return ((char*)Data) + 44;
}
void* DebugDrawPrimMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 48;
}
int* DebugDrawPrimMessage::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 52;
}
void* DebugDrawPrimMessage::unknow_field_9(void *Data) {
	return ((char*)Data) + 56;
}
void* DebugDrawPrimMessage::unknow_field_10(void *Data) {
	return ((char*)Data) + 60;
}

DebugDrawPrimMessage aDebugDrawPrimMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
CameraZoomMessage::~CameraZoomMessage() {
		free(Fields);
}

const char* CameraZoomMessage::Name() {
		return "CameraZoomMessage";
}
	
void* CameraZoomMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* CameraZoomMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* CameraZoomMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* CameraZoomMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

CameraZoomMessage aCameraZoomMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_ANGLE, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[3].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
CameraYawMessage::~CameraYawMessage() {
		free(Fields);
}

const char* CameraYawMessage::Name() {
		return "CameraYawMessage";
}
	
void* CameraYawMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* CameraYawMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* CameraYawMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* CameraYawMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

CameraYawMessage aCameraYawMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
BossZoomMessage::~BossZoomMessage() {
		free(Fields);
}

const char* BossZoomMessage::Name() {
		return "BossZoomMessage";
}
	
void* BossZoomMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* BossZoomMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* BossZoomMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

BossZoomMessage aBossZoomMessage;
// PlayCutsceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PlayCutsceneMessage::New() {
}

PlayCutsceneMessage::PlayCutsceneMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PlayCutsceneMessage::~PlayCutsceneMessage() {
		free(Fields);
}

const char* PlayCutsceneMessage::Name() {
		return "PlayCutsceneMessage";
}
	
void* PlayCutsceneMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayCutsceneMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

PlayCutsceneMessage aPlayCutsceneMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 4);
		Fields[2].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerWarpedMessage::~PlayerWarpedMessage() {
		free(Fields);
}

const char* PlayerWarpedMessage::Name() {
		return "PlayerWarpedMessage";
}
	
void* PlayerWarpedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerWarpedMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* PlayerWarpedMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

PlayerWarpedMessage aPlayerWarpedMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 12, 10);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
DebugActorTooltipMessage::~DebugActorTooltipMessage() {
		free(Fields);
}

const char* DebugActorTooltipMessage::Name() {
		return "DebugActorTooltipMessage";
}
	
void* DebugActorTooltipMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* DebugActorTooltipMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* DebugActorTooltipMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

DebugActorTooltipMessage aDebugActorTooltipMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_GBID, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 4);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_FIXEDARRAY, 20, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
SalvageResultsMessage::~SalvageResultsMessage() {
		free(Fields);
}

const char* SalvageResultsMessage::Name() {
		return "SalvageResultsMessage";
}
	
void* SalvageResultsMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* SalvageResultsMessage::gbidOriginalItem(void *Data) {
	return ((char*)Data) + 8;
}
int* SalvageResultsMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* SalvageResultsMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* SalvageResultsMessage::gbidNewItems(void *Data) {
	return ((char*)Data) + 20;
}

SalvageResultsMessage aSalvageResultsMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
GameTestingSamplingStartMessage::~GameTestingSamplingStartMessage() {
		free(Fields);
}

const char* GameTestingSamplingStartMessage::Name() {
		return "GameTestingSamplingStartMessage";
}
	
void* GameTestingSamplingStartMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* GameTestingSamplingStartMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* GameTestingSamplingStartMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

GameTestingSamplingStartMessage aGameTestingSamplingStartMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
RequestBuffCancelMessage::~RequestBuffCancelMessage() {
		free(Fields);
}

const char* RequestBuffCancelMessage::Name() {
		return "RequestBuffCancelMessage";
}
	
void* RequestBuffCancelMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* RequestBuffCancelMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* RequestBuffCancelMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

RequestBuffCancelMessage aRequestBuffCancelMessage;
// PlayErrorSoundMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PlayErrorSoundMessage::New() {
}

PlayErrorSoundMessage::PlayErrorSoundMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PlayErrorSoundMessage::~PlayErrorSoundMessage() {
		free(Fields);
}

const char* PlayErrorSoundMessage::Name() {
		return "PlayErrorSoundMessage";
}
	
void* PlayErrorSoundMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayErrorSoundMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

PlayErrorSoundMessage aPlayErrorSoundMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_SNO, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
HirelingRequestLearnSkillMessage::~HirelingRequestLearnSkillMessage() {
		free(Fields);
}

const char* HirelingRequestLearnSkillMessage::Name() {
		return "HirelingRequestLearnSkillMessage";
}
	
void* HirelingRequestLearnSkillMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* HirelingRequestLearnSkillMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* HirelingRequestLearnSkillMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

HirelingRequestLearnSkillMessage aHirelingRequestLearnSkillMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 1);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
LogoutTickTimeMessage::~LogoutTickTimeMessage() {
		free(Fields);
}

const char* LogoutTickTimeMessage::Name() {
		return "LogoutTickTimeMessage";
}
	
void* LogoutTickTimeMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* LogoutTickTimeMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* LogoutTickTimeMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* LogoutTickTimeMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

LogoutTickTimeMessage aLogoutTickTimeMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 16, 6);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
VersionsMessage::~VersionsMessage() {
		free(Fields);
}

const char* VersionsMessage::Name() {
		return "VersionsMessage";
}
	
void* VersionsMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* VersionsMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* VersionsMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* VersionsMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

VersionsMessage aVersionsMessage;
// VisualItem
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* VisualItem::New() {
}

VisualItem::VisualItem() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_GBID, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 5);
		Fields[2].fieldinfo(&aDT_INT, 8, 4);
		Fields[3].fieldinfo(&aDT_INT, 12, 5);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
VisualItem::~VisualItem() {
		free(Fields);
}

const char* VisualItem::Name() {
		return "VisualItem";
}
	
void* VisualItem::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* VisualItem::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* VisualItem::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* VisualItem::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

VisualItem aVisualItem;
// VisualEquipment
//
// { unknow_field_0 }


void* VisualEquipment::New() {
}

VisualEquipment::VisualEquipment() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 0);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
VisualEquipment::~VisualEquipment() {
		free(Fields);
}

const char* VisualEquipment::Name() {
		return "VisualEquipment";
}
	
void* VisualEquipment::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

VisualEquipment aVisualEquipment;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aVisualEquipment, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
VisualInventoryMessage::~VisualInventoryMessage() {
		free(Fields);
}

const char* VisualInventoryMessage::Name() {
		return "VisualInventoryMessage";
}
	
void* VisualInventoryMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* VisualInventoryMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* VisualInventoryMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

VisualInventoryMessage aVisualInventoryMessage;
// NPCInteraction
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* NPCInteraction::New() {
}

NPCInteraction::NPCInteraction() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 4);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 2);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
NPCInteraction::~NPCInteraction() {
		free(Fields);
}

const char* NPCInteraction::Name() {
		return "NPCInteraction";
}
	
int* NPCInteraction::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* NPCInteraction::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* NPCInteraction::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* NPCInteraction::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

NPCInteraction aNPCInteraction;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 336, 2);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
NPCInteractOptionsMessage::~NPCInteractOptionsMessage() {
		free(Fields);
}

const char* NPCInteractOptionsMessage::Name() {
		return "NPCInteractOptionsMessage";
}
	
void* NPCInteractOptionsMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* NPCInteractOptionsMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* NPCInteractOptionsMessage::tNPCInteraction(void *Data) {
	return ((char*)Data) + 12;
}
int* NPCInteractOptionsMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 336;
}

NPCInteractOptionsMessage aNPCInteractOptionsMessage;
// NetAttributeKeyValue
//
// { unknow_field_0 }
// { unknow_field_1 }


void* NetAttributeKeyValue::New() {
}

NetAttributeKeyValue::NetAttributeKeyValue() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_OPTIONAL, 0, 20);
		Fields[1].fieldinfo(&aDT_INT, 8, 10);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
NetAttributeKeyValue::~NetAttributeKeyValue() {
		free(Fields);
}

const char* NetAttributeKeyValue::Name() {
		return "NetAttributeKeyValue";
}
	
void* NetAttributeKeyValue::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* NetAttributeKeyValue::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

NetAttributeKeyValue aNetAttributeKeyValue;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aNetAttributeKeyValue, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AttributeSetValueMessage::~AttributeSetValueMessage() {
		free(Fields);
}

const char* AttributeSetValueMessage::Name() {
		return "AttributeSetValueMessage";
}
	
void* AttributeSetValueMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* AttributeSetValueMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* AttributeSetValueMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 16, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AttributesSetValuesMessage::~AttributesSetValuesMessage() {
		free(Fields);
}

const char* AttributesSetValuesMessage::Name() {
		return "AttributesSetValuesMessage";
}
	
void* AttributesSetValuesMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* AttributesSetValuesMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* AttributesSetValuesMessage::atKeyVals(void *Data) {
	return ((char*)Data) + 16;
}

AttributesSetValuesMessage aAttributesSetValuesMessage;
// HirelingSwapMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* HirelingSwapMessage::New() {
}

HirelingSwapMessage::HirelingSwapMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
HirelingSwapMessage::~HirelingSwapMessage() {
		free(Fields);
}

const char* HirelingSwapMessage::Name() {
		return "HirelingSwapMessage";
}
	
void* HirelingSwapMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* HirelingSwapMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}

HirelingSwapMessage aHirelingSwapMessage;
// HotbarButtonData
//
// { m_snoPower }
// { m_gbidItem }


void* HotbarButtonData::New() {
}

HotbarButtonData::HotbarButtonData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_GBID, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
HotbarButtonData::~HotbarButtonData() {
		free(Fields);
}

const char* HotbarButtonData::Name() {
		return "HotbarButtonData";
}
	
void* HotbarButtonData::m_snoPower(void *Data) {
	return ((char*)Data) + 0;
}
void* HotbarButtonData::m_gbidItem(void *Data) {
	return ((char*)Data) + 4;
}

HotbarButtonData aHotbarButtonData;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 4);
		Fields[2].fieldinfo(&aHotbarButtonData, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PlayerChangeHotbarButtonMessage::~PlayerChangeHotbarButtonMessage() {
		free(Fields);
}

const char* PlayerChangeHotbarButtonMessage::Name() {
		return "PlayerChangeHotbarButtonMessage";
}
	
void* PlayerChangeHotbarButtonMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayerChangeHotbarButtonMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* PlayerChangeHotbarButtonMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

PlayerChangeHotbarButtonMessage aPlayerChangeHotbarButtonMessage;
// LabelCondition
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* LabelCondition::New() {
}

LabelCondition::LabelCondition() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ENUM, 0, 2);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
LabelCondition::~LabelCondition() {
		free(Fields);
}

const char* LabelCondition::Name() {
		return "LabelCondition";
}
	
void* LabelCondition::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* LabelCondition::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* LabelCondition::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

LabelCondition aLabelCondition;
// LabelEntry
//
// { gbidLabel }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* LabelEntry::New() {
}

LabelEntry::LabelEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_GBID, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
LabelEntry::~LabelEntry() {
		free(Fields);
}

const char* LabelEntry::Name() {
		return "LabelEntry";
}
	
void* LabelEntry::gbidLabel(void *Data) {
	return ((char*)Data) + 0;
}
int* LabelEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* LabelEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* LabelEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* LabelEntry::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}

LabelEntry aLabelEntry;
// LabelRule
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serEntries }
// { unknow_field_5 }


void* LabelRule::New() {
}

LabelRule::LabelRule() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[1].fieldinfo(&aLabelCondition, 128, 0);
		Fields[2].fieldinfo(&aDT_INT, 152, 32);
		Fields[3].fieldinfo(&aDT_INT, 156, 32);
		Fields[4].fieldinfo(&aSerializeData, 168, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 160, 0);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
LabelRule::~LabelRule() {
		free(Fields);
}

const char* LabelRule::Name() {
		return "LabelRule";
}
	
void* LabelRule::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* LabelRule::unknow_field_1(void *Data) {
	return ((char*)Data) + 128;
}
int* LabelRule::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 152;
}
int* LabelRule::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 156;
}
void* LabelRule::serEntries(void *Data) {
	return ((char*)Data) + 168;
}
void* LabelRule::unknow_field_5(void *Data) {
	return ((char*)Data) + 160;
}

LabelRule aLabelRule;
// LabelRuleSet
//
// { unknow_field_0 }
// { serRules }
// { unknow_field_2 }


void* LabelRuleSet::New() {
}

LabelRuleSet::LabelRuleSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
LabelRuleSet::~LabelRuleSet() {
		free(Fields);
}

const char* LabelRuleSet::Name() {
		return "LabelRuleSet";
}
	
int* LabelRuleSet::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* LabelRuleSet::serRules(void *Data) {
	return ((char*)Data) + 16;
}
void* LabelRuleSet::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

LabelRuleSet aLabelRuleSet;
// NavMeshSquare
//
// { unknow_field_0 }
// { unknow_field_1 }


void* NavMeshSquare::New() {
}

NavMeshSquare::NavMeshSquare() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
NavMeshSquare::~NavMeshSquare() {
		free(Fields);
}

const char* NavMeshSquare::Name() {
		return "NavMeshSquare";
}
	
void* NavMeshSquare::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* NavMeshSquare::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

NavMeshSquare aNavMeshSquare;
// NavMeshConnectedSquare
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* NavMeshConnectedSquare::New() {
}

NavMeshConnectedSquare::NavMeshConnectedSquare() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aNavMeshSquare, 0, 0);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 24, 32);
		Fields[3].fieldinfo(&aDT_INT, 28, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
NavMeshConnectedSquare::~NavMeshConnectedSquare() {
		free(Fields);
}

const char* NavMeshConnectedSquare::Name() {
		return "NavMeshConnectedSquare";
}
	
void* NavMeshConnectedSquare::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* NavMeshConnectedSquare::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* NavMeshConnectedSquare::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* NavMeshConnectedSquare::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 28;
}

NavMeshConnectedSquare aNavMeshConnectedSquare;
// GizmoLocSpawnEntry
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* GizmoLocSpawnEntry::New() {
}

GizmoLocSpawnEntry::GizmoLocSpawnEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aSNOName, 8, 0);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
GizmoLocSpawnEntry::~GizmoLocSpawnEntry() {
		free(Fields);
}

const char* GizmoLocSpawnEntry::Name() {
		return "GizmoLocSpawnEntry";
}
	
int* GizmoLocSpawnEntry::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* GizmoLocSpawnEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* GizmoLocSpawnEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* GizmoLocSpawnEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

GizmoLocSpawnEntry aGizmoLocSpawnEntry;
// GizmoLocSpawnType
//
// { serEntry }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* GizmoLocSpawnType::New() {
}

GizmoLocSpawnType::GizmoLocSpawnType() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 8, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 0, 0);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 16, 7);
		Fields[3].fieldinfo(&aDT_CHARARRAY, 96, 9);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
GizmoLocSpawnType::~GizmoLocSpawnType() {
		free(Fields);
}

const char* GizmoLocSpawnType::Name() {
		return "GizmoLocSpawnType";
}
	
void* GizmoLocSpawnType::serEntry(void *Data) {
	return ((char*)Data) + 8;
}
void* GizmoLocSpawnType::unknow_field_1(void *Data) {
	return ((char*)Data) + 0;
}
void* GizmoLocSpawnType::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}
void* GizmoLocSpawnType::unknow_field_3(void *Data) {
	return ((char*)Data) + 96;
}

GizmoLocSpawnType aGizmoLocSpawnType;
// GizmoLocSet
//
// { unknow_field_0 }


void* GizmoLocSet::New() {
}

GizmoLocSet::GizmoLocSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 0);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
GizmoLocSet::~GizmoLocSet() {
		free(Fields);
}

const char* GizmoLocSet::Name() {
		return "GizmoLocSet";
}
	
void* GizmoLocSet::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

GizmoLocSet aGizmoLocSet;
// BuffDef
//
// { serBuffFilterPowers }
// { arBuffFilterPowers }


void* BuffDef::New() {
}

BuffDef::BuffDef() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
BuffDef::~BuffDef() {
		free(Fields);
}

const char* BuffDef::Name() {
		return "BuffDef";
}
	
void* BuffDef::serBuffFilterPowers(void *Data) {
	return ((char*)Data) + 0;
}
void* BuffDef::arBuffFilterPowers(void *Data) {
	return ((char*)Data) + 8;
}

BuffDef aBuffDef;
// PowerDef
//
// { serTagMap }
// { hTagMap }
// { serGlobalTagMap }
// { hGeneralTagMap }
// { serPVPGlobalTagMap }
// { hPVPGeneralTagMap }
// { serContactTagMap_0_ }
// { hContact0TagMap }
// { serContactTagMap_1_ }
// { hContact1TagMap }
// { serContactTagMap_2_ }
// { hContact2TagMap }
// { serContactTagMap_3_ }
// { hContact3TagMap }
// { serPVPContactTagMap_0_ }
// { hPVPContact0TagMap }
// { serPVPContactTagMap_1_ }
// { hPVPContact1TagMap }
// { serPVPContactTagMap_2_ }
// { hPVPContact2TagMap }
// { serPVPContactTagMap_3_ }
// { hPVPContact3TagMap }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }


void* PowerDef::New() {
}

PowerDef::PowerDef() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 30);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aSerializeData, 0, 0);
		Fields[1].fieldinfo(&aDT_TAGMAP, 8, 0);
		Fields[2].fieldinfo(&aSerializeData, 16, 0);
		Fields[3].fieldinfo(&aDT_TAGMAP, 24, 0);
		Fields[4].fieldinfo(&aSerializeData, 32, 0);
		Fields[5].fieldinfo(&aDT_TAGMAP, 40, 0);
		Fields[6].fieldinfo(&aSerializeData, 48, 0);
		Fields[7].fieldinfo(&aDT_TAGMAP, 80, 0);
		Fields[8].fieldinfo(&aSerializeData, 56, 0);
		Fields[9].fieldinfo(&aDT_TAGMAP, 88, 0);
		Fields[10].fieldinfo(&aSerializeData, 64, 0);
		Fields[11].fieldinfo(&aDT_TAGMAP, 96, 0);
		Fields[12].fieldinfo(&aSerializeData, 72, 0);
		Fields[13].fieldinfo(&aDT_TAGMAP, 104, 0);
		Fields[14].fieldinfo(&aSerializeData, 112, 0);
		Fields[15].fieldinfo(&aDT_TAGMAP, 144, 0);
		Fields[16].fieldinfo(&aSerializeData, 120, 0);
		Fields[17].fieldinfo(&aDT_TAGMAP, 152, 0);
		Fields[18].fieldinfo(&aSerializeData, 128, 0);
		Fields[19].fieldinfo(&aDT_TAGMAP, 160, 0);
		Fields[20].fieldinfo(&aSerializeData, 136, 0);
		Fields[21].fieldinfo(&aDT_TAGMAP, 168, 0);
		Fields[22].fieldinfo(&aDT_INT, 176, 32);
		Fields[23].fieldinfo(&aActorCollisionFlags, 180, 0);
		Fields[24].fieldinfo(&aActorCollisionFlags, 196, 0);
		Fields[25].fieldinfo(&aBuffDef, 216, 0);
		Fields[26].fieldinfo(&aBuffDef, 232, 0);
		Fields[27].fieldinfo(&aBuffDef, 248, 0);
		Fields[28].fieldinfo(&aBuffDef, 264, 0);
		Fields[30 - 1].fieldinfo(NULL, 0, 0);
	}
PowerDef::~PowerDef() {
		free(Fields);
}

const char* PowerDef::Name() {
		return "PowerDef";
}
	
void* PowerDef::serTagMap(void *Data) {
	return ((char*)Data) + 0;
}
void* PowerDef::hTagMap(void *Data) {
	return ((char*)Data) + 8;
}
void* PowerDef::serGlobalTagMap(void *Data) {
	return ((char*)Data) + 16;
}
void* PowerDef::hGeneralTagMap(void *Data) {
	return ((char*)Data) + 24;
}
void* PowerDef::serPVPGlobalTagMap(void *Data) {
	return ((char*)Data) + 32;
}
void* PowerDef::hPVPGeneralTagMap(void *Data) {
	return ((char*)Data) + 40;
}
void* PowerDef::serContactTagMap_0_(void *Data) {
	return ((char*)Data) + 48;
}
void* PowerDef::hContact0TagMap(void *Data) {
	return ((char*)Data) + 80;
}
void* PowerDef::serContactTagMap_1_(void *Data) {
	return ((char*)Data) + 56;
}
void* PowerDef::hContact1TagMap(void *Data) {
	return ((char*)Data) + 88;
}
void* PowerDef::serContactTagMap_2_(void *Data) {
	return ((char*)Data) + 64;
}
void* PowerDef::hContact2TagMap(void *Data) {
	return ((char*)Data) + 96;
}
void* PowerDef::serContactTagMap_3_(void *Data) {
	return ((char*)Data) + 72;
}
void* PowerDef::hContact3TagMap(void *Data) {
	return ((char*)Data) + 104;
}
void* PowerDef::serPVPContactTagMap_0_(void *Data) {
	return ((char*)Data) + 112;
}
void* PowerDef::hPVPContact0TagMap(void *Data) {
	return ((char*)Data) + 144;
}
void* PowerDef::serPVPContactTagMap_1_(void *Data) {
	return ((char*)Data) + 120;
}
void* PowerDef::hPVPContact1TagMap(void *Data) {
	return ((char*)Data) + 152;
}
void* PowerDef::serPVPContactTagMap_2_(void *Data) {
	return ((char*)Data) + 128;
}
void* PowerDef::hPVPContact2TagMap(void *Data) {
	return ((char*)Data) + 160;
}
void* PowerDef::serPVPContactTagMap_3_(void *Data) {
	return ((char*)Data) + 136;
}
void* PowerDef::hPVPContact3TagMap(void *Data) {
	return ((char*)Data) + 168;
}
int* PowerDef::unknow_field_22(void *Data) {
	return (int*)((char*)Data) + 176;
}
void* PowerDef::unknow_field_23(void *Data) {
	return ((char*)Data) + 180;
}
void* PowerDef::unknow_field_24(void *Data) {
	return ((char*)Data) + 196;
}
void* PowerDef::unknow_field_25(void *Data) {
	return ((char*)Data) + 216;
}
void* PowerDef::unknow_field_26(void *Data) {
	return ((char*)Data) + 232;
}
void* PowerDef::unknow_field_27(void *Data) {
	return ((char*)Data) + 248;
}
void* PowerDef::unknow_field_28(void *Data) {
	return ((char*)Data) + 264;
}

PowerDef aPowerDef;
// TriggerConditions
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


void* TriggerConditions::New() {
}

TriggerConditions::TriggerConditions() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_PERCENT, 0, 8);
		Fields[1].fieldinfo(&aDT_TIME, 4, 32);
		Fields[2].fieldinfo(&aDT_TIME, 8, 32);
		Fields[3].fieldinfo(&aDT_TIME, 12, 32);
		Fields[4].fieldinfo(&aDT_TIME, 16, 32);
		Fields[5].fieldinfo(&aDT_IMPULSE, 20, 32);
		Fields[6].fieldinfo(&aDT_IMPULSE, 24, 32);
		Fields[7].fieldinfo(&aDT_INT, 28, 32);
		Fields[8].fieldinfo(&aDT_INT, 32, 32);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
TriggerConditions::~TriggerConditions() {
		free(Fields);
}

const char* TriggerConditions::Name() {
		return "TriggerConditions";
}
	
void* TriggerConditions::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* TriggerConditions::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* TriggerConditions::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* TriggerConditions::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* TriggerConditions::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* TriggerConditions::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* TriggerConditions::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
int* TriggerConditions::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* TriggerConditions::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 32;
}

TriggerConditions aTriggerConditions;
// Hardpoint
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* Hardpoint::New() {
}

Hardpoint::Hardpoint() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_INT, 64, 32);
		Fields[2].fieldinfo(&aPRTransform, 68, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
Hardpoint::~Hardpoint() {
		free(Fields);
}

const char* Hardpoint::Name() {
		return "Hardpoint";
}
	
void* Hardpoint::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* Hardpoint::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* Hardpoint::unknow_field_2(void *Data) {
	return ((char*)Data) + 68;
}

Hardpoint aHardpoint;
// HardpointLink
//
// { unknow_field_0 }
// { unknow_field_1 }


void* HardpointLink::New() {
}

HardpointLink::HardpointLink() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_INT, 64, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
HardpointLink::~HardpointLink() {
		free(Fields);
}

const char* HardpointLink::Name() {
		return "HardpointLink";
}
	
void* HardpointLink::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* HardpointLink::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 64;
}

HardpointLink aHardpointLink;
// LookLink
//
// { unknow_field_0 }


void* LookLink::New() {
}

LookLink::LookLink() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
LookLink::~LookLink() {
		free(Fields);
}

const char* LookLink::Name() {
		return "LookLink";
}
	
void* LookLink::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

LookLink aLookLink;
// ConstraintLink
//
// { unknow_field_0 }


void* ConstraintLink::New() {
}

ConstraintLink::ConstraintLink() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
ConstraintLink::~ConstraintLink() {
		free(Fields);
}

const char* ConstraintLink::Name() {
		return "ConstraintLink";
}
	
void* ConstraintLink::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

ConstraintLink aConstraintLink;
// MsgTriggeredEvent
//
// { unknow_field_0 }
// { unknow_field_1 }


void* MsgTriggeredEvent::New() {
}

MsgTriggeredEvent::MsgTriggeredEvent() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aTriggerEvent, 4, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
MsgTriggeredEvent::~MsgTriggeredEvent() {
		free(Fields);
}

const char* MsgTriggeredEvent::Name() {
		return "MsgTriggeredEvent";
}
	
int* MsgTriggeredEvent::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* MsgTriggeredEvent::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

MsgTriggeredEvent aMsgTriggeredEvent;
// TriggerEvent
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { eRuneType }
// { bUseRuneType }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }


void* TriggerEvent::New() {
}

TriggerEvent::TriggerEvent() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 31);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aTriggerConditions, 4, 0);
		Fields[2].fieldinfo(&aDT_INT, 40, 32);
		Fields[3].fieldinfo(&aSNOName, 44, 0);
		Fields[4].fieldinfo(&aDT_INT, 52, 32);
		Fields[5].fieldinfo(&aDT_INT, 56, 32);
		Fields[6].fieldinfo(&aDT_FIXEDARRAY, 68, 0);
		Fields[7].fieldinfo(&aLookLink, 204, 0);
		Fields[8].fieldinfo(&aConstraintLink, 268, 0);
		Fields[9].fieldinfo(&aDT_INT, 332, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 336, 32);
		Fields[11].fieldinfo(&aDT_INT, 340, 32);
		Fields[12].fieldinfo(&aDT_INT, 344, 32);
		Fields[13].fieldinfo(&aDT_INT, 348, 32);
		Fields[14].fieldinfo(&aDT_INT, 352, 32);
		Fields[15].fieldinfo(&aDT_INT, 356, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 360, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 364, 32);
		Fields[18].fieldinfo(&aDT_INT, 384, 32);
		Fields[19].fieldinfo(&aDT_INT, 368, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 372, 32);
		Fields[21].fieldinfo(&aDT_INT, 376, 32);
		Fields[22].fieldinfo(&aDT_VELOCITY, 380, 32);
		Fields[23].fieldinfo(&aDT_TIME, 388, 32);
		Fields[24].fieldinfo(&aDT_INT, 60, 32);
		Fields[25].fieldinfo(&aDT_INT, 64, 32);
		Fields[26].fieldinfo(&aRGBAColor, 392, 0);
		Fields[27].fieldinfo(&aDT_TIME, 396, 32);
		Fields[28].fieldinfo(&aRGBAColor, 400, 0);
		Fields[29].fieldinfo(&aDT_TIME, 404, 32);
		Fields[31 - 1].fieldinfo(NULL, 0, 0);
	}
TriggerEvent::~TriggerEvent() {
		free(Fields);
}

const char* TriggerEvent::Name() {
		return "TriggerEvent";
}
	
int* TriggerEvent::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* TriggerEvent::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* TriggerEvent::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 40;
}
void* TriggerEvent::unknow_field_3(void *Data) {
	return ((char*)Data) + 44;
}
int* TriggerEvent::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* TriggerEvent::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 56;
}
void* TriggerEvent::unknow_field_6(void *Data) {
	return ((char*)Data) + 68;
}
void* TriggerEvent::unknow_field_7(void *Data) {
	return ((char*)Data) + 204;
}
void* TriggerEvent::unknow_field_8(void *Data) {
	return ((char*)Data) + 268;
}
int* TriggerEvent::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 332;
}
void* TriggerEvent::unknow_field_10(void *Data) {
	return ((char*)Data) + 336;
}
int* TriggerEvent::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 340;
}
int* TriggerEvent::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 344;
}
int* TriggerEvent::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 348;
}
int* TriggerEvent::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 352;
}
int* TriggerEvent::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 356;
}
void* TriggerEvent::unknow_field_16(void *Data) {
	return ((char*)Data) + 360;
}
void* TriggerEvent::unknow_field_17(void *Data) {
	return ((char*)Data) + 364;
}
int* TriggerEvent::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 384;
}
int* TriggerEvent::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 368;
}
void* TriggerEvent::unknow_field_20(void *Data) {
	return ((char*)Data) + 372;
}
int* TriggerEvent::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 376;
}
void* TriggerEvent::unknow_field_22(void *Data) {
	return ((char*)Data) + 380;
}
void* TriggerEvent::unknow_field_23(void *Data) {
	return ((char*)Data) + 388;
}
int* TriggerEvent::eRuneType(void *Data) {
	return (int*)((char*)Data) + 60;
}
int* TriggerEvent::bUseRuneType(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* TriggerEvent::unknow_field_26(void *Data) {
	return ((char*)Data) + 392;
}
void* TriggerEvent::unknow_field_27(void *Data) {
	return ((char*)Data) + 396;
}
void* TriggerEvent::unknow_field_28(void *Data) {
	return ((char*)Data) + 400;
}
void* TriggerEvent::unknow_field_29(void *Data) {
	return ((char*)Data) + 404;
}

TriggerEvent aTriggerEvent;
// VelocityVector3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* VelocityVector3D::New() {
}

VelocityVector3D::VelocityVector3D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_VELOCITY, 0, 32);
		Fields[1].fieldinfo(&aDT_VELOCITY, 4, 32);
		Fields[2].fieldinfo(&aDT_VELOCITY, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
VelocityVector3D::~VelocityVector3D() {
		free(Fields);
}

const char* VelocityVector3D::Name() {
		return "VelocityVector3D";
}
	
void* VelocityVector3D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* VelocityVector3D::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* VelocityVector3D::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

VelocityVector3D aVelocityVector3D;
// AccelVector3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AccelVector3D::New() {
}

AccelVector3D::AccelVector3D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ACCEL, 0, 32);
		Fields[1].fieldinfo(&aDT_ACCEL, 4, 32);
		Fields[2].fieldinfo(&aDT_ACCEL, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AccelVector3D::~AccelVector3D() {
		free(Fields);
}

const char* AccelVector3D::Name() {
		return "AccelVector3D";
}
	
void* AccelVector3D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AccelVector3D::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* AccelVector3D::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

AccelVector3D aAccelVector3D;
// ImpulseVector3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ImpulseVector3D::New() {
}

ImpulseVector3D::ImpulseVector3D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_IMPULSE, 0, 32);
		Fields[1].fieldinfo(&aDT_IMPULSE, 4, 32);
		Fields[2].fieldinfo(&aDT_IMPULSE, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ImpulseVector3D::~ImpulseVector3D() {
		free(Fields);
}

const char* ImpulseVector3D::Name() {
		return "ImpulseVector3D";
}
	
void* ImpulseVector3D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ImpulseVector3D::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* ImpulseVector3D::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

ImpulseVector3D aImpulseVector3D;
// SubSceneLabel
//
// { unknow_field_0 }
// { unknow_field_1 }


void* SubSceneLabel::New() {
}

SubSceneLabel::SubSceneLabel() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_GBID, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
SubSceneLabel::~SubSceneLabel() {
		free(Fields);
}

const char* SubSceneLabel::Name() {
		return "SubSceneLabel";
}
	
void* SubSceneLabel::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* SubSceneLabel::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

SubSceneLabel aSubSceneLabel;
// SubSceneEntry
//
// { snoScene }
// { unknow_field_1 }
// { unknow_field_2 }
// { serLabels }
// { unknow_field_4 }


void* SubSceneEntry::New() {
}

SubSceneEntry::SubSceneEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aSerializeData, 24, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
SubSceneEntry::~SubSceneEntry() {
		free(Fields);
}

const char* SubSceneEntry::Name() {
		return "SubSceneEntry";
}
	
void* SubSceneEntry::snoScene(void *Data) {
	return ((char*)Data) + 0;
}
int* SubSceneEntry::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* SubSceneEntry::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* SubSceneEntry::serLabels(void *Data) {
	return ((char*)Data) + 24;
}
void* SubSceneEntry::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}

SubSceneEntry aSubSceneEntry;
// SubSceneGroup
//
// { unknow_field_0 }
// { unknow_field_1 }
// { serSubScenes }
// { unknow_field_3 }


void* SubSceneGroup::New() {
}

SubSceneGroup::SubSceneGroup() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aSerializeData, 16, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
SubSceneGroup::~SubSceneGroup() {
		free(Fields);
}

const char* SubSceneGroup::Name() {
		return "SubSceneGroup";
}
	
int* SubSceneGroup::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* SubSceneGroup::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* SubSceneGroup::serSubScenes(void *Data) {
	return ((char*)Data) + 16;
}
void* SubSceneGroup::unknow_field_3(void *Data) {
	return ((char*)Data) + 8;
}

SubSceneGroup aSubSceneGroup;
// SceneCluster
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { serSubSceneGroups }
// { unknow_field_4 }
// { unknow_field_5 }


void* SceneCluster::New() {
}

SceneCluster::SceneCluster() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[1].fieldinfo(&aDT_INT, 128, 32);
		Fields[2].fieldinfo(&aDT_INT, 132, 32);
		Fields[3].fieldinfo(&aSerializeData, 144, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 136, 0);
		Fields[5].fieldinfo(&aSubSceneGroup, 152, 0);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
SceneCluster::~SceneCluster() {
		free(Fields);
}

const char* SceneCluster::Name() {
		return "SceneCluster";
}
	
void* SceneCluster::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* SceneCluster::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 128;
}
int* SceneCluster::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 132;
}
void* SceneCluster::serSubSceneGroups(void *Data) {
	return ((char*)Data) + 144;
}
void* SceneCluster::unknow_field_4(void *Data) {
	return ((char*)Data) + 136;
}
void* SceneCluster::unknow_field_5(void *Data) {
	return ((char*)Data) + 152;
}

SceneCluster aSceneCluster;
// SceneClusterSet
//
// { unknow_field_0 }
// { serClusters }
// { unknow_field_2 }


void* SceneClusterSet::New() {
}

SceneClusterSet::SceneClusterSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
SceneClusterSet::~SceneClusterSet() {
		free(Fields);
}

const char* SceneClusterSet::Name() {
		return "SceneClusterSet";
}
	
int* SceneClusterSet::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* SceneClusterSet::serClusters(void *Data) {
	return ((char*)Data) + 16;
}
void* SceneClusterSet::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

SceneClusterSet aSceneClusterSet;
// WorldPlace
//
// { unknow_field_0 }
// { unknow_field_1 }


void* WorldPlace::New() {
}

WorldPlace::WorldPlace() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 12, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
WorldPlace::~WorldPlace() {
		free(Fields);
}

const char* WorldPlace::Name() {
		return "WorldPlace";
}
	
void* WorldPlace::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* WorldPlace::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 12;
}

WorldPlace aWorldPlace;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aDT_OPTIONAL, 12, 0);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 28, 32);
		Fields[4].fieldinfo(&aDT_OPTIONAL, 36, 1);
		Fields[5].fieldinfo(&aDT_OPTIONAL, 44, 32);
		Fields[6].fieldinfo(&aDT_OPTIONAL, 52, 24);
		Fields[7].fieldinfo(&aDT_OPTIONAL, 60, 21);
		Fields[8].fieldinfo(&aDT_OPTIONAL, 68, 32);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateNormalMessage::~ACDTranslateNormalMessage() {
		free(Fields);
}

const char* ACDTranslateNormalMessage::Name() {
		return "ACDTranslateNormalMessage";
}
	
void* ACDTranslateNormalMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateNormalMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* ACDTranslateNormalMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* ACDTranslateNormalMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 28;
}
void* ACDTranslateNormalMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 36;
}
void* ACDTranslateNormalMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 44;
}
void* ACDTranslateNormalMessage::unknow_field_6(void *Data) {
	return ((char*)Data) + 52;
}
void* ACDTranslateNormalMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 60;
}
void* ACDTranslateNormalMessage::unknow_field_8(void *Data) {
	return ((char*)Data) + 68;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aVector3D, 12, 0);
		Fields[3].fieldinfo(&aDT_ANGLE, 24, 32);
		Fields[4].fieldinfo(&aDT_INT, 28, 1);
		Fields[5].fieldinfo(&aDT_INT, 32, 24);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateSnappedMessage::~ACDTranslateSnappedMessage() {
		free(Fields);
}

const char* ACDTranslateSnappedMessage::Name() {
		return "ACDTranslateSnappedMessage";
}
	
void* ACDTranslateSnappedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateSnappedMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* ACDTranslateSnappedMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* ACDTranslateSnappedMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
int* ACDTranslateSnappedMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* ACDTranslateSnappedMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 32;
}

ACDTranslateSnappedMessage aACDTranslateSnappedMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aDT_ANGLE, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateFacingMessage::~ACDTranslateFacingMessage() {
		free(Fields);
}

const char* ACDTranslateFacingMessage::Name() {
		return "ACDTranslateFacingMessage";
}
	
void* ACDTranslateFacingMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateFacingMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* ACDTranslateFacingMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* ACDTranslateFacingMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aVector3D, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 24, 24);
		Fields[4].fieldinfo(&aDT_INT, 28, 21);
		Fields[5].fieldinfo(&aDT_SNO, 32, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateFixedMessage::~ACDTranslateFixedMessage() {
		free(Fields);
}

const char* ACDTranslateFixedMessage::Name() {
		return "ACDTranslateFixedMessage";
}
	
void* ACDTranslateFixedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateFixedMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* ACDTranslateFixedMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* ACDTranslateFixedMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* ACDTranslateFixedMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 28;
}
void* ACDTranslateFixedMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}

ACDTranslateFixedMessage aACDTranslateFixedMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aVector3D, 12, 0);
		Fields[3].fieldinfo(&aVector3D, 24, 0);
		Fields[4].fieldinfo(&aDT_INT, 36, 24);
		Fields[5].fieldinfo(&aDT_INT, 40, 21);
		Fields[6].fieldinfo(&aDT_INT, 44, 21);
		Fields[7].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[8].fieldinfo(&aDT_SNO, 52, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[11 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateArcMessage::~ACDTranslateArcMessage() {
		free(Fields);
}

const char* ACDTranslateArcMessage::Name() {
		return "ACDTranslateArcMessage";
}
	
void* ACDTranslateArcMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateArcMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* ACDTranslateArcMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* ACDTranslateArcMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
int* ACDTranslateArcMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* ACDTranslateArcMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 40;
}
int* ACDTranslateArcMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 44;
}
void* ACDTranslateArcMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 48;
}
void* ACDTranslateArcMessage::unknow_field_8(void *Data) {
	return ((char*)Data) + 52;
}
void* ACDTranslateArcMessage::unknow_field_9(void *Data) {
	return ((char*)Data) + 56;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 4);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 32);
		Fields[5].fieldinfo(&aVector3D, 24, 0);
		Fields[6].fieldinfo(&aDT_ANGLE, 36, 32);
		Fields[7].fieldinfo(&aVector3D, 40, 0);
		Fields[8].fieldinfo(&aDT_INT, 52, 32);
		Fields[9].fieldinfo(&aDT_INT, 56, 32);
		Fields[10].fieldinfo(&aDT_INT, 60, 32);
		Fields[11].fieldinfo(&aDT_SNO, 64, 32);
		Fields[12].fieldinfo(&aDT_INT, 68, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 72, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 80, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 84, 32);
		Fields[18 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateDetPathMessage::~ACDTranslateDetPathMessage() {
		free(Fields);
}

const char* ACDTranslateDetPathMessage::Name() {
		return "ACDTranslateDetPathMessage";
}
	
void* ACDTranslateDetPathMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateDetPathMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* ACDTranslateDetPathMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* ACDTranslateDetPathMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* ACDTranslateDetPathMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* ACDTranslateDetPathMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 24;
}
void* ACDTranslateDetPathMessage::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}
void* ACDTranslateDetPathMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}
int* ACDTranslateDetPathMessage::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* ACDTranslateDetPathMessage::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* ACDTranslateDetPathMessage::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 60;
}
void* ACDTranslateDetPathMessage::unknow_field_11(void *Data) {
	return ((char*)Data) + 64;
}
int* ACDTranslateDetPathMessage::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 68;
}
void* ACDTranslateDetPathMessage::unknow_field_13(void *Data) {
	return ((char*)Data) + 72;
}
void* ACDTranslateDetPathMessage::unknow_field_14(void *Data) {
	return ((char*)Data) + 76;
}
void* ACDTranslateDetPathMessage::unknow_field_15(void *Data) {
	return ((char*)Data) + 80;
}
void* ACDTranslateDetPathMessage::unknow_field_16(void *Data) {
	return ((char*)Data) + 84;
}

ACDTranslateDetPathMessage aACDTranslateDetPathMessage;
// DPathSinData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* DPathSinData::New() {
}

DPathSinData::DPathSinData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
DPathSinData::~DPathSinData() {
		free(Fields);
}

const char* DPathSinData::Name() {
		return "DPathSinData";
}
	
void* DPathSinData::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* DPathSinData::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* DPathSinData::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* DPathSinData::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* DPathSinData::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* DPathSinData::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}

DPathSinData aDPathSinData;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 4);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aDT_INT, 20, 32);
		Fields[5].fieldinfo(&aVector3D, 24, 0);
		Fields[6].fieldinfo(&aDT_ANGLE, 36, 32);
		Fields[7].fieldinfo(&aVector3D, 40, 0);
		Fields[8].fieldinfo(&aDT_INT, 52, 32);
		Fields[9].fieldinfo(&aDT_INT, 56, 32);
		Fields[10].fieldinfo(&aDT_INT, 60, 32);
		Fields[11].fieldinfo(&aDT_SNO, 64, 32);
		Fields[12].fieldinfo(&aDT_INT, 68, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 72, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[15].fieldinfo(&aDPathSinData, 80, 0);
		Fields[17 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateDetPathSinMessage::~ACDTranslateDetPathSinMessage() {
		free(Fields);
}

const char* ACDTranslateDetPathSinMessage::Name() {
		return "ACDTranslateDetPathSinMessage";
}
	
void* ACDTranslateDetPathSinMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateDetPathSinMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* ACDTranslateDetPathSinMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* ACDTranslateDetPathSinMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* ACDTranslateDetPathSinMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* ACDTranslateDetPathSinMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 24;
}
void* ACDTranslateDetPathSinMessage::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}
void* ACDTranslateDetPathSinMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}
int* ACDTranslateDetPathSinMessage::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* ACDTranslateDetPathSinMessage::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* ACDTranslateDetPathSinMessage::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 60;
}
void* ACDTranslateDetPathSinMessage::unknow_field_11(void *Data) {
	return ((char*)Data) + 64;
}
int* ACDTranslateDetPathSinMessage::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 68;
}
void* ACDTranslateDetPathSinMessage::unknow_field_13(void *Data) {
	return ((char*)Data) + 72;
}
void* ACDTranslateDetPathSinMessage::unknow_field_14(void *Data) {
	return ((char*)Data) + 76;
}
void* ACDTranslateDetPathSinMessage::unknow_field_15(void *Data) {
	return ((char*)Data) + 80;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aVector3D, 12, 0);
		Fields[3].fieldinfo(&aVector3D, 24, 0);
		Fields[4].fieldinfo(&aDT_INT, 36, 32);
		Fields[5].fieldinfo(&aDT_INT, 40, 32);
		Fields[6].fieldinfo(&aDT_INT, 44, 32);
		Fields[7].fieldinfo(&aDPathSinData, 48, 0);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateDetPathSpiralMessage::~ACDTranslateDetPathSpiralMessage() {
		free(Fields);
}

const char* ACDTranslateDetPathSpiralMessage::Name() {
		return "ACDTranslateDetPathSpiralMessage";
}
	
void* ACDTranslateDetPathSpiralMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateDetPathSpiralMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* ACDTranslateDetPathSpiralMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* ACDTranslateDetPathSpiralMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
int* ACDTranslateDetPathSpiralMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* ACDTranslateDetPathSpiralMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 40;
}
int* ACDTranslateDetPathSpiralMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 44;
}
void* ACDTranslateDetPathSpiralMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 48;
}

ACDTranslateDetPathSpiralMessage aACDTranslateDetPathSpiralMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aVector3D, 12, 0);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 24, 1);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateSyncMessage::~ACDTranslateSyncMessage() {
		free(Fields);
}

const char* ACDTranslateSyncMessage::Name() {
		return "ACDTranslateSyncMessage";
}
	
void* ACDTranslateSyncMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateSyncMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* ACDTranslateSyncMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* ACDTranslateSyncMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}

ACDTranslateSyncMessage aACDTranslateSyncMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_DATAID, 8, 32);
		Fields[2].fieldinfo(&aVector3D, 12, 0);
		Fields[3].fieldinfo(&aVector3D, 24, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
ACDTranslateFixedUpdateMessage::~ACDTranslateFixedUpdateMessage() {
		free(Fields);
}

const char* ACDTranslateFixedUpdateMessage::Name() {
		return "ACDTranslateFixedUpdateMessage";
}
	
void* ACDTranslateFixedUpdateMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ACDTranslateFixedUpdateMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* ACDTranslateFixedUpdateMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* ACDTranslateFixedUpdateMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}

ACDTranslateFixedUpdateMessage aACDTranslateFixedUpdateMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aResolvedPortalDestination, 12, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
PortalSpecifierMessage::~PortalSpecifierMessage() {
		free(Fields);
}

const char* PortalSpecifierMessage::Name() {
		return "PortalSpecifierMessage";
}
	
void* PortalSpecifierMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PortalSpecifierMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* PortalSpecifierMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}

PortalSpecifierMessage aPortalSpecifierMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ActTransitionStartedMessage::~ActTransitionStartedMessage() {
		free(Fields);
}

const char* ActTransitionStartedMessage::Name() {
		return "ActTransitionStartedMessage";
}
	
void* ActTransitionStartedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* ActTransitionStartedMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* ActTransitionStartedMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

ActTransitionStartedMessage aActTransitionStartedMessage;
// ActiveEvent
//
// { snoTimedEvent }
// { unknow_field_1 }
// { unknow_field_2 }


void* ActiveEvent::New() {
}

ActiveEvent::ActiveEvent() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ActiveEvent::~ActiveEvent() {
		free(Fields);
}

const char* ActiveEvent::Name() {
		return "ActiveEvent";
}
	
void* ActiveEvent::snoTimedEvent(void *Data) {
	return ((char*)Data) + 0;
}
int* ActiveEvent::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* ActiveEvent::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}

ActiveEvent aActiveEvent;
// TimedEventStartedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* TimedEventStartedMessage::New() {
}

TimedEventStartedMessage::TimedEventStartedMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aActiveEvent, 8, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
TimedEventStartedMessage::~TimedEventStartedMessage() {
		free(Fields);
}

const char* TimedEventStartedMessage::Name() {
		return "TimedEventStartedMessage";
}
	
void* TimedEventStartedMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* TimedEventStartedMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

TimedEventStartedMessage aTimedEventStartedMessage;
// PlayLineParams
//
// { snoConversation }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { snoSpeakerActor }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }


void* PlayLineParams::New() {
}

PlayLineParams::PlayLineParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 17);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 1);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aDT_INT, 24, 32);
		Fields[7].fieldinfo(&aDT_INT, 36, 32);
		Fields[8].fieldinfo(&aDT_INT, 40, 32);
		Fields[9].fieldinfo(&aDT_SNO, 32, 32);
		Fields[10].fieldinfo(&aDT_CHARARRAY, 44, 6);
		Fields[11].fieldinfo(&aDT_INT, 96, 32);
		Fields[12].fieldinfo(&aDT_INT, 100, 32);
		Fields[13].fieldinfo(&aDT_INT, 104, 32);
		Fields[14].fieldinfo(&aDT_INT, 108, 32);
		Fields[15].fieldinfo(&aDT_INT, 112, 32);
		Fields[17 - 1].fieldinfo(NULL, 0, 0);
	}
PlayLineParams::~PlayLineParams() {
		free(Fields);
}

const char* PlayLineParams::Name() {
		return "PlayLineParams";
}
	
void* PlayLineParams::snoConversation(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayLineParams::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* PlayLineParams::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayLineParams::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* PlayLineParams::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* PlayLineParams::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* PlayLineParams::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* PlayLineParams::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* PlayLineParams::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 40;
}
void* PlayLineParams::snoSpeakerActor(void *Data) {
	return ((char*)Data) + 32;
}
void* PlayLineParams::unknow_field_10(void *Data) {
	return ((char*)Data) + 44;
}
int* PlayLineParams::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 96;
}
int* PlayLineParams::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 100;
}
int* PlayLineParams::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 104;
}
int* PlayLineParams::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 108;
}
int* PlayLineParams::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 112;
}

PlayLineParams aPlayLineParams;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 12, 32);
		Fields[3].fieldinfo(&aPlayLineParams, 48, 0);
		Fields[4].fieldinfo(&aDT_INT, 164, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
PlayConvLineMessage::~PlayConvLineMessage() {
		free(Fields);
}

const char* PlayConvLineMessage::Name() {
		return "PlayConvLineMessage";
}
	
void* PlayConvLineMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayConvLineMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* PlayConvLineMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
void* PlayConvLineMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 48;
}
int* PlayConvLineMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 164;
}

PlayConvLineMessage aPlayConvLineMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 1);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
StopConvLineMessage::~StopConvLineMessage() {
		free(Fields);
}

const char* StopConvLineMessage::Name() {
		return "StopConvLineMessage";
}
	
void* StopConvLineMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* StopConvLineMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* StopConvLineMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

StopConvLineMessage aStopConvLineMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
EndConversationMessage::~EndConversationMessage() {
		free(Fields);
}

const char* EndConversationMessage::Name() {
		return "EndConversationMessage";
}
	
void* EndConversationMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* EndConversationMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* EndConversationMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* EndConversationMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

EndConversationMessage aEndConversationMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 7);
		Fields[3].fieldinfo(&aDT_OPTIONAL, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
PlayEffectMessage::~PlayEffectMessage() {
		free(Fields);
}

const char* PlayEffectMessage::Name() {
		return "PlayEffectMessage";
}
	
void* PlayEffectMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayEffectMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayEffectMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* PlayEffectMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

PlayEffectMessage aPlayEffectMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 3);
		Fields[4].fieldinfo(&aDT_INT, 20, 1);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
PlayHitEffectMessage::~PlayHitEffectMessage() {
		free(Fields);
}

const char* PlayHitEffectMessage::Name() {
		return "PlayHitEffectMessage";
}
	
void* PlayHitEffectMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayHitEffectMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayHitEffectMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* PlayHitEffectMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* PlayHitEffectMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_SNO, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
PlayHitEffectOverrideMessage::~PlayHitEffectOverrideMessage() {
		free(Fields);
}

const char* PlayHitEffectOverrideMessage::Name() {
		return "PlayHitEffectOverrideMessage";
}
	
void* PlayHitEffectOverrideMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* PlayHitEffectOverrideMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* PlayHitEffectOverrideMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* PlayHitEffectOverrideMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}

PlayHitEffectOverrideMessage aPlayHitEffectOverrideMessage;
// PlayNonPositionalSoundMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PlayNonPositionalSoundMessage::New() {
}

PlayNonPositionalSoundMessage::PlayNonPositionalSoundMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PlayNonPositionalSoundMessage::~PlayNonPositionalSoundMessage() {
		free(Fields);
}

const char* PlayNonPositionalSoundMessage::Name() {
		return "PlayNonPositionalSoundMessage";
}
	
void* PlayNonPositionalSoundMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PlayNonPositionalSoundMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}

PlayNonPositionalSoundMessage aPlayNonPositionalSoundMessage;
// PlayMusicMessage
//
// { unknow_field_0 }
// { snoMusic }


void* PlayMusicMessage::New() {
}

PlayMusicMessage::PlayMusicMessage() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PlayMusicMessage::~PlayMusicMessage() {
		free(Fields);
}

const char* PlayMusicMessage::Name() {
		return "PlayMusicMessage";
}
	
void* PlayMusicMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* PlayMusicMessage::snoMusic(void *Data) {
	return ((char*)Data) + 8;
}

PlayMusicMessage aPlayMusicMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 5);
		Fields[4].fieldinfo(&aDT_INT, 20, 32);
		Fields[5].fieldinfo(&aDT_INT, 24, 5);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
RopeEffectMessageACDToACD::~RopeEffectMessageACDToACD() {
		free(Fields);
}

const char* RopeEffectMessageACDToACD::Name() {
		return "RopeEffectMessageACDToACD";
}
	
void* RopeEffectMessageACDToACD::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* RopeEffectMessageACDToACD::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* RopeEffectMessageACDToACD::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* RopeEffectMessageACDToACD::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* RopeEffectMessageACDToACD::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* RopeEffectMessageACDToACD::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 24;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 5);
		Fields[4].fieldinfo(&aWorldPlace, 20, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
RopeEffectMessageACDToPlace::~RopeEffectMessageACDToPlace() {
		free(Fields);
}

const char* RopeEffectMessageACDToPlace::Name() {
		return "RopeEffectMessageACDToPlace";
}
	
void* RopeEffectMessageACDToPlace::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* RopeEffectMessageACDToPlace::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* RopeEffectMessageACDToPlace::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* RopeEffectMessageACDToPlace::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* RopeEffectMessageACDToPlace::unknow_field_4(void *Data) {
	return ((char*)Data) + 20;
}

RopeEffectMessageACDToPlace aRopeEffectMessageACDToPlace;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_SNO, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
EffectGroupACDToACDMessage::~EffectGroupACDToACDMessage() {
		free(Fields);
}

const char* EffectGroupACDToACDMessage::Name() {
		return "EffectGroupACDToACDMessage";
}
	
void* EffectGroupACDToACDMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* EffectGroupACDToACDMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* EffectGroupACDToACDMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* EffectGroupACDToACDMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}

EffectGroupACDToACDMessage aEffectGroupACDToACDMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 8, 6);
		Fields[2].fieldinfo(&aDT_INT, 44, 3);
		Fields[3].fieldinfo(&aDT_INT, 48, 32);
		Fields[4].fieldinfo(&aDT_SNO, 52, 32);
		Fields[5].fieldinfo(&aDT_INT, 56, 32);
		Fields[6].fieldinfo(&aDT_INT, 60, 1);
		Fields[7].fieldinfo(&aDT_SNO, 64, 32);
		Fields[8].fieldinfo(&aDT_INT, 68, 16);
		Fields[9].fieldinfo(&aDT_INT, 72, 3);
		Fields[10].fieldinfo(&aDT_INT, 76, 32);
		Fields[11].fieldinfo(&aDT_INT, 80, 32);
		Fields[12].fieldinfo(&aDT_WORD, 84, 16);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
CreateBNetGameMessage::~CreateBNetGameMessage() {
		free(Fields);
}

const char* CreateBNetGameMessage::Name() {
		return "CreateBNetGameMessage";
}
	
void* CreateBNetGameMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* CreateBNetGameMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
int* CreateBNetGameMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 44;
}
int* CreateBNetGameMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 48;
}
void* CreateBNetGameMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 52;
}
int* CreateBNetGameMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* CreateBNetGameMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 60;
}
void* CreateBNetGameMessage::unknow_field_7(void *Data) {
	return ((char*)Data) + 64;
}
int* CreateBNetGameMessage::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 68;
}
int* CreateBNetGameMessage::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 72;
}
int* CreateBNetGameMessage::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 76;
}
int* CreateBNetGameMessage::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 80;
}
void* CreateBNetGameMessage::unknow_field_12(void *Data) {
	return ((char*)Data) + 84;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 2);
		Fields[2].fieldinfo(&aGameId, 16, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
CreateBNetGameResultMessage::~CreateBNetGameResultMessage() {
		free(Fields);
}

const char* CreateBNetGameResultMessage::Name() {
		return "CreateBNetGameResultMessage";
}
	
void* CreateBNetGameResultMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* CreateBNetGameResultMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* CreateBNetGameResultMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

CreateBNetGameResultMessage aCreateBNetGameResultMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aGameId, 8, 0);
		Fields[2].fieldinfo(&aEntityId, 32, 0);
		Fields[3].fieldinfo(&aDT_INT, 48, 5);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
RequestJoinBNetGameMessage::~RequestJoinBNetGameMessage() {
		free(Fields);
}

const char* RequestJoinBNetGameMessage::Name() {
		return "RequestJoinBNetGameMessage";
}
	
void* RequestJoinBNetGameMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* RequestJoinBNetGameMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* RequestJoinBNetGameMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 32;
}
int* RequestJoinBNetGameMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 48;
}

RequestJoinBNetGameMessage aRequestJoinBNetGameMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 3);
		Fields[2].fieldinfo(&aGameId, 16, 0);
		Fields[3].fieldinfo(&aDT_INT64, 40, 64);
		Fields[4].fieldinfo(&aDT_INT, 48, 3);
		Fields[5].fieldinfo(&aDT_SNO, 52, 32);
		Fields[6].fieldinfo(&aDT_INT, 56, 16);
		Fields[7].fieldinfo(&aDT_INT, 60, 32);
		Fields[8].fieldinfo(&aDT_WORD, 64, 16);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
BNetJoinGameRequestResultMessage::~BNetJoinGameRequestResultMessage() {
		free(Fields);
}

const char* BNetJoinGameRequestResultMessage::Name() {
		return "BNetJoinGameRequestResultMessage";
}
	
void* BNetJoinGameRequestResultMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* BNetJoinGameRequestResultMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* BNetJoinGameRequestResultMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}
void* BNetJoinGameRequestResultMessage::unknow_field_3(void *Data) {
	return ((char*)Data) + 40;
}
int* BNetJoinGameRequestResultMessage::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 48;
}
void* BNetJoinGameRequestResultMessage::unknow_field_5(void *Data) {
	return ((char*)Data) + 52;
}
int* BNetJoinGameRequestResultMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* BNetJoinGameRequestResultMessage::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 60;
}
void* BNetJoinGameRequestResultMessage::unknow_field_8(void *Data) {
	return ((char*)Data) + 64;
}

BNetJoinGameRequestResultMessage aBNetJoinGameRequestResultMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aEntityId, 8, 0);
		Fields[2].fieldinfo(&aGameId, 24, 0);
		Fields[3].fieldinfo(&aDT_INT, 48, 32);
		Fields[4].fieldinfo(&aDT_INT64, 56, 64);
		Fields[5].fieldinfo(&aDT_INT, 64, 4);
		Fields[6].fieldinfo(&aDT_INT, 68, 32);
		Fields[7].fieldinfo(&aDT_INT, 72, 32);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
JoinBNetGameMessage::~JoinBNetGameMessage() {
		free(Fields);
}

const char* JoinBNetGameMessage::Name() {
		return "JoinBNetGameMessage";
}
	
void* JoinBNetGameMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* JoinBNetGameMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* JoinBNetGameMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}
int* JoinBNetGameMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 48;
}
void* JoinBNetGameMessage::unknow_field_4(void *Data) {
	return ((char*)Data) + 56;
}
int* JoinBNetGameMessage::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 64;
}
int* JoinBNetGameMessage::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 68;
}
int* JoinBNetGameMessage::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 72;
}

JoinBNetGameMessage aJoinBNetGameMessage;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 8, 6);
		Fields[2].fieldinfo(&aDT_GBID, 60, 32);
		Fields[3].fieldinfo(&aDT_INT, 64, 29);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
CreateHeroMessage::~CreateHeroMessage() {
		free(Fields);
}

const char* CreateHeroMessage::Name() {
		return "CreateHeroMessage";
}
	
void* CreateHeroMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* CreateHeroMessage::unknow_field_1(void *Data) {
	return ((char*)Data) + 8;
}
void* CreateHeroMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 60;
}
int* CreateHeroMessage::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 64;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 2);
		Fields[2].fieldinfo(&aEntityId, 16, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
CreateHeroResultMessage::~CreateHeroResultMessage() {
		free(Fields);
}

const char* CreateHeroResultMessage::Name() {
		return "CreateHeroResultMessage";
}
	
void* CreateHeroResultMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* CreateHeroResultMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* CreateHeroResultMessage::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

CreateHeroResultMessage aCreateHeroResultMessage;
// Influence
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Influence::New() {
}

Influence::Influence() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Influence::~Influence() {
		free(Fields);
}

const char* Influence::Name() {
		return "Influence";
}
	
int* Influence::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* Influence::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

Influence aInfluence;
// VertInfluences
//
// { unknow_field_0 }


void* VertInfluences::New() {
}

VertInfluences::VertInfluences() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FIXEDARRAY, 0, 0);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
VertInfluences::~VertInfluences() {
		free(Fields);
}

const char* VertInfluences::Name() {
		return "VertInfluences";
}
	
void* VertInfluences::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

VertInfluences aVertInfluences;
// FatVertex
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


void* FatVertex::New() {
}

FatVertex::FatVertex() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aRGBAColor, 12, 0);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 16, 0);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 24, 0);
		Fields[4].fieldinfo(&aRGBAColor, 32, 0);
		Fields[5].fieldinfo(&aRGBAColor, 36, 0);
		Fields[6].fieldinfo(&aDT_WORD, 40, 16);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
FatVertex::~FatVertex() {
		free(Fields);
}

const char* FatVertex::Name() {
		return "FatVertex";
}
	
void* FatVertex::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* FatVertex::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* FatVertex::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}
void* FatVertex::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* FatVertex::unknow_field_4(void *Data) {
	return ((char*)Data) + 32;
}
void* FatVertex::unknow_field_5(void *Data) {
	return ((char*)Data) + 36;
}
void* FatVertex::unknow_field_6(void *Data) {
	return ((char*)Data) + 40;
}

FatVertex aFatVertex;
// dmSubEdge
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* dmSubEdge::New() {
}

dmSubEdge::dmSubEdge() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_BYTE, 0, 8);
		Fields[1].fieldinfo(&aDT_BYTE, 1, 8);
		Fields[2].fieldinfo(&aDT_BYTE, 2, 8);
		Fields[3].fieldinfo(&aDT_BYTE, 3, 8);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
dmSubEdge::~dmSubEdge() {
		free(Fields);
}

const char* dmSubEdge::Name() {
		return "dmSubEdge";
}
	
void* dmSubEdge::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* dmSubEdge::unknow_field_1(void *Data) {
	return ((char*)Data) + 1;
}
void* dmSubEdge::unknow_field_2(void *Data) {
	return ((char*)Data) + 2;
}
void* dmSubEdge::unknow_field_3(void *Data) {
	return ((char*)Data) + 3;
}

dmSubEdge admSubEdge;
// PolytopeData
//
// { unknow_field_0 }
// { serVertices }
// { unknow_field_2 }
// { serPlanes }
// { unknow_field_4 }
// { serSubEdges }
// { unknow_field_6 }
// { serFaceSubEdges }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }


void* PolytopeData::New() {
}

PolytopeData::PolytopeData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 15);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&admFloat3, 32, 0);
		Fields[1].fieldinfo(&aSerializeData, 64, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 0, 0);
		Fields[3].fieldinfo(&aSerializeData, 72, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 8, 0);
		Fields[5].fieldinfo(&aSerializeData, 80, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[7].fieldinfo(&aSerializeData, 88, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[9].fieldinfo(&aDT_INT, 44, 32);
		Fields[10].fieldinfo(&aDT_INT, 48, 32);
		Fields[11].fieldinfo(&aDT_INT, 52, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 60, 32);
		Fields[15 - 1].fieldinfo(NULL, 0, 0);
	}
PolytopeData::~PolytopeData() {
		free(Fields);
}

const char* PolytopeData::Name() {
		return "PolytopeData";
}
	
void* PolytopeData::unknow_field_0(void *Data) {
	return ((char*)Data) + 32;
}
void* PolytopeData::serVertices(void *Data) {
	return ((char*)Data) + 64;
}
void* PolytopeData::unknow_field_2(void *Data) {
	return ((char*)Data) + 0;
}
void* PolytopeData::serPlanes(void *Data) {
	return ((char*)Data) + 72;
}
void* PolytopeData::unknow_field_4(void *Data) {
	return ((char*)Data) + 8;
}
void* PolytopeData::serSubEdges(void *Data) {
	return ((char*)Data) + 80;
}
void* PolytopeData::unknow_field_6(void *Data) {
	return ((char*)Data) + 16;
}
void* PolytopeData::serFaceSubEdges(void *Data) {
	return ((char*)Data) + 88;
}
void* PolytopeData::unknow_field_8(void *Data) {
	return ((char*)Data) + 24;
}
int* PolytopeData::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 44;
}
int* PolytopeData::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 48;
}
int* PolytopeData::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 52;
}
void* PolytopeData::unknow_field_12(void *Data) {
	return ((char*)Data) + 56;
}
void* PolytopeData::unknow_field_13(void *Data) {
	return ((char*)Data) + 60;
}

PolytopeData aPolytopeData;
// CollisionShape
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { serPolytope }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }


void* CollisionShape::New() {
}

CollisionShape::CollisionShape() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 13);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[7].fieldinfo(&aSerializeData, 28, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 36, 0);
		Fields[9].fieldinfo(&aVector3D, 40, 0);
		Fields[10].fieldinfo(&aVector3D, 52, 0);
		Fields[11].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[13 - 1].fieldinfo(NULL, 0, 0);
	}
CollisionShape::~CollisionShape() {
		free(Fields);
}

const char* CollisionShape::Name() {
		return "CollisionShape";
}
	
int* CollisionShape::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* CollisionShape::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* CollisionShape::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* CollisionShape::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* CollisionShape::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* CollisionShape::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* CollisionShape::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
void* CollisionShape::serPolytope(void *Data) {
	return ((char*)Data) + 28;
}
void* CollisionShape::unknow_field_8(void *Data) {
	return ((char*)Data) + 36;
}
void* CollisionShape::unknow_field_9(void *Data) {
	return ((char*)Data) + 40;
}
void* CollisionShape::unknow_field_10(void *Data) {
	return ((char*)Data) + 52;
}
void* CollisionShape::unknow_field_11(void *Data) {
	return ((char*)Data) + 64;
}

CollisionShape aCollisionShape;
// CollisionCapsule
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* CollisionCapsule::New() {
}

CollisionCapsule::CollisionCapsule() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aHardpoint, 8, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
CollisionCapsule::~CollisionCapsule() {
		free(Fields);
}

const char* CollisionCapsule::Name() {
		return "CollisionCapsule";
}
	
void* CollisionCapsule::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* CollisionCapsule::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* CollisionCapsule::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

CollisionCapsule aCollisionCapsule;
// ClothVertex
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


void* ClothVertex::New() {
}

ClothVertex::ClothVertex() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 12, 0);
		Fields[2].fieldinfo(&aVector3D, 24, 0);
		Fields[3].fieldinfo(&aVector3D, 36, 0);
		Fields[4].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[5].fieldinfo(&aDT_INT, 52, 32);
		Fields[6].fieldinfo(&aDT_INT, 56, 32);
		Fields[7].fieldinfo(&aDT_INT, 60, 32);
		Fields[8].fieldinfo(&aDT_INT, 64, 32);
		Fields[9].fieldinfo(&aVector3D, 68, 0);
		Fields[10].fieldinfo(&aDT_INT, 80, 32);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
ClothVertex::~ClothVertex() {
		free(Fields);
}

const char* ClothVertex::Name() {
		return "ClothVertex";
}
	
void* ClothVertex::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ClothVertex::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* ClothVertex::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}
void* ClothVertex::unknow_field_3(void *Data) {
	return ((char*)Data) + 36;
}
void* ClothVertex::unknow_field_4(void *Data) {
	return ((char*)Data) + 48;
}
int* ClothVertex::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 52;
}
int* ClothVertex::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* ClothVertex::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 60;
}
int* ClothVertex::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* ClothVertex::unknow_field_9(void *Data) {
	return ((char*)Data) + 68;
}
int* ClothVertex::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 80;
}

ClothVertex aClothVertex;
// ClothFace
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* ClothFace::New() {
}

ClothFace::ClothFace() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[2].fieldinfo(&aDT_INT, 16, 32);
		Fields[3].fieldinfo(&aDT_INT, 20, 32);
		Fields[4].fieldinfo(&aDT_INT, 24, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
ClothFace::~ClothFace() {
		free(Fields);
}

const char* ClothFace::Name() {
		return "ClothFace";
}
	
void* ClothFace::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ClothFace::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
int* ClothFace::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* ClothFace::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* ClothFace::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 24;
}

ClothFace aClothFace;
// ClothConstraint
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* ClothConstraint::New() {
}

ClothConstraint::ClothConstraint() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
ClothConstraint::~ClothConstraint() {
		free(Fields);
}

const char* ClothConstraint::Name() {
		return "ClothConstraint";
}
	
int* ClothConstraint::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* ClothConstraint::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* ClothConstraint::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* ClothConstraint::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* ClothConstraint::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* ClothConstraint::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}

ClothConstraint aClothConstraint;
// ClothStaple
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ClothStaple::New() {
}

ClothStaple::ClothStaple() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 4, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 16, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ClothStaple::~ClothStaple() {
		free(Fields);
}

const char* ClothStaple::Name() {
		return "ClothStaple";
}
	
int* ClothStaple::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* ClothStaple::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* ClothStaple::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

ClothStaple aClothStaple;
// ClothStructure
//
// { unknow_field_0 }
// { serVertices }
// { unknow_field_2 }
// { unknow_field_3 }
// { serFaces }
// { unknow_field_5 }
// { unknow_field_6 }
// { serStaples }
// { unknow_field_8 }
// { unknow_field_9 }
// { serDistanceConstraints }
// { unknow_field_11 }
// { unknow_field_12 }
// { serBendingConstraints }
// { unknow_field_14 }
// { unknow_field_15 }
// { unknow_field_16 }


void* ClothStructure::New() {
}

ClothStructure::ClothStructure() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 18);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 4, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aSerializeData, 20, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[6].fieldinfo(&aDT_INT, 32, 32);
		Fields[7].fieldinfo(&aSerializeData, 36, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 44, 0);
		Fields[9].fieldinfo(&aDT_INT, 48, 32);
		Fields[10].fieldinfo(&aSerializeData, 52, 0);
		Fields[11].fieldinfo(&aDT_VARIABLEARRAY, 60, 0);
		Fields[12].fieldinfo(&aDT_INT, 64, 32);
		Fields[13].fieldinfo(&aSerializeData, 68, 0);
		Fields[14].fieldinfo(&aDT_VARIABLEARRAY, 76, 0);
		Fields[15].fieldinfo(&aDT_INT, 80, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 84, 32);
		Fields[18 - 1].fieldinfo(NULL, 0, 0);
	}
ClothStructure::~ClothStructure() {
		free(Fields);
}

const char* ClothStructure::Name() {
		return "ClothStructure";
}
	
int* ClothStructure::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* ClothStructure::serVertices(void *Data) {
	return ((char*)Data) + 4;
}
void* ClothStructure::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* ClothStructure::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* ClothStructure::serFaces(void *Data) {
	return ((char*)Data) + 20;
}
void* ClothStructure::unknow_field_5(void *Data) {
	return ((char*)Data) + 28;
}
int* ClothStructure::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* ClothStructure::serStaples(void *Data) {
	return ((char*)Data) + 36;
}
void* ClothStructure::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}
int* ClothStructure::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 48;
}
void* ClothStructure::serDistanceConstraints(void *Data) {
	return ((char*)Data) + 52;
}
void* ClothStructure::unknow_field_11(void *Data) {
	return ((char*)Data) + 60;
}
int* ClothStructure::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* ClothStructure::serBendingConstraints(void *Data) {
	return ((char*)Data) + 68;
}
void* ClothStructure::unknow_field_14(void *Data) {
	return ((char*)Data) + 76;
}
int* ClothStructure::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 80;
}
void* ClothStructure::unknow_field_16(void *Data) {
	return ((char*)Data) + 84;
}

ClothStructure aClothStructure;
// SubObject
//
// { unknow_field_0 }
// { nVertCount }
// { serVertList }
// { unknow_field_3 }
// { serInfluenceList }
// { unknow_field_5 }
// { nIndexCount }
// { serIndexList }
// { unknow_field_8 }
// { serClothStructure }
// { unknow_field_10 }
// { snoSurface }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }
// { aabbBounds }
// { nShapeCount }
// { serShapes }
// { unknow_field_19 }


void* SubObject::New() {
}

SubObject::SubObject() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 21);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aSerializeData, 8, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[4].fieldinfo(&aSerializeData, 20, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[6].fieldinfo(&aDT_INT, 32, 32);
		Fields[7].fieldinfo(&aSerializeData, 36, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 44, 0);
		Fields[9].fieldinfo(&aSerializeData, 48, 0);
		Fields[10].fieldinfo(&aDT_VARIABLEARRAY, 56, 0);
		Fields[11].fieldinfo(&aDT_SNO, 60, 32);
		Fields[12].fieldinfo(&aDT_INT, 64, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 68, 32);
		Fields[14].fieldinfo(&aDT_CHARARRAY, 72, 8);
		Fields[15].fieldinfo(&aDT_CHARARRAY, 200, 8);
		Fields[16].fieldinfo(&aAABB, 328, 0);
		Fields[17].fieldinfo(&aDT_INT, 352, 32);
		Fields[18].fieldinfo(&aSerializeData, 356, 0);
		Fields[19].fieldinfo(&aDT_VARIABLEARRAY, 364, 0);
		Fields[21 - 1].fieldinfo(NULL, 0, 0);
	}
SubObject::~SubObject() {
		free(Fields);
}

const char* SubObject::Name() {
		return "SubObject";
}
	
int* SubObject::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* SubObject::nVertCount(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* SubObject::serVertList(void *Data) {
	return ((char*)Data) + 8;
}
void* SubObject::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
void* SubObject::serInfluenceList(void *Data) {
	return ((char*)Data) + 20;
}
void* SubObject::unknow_field_5(void *Data) {
	return ((char*)Data) + 28;
}
int* SubObject::nIndexCount(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* SubObject::serIndexList(void *Data) {
	return ((char*)Data) + 36;
}
void* SubObject::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}
void* SubObject::serClothStructure(void *Data) {
	return ((char*)Data) + 48;
}
void* SubObject::unknow_field_10(void *Data) {
	return ((char*)Data) + 56;
}
void* SubObject::snoSurface(void *Data) {
	return ((char*)Data) + 60;
}
int* SubObject::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* SubObject::unknow_field_13(void *Data) {
	return ((char*)Data) + 68;
}
void* SubObject::unknow_field_14(void *Data) {
	return ((char*)Data) + 72;
}
void* SubObject::unknow_field_15(void *Data) {
	return ((char*)Data) + 200;
}
void* SubObject::aabbBounds(void *Data) {
	return ((char*)Data) + 328;
}
int* SubObject::nShapeCount(void *Data) {
	return (int*)((char*)Data) + 352;
}
void* SubObject::serShapes(void *Data) {
	return ((char*)Data) + 356;
}
void* SubObject::unknow_field_19(void *Data) {
	return ((char*)Data) + 364;
}

SubObject aSubObject;
// BoneStructure
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { wsBounds }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { serShapes }
// { unknow_field_9 }
// { serConstraint }
// { unknow_field_11 }
// { snoParticleSystem }


void* BoneStructure::New() {
}

BoneStructure::BoneStructure() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_INT, 64, 32);
		Fields[2].fieldinfo(&aAABB, 68, 0);
		Fields[3].fieldinfo(&aSphere, 92, 0);
		Fields[4].fieldinfo(&aPRSTransform, 108, 0);
		Fields[5].fieldinfo(&aPRSTransform, 140, 0);
		Fields[6].fieldinfo(&aPRSTransform, 172, 0);
		Fields[7].fieldinfo(&aDT_INT, 204, 32);
		Fields[8].fieldinfo(&aSerializeData, 208, 0);
		Fields[9].fieldinfo(&aDT_VARIABLEARRAY, 216, 0);
		Fields[10].fieldinfo(&aSerializeData, 220, 0);
		Fields[11].fieldinfo(&aDT_VARIABLEARRAY, 228, 0);
		Fields[12].fieldinfo(&aDT_SNO, 232, 32);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
BoneStructure::~BoneStructure() {
		free(Fields);
}

const char* BoneStructure::Name() {
		return "BoneStructure";
}
	
void* BoneStructure::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* BoneStructure::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* BoneStructure::unknow_field_2(void *Data) {
	return ((char*)Data) + 68;
}
void* BoneStructure::wsBounds(void *Data) {
	return ((char*)Data) + 92;
}
void* BoneStructure::unknow_field_4(void *Data) {
	return ((char*)Data) + 108;
}
void* BoneStructure::unknow_field_5(void *Data) {
	return ((char*)Data) + 140;
}
void* BoneStructure::unknow_field_6(void *Data) {
	return ((char*)Data) + 172;
}
int* BoneStructure::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 204;
}
void* BoneStructure::serShapes(void *Data) {
	return ((char*)Data) + 208;
}
void* BoneStructure::unknow_field_9(void *Data) {
	return ((char*)Data) + 216;
}
void* BoneStructure::serConstraint(void *Data) {
	return ((char*)Data) + 220;
}
void* BoneStructure::unknow_field_11(void *Data) {
	return ((char*)Data) + 228;
}
void* BoneStructure::snoParticleSystem(void *Data) {
	return ((char*)Data) + 232;
}

BoneStructure aBoneStructure;
// LookAtData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* LookAtData::New() {
}

LookAtData::LookAtData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 7);
		Fields[2].fieldinfo(&aDT_ANGLE, 68, 32);
		Fields[3].fieldinfo(&aDT_ANGLE, 72, 32);
		Fields[4].fieldinfo(&aDT_ANGLE, 76, 32);
		Fields[5].fieldinfo(&aDT_ANGLE, 80, 32);
		Fields[6].fieldinfo(&aDT_ANGULARVELOCITY, 84, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 88, 32);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
LookAtData::~LookAtData() {
		free(Fields);
}

const char* LookAtData::Name() {
		return "LookAtData";
}
	
int* LookAtData::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* LookAtData::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* LookAtData::unknow_field_2(void *Data) {
	return ((char*)Data) + 68;
}
void* LookAtData::unknow_field_3(void *Data) {
	return ((char*)Data) + 72;
}
void* LookAtData::unknow_field_4(void *Data) {
	return ((char*)Data) + 76;
}
void* LookAtData::unknow_field_5(void *Data) {
	return ((char*)Data) + 80;
}
void* LookAtData::unknow_field_6(void *Data) {
	return ((char*)Data) + 84;
}
void* LookAtData::unknow_field_7(void *Data) {
	return ((char*)Data) + 88;
}

LookAtData aLookAtData;
// BonePulseData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* BonePulseData::New() {
}

BonePulseData::BonePulseData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 68, 32);
		Fields[3].fieldinfo(&aDT_ANGLE, 72, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
BonePulseData::~BonePulseData() {
		free(Fields);
}

const char* BonePulseData::Name() {
		return "BonePulseData";
}
	
void* BonePulseData::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* BonePulseData::unknow_field_1(void *Data) {
	return ((char*)Data) + 64;
}
void* BonePulseData::unknow_field_2(void *Data) {
	return ((char*)Data) + 68;
}
void* BonePulseData::unknow_field_3(void *Data) {
	return ((char*)Data) + 72;
}

BonePulseData aBonePulseData;
// GeoSet
//
// { unknow_field_0 }
// { serSubObjects }
// { unknow_field_2 }


void* GeoSet::New() {
}

GeoSet::GeoSet() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 4, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
GeoSet::~GeoSet() {
		free(Fields);
}

const char* GeoSet::Name() {
		return "GeoSet";
}
	
int* GeoSet::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* GeoSet::serSubObjects(void *Data) {
	return ((char*)Data) + 4;
}
void* GeoSet::unknow_field_2(void *Data) {
	return ((char*)Data) + 16;
}

GeoSet aGeoSet;
// Structure
//
// { dwFlags }
// { nBoneCount }
// { serBoneStructure }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { serBonePulses }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { nCollisionCapsuleCount }
// { serCollisionCapsules }
// { unknow_field_12 }
// { nHardpointCount }
// { serHardpoints }
// { unknow_field_15 }
// { unknow_field_16 }
// { tOctreeVisualMesh }
// { aabbBounds }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { nLoopConstraintCount }
// { serLoopConstraints }
// { unknow_field_28 }
// { uRagdollDegrade }


void* Structure::New() {
}

Structure::Structure() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 31);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aSerializeData, 8, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 16, 0);
		Fields[4].fieldinfo(&aLookAtData, 24, 0);
		Fields[5].fieldinfo(&aDT_INT, 116, 32);
		Fields[6].fieldinfo(&aSerializeData, 128, 0);
		Fields[7].fieldinfo(&aDT_VARIABLEARRAY, 120, 0);
		Fields[8].fieldinfo(&aDT_FIXEDARRAY, 136, 0);
		Fields[9].fieldinfo(&aSphere, 184, 0);
		Fields[10].fieldinfo(&aDT_INT, 200, 32);
		Fields[11].fieldinfo(&aSerializeData, 204, 0);
		Fields[12].fieldinfo(&aDT_VARIABLEARRAY, 216, 0);
		Fields[13].fieldinfo(&aDT_INT, 224, 32);
		Fields[14].fieldinfo(&aSerializeData, 228, 0);
		Fields[15].fieldinfo(&aDT_VARIABLEARRAY, 240, 0);
		Fields[16].fieldinfo(&aVector3D, 248, 0);
		Fields[17].fieldinfo(&aOctree, 264, 0);
		Fields[18].fieldinfo(&aAABB, 336, 0);
		Fields[19].fieldinfo(&aDT_CHARARRAY, 400, 9);
		Fields[20].fieldinfo(&aDT_CHARARRAY, 656, 9);
		Fields[21].fieldinfo(&aDT_CHARARRAY, 912, 9);
		Fields[22].fieldinfo(&aDT_CHARARRAY, 1168, 9);
		Fields[23].fieldinfo(&aDT_INT, 1424, 32);
		Fields[24].fieldinfo(&aDT_FLOAT, 1428, 32);
		Fields[25].fieldinfo(&aDT_INT, 1432, 32);
		Fields[26].fieldinfo(&aDT_INT, 360, 32);
		Fields[27].fieldinfo(&aSerializeData, 364, 0);
		Fields[28].fieldinfo(&aDT_VARIABLEARRAY, 376, 0);
		Fields[29].fieldinfo(&aDT_INT, 384, 32);
		Fields[31 - 1].fieldinfo(NULL, 0, 0);
	}
Structure::~Structure() {
		free(Fields);
}

const char* Structure::Name() {
		return "Structure";
}
	
int* Structure::dwFlags(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* Structure::nBoneCount(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* Structure::serBoneStructure(void *Data) {
	return ((char*)Data) + 8;
}
void* Structure::unknow_field_3(void *Data) {
	return ((char*)Data) + 16;
}
void* Structure::unknow_field_4(void *Data) {
	return ((char*)Data) + 24;
}
int* Structure::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 116;
}
void* Structure::serBonePulses(void *Data) {
	return ((char*)Data) + 128;
}
void* Structure::unknow_field_7(void *Data) {
	return ((char*)Data) + 120;
}
void* Structure::unknow_field_8(void *Data) {
	return ((char*)Data) + 136;
}
void* Structure::unknow_field_9(void *Data) {
	return ((char*)Data) + 184;
}
int* Structure::nCollisionCapsuleCount(void *Data) {
	return (int*)((char*)Data) + 200;
}
void* Structure::serCollisionCapsules(void *Data) {
	return ((char*)Data) + 204;
}
void* Structure::unknow_field_12(void *Data) {
	return ((char*)Data) + 216;
}
int* Structure::nHardpointCount(void *Data) {
	return (int*)((char*)Data) + 224;
}
void* Structure::serHardpoints(void *Data) {
	return ((char*)Data) + 228;
}
void* Structure::unknow_field_15(void *Data) {
	return ((char*)Data) + 240;
}
void* Structure::unknow_field_16(void *Data) {
	return ((char*)Data) + 248;
}
void* Structure::tOctreeVisualMesh(void *Data) {
	return ((char*)Data) + 264;
}
void* Structure::aabbBounds(void *Data) {
	return ((char*)Data) + 336;
}
void* Structure::unknow_field_19(void *Data) {
	return ((char*)Data) + 400;
}
void* Structure::unknow_field_20(void *Data) {
	return ((char*)Data) + 656;
}
void* Structure::unknow_field_21(void *Data) {
	return ((char*)Data) + 912;
}
void* Structure::unknow_field_22(void *Data) {
	return ((char*)Data) + 1168;
}
int* Structure::unknow_field_23(void *Data) {
	return (int*)((char*)Data) + 1424;
}
void* Structure::unknow_field_24(void *Data) {
	return ((char*)Data) + 1428;
}
int* Structure::unknow_field_25(void *Data) {
	return (int*)((char*)Data) + 1432;
}
int* Structure::nLoopConstraintCount(void *Data) {
	return (int*)((char*)Data) + 360;
}
void* Structure::serLoopConstraints(void *Data) {
	return ((char*)Data) + 364;
}
void* Structure::unknow_field_28(void *Data) {
	return ((char*)Data) + 376;
}
int* Structure::uRagdollDegrade(void *Data) {
	return (int*)((char*)Data) + 384;
}

Structure aStructure;
// SubObjectAppearance
//
// { unknow_field_0 }
// { snoCloth }
// { serTagMap }
// { hTagMap }
// { unknow_field_4 }
// { snoMaterial }


void* SubObjectAppearance::New() {
}

SubObjectAppearance::SubObjectAppearance() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_SNO, 4, 32);
		Fields[2].fieldinfo(&aSerializeData, 8, 0);
		Fields[3].fieldinfo(&aDT_TAGMAP, 16, 0);
		Fields[4].fieldinfo(&aUberMaterial, 24, 0);
		Fields[5].fieldinfo(&aDT_SNO, 128, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
SubObjectAppearance::~SubObjectAppearance() {
		free(Fields);
}

const char* SubObjectAppearance::Name() {
		return "SubObjectAppearance";
}
	
int* SubObjectAppearance::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* SubObjectAppearance::snoCloth(void *Data) {
	return ((char*)Data) + 4;
}
void* SubObjectAppearance::serTagMap(void *Data) {
	return ((char*)Data) + 8;
}
void* SubObjectAppearance::hTagMap(void *Data) {
	return ((char*)Data) + 16;
}
void* SubObjectAppearance::unknow_field_4(void *Data) {
	return ((char*)Data) + 24;
}
void* SubObjectAppearance::snoMaterial(void *Data) {
	return ((char*)Data) + 128;
}

SubObjectAppearance aSubObjectAppearance;
// AppearanceMaterial
//
// { unknow_field_0 }
// { serSOAs }
// { unknow_field_2 }


void* AppearanceMaterial::New() {
}

AppearanceMaterial::AppearanceMaterial() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[1].fieldinfo(&aSerializeData, 128, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 136, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AppearanceMaterial::~AppearanceMaterial() {
		free(Fields);
}

const char* AppearanceMaterial::Name() {
		return "AppearanceMaterial";
}
	
void* AppearanceMaterial::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AppearanceMaterial::serSOAs(void *Data) {
	return ((char*)Data) + 128;
}
void* AppearanceMaterial::unknow_field_2(void *Data) {
	return ((char*)Data) + 136;
}

AppearanceMaterial aAppearanceMaterial;
// AppearanceLook
//
// { unknow_field_0 }


void* AppearanceLook::New() {
}

AppearanceLook::AppearanceLook() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
AppearanceLook::~AppearanceLook() {
		free(Fields);
}

const char* AppearanceLook::Name() {
		return "AppearanceLook";
}
	
void* AppearanceLook::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}

AppearanceLook aAppearanceLook;
// StaticLight
//
// { fCastsShadows }
// { eType }
// { wp }
// { wv }
// { wdRadius }
// { eAttenType }
// { unknow_field_6 }
// { flAttenNearStart }
// { flAttenNearEnd }
// { flAttenFarStart }
// { flAttenFarEnd }
// { aHotspot }
// { aFalloff }
// { rgbavalDiffuse }


void* StaticLight::New() {
}

StaticLight::StaticLight() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 15);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aVector3D, 8, 0);
		Fields[3].fieldinfo(&aVector3D, 20, 0);
		Fields[4].fieldinfo(&aDT_FLOAT, 32, 32);
		Fields[5].fieldinfo(&aDT_INT, 36, 32);
		Fields[6].fieldinfo(&aDT_FIXEDARRAY, 40, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 52, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 60, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[11].fieldinfo(&aDT_INT, 68, 32);
		Fields[12].fieldinfo(&aDT_INT, 72, 32);
		Fields[13].fieldinfo(&aRGBAColorValue, 76, 0);
		Fields[15 - 1].fieldinfo(NULL, 0, 0);
	}
StaticLight::~StaticLight() {
		free(Fields);
}

const char* StaticLight::Name() {
		return "StaticLight";
}
	
int* StaticLight::fCastsShadows(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* StaticLight::eType(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* StaticLight::wp(void *Data) {
	return ((char*)Data) + 8;
}
void* StaticLight::wv(void *Data) {
	return ((char*)Data) + 20;
}
void* StaticLight::wdRadius(void *Data) {
	return ((char*)Data) + 32;
}
int* StaticLight::eAttenType(void *Data) {
	return (int*)((char*)Data) + 36;
}
void* StaticLight::unknow_field_6(void *Data) {
	return ((char*)Data) + 40;
}
void* StaticLight::flAttenNearStart(void *Data) {
	return ((char*)Data) + 52;
}
void* StaticLight::flAttenNearEnd(void *Data) {
	return ((char*)Data) + 56;
}
void* StaticLight::flAttenFarStart(void *Data) {
	return ((char*)Data) + 60;
}
void* StaticLight::flAttenFarEnd(void *Data) {
	return ((char*)Data) + 64;
}
int* StaticLight::aHotspot(void *Data) {
	return (int*)((char*)Data) + 68;
}
int* StaticLight::aFalloff(void *Data) {
	return (int*)((char*)Data) + 72;
}
void* StaticLight::rgbavalDiffuse(void *Data) {
	return ((char*)Data) + 76;
}

StaticLight aStaticLight;
// Appearance
//
// { unknow_field_0 }
// { serAppearanceMaterials }
// { unknow_field_2 }
// { serAppearanceLooks }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { nStaticLightCount }
// { serStaticLights }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }
// { unknow_field_16 }
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }


void* Appearance::New() {
}

Appearance::Appearance() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 23);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 1460, 32);
		Fields[1].fieldinfo(&aSerializeData, 1464, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 1472, 0);
		Fields[3].fieldinfo(&aSerializeData, 1480, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 1488, 0);
		Fields[5].fieldinfo(&aStructure, 16, 0);
		Fields[6].fieldinfo(&aDT_INT, 1456, 32);
		Fields[7].fieldinfo(&aDT_INT, 1496, 32);
		Fields[8].fieldinfo(&aSerializeData, 1500, 0);
		Fields[9].fieldinfo(&aDT_VARIABLEARRAY, 1512, 0);
		Fields[10].fieldinfo(&aDT_INT, 1520, 32);
		Fields[11].fieldinfo(&aDT_TIME, 1524, 32);
		Fields[12].fieldinfo(&aDT_TIME, 1528, 32);
		Fields[13].fieldinfo(&aDT_TIME, 1532, 32);
		Fields[14].fieldinfo(&aDT_TIME, 1536, 32);
		Fields[15].fieldinfo(&aDT_TIME, 1540, 32);
		Fields[16].fieldinfo(&aDT_INT, 1544, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 1548, 32);
		Fields[18].fieldinfo(&aDT_INT, 1552, 32);
		Fields[19].fieldinfo(&aDT_INT, 1556, 32);
		Fields[20].fieldinfo(&aDT_INT64, 1560, 64);
		Fields[21].fieldinfo(&aDT_INT, 1568, 32);
		Fields[23 - 1].fieldinfo(NULL, 0, 0);
	}
Appearance::~Appearance() {
		free(Fields);
}

const char* Appearance::Name() {
		return "Appearance";
}
	
int* Appearance::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 1460;
}
void* Appearance::serAppearanceMaterials(void *Data) {
	return ((char*)Data) + 1464;
}
void* Appearance::unknow_field_2(void *Data) {
	return ((char*)Data) + 1472;
}
void* Appearance::serAppearanceLooks(void *Data) {
	return ((char*)Data) + 1480;
}
void* Appearance::unknow_field_4(void *Data) {
	return ((char*)Data) + 1488;
}
void* Appearance::unknow_field_5(void *Data) {
	return ((char*)Data) + 16;
}
int* Appearance::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 1456;
}
int* Appearance::nStaticLightCount(void *Data) {
	return (int*)((char*)Data) + 1496;
}
void* Appearance::serStaticLights(void *Data) {
	return ((char*)Data) + 1500;
}
void* Appearance::unknow_field_9(void *Data) {
	return ((char*)Data) + 1512;
}
int* Appearance::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 1520;
}
void* Appearance::unknow_field_11(void *Data) {
	return ((char*)Data) + 1524;
}
void* Appearance::unknow_field_12(void *Data) {
	return ((char*)Data) + 1528;
}
void* Appearance::unknow_field_13(void *Data) {
	return ((char*)Data) + 1532;
}
void* Appearance::unknow_field_14(void *Data) {
	return ((char*)Data) + 1536;
}
void* Appearance::unknow_field_15(void *Data) {
	return ((char*)Data) + 1540;
}
int* Appearance::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 1544;
}
void* Appearance::unknow_field_17(void *Data) {
	return ((char*)Data) + 1548;
}
int* Appearance::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 1552;
}
int* Appearance::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 1556;
}
void* Appearance::unknow_field_20(void *Data) {
	return ((char*)Data) + 1560;
}
int* Appearance::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 1568;
}

Appearance aAppearance;
// ReverbParams
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }


void* ReverbParams::New() {
}

ReverbParams::ReverbParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 23);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 32, 32);
		Fields[9].fieldinfo(&aDT_INT, 36, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[11].fieldinfo(&aDT_INT, 44, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[13].fieldinfo(&aDT_FLOAT, 52, 32);
		Fields[14].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 60, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 68, 32);
		Fields[18].fieldinfo(&aDT_FLOAT, 72, 32);
		Fields[19].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[20].fieldinfo(&aDT_FLOAT, 80, 32);
		Fields[21].fieldinfo(&aDT_INT, 84, 32);
		Fields[23 - 1].fieldinfo(NULL, 0, 0);
	}
ReverbParams::~ReverbParams() {
		free(Fields);
}

const char* ReverbParams::Name() {
		return "ReverbParams";
}
	
int* ReverbParams::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* ReverbParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* ReverbParams::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* ReverbParams::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* ReverbParams::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* ReverbParams::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* ReverbParams::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
void* ReverbParams::unknow_field_7(void *Data) {
	return ((char*)Data) + 28;
}
void* ReverbParams::unknow_field_8(void *Data) {
	return ((char*)Data) + 32;
}
int* ReverbParams::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 36;
}
void* ReverbParams::unknow_field_10(void *Data) {
	return ((char*)Data) + 40;
}
int* ReverbParams::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 44;
}
void* ReverbParams::unknow_field_12(void *Data) {
	return ((char*)Data) + 48;
}
void* ReverbParams::unknow_field_13(void *Data) {
	return ((char*)Data) + 52;
}
void* ReverbParams::unknow_field_14(void *Data) {
	return ((char*)Data) + 56;
}
void* ReverbParams::unknow_field_15(void *Data) {
	return ((char*)Data) + 60;
}
void* ReverbParams::unknow_field_16(void *Data) {
	return ((char*)Data) + 64;
}
void* ReverbParams::unknow_field_17(void *Data) {
	return ((char*)Data) + 68;
}
void* ReverbParams::unknow_field_18(void *Data) {
	return ((char*)Data) + 72;
}
void* ReverbParams::unknow_field_19(void *Data) {
	return ((char*)Data) + 76;
}
void* ReverbParams::unknow_field_20(void *Data) {
	return ((char*)Data) + 80;
}
int* ReverbParams::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 84;
}

ReverbParams aReverbParams;
// Reverb
//
// { unknow_field_0 }


void* Reverb::New() {
}

Reverb::Reverb() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 2);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aReverbParams, 12, 0);
		Fields[2 - 1].fieldinfo(NULL, 0, 0);
	}
Reverb::~Reverb() {
		free(Fields);
}

const char* Reverb::Name() {
		return "Reverb";
}
	
void* Reverb::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}

Reverb aReverb;
// Material
//
// { unknow_field_0 }
// { serTagMap }
// { hTagMap }
// { unknow_field_3 }


void* Material::New() {
}

Material::Material() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_TAGMAP, 24, 0);
		Fields[3].fieldinfo(&aUberMaterial, 32, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
Material::~Material() {
		free(Fields);
}

const char* Material::Name() {
		return "Material";
}
	
int* Material::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Material::serTagMap(void *Data) {
	return ((char*)Data) + 16;
}
void* Material::hTagMap(void *Data) {
	return ((char*)Data) + 24;
}
void* Material::unknow_field_3(void *Data) {
	return ((char*)Data) + 32;
}

Material aMaterial;
// Shakes
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


void* Shakes::New() {
}

Shakes::Shakes() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_TIME, 16, 32);
		Fields[2].fieldinfo(&aDT_TIME, 20, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[5].fieldinfo(&aVectorPath, 32, 0);
		Fields[6].fieldinfo(&aVectorPath, 72, 0);
		Fields[7].fieldinfo(&aAnglePath, 112, 0);
		Fields[8].fieldinfo(&aFloatPath, 152, 0);
		Fields[9].fieldinfo(&aAnglePath, 192, 0);
		Fields[10].fieldinfo(&aFloatPath, 232, 0);
		Fields[11].fieldinfo(&aAnglePath, 272, 0);
		Fields[12].fieldinfo(&aFloatPath, 312, 0);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
Shakes::~Shakes() {
		free(Fields);
}

const char* Shakes::Name() {
		return "Shakes";
}
	
int* Shakes::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Shakes::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* Shakes::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Shakes::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Shakes::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Shakes::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* Shakes::unknow_field_6(void *Data) {
	return ((char*)Data) + 72;
}
void* Shakes::unknow_field_7(void *Data) {
	return ((char*)Data) + 112;
}
void* Shakes::unknow_field_8(void *Data) {
	return ((char*)Data) + 152;
}
void* Shakes::unknow_field_9(void *Data) {
	return ((char*)Data) + 192;
}
void* Shakes::unknow_field_10(void *Data) {
	return ((char*)Data) + 232;
}
void* Shakes::unknow_field_11(void *Data) {
	return ((char*)Data) + 272;
}
void* Shakes::unknow_field_12(void *Data) {
	return ((char*)Data) + 312;
}

Shakes aShakes;
// WeatherStateParams
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { snoSunLightScene }
// { snoSunLightActor }
// { unknow_field_9 }
// { unknow_field_10 }
// { snoPlayerLightScene }
// { snoPlayerLightActor }
// { snoLocalPlayerHeadLight }


void* WeatherStateParams::New() {
}

WeatherStateParams::WeatherStateParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 15);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aRGBAColor, 4, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aRGBAColor, 16, 0);
		Fields[5].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[7].fieldinfo(&aDT_SNO, 28, 32);
		Fields[8].fieldinfo(&aDT_SNO, 32, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[11].fieldinfo(&aDT_SNO, 44, 32);
		Fields[12].fieldinfo(&aDT_SNO, 48, 32);
		Fields[13].fieldinfo(&aDT_SNO, 52, 32);
		Fields[15 - 1].fieldinfo(NULL, 0, 0);
	}
WeatherStateParams::~WeatherStateParams() {
		free(Fields);
}

const char* WeatherStateParams::Name() {
		return "WeatherStateParams";
}
	
int* WeatherStateParams::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* WeatherStateParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* WeatherStateParams::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* WeatherStateParams::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* WeatherStateParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
void* WeatherStateParams::unknow_field_5(void *Data) {
	return ((char*)Data) + 20;
}
void* WeatherStateParams::unknow_field_6(void *Data) {
	return ((char*)Data) + 24;
}
void* WeatherStateParams::snoSunLightScene(void *Data) {
	return ((char*)Data) + 28;
}
void* WeatherStateParams::snoSunLightActor(void *Data) {
	return ((char*)Data) + 32;
}
void* WeatherStateParams::unknow_field_9(void *Data) {
	return ((char*)Data) + 36;
}
void* WeatherStateParams::unknow_field_10(void *Data) {
	return ((char*)Data) + 40;
}
void* WeatherStateParams::snoPlayerLightScene(void *Data) {
	return ((char*)Data) + 44;
}
void* WeatherStateParams::snoPlayerLightActor(void *Data) {
	return ((char*)Data) + 48;
}
void* WeatherStateParams::snoLocalPlayerHeadLight(void *Data) {
	return ((char*)Data) + 52;
}

WeatherStateParams aWeatherStateParams;
// ColorCorrectionParams
//
// { snoTexSaturationVignette }
// { snoTexCorrectionA }
// { snoTexCorrectionB }


void* ColorCorrectionParams::New() {
}

ColorCorrectionParams::ColorCorrectionParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_SNO, 4, 32);
		Fields[2].fieldinfo(&aDT_SNO, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ColorCorrectionParams::~ColorCorrectionParams() {
		free(Fields);
}

const char* ColorCorrectionParams::Name() {
		return "ColorCorrectionParams";
}
	
void* ColorCorrectionParams::snoTexSaturationVignette(void *Data) {
	return ((char*)Data) + 0;
}
void* ColorCorrectionParams::snoTexCorrectionA(void *Data) {
	return ((char*)Data) + 4;
}
void* ColorCorrectionParams::snoTexCorrectionB(void *Data) {
	return ((char*)Data) + 8;
}

ColorCorrectionParams aColorCorrectionParams;
// Weather
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { snoWeatherParticle }
// { snoFogParticle }
// { snoSound }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { snoLightning }
// { snoThunder }
// { unknow_field_15 }
// { unknow_field_16 }
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }


void* Weather::New() {
}

Weather::Weather() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 23);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_TIME, 16, 32);
		Fields[2].fieldinfo(&aVelocityVectorPath, 20, 0);
		Fields[3].fieldinfo(&aVelocityVectorPath, 60, 0);
		Fields[4].fieldinfo(&aDT_TIME, 100, 32);
		Fields[5].fieldinfo(&aFloatPath, 104, 0);
		Fields[6].fieldinfo(&aDT_SNO, 144, 32);
		Fields[7].fieldinfo(&aDT_SNO, 148, 32);
		Fields[8].fieldinfo(&aDT_SNO, 152, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 156, 32);
		Fields[10].fieldinfo(&aDT_TIME, 160, 32);
		Fields[11].fieldinfo(&aDT_TIME, 164, 32);
		Fields[12].fieldinfo(&aDT_TIME, 168, 32);
		Fields[13].fieldinfo(&aDT_SNO, 172, 32);
		Fields[14].fieldinfo(&aDT_SNO, 176, 32);
		Fields[15].fieldinfo(&aDT_FLOAT, 180, 32);
		Fields[16].fieldinfo(&aDT_FLOAT, 184, 32);
		Fields[17].fieldinfo(&aDT_FLOAT, 188, 32);
		Fields[18].fieldinfo(&aWeatherStateParams, 192, 0);
		Fields[19].fieldinfo(&aWeatherStateParams, 248, 0);
		Fields[20].fieldinfo(&aDT_FLOAT, 304, 32);
		Fields[21].fieldinfo(&aColorCorrectionParams, 308, 0);
		Fields[23 - 1].fieldinfo(NULL, 0, 0);
	}
Weather::~Weather() {
		free(Fields);
}

const char* Weather::Name() {
		return "Weather";
}
	
int* Weather::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Weather::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* Weather::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Weather::unknow_field_3(void *Data) {
	return ((char*)Data) + 60;
}
void* Weather::unknow_field_4(void *Data) {
	return ((char*)Data) + 100;
}
void* Weather::unknow_field_5(void *Data) {
	return ((char*)Data) + 104;
}
void* Weather::snoWeatherParticle(void *Data) {
	return ((char*)Data) + 144;
}
void* Weather::snoFogParticle(void *Data) {
	return ((char*)Data) + 148;
}
void* Weather::snoSound(void *Data) {
	return ((char*)Data) + 152;
}
void* Weather::unknow_field_9(void *Data) {
	return ((char*)Data) + 156;
}
void* Weather::unknow_field_10(void *Data) {
	return ((char*)Data) + 160;
}
void* Weather::unknow_field_11(void *Data) {
	return ((char*)Data) + 164;
}
void* Weather::unknow_field_12(void *Data) {
	return ((char*)Data) + 168;
}
void* Weather::snoLightning(void *Data) {
	return ((char*)Data) + 172;
}
void* Weather::snoThunder(void *Data) {
	return ((char*)Data) + 176;
}
void* Weather::unknow_field_15(void *Data) {
	return ((char*)Data) + 180;
}
void* Weather::unknow_field_16(void *Data) {
	return ((char*)Data) + 184;
}
void* Weather::unknow_field_17(void *Data) {
	return ((char*)Data) + 188;
}
void* Weather::unknow_field_18(void *Data) {
	return ((char*)Data) + 192;
}
void* Weather::unknow_field_19(void *Data) {
	return ((char*)Data) + 248;
}
void* Weather::unknow_field_20(void *Data) {
	return ((char*)Data) + 304;
}
void* Weather::unknow_field_21(void *Data) {
	return ((char*)Data) + 308;
}

Weather aWeather;
// Rope
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
// { snoPhysics }
// { unknow_field_10 }
// { unknow_field_11 }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }
// { unknow_field_16 }
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { unknow_field_28 }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { unknow_field_34 }
// { unknow_field_35 }
// { serMsgTriggeredEvents }
// { unknow_field_37 }


void* Rope::New() {
}

Rope::Rope() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 39);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[3].fieldinfo(&aDT_MASS, 24, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[5].fieldinfo(&aDT_MASS, 32, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[8].fieldinfo(&aUberMaterial, 48, 0);
		Fields[9].fieldinfo(&aDT_SNO, 152, 32);
		Fields[10].fieldinfo(&aDT_TIME, 156, 32);
		Fields[11].fieldinfo(&aDT_TIME, 160, 32);
		Fields[12].fieldinfo(&aDT_TIME, 164, 32);
		Fields[13].fieldinfo(&aDT_TIME, 168, 32);
		Fields[14].fieldinfo(&aColorPath, 172, 0);
		Fields[15].fieldinfo(&aColorPath, 212, 0);
		Fields[16].fieldinfo(&aFloatPath, 252, 0);
		Fields[17].fieldinfo(&aFloatPath, 292, 0);
		Fields[18].fieldinfo(&aFloatPath, 332, 0);
		Fields[19].fieldinfo(&aFloatPath, 372, 0);
		Fields[20].fieldinfo(&aFloatPath, 412, 0);
		Fields[21].fieldinfo(&aFloatPath, 452, 0);
		Fields[22].fieldinfo(&aFloatPath, 492, 0);
		Fields[23].fieldinfo(&aFloatPath, 532, 0);
		Fields[24].fieldinfo(&aFloatPath, 572, 0);
		Fields[25].fieldinfo(&aFloatPath, 612, 0);
		Fields[26].fieldinfo(&aVectorPath, 652, 0);
		Fields[27].fieldinfo(&aVelocityPath, 692, 0);
		Fields[28].fieldinfo(&aDT_FLOAT, 732, 32);
		Fields[29].fieldinfo(&aDT_FLOAT, 736, 32);
		Fields[30].fieldinfo(&aFloatPath, 740, 0);
		Fields[31].fieldinfo(&aFloatPath, 780, 0);
		Fields[32].fieldinfo(&aFloatPath, 820, 0);
		Fields[33].fieldinfo(&aFloatPath, 860, 0);
		Fields[34].fieldinfo(&aFloatPath, 900, 0);
		Fields[35].fieldinfo(&aDT_INT, 948, 32);
		Fields[36].fieldinfo(&aSerializeData, 940, 0);
		Fields[37].fieldinfo(&aDT_VARIABLEARRAY, 952, 0);
		Fields[39 - 1].fieldinfo(NULL, 0, 0);
	}
Rope::~Rope() {
		free(Fields);
}

const char* Rope::Name() {
		return "Rope";
}
	
int* Rope::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Rope::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Rope::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Rope::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Rope::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Rope::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* Rope::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}
void* Rope::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}
void* Rope::unknow_field_8(void *Data) {
	return ((char*)Data) + 48;
}
void* Rope::snoPhysics(void *Data) {
	return ((char*)Data) + 152;
}
void* Rope::unknow_field_10(void *Data) {
	return ((char*)Data) + 156;
}
void* Rope::unknow_field_11(void *Data) {
	return ((char*)Data) + 160;
}
void* Rope::unknow_field_12(void *Data) {
	return ((char*)Data) + 164;
}
void* Rope::unknow_field_13(void *Data) {
	return ((char*)Data) + 168;
}
void* Rope::unknow_field_14(void *Data) {
	return ((char*)Data) + 172;
}
void* Rope::unknow_field_15(void *Data) {
	return ((char*)Data) + 212;
}
void* Rope::unknow_field_16(void *Data) {
	return ((char*)Data) + 252;
}
void* Rope::unknow_field_17(void *Data) {
	return ((char*)Data) + 292;
}
void* Rope::unknow_field_18(void *Data) {
	return ((char*)Data) + 332;
}
void* Rope::unknow_field_19(void *Data) {
	return ((char*)Data) + 372;
}
void* Rope::unknow_field_20(void *Data) {
	return ((char*)Data) + 412;
}
void* Rope::unknow_field_21(void *Data) {
	return ((char*)Data) + 452;
}
void* Rope::unknow_field_22(void *Data) {
	return ((char*)Data) + 492;
}
void* Rope::unknow_field_23(void *Data) {
	return ((char*)Data) + 532;
}
void* Rope::unknow_field_24(void *Data) {
	return ((char*)Data) + 572;
}
void* Rope::unknow_field_25(void *Data) {
	return ((char*)Data) + 612;
}
void* Rope::unknow_field_26(void *Data) {
	return ((char*)Data) + 652;
}
void* Rope::unknow_field_27(void *Data) {
	return ((char*)Data) + 692;
}
void* Rope::unknow_field_28(void *Data) {
	return ((char*)Data) + 732;
}
void* Rope::unknow_field_29(void *Data) {
	return ((char*)Data) + 736;
}
void* Rope::unknow_field_30(void *Data) {
	return ((char*)Data) + 740;
}
void* Rope::unknow_field_31(void *Data) {
	return ((char*)Data) + 780;
}
void* Rope::unknow_field_32(void *Data) {
	return ((char*)Data) + 820;
}
void* Rope::unknow_field_33(void *Data) {
	return ((char*)Data) + 860;
}
void* Rope::unknow_field_34(void *Data) {
	return ((char*)Data) + 900;
}
int* Rope::unknow_field_35(void *Data) {
	return (int*)((char*)Data) + 948;
}
void* Rope::serMsgTriggeredEvents(void *Data) {
	return ((char*)Data) + 940;
}
void* Rope::unknow_field_37(void *Data) {
	return ((char*)Data) + 952;
}

Rope aRope;
// RandomMusicSoundParams
//
// { snoSound }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* RandomMusicSoundParams::New() {
}

RandomMusicSoundParams::RandomMusicSoundParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_TIME, 4, 32);
		Fields[2].fieldinfo(&aDT_TIME, 8, 32);
		Fields[3].fieldinfo(&aDT_TIME, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
RandomMusicSoundParams::~RandomMusicSoundParams() {
		free(Fields);
}

const char* RandomMusicSoundParams::Name() {
		return "RandomMusicSoundParams";
}
	
void* RandomMusicSoundParams::snoSound(void *Data) {
	return ((char*)Data) + 0;
}
void* RandomMusicSoundParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* RandomMusicSoundParams::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* RandomMusicSoundParams::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}

RandomMusicSoundParams aRandomMusicSoundParams;
// PlaylistEntry
//
// { snoSoundBank }
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


void* PlaylistEntry::New() {
}

PlaylistEntry::PlaylistEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 8);
		Fields[2].fieldinfo(&aDT_FLOAT, 136, 32);
		Fields[3].fieldinfo(&aDT_INT, 140, 32);
		Fields[4].fieldinfo(&aDT_INT, 144, 32);
		Fields[5].fieldinfo(&aDT_INT, 148, 32);
		Fields[6].fieldinfo(&aDT_INT, 152, 32);
		Fields[7].fieldinfo(&aDT_INT, 156, 32);
		Fields[8].fieldinfo(&aDT_INT, 160, 32);
		Fields[9].fieldinfo(&aDT_INT, 164, 32);
		Fields[10].fieldinfo(&aDT_TIME, 168, 32);
		Fields[11].fieldinfo(&aDT_INT, 172, 32);
		Fields[12].fieldinfo(&aDT_TIME, 176, 32);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
PlaylistEntry::~PlaylistEntry() {
		free(Fields);
}

const char* PlaylistEntry::Name() {
		return "PlaylistEntry";
}
	
void* PlaylistEntry::snoSoundBank(void *Data) {
	return ((char*)Data) + 0;
}
void* PlaylistEntry::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* PlaylistEntry::unknow_field_2(void *Data) {
	return ((char*)Data) + 136;
}
int* PlaylistEntry::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 140;
}
int* PlaylistEntry::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 144;
}
int* PlaylistEntry::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 148;
}
int* PlaylistEntry::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 152;
}
int* PlaylistEntry::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 156;
}
int* PlaylistEntry::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 160;
}
int* PlaylistEntry::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 164;
}
void* PlaylistEntry::unknow_field_10(void *Data) {
	return ((char*)Data) + 168;
}
int* PlaylistEntry::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 172;
}
void* PlaylistEntry::unknow_field_12(void *Data) {
	return ((char*)Data) + 176;
}

PlaylistEntry aPlaylistEntry;
// Music
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { serPlaylistEntries }
// { unknow_field_6 }
// { unknow_field_7 }


void* Music::New() {
}

Music::Music() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[2].fieldinfo(&aDT_TIME, 20, 32);
		Fields[3].fieldinfo(&aDT_TIME, 24, 32);
		Fields[4].fieldinfo(&aDT_INT, 36, 32);
		Fields[5].fieldinfo(&aSerializeData, 28, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 40, 0);
		Fields[7].fieldinfo(&aDT_FIXEDARRAY, 44, 0);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
Music::~Music() {
		free(Fields);
}

const char* Music::Name() {
		return "Music";
}
	
int* Music::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Music::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* Music::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Music::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
int* Music::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 36;
}
void* Music::serPlaylistEntries(void *Data) {
	return ((char*)Data) + 28;
}
void* Music::unknow_field_6(void *Data) {
	return ((char*)Data) + 40;
}
void* Music::unknow_field_7(void *Data) {
	return ((char*)Data) + 44;
}

Music aMusic;
// DspParam
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* DspParam::New() {
}

DspParam::DspParam() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
DspParam::~DspParam() {
		free(Fields);
}

const char* DspParam::Name() {
		return "DspParam";
}
	
void* DspParam::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* DspParam::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* DspParam::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* DspParam::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}

DspParam aDspParam;
// SoundPermutation
//
// { snoSoundBank }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }


void* SoundPermutation::New() {
}

SoundPermutation::SoundPermutation() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 8);
		Fields[2].fieldinfo(&aDT_INT, 136, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 140, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 144, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 148, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 152, 32);
		Fields[7].fieldinfo(&aDT_TIME, 156, 32);
		Fields[8].fieldinfo(&aDT_TIME, 160, 32);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
SoundPermutation::~SoundPermutation() {
		free(Fields);
}

const char* SoundPermutation::Name() {
		return "SoundPermutation";
}
	
void* SoundPermutation::snoSoundBank(void *Data) {
	return ((char*)Data) + 0;
}
void* SoundPermutation::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* SoundPermutation::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 136;
}
void* SoundPermutation::unknow_field_3(void *Data) {
	return ((char*)Data) + 140;
}
void* SoundPermutation::unknow_field_4(void *Data) {
	return ((char*)Data) + 144;
}
void* SoundPermutation::unknow_field_5(void *Data) {
	return ((char*)Data) + 148;
}
void* SoundPermutation::unknow_field_6(void *Data) {
	return ((char*)Data) + 152;
}
void* SoundPermutation::unknow_field_7(void *Data) {
	return ((char*)Data) + 156;
}
void* SoundPermutation::unknow_field_8(void *Data) {
	return ((char*)Data) + 160;
}

SoundPermutation aSoundPermutation;
// Sound
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
// { serPermutations }
// { unknow_field_15 }
// { unknow_field_16 }
// { unknow_field_17 }
// { unknow_field_18 }
// { serDspEffects }
// { unknow_field_20 }


void* Sound::New() {
}

Sound::Sound() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 22);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[5].fieldinfo(&aDT_INT, 32, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 44, 32);
		Fields[9].fieldinfo(&aDT_IMPULSE, 48, 32);
		Fields[10].fieldinfo(&aDT_IMPULSE, 52, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 60, 32);
		Fields[13].fieldinfo(&aDT_INT, 72, 32);
		Fields[14].fieldinfo(&aSerializeData, 64, 0);
		Fields[15].fieldinfo(&aDT_VARIABLEARRAY, 76, 0);
		Fields[16].fieldinfo(&aDT_INT, 80, 32);
		Fields[17].fieldinfo(&aDT_INT, 84, 32);
		Fields[18].fieldinfo(&aDT_TIME, 100, 32);
		Fields[19].fieldinfo(&aSerializeData, 92, 0);
		Fields[20].fieldinfo(&aDT_VARIABLEARRAY, 88, 0);
		Fields[22 - 1].fieldinfo(NULL, 0, 0);
	}
Sound::~Sound() {
		free(Fields);
}

const char* Sound::Name() {
		return "Sound";
}
	
int* Sound::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Sound::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Sound::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Sound::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Sound::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
int* Sound::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* Sound::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}
void* Sound::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}
void* Sound::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}
void* Sound::unknow_field_9(void *Data) {
	return ((char*)Data) + 48;
}
void* Sound::unknow_field_10(void *Data) {
	return ((char*)Data) + 52;
}
void* Sound::unknow_field_11(void *Data) {
	return ((char*)Data) + 56;
}
void* Sound::unknow_field_12(void *Data) {
	return ((char*)Data) + 60;
}
int* Sound::unknow_field_13(void *Data) {
	return (int*)((char*)Data) + 72;
}
void* Sound::serPermutations(void *Data) {
	return ((char*)Data) + 64;
}
void* Sound::unknow_field_15(void *Data) {
	return ((char*)Data) + 76;
}
int* Sound::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 80;
}
int* Sound::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 84;
}
void* Sound::unknow_field_18(void *Data) {
	return ((char*)Data) + 100;
}
void* Sound::serDspEffects(void *Data) {
	return ((char*)Data) + 92;
}
void* Sound::unknow_field_20(void *Data) {
	return ((char*)Data) + 88;
}

Sound aSound;
// SoundSample
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { eFormat }
// { serSamples }
// { unknow_field_9 }


void* SoundSample::New() {
}

SoundSample::SoundSample() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 11);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 8);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 385, 9);
		Fields[2].fieldinfo(&aDT_INT, 644, 1);
		Fields[3].fieldinfo(&aDT_INT, 648, 1);
		Fields[4].fieldinfo(&aDT_INT, 652, 32);
		Fields[5].fieldinfo(&aDT_INT, 656, 32);
		Fields[6].fieldinfo(&aDT_INT, 660, 32);
		Fields[7].fieldinfo(&aDT_INT, 664, 32);
		Fields[8].fieldinfo(&aSerializeData, 668, 0);
		Fields[9].fieldinfo(&aDT_CHARARRAY, 129, 9);
		Fields[11 - 1].fieldinfo(NULL, 0, 0);
	}
SoundSample::~SoundSample() {
		free(Fields);
}

const char* SoundSample::Name() {
		return "SoundSample";
}
	
void* SoundSample::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* SoundSample::unknow_field_1(void *Data) {
	return ((char*)Data) + 385;
}
int* SoundSample::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 644;
}
int* SoundSample::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 648;
}
int* SoundSample::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 652;
}
int* SoundSample::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 656;
}
int* SoundSample::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 660;
}
int* SoundSample::eFormat(void *Data) {
	return (int*)((char*)Data) + 664;
}
void* SoundSample::serSamples(void *Data) {
	return ((char*)Data) + 668;
}
void* SoundSample::unknow_field_9(void *Data) {
	return ((char*)Data) + 129;
}

SoundSample aSoundSample;
// SoundBank
//
// { unknow_field_0 }
// { serSoundSamples }
// { unknow_field_2 }
// { serSampleTimestamps }
// { unknow_field_4 }
// { unknow_field_5 }


void* SoundBank::New() {
}

SoundBank::SoundBank() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 20, 32);
		Fields[1].fieldinfo(&aSerializeData, 12, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 24, 0);
		Fields[3].fieldinfo(&aSerializeData, 28, 0);
		Fields[4].fieldinfo(&aDT_VARIABLEARRAY, 36, 0);
		Fields[5].fieldinfo(&aDT_INT, 40, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
SoundBank::~SoundBank() {
		free(Fields);
}

const char* SoundBank::Name() {
		return "SoundBank";
}
	
int* SoundBank::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* SoundBank::serSoundSamples(void *Data) {
	return ((char*)Data) + 12;
}
void* SoundBank::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}
void* SoundBank::serSampleTimestamps(void *Data) {
	return ((char*)Data) + 28;
}
void* SoundBank::unknow_field_4(void *Data) {
	return ((char*)Data) + 36;
}
int* SoundBank::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 40;
}

SoundBank aSoundBank;
// LightStateParams
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


void* LightStateParams::New() {
}

LightStateParams::LightStateParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aFloatPath, 0, 0);
		Fields[1].fieldinfo(&aFloatPath, 40, 0);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 80, 0);
		Fields[3].fieldinfo(&aAnglePath, 200, 0);
		Fields[4].fieldinfo(&aAnglePath, 240, 0);
		Fields[5].fieldinfo(&aColorPath, 280, 0);
		Fields[6].fieldinfo(&aFloatPath, 320, 0);
		Fields[7].fieldinfo(&aColorPath, 360, 0);
		Fields[8].fieldinfo(&aFloatPath, 400, 0);
		Fields[9].fieldinfo(&aColorPath, 440, 0);
		Fields[10].fieldinfo(&aFloatPath, 480, 0);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
LightStateParams::~LightStateParams() {
		free(Fields);
}

const char* LightStateParams::Name() {
		return "LightStateParams";
}
	
void* LightStateParams::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* LightStateParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 40;
}
void* LightStateParams::unknow_field_2(void *Data) {
	return ((char*)Data) + 80;
}
void* LightStateParams::unknow_field_3(void *Data) {
	return ((char*)Data) + 200;
}
void* LightStateParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 240;
}
void* LightStateParams::unknow_field_5(void *Data) {
	return ((char*)Data) + 280;
}
void* LightStateParams::unknow_field_6(void *Data) {
	return ((char*)Data) + 320;
}
void* LightStateParams::unknow_field_7(void *Data) {
	return ((char*)Data) + 360;
}
void* LightStateParams::unknow_field_8(void *Data) {
	return ((char*)Data) + 400;
}
void* LightStateParams::unknow_field_9(void *Data) {
	return ((char*)Data) + 440;
}
void* LightStateParams::unknow_field_10(void *Data) {
	return ((char*)Data) + 480;
}

LightStateParams aLightStateParams;
// Light
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


void* Light::New() {
}

Light::Light() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aMaterialTexture, 24, 0);
		Fields[4].fieldinfo(&aDT_TIME, 204, 32);
		Fields[5].fieldinfo(&aDT_INT, 208, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 212, 32);
		Fields[7].fieldinfo(&aLightStateParams, 216, 0);
		Fields[8].fieldinfo(&aLightStateParams, 736, 0);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
Light::~Light() {
		free(Fields);
}

const char* Light::Name() {
		return "Light";
}
	
int* Light::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Light::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* Light::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* Light::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Light::unknow_field_4(void *Data) {
	return ((char*)Data) + 204;
}
int* Light::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 208;
}
void* Light::unknow_field_6(void *Data) {
	return ((char*)Data) + 212;
}
void* Light::unknow_field_7(void *Data) {
	return ((char*)Data) + 216;
}
void* Light::unknow_field_8(void *Data) {
	return ((char*)Data) + 736;
}

Light aLight;
// UIControlElement
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UIControlElement::New() {
}

UIControlElement::UIControlElement() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 9);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UIControlElement::~UIControlElement() {
		free(Fields);
}

const char* UIControlElement::Name() {
		return "UIControlElement";
}
	
int* UIControlElement::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* UIControlElement::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

UIControlElement aUIControlElement;
// UIDataElementInt32
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UIDataElementInt32::New() {
}

UIDataElementInt32::UIDataElementInt32() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UIDataElementInt32::~UIDataElementInt32() {
		free(Fields);
}

const char* UIDataElementInt32::Name() {
		return "UIDataElementInt32";
}
	
int* UIDataElementInt32::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* UIDataElementInt32::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

UIDataElementInt32 aUIDataElementInt32;
// UIDataElementFloat32
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UIDataElementFloat32::New() {
}

UIDataElementFloat32::UIDataElementFloat32() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UIDataElementFloat32::~UIDataElementFloat32() {
		free(Fields);
}

const char* UIDataElementFloat32::Name() {
		return "UIDataElementFloat32";
}
	
int* UIDataElementFloat32::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* UIDataElementFloat32::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

UIDataElementFloat32 aUIDataElementFloat32;
// DataElements
//
// { unknow_field_0 }
// { serStringElements }
// { unknow_field_2 }
// { unknow_field_3 }
// { serInt32Elements }
// { unknow_field_5 }
// { unknow_field_6 }
// { serFloat32Elements }
// { unknow_field_8 }


void* DataElements::New() {
}

DataElements::DataElements() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 10);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 4, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aSerializeData, 20, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[6].fieldinfo(&aDT_INT, 32, 32);
		Fields[7].fieldinfo(&aSerializeData, 36, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 44, 0);
		Fields[10 - 1].fieldinfo(NULL, 0, 0);
	}
DataElements::~DataElements() {
		free(Fields);
}

const char* DataElements::Name() {
		return "DataElements";
}
	
int* DataElements::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* DataElements::serStringElements(void *Data) {
	return ((char*)Data) + 4;
}
void* DataElements::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* DataElements::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* DataElements::serInt32Elements(void *Data) {
	return ((char*)Data) + 20;
}
void* DataElements::unknow_field_5(void *Data) {
	return ((char*)Data) + 28;
}
int* DataElements::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* DataElements::serFloat32Elements(void *Data) {
	return ((char*)Data) + 36;
}
void* DataElements::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}

DataElements aDataElements;
// UIStyleChildSpec
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UIStyleChildSpec::New() {
}

UIStyleChildSpec::UIStyleChildSpec() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 10);
		Fields[1].fieldinfo(&aDataElements, 512, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UIStyleChildSpec::~UIStyleChildSpec() {
		free(Fields);
}

const char* UIStyleChildSpec::Name() {
		return "UIStyleChildSpec";
}
	
void* UIStyleChildSpec::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* UIStyleChildSpec::unknow_field_1(void *Data) {
	return ((char*)Data) + 512;
}

UIStyleChildSpec aUIStyleChildSpec;
// UIStyle
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serChildSpecs }
// { unknow_field_5 }


void* UIStyle::New() {
}

UIStyle::UIStyle() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 10);
		Fields[2].fieldinfo(&aDataElements, 516, 0);
		Fields[3].fieldinfo(&aDT_INT, 564, 32);
		Fields[4].fieldinfo(&aSerializeData, 568, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 576, 0);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
UIStyle::~UIStyle() {
		free(Fields);
}

const char* UIStyle::Name() {
		return "UIStyle";
}
	
int* UIStyle::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* UIStyle::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* UIStyle::unknow_field_2(void *Data) {
	return ((char*)Data) + 516;
}
int* UIStyle::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 564;
}
void* UIStyle::serChildSpecs(void *Data) {
	return ((char*)Data) + 568;
}
void* UIStyle::unknow_field_5(void *Data) {
	return ((char*)Data) + 576;
}

UIStyle aUIStyle;
// UIAnimationElementInt32
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UIAnimationElementInt32::New() {
}

UIAnimationElementInt32::UIAnimationElementInt32() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UIAnimationElementInt32::~UIAnimationElementInt32() {
		free(Fields);
}

const char* UIAnimationElementInt32::Name() {
		return "UIAnimationElementInt32";
}
	
void* UIAnimationElementInt32::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* UIAnimationElementInt32::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

UIAnimationElementInt32 aUIAnimationElementInt32;
// UIAnimationElementFloat
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UIAnimationElementFloat::New() {
}

UIAnimationElementFloat::UIAnimationElementFloat() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UIAnimationElementFloat::~UIAnimationElementFloat() {
		free(Fields);
}

const char* UIAnimationElementFloat::Name() {
		return "UIAnimationElementFloat";
}
	
void* UIAnimationElementFloat::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* UIAnimationElementFloat::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

UIAnimationElementFloat aUIAnimationElementFloat;
// UIAnimationElementVector2D
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UIAnimationElementVector2D::New() {
}

UIAnimationElementVector2D::UIAnimationElementVector2D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FIXEDARRAY, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UIAnimationElementVector2D::~UIAnimationElementVector2D() {
		free(Fields);
}

const char* UIAnimationElementVector2D::Name() {
		return "UIAnimationElementVector2D";
}
	
void* UIAnimationElementVector2D::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* UIAnimationElementVector2D::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

UIAnimationElementVector2D aUIAnimationElementVector2D;
// UIAnimationDescription
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


void* UIAnimationDescription::New() {
}

UIAnimationDescription::UIAnimationDescription() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 10);
		Fields[2].fieldinfo(&aDT_INT, 516, 32);
		Fields[3].fieldinfo(&aDT_FIXEDARRAY, 520, 32);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
UIAnimationDescription::~UIAnimationDescription() {
		free(Fields);
}

const char* UIAnimationDescription::Name() {
		return "UIAnimationDescription";
}
	
int* UIAnimationDescription::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* UIAnimationDescription::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
int* UIAnimationDescription::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 516;
}
void* UIAnimationDescription::unknow_field_3(void *Data) {
	return ((char*)Data) + 520;
}

UIAnimationDescription aUIAnimationDescription;
// UIControlAnimationBinding
//
// { unknow_field_0 }
// { unknow_field_1 }


void* UIControlAnimationBinding::New() {
}

UIControlAnimationBinding::UIControlAnimationBinding() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 10);
		Fields[1].fieldinfo(&aDT_INT, 512, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
UIControlAnimationBinding::~UIControlAnimationBinding() {
		free(Fields);
}

const char* UIControlAnimationBinding::Name() {
		return "UIControlAnimationBinding";
}
	
void* UIControlAnimationBinding::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* UIControlAnimationBinding::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 512;
}

UIControlAnimationBinding aUIControlAnimationBinding;
// UIAnimationElements
//
// { unknow_field_0 }
// { serInt32Elements }
// { unknow_field_2 }
// { unknow_field_3 }
// { serFloatElements }
// { unknow_field_5 }
// { unknow_field_6 }
// { serVector2DElements }
// { unknow_field_8 }
// { unknow_field_9 }
// { serAnimationDescriptions }
// { unknow_field_11 }
// { unknow_field_12 }
// { serAnimationBindings }
// { unknow_field_14 }


void* UIAnimationElements::New() {
}

UIAnimationElements::UIAnimationElements() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 16);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aSerializeData, 4, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 12, 0);
		Fields[3].fieldinfo(&aDT_INT, 16, 32);
		Fields[4].fieldinfo(&aSerializeData, 20, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[6].fieldinfo(&aDT_INT, 32, 32);
		Fields[7].fieldinfo(&aSerializeData, 36, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 44, 0);
		Fields[9].fieldinfo(&aDT_INT, 48, 32);
		Fields[10].fieldinfo(&aSerializeData, 52, 0);
		Fields[11].fieldinfo(&aDT_VARIABLEARRAY, 60, 0);
		Fields[12].fieldinfo(&aDT_INT, 64, 32);
		Fields[13].fieldinfo(&aSerializeData, 68, 0);
		Fields[14].fieldinfo(&aDT_VARIABLEARRAY, 76, 0);
		Fields[16 - 1].fieldinfo(NULL, 0, 0);
	}
UIAnimationElements::~UIAnimationElements() {
		free(Fields);
}

const char* UIAnimationElements::Name() {
		return "UIAnimationElements";
}
	
int* UIAnimationElements::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* UIAnimationElements::serInt32Elements(void *Data) {
	return ((char*)Data) + 4;
}
void* UIAnimationElements::unknow_field_2(void *Data) {
	return ((char*)Data) + 12;
}
int* UIAnimationElements::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* UIAnimationElements::serFloatElements(void *Data) {
	return ((char*)Data) + 20;
}
void* UIAnimationElements::unknow_field_5(void *Data) {
	return ((char*)Data) + 28;
}
int* UIAnimationElements::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* UIAnimationElements::serVector2DElements(void *Data) {
	return ((char*)Data) + 36;
}
void* UIAnimationElements::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}
int* UIAnimationElements::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 48;
}
void* UIAnimationElements::serAnimationDescriptions(void *Data) {
	return ((char*)Data) + 52;
}
void* UIAnimationElements::unknow_field_11(void *Data) {
	return ((char*)Data) + 60;
}
int* UIAnimationElements::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 64;
}
void* UIAnimationElements::serAnimationBindings(void *Data) {
	return ((char*)Data) + 68;
}
void* UIAnimationElements::unknow_field_14(void *Data) {
	return ((char*)Data) + 76;
}

UIAnimationElements aUIAnimationElements;
// UIControlData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }


void* UIControlData::New() {
}

UIControlData::UIControlData() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 8, 10);
		Fields[3].fieldinfo(&aDT_INT, 520, 32);
		Fields[4].fieldinfo(&aDT_CHARARRAY, 524, 10);
		Fields[5].fieldinfo(&aDT_INT, 1036, 32);
		Fields[6].fieldinfo(&aUIStyle, 1040, 0);
		Fields[7].fieldinfo(&aUIAnimationElements, 1640, 0);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
UIControlData::~UIControlData() {
		free(Fields);
}

const char* UIControlData::Name() {
		return "UIControlData";
}
	
int* UIControlData::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* UIControlData::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* UIControlData::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* UIControlData::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 520;
}
void* UIControlData::unknow_field_4(void *Data) {
	return ((char*)Data) + 524;
}
int* UIControlData::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 1036;
}
void* UIControlData::unknow_field_6(void *Data) {
	return ((char*)Data) + 1040;
}
void* UIControlData::unknow_field_7(void *Data) {
	return ((char*)Data) + 1640;
}

UIControlData aUIControlData;
// UI
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { dwNumControls }
// { serControlList }
// { unknow_field_5 }
// { dwNumStyles }
// { serStyleList }
// { unknow_field_8 }
// { unknow_field_9 }


void* UI::New() {
}

UI::UI() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 11);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 12, 9);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 268, 9);
		Fields[2].fieldinfo(&aDT_INT, 524, 32);
		Fields[3].fieldinfo(&aDT_INT, 528, 32);
		Fields[4].fieldinfo(&aSerializeData, 532, 0);
		Fields[5].fieldinfo(&aDT_VARIABLEARRAY, 540, 0);
		Fields[6].fieldinfo(&aDT_INT, 544, 32);
		Fields[7].fieldinfo(&aSerializeData, 548, 0);
		Fields[8].fieldinfo(&aDT_VARIABLEARRAY, 556, 0);
		Fields[9].fieldinfo(&aDataElements, 560, 0);
		Fields[11 - 1].fieldinfo(NULL, 0, 0);
	}
UI::~UI() {
		free(Fields);
}

const char* UI::Name() {
		return "UI";
}
	
void* UI::unknow_field_0(void *Data) {
	return ((char*)Data) + 12;
}
void* UI::unknow_field_1(void *Data) {
	return ((char*)Data) + 268;
}
int* UI::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 524;
}
int* UI::dwNumControls(void *Data) {
	return (int*)((char*)Data) + 528;
}
void* UI::serControlList(void *Data) {
	return ((char*)Data) + 532;
}
void* UI::unknow_field_5(void *Data) {
	return ((char*)Data) + 540;
}
int* UI::dwNumStyles(void *Data) {
	return (int*)((char*)Data) + 544;
}
void* UI::serStyleList(void *Data) {
	return ((char*)Data) + 548;
}
void* UI::unknow_field_8(void *Data) {
	return ((char*)Data) + 556;
}
void* UI::unknow_field_9(void *Data) {
	return ((char*)Data) + 560;
}

UI aUI;
// RenderParams
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }


void* RenderParams::New() {
}

RenderParams::RenderParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 25);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aDT_INT, 24, 32);
		Fields[7].fieldinfo(&aDT_INT, 28, 32);
		Fields[8].fieldinfo(&aDT_INT, 32, 32);
		Fields[9].fieldinfo(&aDT_INT, 36, 32);
		Fields[10].fieldinfo(&aDT_INT, 40, 32);
		Fields[11].fieldinfo(&aDT_INT, 44, 32);
		Fields[12].fieldinfo(&aDT_INT, 48, 32);
		Fields[13].fieldinfo(&aDT_BYTE, 52, 8);
		Fields[14].fieldinfo(&aDT_INT, 56, 32);
		Fields[15].fieldinfo(&aDT_INT, 60, 32);
		Fields[16].fieldinfo(&aDT_INT, 64, 32);
		Fields[17].fieldinfo(&aDT_INT, 68, 32);
		Fields[18].fieldinfo(&aDT_INT, 72, 32);
		Fields[19].fieldinfo(&aDT_INT, 76, 32);
		Fields[20].fieldinfo(&aDT_INT, 80, 32);
		Fields[21].fieldinfo(&aDT_INT, 84, 32);
		Fields[22].fieldinfo(&aDT_INT, 88, 32);
		Fields[23].fieldinfo(&aRGBAColor, 92, 0);
		Fields[25 - 1].fieldinfo(NULL, 0, 0);
	}
RenderParams::~RenderParams() {
		free(Fields);
}

const char* RenderParams::Name() {
		return "RenderParams";
}
	
int* RenderParams::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* RenderParams::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* RenderParams::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
void* RenderParams::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* RenderParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}
int* RenderParams::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* RenderParams::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* RenderParams::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* RenderParams::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 32;
}
int* RenderParams::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* RenderParams::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 40;
}
int* RenderParams::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 44;
}
int* RenderParams::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 48;
}
void* RenderParams::unknow_field_13(void *Data) {
	return ((char*)Data) + 52;
}
int* RenderParams::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 56;
}
int* RenderParams::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 60;
}
int* RenderParams::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 64;
}
int* RenderParams::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 68;
}
int* RenderParams::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 72;
}
int* RenderParams::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 76;
}
int* RenderParams::unknow_field_20(void *Data) {
	return (int*)((char*)Data) + 80;
}
int* RenderParams::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 84;
}
int* RenderParams::unknow_field_22(void *Data) {
	return (int*)((char*)Data) + 88;
}
void* RenderParams::unknow_field_23(void *Data) {
	return ((char*)Data) + 92;
}

RenderParams aRenderParams;
// TextureStageParams
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* TextureStageParams::New() {
}

TextureStageParams::TextureStageParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 16, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
TextureStageParams::~TextureStageParams() {
		free(Fields);
}

const char* TextureStageParams::Name() {
		return "TextureStageParams";
}
	
int* TextureStageParams::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* TextureStageParams::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* TextureStageParams::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* TextureStageParams::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* TextureStageParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}

TextureStageParams aTextureStageParams;
// RenderPass
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
// { serTagMap }
// { hTagMap }


void* RenderPass::New() {
}

RenderPass::RenderPass() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aRenderParams, 8, 0);
		Fields[3].fieldinfo(&aDT_INT, 104, 32);
		Fields[4].fieldinfo(&aDT_FIXEDARRAY, 108, 0);
		Fields[5].fieldinfo(&aDT_INT, 428, 32);
		Fields[6].fieldinfo(&aDT_CHARARRAY, 432, 9);
		Fields[7].fieldinfo(&aDT_CHARARRAY, 688, 7);
		Fields[8].fieldinfo(&aDT_CHARARRAY, 752, 7);
		Fields[9].fieldinfo(&aSerializeData, 816, 0);
		Fields[10].fieldinfo(&aDT_TAGMAP, 824, 0);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
RenderPass::~RenderPass() {
		free(Fields);
}

const char* RenderPass::Name() {
		return "RenderPass";
}
	
int* RenderPass::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* RenderPass::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* RenderPass::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* RenderPass::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 104;
}
void* RenderPass::unknow_field_4(void *Data) {
	return ((char*)Data) + 108;
}
int* RenderPass::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 428;
}
void* RenderPass::unknow_field_6(void *Data) {
	return ((char*)Data) + 432;
}
void* RenderPass::unknow_field_7(void *Data) {
	return ((char*)Data) + 688;
}
void* RenderPass::unknow_field_8(void *Data) {
	return ((char*)Data) + 752;
}
void* RenderPass::serTagMap(void *Data) {
	return ((char*)Data) + 816;
}
void* RenderPass::hTagMap(void *Data) {
	return ((char*)Data) + 824;
}

RenderPass aRenderPass;
// Shaders
//
// { unknow_field_0 }
// { unknow_field_1 }
// { serPasses }
// { unknow_field_3 }
// { unknow_field_4 }


void* Shaders::New() {
}

Shaders::Shaders() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aSerializeData, 20, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4].fieldinfo(&aDT_CHARARRAY, 32, 9);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
Shaders::~Shaders() {
		free(Fields);
}

const char* Shaders::Name() {
		return "Shaders";
}
	
int* Shaders::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Shaders::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Shaders::serPasses(void *Data) {
	return ((char*)Data) + 20;
}
void* Shaders::unknow_field_3(void *Data) {
	return ((char*)Data) + 28;
}
void* Shaders::unknow_field_4(void *Data) {
	return ((char*)Data) + 32;
}

Shaders aShaders;
// Anim2DFrame
//
// { unknow_field_0 }
// { unknow_field_1 }


void* Anim2DFrame::New() {
}

Anim2DFrame::Anim2DFrame() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aRGBAColor, 64, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
Anim2DFrame::~Anim2DFrame() {
		free(Fields);
}

const char* Anim2DFrame::Name() {
		return "Anim2DFrame";
}
	
void* Anim2DFrame::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Anim2DFrame::unknow_field_1(void *Data) {
	return ((char*)Data) + 64;
}

Anim2DFrame aAnim2DFrame;
// Anim2D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { snoSound }
// { unknow_field_4 }
// { serFrames }
// { unknow_field_6 }


void* Anim2D::New() {
}

Anim2D::Anim2D() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 8);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aFrameAnim, 20, 0);
		Fields[3].fieldinfo(&aDT_SNO, 40, 32);
		Fields[4].fieldinfo(&aDT_INT, 44, 32);
		Fields[5].fieldinfo(&aSerializeData, 48, 0);
		Fields[6].fieldinfo(&aDT_VARIABLEARRAY, 56, 0);
		Fields[8 - 1].fieldinfo(NULL, 0, 0);
	}
Anim2D::~Anim2D() {
		free(Fields);
}

const char* Anim2D::Name() {
		return "Anim2D";
}
	
int* Anim2D::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Anim2D::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Anim2D::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Anim2D::snoSound(void *Data) {
	return ((char*)Data) + 40;
}
int* Anim2D::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 44;
}
void* Anim2D::serFrames(void *Data) {
	return ((char*)Data) + 48;
}
void* Anim2D::unknow_field_6(void *Data) {
	return ((char*)Data) + 56;
}

Anim2D aAnim2D;
// Font
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { serTTFData }
// { unknow_field_9 }
// { unknow_field_10 }


void* Font::New() {
}

Font::Font() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 12);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 16, 7);
		Fields[2].fieldinfo(&aDT_CHARARRAY, 80, 7);
		Fields[3].fieldinfo(&aDT_INT, 144, 32);
		Fields[4].fieldinfo(&aDT_ENUM, 148, 2);
		Fields[5].fieldinfo(&aDT_ENUM, 152, 2);
		Fields[6].fieldinfo(&aDT_INT, 156, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 160, 32);
		Fields[8].fieldinfo(&aSerializeData, 164, 0);
		Fields[9].fieldinfo(&aDT_VARIABLEARRAY, 172, 0);
		Fields[10].fieldinfo(&aDT_INT, 176, 32);
		Fields[12 - 1].fieldinfo(NULL, 0, 0);
	}
Font::~Font() {
		free(Fields);
}

const char* Font::Name() {
		return "Font";
}
	
int* Font::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Font::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* Font::unknow_field_2(void *Data) {
	return ((char*)Data) + 80;
}
int* Font::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 144;
}
void* Font::unknow_field_4(void *Data) {
	return ((char*)Data) + 148;
}
void* Font::unknow_field_5(void *Data) {
	return ((char*)Data) + 152;
}
int* Font::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 156;
}
void* Font::unknow_field_7(void *Data) {
	return ((char*)Data) + 160;
}
void* Font::serTTFData(void *Data) {
	return ((char*)Data) + 164;
}
void* Font::unknow_field_9(void *Data) {
	return ((char*)Data) + 172;
}
int* Font::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 176;
}

Font aFont;
// EmitterParams
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* EmitterParams::New() {
}

EmitterParams::EmitterParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aFloatPath, 4, 0);
		Fields[2].fieldinfo(&aFloatPath, 44, 0);
		Fields[3].fieldinfo(&aVectorPath, 84, 0);
		Fields[4].fieldinfo(&aDT_CHARARRAY, 124, 8);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
EmitterParams::~EmitterParams() {
		free(Fields);
}

const char* EmitterParams::Name() {
		return "EmitterParams";
}
	
int* EmitterParams::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* EmitterParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* EmitterParams::unknow_field_2(void *Data) {
	return ((char*)Data) + 44;
}
void* EmitterParams::unknow_field_3(void *Data) {
	return ((char*)Data) + 84;
}
void* EmitterParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 124;
}

EmitterParams aEmitterParams;
// Particle
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
// { unknow_field_17 }
// { snoPhysics }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }
// { unknow_field_25 }
// { unknow_field_26 }
// { unknow_field_27 }
// { snoActor }
// { unknow_field_29 }
// { unknow_field_30 }
// { unknow_field_31 }
// { unknow_field_32 }
// { unknow_field_33 }
// { unknow_field_34 }
// { unknow_field_35 }
// { unknow_field_36 }
// { unknow_field_37 }
// { unknow_field_38 }
// { unknow_field_39 }
// { unknow_field_40 }
// { unknow_field_41 }
// { unknow_field_42 }
// { unknow_field_43 }
// { unknow_field_44 }
// { unknow_field_45 }
// { unknow_field_46 }
// { unknow_field_47 }
// { unknow_field_48 }
// { unknow_field_49 }
// { unknow_field_50 }
// { unknow_field_51 }
// { unknow_field_52 }
// { unknow_field_53 }
// { unknow_field_54 }
// { unknow_field_55 }
// { unknow_field_56 }
// { unknow_field_57 }
// { unknow_field_58 }
// { serMsgTriggeredEvents }
// { unknow_field_60 }


void* Particle::New() {
}

Particle::Particle() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 62);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_TIME, 20, 32);
		Fields[3].fieldinfo(&aDT_TIME, 24, 32);
		Fields[4].fieldinfo(&aDT_TIME, 28, 32);
		Fields[5].fieldinfo(&aInterpolationScalar, 32, 0);
		Fields[6].fieldinfo(&aFloatPath, 44, 0);
		Fields[7].fieldinfo(&aIntPath, 84, 0);
		Fields[8].fieldinfo(&aFloatPath, 124, 0);
		Fields[9].fieldinfo(&aTimePath, 164, 0);
		Fields[10].fieldinfo(&aFloatPath, 204, 0);
		Fields[11].fieldinfo(&aVelocityVectorPath, 284, 0);
		Fields[12].fieldinfo(&aAnglePath, 244, 0);
		Fields[13].fieldinfo(&aVelocityVectorPath, 324, 0);
		Fields[14].fieldinfo(&aVelocityPath, 364, 0);
		Fields[15].fieldinfo(&aVelocityPath, 404, 0);
		Fields[16].fieldinfo(&aVelocityPath, 444, 0);
		Fields[17].fieldinfo(&aUberMaterial, 568, 0);
		Fields[18].fieldinfo(&aDT_SNO, 672, 32);
		Fields[19].fieldinfo(&aDT_MASS, 676, 32);
		Fields[20].fieldinfo(&aDT_INT, 680, 32);
		Fields[21].fieldinfo(&aDT_FLOAT, 684, 32);
		Fields[22].fieldinfo(&aDT_FLOAT, 688, 32);
		Fields[23].fieldinfo(&aDT_FLOAT, 692, 32);
		Fields[24].fieldinfo(&aDT_FLOAT, 696, 32);
		Fields[25].fieldinfo(&aDT_FLOAT, 700, 32);
		Fields[26].fieldinfo(&aDT_FLOAT, 704, 32);
		Fields[27].fieldinfo(&aDT_FLOAT, 708, 32);
		Fields[28].fieldinfo(&aDT_SNO, 712, 32);
		Fields[29].fieldinfo(&aEmitterParams, 716, 0);
		Fields[30].fieldinfo(&aFloatPath, 1008, 0);
		Fields[31].fieldinfo(&aColorPath, 968, 0);
		Fields[32].fieldinfo(&aFloatPath, 1048, 0);
		Fields[33].fieldinfo(&aFloatPath, 1088, 0);
		Fields[34].fieldinfo(&aAnglePath, 1128, 0);
		Fields[35].fieldinfo(&aAngularVelocityPath, 1168, 0);
		Fields[36].fieldinfo(&aAngularVelocityPath, 1208, 0);
		Fields[37].fieldinfo(&aAnglePath, 1248, 0);
		Fields[38].fieldinfo(&aVectorPath, 1288, 0);
		Fields[39].fieldinfo(&aFloatPath, 1328, 0);
		Fields[40].fieldinfo(&aVelocityPath, 1368, 0);
		Fields[41].fieldinfo(&aAngularVelocityPath, 1408, 0);
		Fields[42].fieldinfo(&aFloatPath, 1448, 0);
		Fields[43].fieldinfo(&aVelocityPath, 1488, 0);
		Fields[44].fieldinfo(&aVectorPath, 1528, 0);
		Fields[45].fieldinfo(&aVelocityVectorPath, 1568, 0);
		Fields[46].fieldinfo(&aAccelVectorPath, 1608, 0);
		Fields[47].fieldinfo(&aVectorPath, 1648, 0);
		Fields[48].fieldinfo(&aVelocityVectorPath, 1688, 0);
		Fields[49].fieldinfo(&aAccelVectorPath, 1728, 0);
		Fields[50].fieldinfo(&aVelocityPath, 1768, 0);
		Fields[51].fieldinfo(&aFloatPath, 1808, 0);
		Fields[52].fieldinfo(&aVectorPath, 484, 0);
		Fields[53].fieldinfo(&aVelocityPath, 524, 0);
		Fields[54].fieldinfo(&aDT_FLOAT, 564, 32);
		Fields[55].fieldinfo(&aDT_INT, 1848, 32);
		Fields[56].fieldinfo(&aDT_FLOAT, 1852, 32);
		Fields[57].fieldinfo(&aDT_FLOAT, 1856, 32);
		Fields[58].fieldinfo(&aDT_INT, 1868, 32);
		Fields[59].fieldinfo(&aSerializeData, 1860, 0);
		Fields[60].fieldinfo(&aDT_VARIABLEARRAY, 1872, 0);
		Fields[62 - 1].fieldinfo(NULL, 0, 0);
	}
Particle::~Particle() {
		free(Fields);
}

const char* Particle::Name() {
		return "Particle";
}
	
int* Particle::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Particle::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Particle::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Particle::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Particle::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Particle::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* Particle::unknow_field_6(void *Data) {
	return ((char*)Data) + 44;
}
void* Particle::unknow_field_7(void *Data) {
	return ((char*)Data) + 84;
}
void* Particle::unknow_field_8(void *Data) {
	return ((char*)Data) + 124;
}
void* Particle::unknow_field_9(void *Data) {
	return ((char*)Data) + 164;
}
void* Particle::unknow_field_10(void *Data) {
	return ((char*)Data) + 204;
}
void* Particle::unknow_field_11(void *Data) {
	return ((char*)Data) + 284;
}
void* Particle::unknow_field_12(void *Data) {
	return ((char*)Data) + 244;
}
void* Particle::unknow_field_13(void *Data) {
	return ((char*)Data) + 324;
}
void* Particle::unknow_field_14(void *Data) {
	return ((char*)Data) + 364;
}
void* Particle::unknow_field_15(void *Data) {
	return ((char*)Data) + 404;
}
void* Particle::unknow_field_16(void *Data) {
	return ((char*)Data) + 444;
}
void* Particle::unknow_field_17(void *Data) {
	return ((char*)Data) + 568;
}
void* Particle::snoPhysics(void *Data) {
	return ((char*)Data) + 672;
}
void* Particle::unknow_field_19(void *Data) {
	return ((char*)Data) + 676;
}
int* Particle::unknow_field_20(void *Data) {
	return (int*)((char*)Data) + 680;
}
void* Particle::unknow_field_21(void *Data) {
	return ((char*)Data) + 684;
}
void* Particle::unknow_field_22(void *Data) {
	return ((char*)Data) + 688;
}
void* Particle::unknow_field_23(void *Data) {
	return ((char*)Data) + 692;
}
void* Particle::unknow_field_24(void *Data) {
	return ((char*)Data) + 696;
}
void* Particle::unknow_field_25(void *Data) {
	return ((char*)Data) + 700;
}
void* Particle::unknow_field_26(void *Data) {
	return ((char*)Data) + 704;
}
void* Particle::unknow_field_27(void *Data) {
	return ((char*)Data) + 708;
}
void* Particle::snoActor(void *Data) {
	return ((char*)Data) + 712;
}
void* Particle::unknow_field_29(void *Data) {
	return ((char*)Data) + 716;
}
void* Particle::unknow_field_30(void *Data) {
	return ((char*)Data) + 1008;
}
void* Particle::unknow_field_31(void *Data) {
	return ((char*)Data) + 968;
}
void* Particle::unknow_field_32(void *Data) {
	return ((char*)Data) + 1048;
}
void* Particle::unknow_field_33(void *Data) {
	return ((char*)Data) + 1088;
}
void* Particle::unknow_field_34(void *Data) {
	return ((char*)Data) + 1128;
}
void* Particle::unknow_field_35(void *Data) {
	return ((char*)Data) + 1168;
}
void* Particle::unknow_field_36(void *Data) {
	return ((char*)Data) + 1208;
}
void* Particle::unknow_field_37(void *Data) {
	return ((char*)Data) + 1248;
}
void* Particle::unknow_field_38(void *Data) {
	return ((char*)Data) + 1288;
}
void* Particle::unknow_field_39(void *Data) {
	return ((char*)Data) + 1328;
}
void* Particle::unknow_field_40(void *Data) {
	return ((char*)Data) + 1368;
}
void* Particle::unknow_field_41(void *Data) {
	return ((char*)Data) + 1408;
}
void* Particle::unknow_field_42(void *Data) {
	return ((char*)Data) + 1448;
}
void* Particle::unknow_field_43(void *Data) {
	return ((char*)Data) + 1488;
}
void* Particle::unknow_field_44(void *Data) {
	return ((char*)Data) + 1528;
}
void* Particle::unknow_field_45(void *Data) {
	return ((char*)Data) + 1568;
}
void* Particle::unknow_field_46(void *Data) {
	return ((char*)Data) + 1608;
}
void* Particle::unknow_field_47(void *Data) {
	return ((char*)Data) + 1648;
}
void* Particle::unknow_field_48(void *Data) {
	return ((char*)Data) + 1688;
}
void* Particle::unknow_field_49(void *Data) {
	return ((char*)Data) + 1728;
}
void* Particle::unknow_field_50(void *Data) {
	return ((char*)Data) + 1768;
}
void* Particle::unknow_field_51(void *Data) {
	return ((char*)Data) + 1808;
}
void* Particle::unknow_field_52(void *Data) {
	return ((char*)Data) + 484;
}
void* Particle::unknow_field_53(void *Data) {
	return ((char*)Data) + 524;
}
void* Particle::unknow_field_54(void *Data) {
	return ((char*)Data) + 564;
}
int* Particle::unknow_field_55(void *Data) {
	return (int*)((char*)Data) + 1848;
}
void* Particle::unknow_field_56(void *Data) {
	return ((char*)Data) + 1852;
}
void* Particle::unknow_field_57(void *Data) {
	return ((char*)Data) + 1856;
}
int* Particle::unknow_field_58(void *Data) {
	return (int*)((char*)Data) + 1868;
}
void* Particle::serMsgTriggeredEvents(void *Data) {
	return ((char*)Data) + 1860;
}
void* Particle::unknow_field_60(void *Data) {
	return ((char*)Data) + 1872;
}

Particle aParticle;
// Trail
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


void* Trail::New() {
}

Trail::Trail() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 15);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aDT_TIME, 24, 32);
		Fields[4].fieldinfo(&aDT_TIME, 28, 32);
		Fields[5].fieldinfo(&aDT_TIME, 32, 32);
		Fields[6].fieldinfo(&aDT_TIME, 36, 32);
		Fields[7].fieldinfo(&aColorPath, 40, 0);
		Fields[8].fieldinfo(&aColorPath, 80, 0);
		Fields[9].fieldinfo(&aFloatPath, 120, 0);
		Fields[10].fieldinfo(&aFloatPath, 160, 0);
		Fields[11].fieldinfo(&aDT_ENUM, 200, 2);
		Fields[12].fieldinfo(&aDT_INT, 204, 32);
		Fields[13].fieldinfo(&aUberMaterial, 208, 0);
		Fields[15 - 1].fieldinfo(NULL, 0, 0);
	}
Trail::~Trail() {
		free(Fields);
}

const char* Trail::Name() {
		return "Trail";
}
	
int* Trail::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Trail::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* Trail::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* Trail::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Trail::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Trail::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* Trail::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}
void* Trail::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}
void* Trail::unknow_field_8(void *Data) {
	return ((char*)Data) + 80;
}
void* Trail::unknow_field_9(void *Data) {
	return ((char*)Data) + 120;
}
void* Trail::unknow_field_10(void *Data) {
	return ((char*)Data) + 160;
}
void* Trail::unknow_field_11(void *Data) {
	return ((char*)Data) + 200;
}
int* Trail::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 204;
}
void* Trail::unknow_field_13(void *Data) {
	return ((char*)Data) + 208;
}

Trail aTrail;
// Cloth
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
// { snoAmbientSound }


void* Cloth::New() {
}

Cloth::Cloth() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 16);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 32, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 44, 32);
		Fields[9].fieldinfo(&aDT_ACCEL, 48, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 52, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 60, 32);
		Fields[13].fieldinfo(&aDT_FIXEDARRAY, 64, 32);
		Fields[14].fieldinfo(&aDT_SNO, 80, 32);
		Fields[16 - 1].fieldinfo(NULL, 0, 0);
	}
Cloth::~Cloth() {
		free(Fields);
}

const char* Cloth::Name() {
		return "Cloth";
}
	
int* Cloth::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Cloth::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Cloth::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Cloth::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Cloth::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Cloth::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* Cloth::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}
void* Cloth::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}
void* Cloth::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}
void* Cloth::unknow_field_9(void *Data) {
	return ((char*)Data) + 48;
}
void* Cloth::unknow_field_10(void *Data) {
	return ((char*)Data) + 52;
}
void* Cloth::unknow_field_11(void *Data) {
	return ((char*)Data) + 56;
}
void* Cloth::unknow_field_12(void *Data) {
	return ((char*)Data) + 60;
}
void* Cloth::unknow_field_13(void *Data) {
	return ((char*)Data) + 64;
}
void* Cloth::snoAmbientSound(void *Data) {
	return ((char*)Data) + 80;
}

Cloth aCloth;
// EffectItem
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* EffectItem::New() {
}

EffectItem::EffectItem() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 4, 7);
		Fields[2].fieldinfo(&aMsgTriggeredEvent, 68, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
EffectItem::~EffectItem() {
		free(Fields);
}

const char* EffectItem::Name() {
		return "EffectItem";
}
	
int* EffectItem::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* EffectItem::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* EffectItem::unknow_field_2(void *Data) {
	return ((char*)Data) + 68;
}

EffectItem aEffectItem;
// EffectGroup
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { snoPower }
// { serEffects }
// { unknow_field_7 }


void* EffectGroup::New() {
}

EffectGroup::EffectGroup() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 9);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 40, 32);
		Fields[2].fieldinfo(&aDT_INT, 32, 32);
		Fields[3].fieldinfo(&aDT_INT, 36, 32);
		Fields[4].fieldinfo(&aDT_INT, 24, 32);
		Fields[5].fieldinfo(&aDT_SNO, 44, 32);
		Fields[6].fieldinfo(&aSerializeData, 16, 0);
		Fields[7].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[9 - 1].fieldinfo(NULL, 0, 0);
	}
EffectGroup::~EffectGroup() {
		free(Fields);
}

const char* EffectGroup::Name() {
		return "EffectGroup";
}
	
int* EffectGroup::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* EffectGroup::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 40;
}
int* EffectGroup::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 32;
}
int* EffectGroup::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* EffectGroup::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 24;
}
void* EffectGroup::snoPower(void *Data) {
	return ((char*)Data) + 44;
}
void* EffectGroup::serEffects(void *Data) {
	return ((char*)Data) + 16;
}
void* EffectGroup::unknow_field_7(void *Data) {
	return ((char*)Data) + 28;
}

EffectGroup aEffectGroup;
// Surface
//
// { unknow_field_0 }
// { snoParticleSystem }
// { unknow_field_2 }
// { serTagMap }
// { hTagMap }


void* Surface::New() {
}

Surface::Surface() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_SNO, 16, 32);
		Fields[2].fieldinfo(&aDT_INT, 20, 32);
		Fields[3].fieldinfo(&aSerializeData, 24, 0);
		Fields[4].fieldinfo(&aDT_TAGMAP, 32, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
Surface::~Surface() {
		free(Fields);
}

const char* Surface::Name() {
		return "Surface";
}
	
int* Surface::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* Surface::snoParticleSystem(void *Data) {
	return ((char*)Data) + 16;
}
int* Surface::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 20;
}
void* Surface::serTagMap(void *Data) {
	return ((char*)Data) + 24;
}
void* Surface::hTagMap(void *Data) {
	return ((char*)Data) + 32;
}

Surface aSurface;
// Explosion
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


void* Explosion::New() {
}

Explosion::Explosion() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 11);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aVector3D, 20, 0);
		Fields[3].fieldinfo(&aDT_IMPULSE, 32, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 36, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[6].fieldinfo(&aDT_FLOAT, 44, 32);
		Fields[7].fieldinfo(&aDT_FLOAT, 48, 32);
		Fields[8].fieldinfo(&aDT_INT, 52, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 56, 32);
		Fields[11 - 1].fieldinfo(NULL, 0, 0);
	}
Explosion::~Explosion() {
		free(Fields);
}

const char* Explosion::Name() {
		return "Explosion";
}
	
int* Explosion::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Explosion::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Explosion::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Explosion::unknow_field_3(void *Data) {
	return ((char*)Data) + 32;
}
void* Explosion::unknow_field_4(void *Data) {
	return ((char*)Data) + 36;
}
void* Explosion::unknow_field_5(void *Data) {
	return ((char*)Data) + 40;
}
void* Explosion::unknow_field_6(void *Data) {
	return ((char*)Data) + 44;
}
void* Explosion::unknow_field_7(void *Data) {
	return ((char*)Data) + 48;
}
int* Explosion::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 52;
}
void* Explosion::unknow_field_9(void *Data) {
	return ((char*)Data) + 56;
}

Explosion aExplosion;
// Physics
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


void* Physics::New() {
}

Physics::Physics() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_INT, 16, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 20, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 28, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 32, 32);
		Fields[6].fieldinfo(&aDT_WORD, 36, 16);
		Fields[7].fieldinfo(&aDT_FLOAT, 40, 32);
		Fields[8].fieldinfo(&aDT_ACCEL, 44, 32);
		Fields[9].fieldinfo(&aDT_ACCEL, 48, 32);
		Fields[10].fieldinfo(&aDT_VELOCITY, 52, 32);
		Fields[11].fieldinfo(&aDT_ACCEL, 56, 32);
		Fields[12].fieldinfo(&aDT_ACCEL, 60, 32);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
Physics::~Physics() {
		free(Fields);
}

const char* Physics::Name() {
		return "Physics";
}
	
int* Physics::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* Physics::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 16;
}
void* Physics::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* Physics::unknow_field_3(void *Data) {
	return ((char*)Data) + 24;
}
void* Physics::unknow_field_4(void *Data) {
	return ((char*)Data) + 28;
}
void* Physics::unknow_field_5(void *Data) {
	return ((char*)Data) + 32;
}
void* Physics::unknow_field_6(void *Data) {
	return ((char*)Data) + 36;
}
void* Physics::unknow_field_7(void *Data) {
	return ((char*)Data) + 40;
}
void* Physics::unknow_field_8(void *Data) {
	return ((char*)Data) + 44;
}
void* Physics::unknow_field_9(void *Data) {
	return ((char*)Data) + 48;
}
void* Physics::unknow_field_10(void *Data) {
	return ((char*)Data) + 52;
}
void* Physics::unknow_field_11(void *Data) {
	return ((char*)Data) + 56;
}
void* Physics::unknow_field_12(void *Data) {
	return ((char*)Data) + 60;
}

Physics aPhysics;
// RandomAmbientSoundParams
//
// { snoSound }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* RandomAmbientSoundParams::New() {
}

RandomAmbientSoundParams::RandomAmbientSoundParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_TIME, 12, 32);
		Fields[4].fieldinfo(&aDT_TIME, 16, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
RandomAmbientSoundParams::~RandomAmbientSoundParams() {
		free(Fields);
}

const char* RandomAmbientSoundParams::Name() {
		return "RandomAmbientSoundParams";
}
	
void* RandomAmbientSoundParams::snoSound(void *Data) {
	return ((char*)Data) + 0;
}
void* RandomAmbientSoundParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* RandomAmbientSoundParams::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
void* RandomAmbientSoundParams::unknow_field_3(void *Data) {
	return ((char*)Data) + 12;
}
void* RandomAmbientSoundParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}

RandomAmbientSoundParams aRandomAmbientSoundParams;
// AmbientSound
//
// { unknow_field_0 }
// { snoBackground }
// { unknow_field_2 }
// { snoFixedIntervalSound }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { unknow_field_9 }
// { unknow_field_10 }
// { unknow_field_11 }


void* AmbientSound::New() {
}

AmbientSound::AmbientSound() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 13);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aDT_SNO, 16, 32);
		Fields[2].fieldinfo(&aDT_FIXEDARRAY, 20, 0);
		Fields[3].fieldinfo(&aDT_SNO, 60, 32);
		Fields[4].fieldinfo(&aDT_TIME, 64, 32);
		Fields[5].fieldinfo(&aDT_TIME, 68, 32);
		Fields[6].fieldinfo(&aDT_CHARARRAY, 72, 7);
		Fields[7].fieldinfo(&aDT_FLOAT, 136, 32);
		Fields[8].fieldinfo(&aDT_FLOAT, 140, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 144, 32);
		Fields[10].fieldinfo(&aDT_FLOAT, 148, 32);
		Fields[11].fieldinfo(&aDT_FLOAT, 152, 32);
		Fields[13 - 1].fieldinfo(NULL, 0, 0);
	}
AmbientSound::~AmbientSound() {
		free(Fields);
}

const char* AmbientSound::Name() {
		return "AmbientSound";
}
	
int* AmbientSound::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* AmbientSound::snoBackground(void *Data) {
	return ((char*)Data) + 16;
}
void* AmbientSound::unknow_field_2(void *Data) {
	return ((char*)Data) + 20;
}
void* AmbientSound::snoFixedIntervalSound(void *Data) {
	return ((char*)Data) + 60;
}
void* AmbientSound::unknow_field_4(void *Data) {
	return ((char*)Data) + 64;
}
void* AmbientSound::unknow_field_5(void *Data) {
	return ((char*)Data) + 68;
}
void* AmbientSound::unknow_field_6(void *Data) {
	return ((char*)Data) + 72;
}
void* AmbientSound::unknow_field_7(void *Data) {
	return ((char*)Data) + 136;
}
void* AmbientSound::unknow_field_8(void *Data) {
	return ((char*)Data) + 140;
}
void* AmbientSound::unknow_field_9(void *Data) {
	return ((char*)Data) + 144;
}
void* AmbientSound::unknow_field_10(void *Data) {
	return ((char*)Data) + 148;
}
void* AmbientSound::unknow_field_11(void *Data) {
	return ((char*)Data) + 152;
}

AmbientSound aAmbientSound;
// ShaderMap
//
// { unknow_field_0 }
// { serTagMap }
// { hTagMap }


void* ShaderMap::New() {
}

ShaderMap::ShaderMap() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 12, 32);
		Fields[1].fieldinfo(&aSerializeData, 16, 0);
		Fields[2].fieldinfo(&aDT_TAGMAP, 24, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ShaderMap::~ShaderMap() {
		free(Fields);
}

const char* ShaderMap::Name() {
		return "ShaderMap";
}
	
int* ShaderMap::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* ShaderMap::serTagMap(void *Data) {
	return ((char*)Data) + 16;
}
void* ShaderMap::hTagMap(void *Data) {
	return ((char*)Data) + 24;
}

ShaderMap aShaderMap;
// ImageFileID
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ImageFileID::New() {
}

ImageFileID::ImageFileID() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 9);
		Fields[1].fieldinfo(&aDT_CHARARRAY, 256, 9);
		Fields[2].fieldinfo(&aDT_INT, 512, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ImageFileID::~ImageFileID() {
		free(Fields);
}

const char* ImageFileID::Name() {
		return "ImageFileID";
}
	
void* ImageFileID::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ImageFileID::unknow_field_1(void *Data) {
	return ((char*)Data) + 256;
}
int* ImageFileID::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 512;
}

ImageFileID aImageFileID;
// Textures
//
// { unknow_field_0 }
// { dwWidth }
// { dwHeight }
// { dwFaceCount }
// { dwMipMapLevelMax }
// { unknow_field_5 }
// { unknow_field_6 }
// { unknow_field_7 }
// { unknow_field_8 }
// { serImageFileIDs }
// { unknow_field_10 }
// { serFrame }
// { unknow_field_12 }
// { unknow_field_13 }
// { unknow_field_14 }
// { unknow_field_15 }
// { unknow_field_16 }
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }


void* Textures::New() {
}

Textures::Textures() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 26);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 16, 32);
		Fields[1].fieldinfo(&aDT_INT, 20, 32);
		Fields[2].fieldinfo(&aDT_INT, 24, 32);
		Fields[3].fieldinfo(&aDT_INT, 28, 32);
		Fields[4].fieldinfo(&aDT_INT, 36, 32);
		Fields[5].fieldinfo(&aDT_FIXEDARRAY, 40, 0);
		Fields[6].fieldinfo(&aDT_INT, 520, 32);
		Fields[7].fieldinfo(&aDT_INT, 32, 32);
		Fields[8].fieldinfo(&aDT_CHARARRAY, 592, 9);
		Fields[9].fieldinfo(&aSerializeData, 852, 0);
		Fields[10].fieldinfo(&aDT_VARIABLEARRAY, 848, 0);
		Fields[11].fieldinfo(&aSerializeData, 524, 0);
		Fields[12].fieldinfo(&aDT_VARIABLEARRAY, 532, 0);
		Fields[13].fieldinfo(&aIVector2D, 536, 0);
		Fields[14].fieldinfo(&aDT_INT, 860, 32);
		Fields[15].fieldinfo(&aDT_INT, 864, 32);
		Fields[16].fieldinfo(&aDT_INT, 868, 32);
		Fields[17].fieldinfo(&aDT_INT, 544, 32);
		Fields[18].fieldinfo(&aDT_INT, 548, 32);
		Fields[19].fieldinfo(&aDT_INT, 552, 32);
		Fields[20].fieldinfo(&aDT_INT64, 560, 64);
		Fields[21].fieldinfo(&aDT_INT, 568, 32);
		Fields[22].fieldinfo(&aDT_BYTE, 572, 8);
		Fields[23].fieldinfo(&aDT_BYTE, 573, 8);
		Fields[24].fieldinfo(&aDT_BYTE, 574, 8);
		Fields[26 - 1].fieldinfo(NULL, 0, 0);
	}
Textures::~Textures() {
		free(Fields);
}

const char* Textures::Name() {
		return "Textures";
}
	
int* Textures::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* Textures::dwWidth(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* Textures::dwHeight(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* Textures::dwFaceCount(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* Textures::dwMipMapLevelMax(void *Data) {
	return (int*)((char*)Data) + 36;
}
void* Textures::unknow_field_5(void *Data) {
	return ((char*)Data) + 40;
}
int* Textures::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 520;
}
int* Textures::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 32;
}
void* Textures::unknow_field_8(void *Data) {
	return ((char*)Data) + 592;
}
void* Textures::serImageFileIDs(void *Data) {
	return ((char*)Data) + 852;
}
void* Textures::unknow_field_10(void *Data) {
	return ((char*)Data) + 848;
}
void* Textures::serFrame(void *Data) {
	return ((char*)Data) + 524;
}
void* Textures::unknow_field_12(void *Data) {
	return ((char*)Data) + 532;
}
void* Textures::unknow_field_13(void *Data) {
	return ((char*)Data) + 536;
}
int* Textures::unknow_field_14(void *Data) {
	return (int*)((char*)Data) + 860;
}
int* Textures::unknow_field_15(void *Data) {
	return (int*)((char*)Data) + 864;
}
int* Textures::unknow_field_16(void *Data) {
	return (int*)((char*)Data) + 868;
}
int* Textures::unknow_field_17(void *Data) {
	return (int*)((char*)Data) + 544;
}
int* Textures::unknow_field_18(void *Data) {
	return (int*)((char*)Data) + 548;
}
int* Textures::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 552;
}
void* Textures::unknow_field_20(void *Data) {
	return ((char*)Data) + 560;
}
int* Textures::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 568;
}
void* Textures::unknow_field_22(void *Data) {
	return ((char*)Data) + 572;
}
void* Textures::unknow_field_23(void *Data) {
	return ((char*)Data) + 573;
}
void* Textures::unknow_field_24(void *Data) {
	return ((char*)Data) + 574;
}

Textures aTextures;
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
		Fields[0].fieldinfo(&aRequiredMessageHeader, 0, 0);
		Fields[1].fieldinfo(&aDT_INT, 8, 32);
		Fields[2].fieldinfo(&aDT_INT, 12, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
EndOfTickMessage::~EndOfTickMessage() {
		free(Fields);
}

const char* EndOfTickMessage::Name() {
		return "EndOfTickMessage";
}
	
void* EndOfTickMessage::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
int* EndOfTickMessage::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* EndOfTickMessage::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 12;
}

EndOfTickMessage aEndOfTickMessage;
// Material_1
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


void* Material_1::New() {
}

Material_1::Material_1() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 7);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRGBAColorValue, 0, 0);
		Fields[1].fieldinfo(&aRGBAColorValue, 16, 0);
		Fields[2].fieldinfo(&aRGBAColorValue, 32, 0);
		Fields[3].fieldinfo(&aRGBAColorValue, 48, 0);
		Fields[4].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[5].fieldinfo(&aDT_INT, 68, 32);
		Fields[7 - 1].fieldinfo(NULL, 0, 0);
	}
Material_1::~Material_1() {
		free(Fields);
}

const char* Material_1::Name() {
		return "Material_1";
}
	
void* Material_1::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* Material_1::unknow_field_1(void *Data) {
	return ((char*)Data) + 16;
}
void* Material_1::unknow_field_2(void *Data) {
	return ((char*)Data) + 32;
}
void* Material_1::unknow_field_3(void *Data) {
	return ((char*)Data) + 48;
}
void* Material_1::unknow_field_4(void *Data) {
	return ((char*)Data) + 64;
}
int* Material_1::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 68;
}

Material_1 aMaterial_1;
// MaterialTexture
//
// { snoTex }
// { unknow_field_1 }


void* MaterialTexture::New() {
}

MaterialTexture::MaterialTexture() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_SNO, 0, 32);
		Fields[1].fieldinfo(&aTexAnimParams, 4, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
MaterialTexture::~MaterialTexture() {
		free(Fields);
}

const char* MaterialTexture::Name() {
		return "MaterialTexture";
}
	
void* MaterialTexture::snoTex(void *Data) {
	return ((char*)Data) + 0;
}
void* MaterialTexture::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

MaterialTexture aMaterialTexture;
// MaterialTextureEntry
//
// { unknow_field_0 }
// { unknow_field_1 }


void* MaterialTextureEntry::New() {
}

MaterialTextureEntry::MaterialTextureEntry() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aMaterialTexture, 4, 0);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
MaterialTextureEntry::~MaterialTextureEntry() {
		free(Fields);
}

const char* MaterialTextureEntry::Name() {
		return "MaterialTextureEntry";
}
	
int* MaterialTextureEntry::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* MaterialTextureEntry::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}

MaterialTextureEntry aMaterialTextureEntry;
// UberMaterial
//
// { unknow_field_0 }
// { snoShaderMap }
// { serMatTexList }
// { unknow_field_3 }


void* UberMaterial::New() {
}

UberMaterial::UberMaterial() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 5);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aMaterial_1, 4, 0);
		Fields[1].fieldinfo(&aDT_SNO, 0, 32);
		Fields[2].fieldinfo(&aSerializeData, 76, 0);
		Fields[3].fieldinfo(&aDT_VARIABLEARRAY, 88, 0);
		Fields[5 - 1].fieldinfo(NULL, 0, 0);
	}
UberMaterial::~UberMaterial() {
		free(Fields);
}

const char* UberMaterial::Name() {
		return "UberMaterial";
}
	
void* UberMaterial::unknow_field_0(void *Data) {
	return ((char*)Data) + 4;
}
void* UberMaterial::snoShaderMap(void *Data) {
	return ((char*)Data) + 0;
}
void* UberMaterial::serMatTexList(void *Data) {
	return ((char*)Data) + 76;
}
void* UberMaterial::unknow_field_3(void *Data) {
	return ((char*)Data) + 88;
}

UberMaterial aUberMaterial;
// PrefetchRunOnDisk
//
// { unknow_field_0 }
// { unknow_field_1 }


void* PrefetchRunOnDisk::New() {
}

PrefetchRunOnDisk::PrefetchRunOnDisk() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 3);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[3 - 1].fieldinfo(NULL, 0, 0);
	}
PrefetchRunOnDisk::~PrefetchRunOnDisk() {
		free(Fields);
}

const char* PrefetchRunOnDisk::Name() {
		return "PrefetchRunOnDisk";
}
	
int* PrefetchRunOnDisk::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* PrefetchRunOnDisk::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}

PrefetchRunOnDisk aPrefetchRunOnDisk;
// TexFrame
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* TexFrame::New() {
}

TexFrame::TexFrame() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_CHARARRAY, 0, 7);
		Fields[1].fieldinfo(&aDT_FLOAT, 64, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 68, 32);
		Fields[3].fieldinfo(&aDT_FLOAT, 72, 32);
		Fields[4].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
TexFrame::~TexFrame() {
		free(Fields);
}

const char* TexFrame::Name() {
		return "TexFrame";
}
	
void* TexFrame::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* TexFrame::unknow_field_1(void *Data) {
	return ((char*)Data) + 64;
}
void* TexFrame::unknow_field_2(void *Data) {
	return ((char*)Data) + 68;
}
void* TexFrame::unknow_field_3(void *Data) {
	return ((char*)Data) + 72;
}
void* TexFrame::unknow_field_4(void *Data) {
	return ((char*)Data) + 76;
}

TexFrame aTexFrame;
// FrameAnim
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* FrameAnim::New() {
}

FrameAnim::FrameAnim() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_VELOCITY, 4, 32);
		Fields[2].fieldinfo(&aDT_VELOCITY, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
FrameAnim::~FrameAnim() {
		free(Fields);
}

const char* FrameAnim::Name() {
		return "FrameAnim";
}
	
int* FrameAnim::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* FrameAnim::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* FrameAnim::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* FrameAnim::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* FrameAnim::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}

FrameAnim aFrameAnim;
// TexAnimParams
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
// { unknow_field_17 }
// { unknow_field_18 }
// { unknow_field_19 }
// { unknow_field_20 }
// { unknow_field_21 }
// { unknow_field_22 }
// { unknow_field_23 }
// { unknow_field_24 }


void* TexAnimParams::New() {
}

TexAnimParams::TexAnimParams() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 26);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aMatrix4x4, 4, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 68, 32);
		Fields[3].fieldinfo(&aDT_VELOCITY, 72, 32);
		Fields[4].fieldinfo(&aDT_VELOCITY, 80, 32);
		Fields[5].fieldinfo(&aDT_FLOAT, 76, 32);
		Fields[6].fieldinfo(&aDT_ANGLE, 84, 32);
		Fields[7].fieldinfo(&aDT_ANGULARVELOCITY, 88, 32);
		Fields[8].fieldinfo(&aDT_ANGLE, 92, 32);
		Fields[9].fieldinfo(&aDT_FLOAT, 96, 32);
		Fields[10].fieldinfo(&aDT_VELOCITY, 100, 32);
		Fields[11].fieldinfo(&aDT_VELOCITY, 108, 32);
		Fields[12].fieldinfo(&aDT_FLOAT, 104, 32);
		Fields[13].fieldinfo(&aDT_ANGLE, 112, 32);
		Fields[14].fieldinfo(&aDT_ANGULARVELOCITY, 116, 32);
		Fields[15].fieldinfo(&aDT_ANGLE, 120, 32);
		Fields[16].fieldinfo(&aDT_ANGLE, 124, 32);
		Fields[17].fieldinfo(&aDT_ANGULARVELOCITY, 128, 32);
		Fields[18].fieldinfo(&aDT_ANGULARVELOCITY, 132, 32);
		Fields[19].fieldinfo(&aDT_INT, 136, 32);
		Fields[20].fieldinfo(&aDT_INT, 140, 32);
		Fields[21].fieldinfo(&aDT_INT, 144, 32);
		Fields[22].fieldinfo(&aDT_INT, 148, 32);
		Fields[23].fieldinfo(&aFrameAnim, 152, 0);
		Fields[24].fieldinfo(&aDT_INT, 172, 32);
		Fields[26 - 1].fieldinfo(NULL, 0, 0);
	}
TexAnimParams::~TexAnimParams() {
		free(Fields);
}

const char* TexAnimParams::Name() {
		return "TexAnimParams";
}
	
int* TexAnimParams::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* TexAnimParams::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* TexAnimParams::unknow_field_2(void *Data) {
	return ((char*)Data) + 68;
}
void* TexAnimParams::unknow_field_3(void *Data) {
	return ((char*)Data) + 72;
}
void* TexAnimParams::unknow_field_4(void *Data) {
	return ((char*)Data) + 80;
}
void* TexAnimParams::unknow_field_5(void *Data) {
	return ((char*)Data) + 76;
}
void* TexAnimParams::unknow_field_6(void *Data) {
	return ((char*)Data) + 84;
}
void* TexAnimParams::unknow_field_7(void *Data) {
	return ((char*)Data) + 88;
}
void* TexAnimParams::unknow_field_8(void *Data) {
	return ((char*)Data) + 92;
}
void* TexAnimParams::unknow_field_9(void *Data) {
	return ((char*)Data) + 96;
}
void* TexAnimParams::unknow_field_10(void *Data) {
	return ((char*)Data) + 100;
}
void* TexAnimParams::unknow_field_11(void *Data) {
	return ((char*)Data) + 108;
}
void* TexAnimParams::unknow_field_12(void *Data) {
	return ((char*)Data) + 104;
}
void* TexAnimParams::unknow_field_13(void *Data) {
	return ((char*)Data) + 112;
}
void* TexAnimParams::unknow_field_14(void *Data) {
	return ((char*)Data) + 116;
}
void* TexAnimParams::unknow_field_15(void *Data) {
	return ((char*)Data) + 120;
}
void* TexAnimParams::unknow_field_16(void *Data) {
	return ((char*)Data) + 124;
}
void* TexAnimParams::unknow_field_17(void *Data) {
	return ((char*)Data) + 128;
}
void* TexAnimParams::unknow_field_18(void *Data) {
	return ((char*)Data) + 132;
}
int* TexAnimParams::unknow_field_19(void *Data) {
	return (int*)((char*)Data) + 136;
}
int* TexAnimParams::unknow_field_20(void *Data) {
	return (int*)((char*)Data) + 140;
}
int* TexAnimParams::unknow_field_21(void *Data) {
	return (int*)((char*)Data) + 144;
}
int* TexAnimParams::unknow_field_22(void *Data) {
	return (int*)((char*)Data) + 148;
}
void* TexAnimParams::unknow_field_23(void *Data) {
	return ((char*)Data) + 152;
}
int* TexAnimParams::unknow_field_24(void *Data) {
	return (int*)((char*)Data) + 172;
}

TexAnimParams aTexAnimParams;
// DisplayMode
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


void* DisplayMode::New() {
}

DisplayMode::DisplayMode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 14);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_INT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aDT_INT, 16, 32);
		Fields[5].fieldinfo(&aDT_INT, 20, 32);
		Fields[6].fieldinfo(&aDT_INT, 24, 32);
		Fields[7].fieldinfo(&aDT_INT, 28, 32);
		Fields[8].fieldinfo(&aDT_INT, 32, 32);
		Fields[9].fieldinfo(&aDT_INT, 36, 32);
		Fields[10].fieldinfo(&aDT_INT, 40, 32);
		Fields[11].fieldinfo(&aDT_INT, 44, 32);
		Fields[12].fieldinfo(&aDT_INT, 48, 32);
		Fields[14 - 1].fieldinfo(NULL, 0, 0);
	}
DisplayMode::~DisplayMode() {
		free(Fields);
}

const char* DisplayMode::Name() {
		return "DisplayMode";
}
	
int* DisplayMode::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* DisplayMode::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
int* DisplayMode::unknow_field_2(void *Data) {
	return (int*)((char*)Data) + 8;
}
int* DisplayMode::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
int* DisplayMode::unknow_field_4(void *Data) {
	return (int*)((char*)Data) + 16;
}
int* DisplayMode::unknow_field_5(void *Data) {
	return (int*)((char*)Data) + 20;
}
int* DisplayMode::unknow_field_6(void *Data) {
	return (int*)((char*)Data) + 24;
}
int* DisplayMode::unknow_field_7(void *Data) {
	return (int*)((char*)Data) + 28;
}
int* DisplayMode::unknow_field_8(void *Data) {
	return (int*)((char*)Data) + 32;
}
int* DisplayMode::unknow_field_9(void *Data) {
	return (int*)((char*)Data) + 36;
}
int* DisplayMode::unknow_field_10(void *Data) {
	return (int*)((char*)Data) + 40;
}
int* DisplayMode::unknow_field_11(void *Data) {
	return (int*)((char*)Data) + 44;
}
int* DisplayMode::unknow_field_12(void *Data) {
	return (int*)((char*)Data) + 48;
}

DisplayMode aDisplayMode;
// InterpolationScalar
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* InterpolationScalar::New() {
}

InterpolationScalar::InterpolationScalar() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
InterpolationScalar::~InterpolationScalar() {
		free(Fields);
}

const char* InterpolationScalar::Name() {
		return "InterpolationScalar";
}
	
int* InterpolationScalar::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* InterpolationScalar::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* InterpolationScalar::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

InterpolationScalar aInterpolationScalar;
// InterpolationPathHeader
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


void* InterpolationPathHeader::New() {
}

InterpolationPathHeader::InterpolationPathHeader() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 6);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[3].fieldinfo(&aDT_INT, 12, 32);
		Fields[4].fieldinfo(&aInterpolationScalar, 16, 0);
		Fields[6 - 1].fieldinfo(NULL, 0, 0);
	}
InterpolationPathHeader::~InterpolationPathHeader() {
		free(Fields);
}

const char* InterpolationPathHeader::Name() {
		return "InterpolationPathHeader";
}
	
int* InterpolationPathHeader::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
void* InterpolationPathHeader::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* InterpolationPathHeader::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}
int* InterpolationPathHeader::unknow_field_3(void *Data) {
	return (int*)((char*)Data) + 12;
}
void* InterpolationPathHeader::unknow_field_4(void *Data) {
	return ((char*)Data) + 16;
}

InterpolationPathHeader aInterpolationPathHeader;
// FloatNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* FloatNode::New() {
}

FloatNode::FloatNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_FLOAT, 0, 32);
		Fields[1].fieldinfo(&aDT_FLOAT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
FloatNode::~FloatNode() {
		free(Fields);
}

const char* FloatNode::Name() {
		return "FloatNode";
}
	
void* FloatNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* FloatNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* FloatNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

FloatNode aFloatNode;
// FloatPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* FloatPath::New() {
}

FloatPath::FloatPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
FloatPath::~FloatPath() {
		free(Fields);
}

const char* FloatPath::Name() {
		return "FloatPath";
}
	
void* FloatPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* FloatPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* FloatPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

FloatPath aFloatPath;
// IntNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* IntNode::New() {
}

IntNode::IntNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_INT, 0, 32);
		Fields[1].fieldinfo(&aDT_INT, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
IntNode::~IntNode() {
		free(Fields);
}

const char* IntNode::Name() {
		return "IntNode";
}
	
int* IntNode::unknow_field_0(void *Data) {
	return (int*)((char*)Data) + 0;
}
int* IntNode::unknow_field_1(void *Data) {
	return (int*)((char*)Data) + 4;
}
void* IntNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

IntNode aIntNode;
// IntPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* IntPath::New() {
}

IntPath::IntPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
IntPath::~IntPath() {
		free(Fields);
}

const char* IntPath::Name() {
		return "IntPath";
}
	
void* IntPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* IntPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* IntPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

IntPath aIntPath;
// VectorNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* VectorNode::New() {
}

VectorNode::VectorNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVector3D, 0, 0);
		Fields[1].fieldinfo(&aVector3D, 12, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
VectorNode::~VectorNode() {
		free(Fields);
}

const char* VectorNode::Name() {
		return "VectorNode";
}
	
void* VectorNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* VectorNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* VectorNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}

VectorNode aVectorNode;
// VectorPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* VectorPath::New() {
}

VectorPath::VectorPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
VectorPath::~VectorPath() {
		free(Fields);
}

const char* VectorPath::Name() {
		return "VectorPath";
}
	
void* VectorPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* VectorPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* VectorPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

VectorPath aVectorPath;
// ColorNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* ColorNode::New() {
}

ColorNode::ColorNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aRGBAColor, 0, 0);
		Fields[1].fieldinfo(&aRGBAColor, 4, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ColorNode::~ColorNode() {
		free(Fields);
}

const char* ColorNode::Name() {
		return "ColorNode";
}
	
void* ColorNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ColorNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* ColorNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

ColorNode aColorNode;
// ColorPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* ColorPath::New() {
}

ColorPath::ColorPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
ColorPath::~ColorPath() {
		free(Fields);
}

const char* ColorPath::Name() {
		return "ColorPath";
}
	
void* ColorPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* ColorPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* ColorPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

ColorPath aColorPath;
// AngleNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AngleNode::New() {
}

AngleNode::AngleNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ANGLE, 0, 32);
		Fields[1].fieldinfo(&aDT_ANGLE, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AngleNode::~AngleNode() {
		free(Fields);
}

const char* AngleNode::Name() {
		return "AngleNode";
}
	
void* AngleNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AngleNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* AngleNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

AngleNode aAngleNode;
// AnglePath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* AnglePath::New() {
}

AnglePath::AnglePath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AnglePath::~AnglePath() {
		free(Fields);
}

const char* AnglePath::Name() {
		return "AnglePath";
}
	
void* AnglePath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AnglePath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* AnglePath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

AnglePath aAnglePath;
// TimeNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* TimeNode::New() {
}

TimeNode::TimeNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_TIME, 0, 32);
		Fields[1].fieldinfo(&aDT_TIME, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
TimeNode::~TimeNode() {
		free(Fields);
}

const char* TimeNode::Name() {
		return "TimeNode";
}
	
void* TimeNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* TimeNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* TimeNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

TimeNode aTimeNode;
// TimePath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* TimePath::New() {
}

TimePath::TimePath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
TimePath::~TimePath() {
		free(Fields);
}

const char* TimePath::Name() {
		return "TimePath";
}
	
void* TimePath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* TimePath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* TimePath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

TimePath aTimePath;
// VelocityNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* VelocityNode::New() {
}

VelocityNode::VelocityNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_VELOCITY, 0, 32);
		Fields[1].fieldinfo(&aDT_VELOCITY, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
VelocityNode::~VelocityNode() {
		free(Fields);
}

const char* VelocityNode::Name() {
		return "VelocityNode";
}
	
void* VelocityNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* VelocityNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* VelocityNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

VelocityNode aVelocityNode;
// VelocityPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* VelocityPath::New() {
}

VelocityPath::VelocityPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
VelocityPath::~VelocityPath() {
		free(Fields);
}

const char* VelocityPath::Name() {
		return "VelocityPath";
}
	
void* VelocityPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* VelocityPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* VelocityPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

VelocityPath aVelocityPath;
// AccelNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AccelNode::New() {
}

AccelNode::AccelNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ACCEL, 0, 32);
		Fields[1].fieldinfo(&aDT_ACCEL, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AccelNode::~AccelNode() {
		free(Fields);
}

const char* AccelNode::Name() {
		return "AccelNode";
}
	
void* AccelNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AccelNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* AccelNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

AccelNode aAccelNode;
// AccelPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* AccelPath::New() {
}

AccelPath::AccelPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AccelPath::~AccelPath() {
		free(Fields);
}

const char* AccelPath::Name() {
		return "AccelPath";
}
	
void* AccelPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AccelPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* AccelPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

AccelPath aAccelPath;
// VelocityVectorNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* VelocityVectorNode::New() {
}

VelocityVectorNode::VelocityVectorNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aVelocityVector3D, 0, 0);
		Fields[1].fieldinfo(&aVelocityVector3D, 12, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
VelocityVectorNode::~VelocityVectorNode() {
		free(Fields);
}

const char* VelocityVectorNode::Name() {
		return "VelocityVectorNode";
}
	
void* VelocityVectorNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* VelocityVectorNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* VelocityVectorNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}

VelocityVectorNode aVelocityVectorNode;
// VelocityVectorPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* VelocityVectorPath::New() {
}

VelocityVectorPath::VelocityVectorPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
VelocityVectorPath::~VelocityVectorPath() {
		free(Fields);
}

const char* VelocityVectorPath::Name() {
		return "VelocityVectorPath";
}
	
void* VelocityVectorPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* VelocityVectorPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* VelocityVectorPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

VelocityVectorPath aVelocityVectorPath;
// AccelVectorNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AccelVectorNode::New() {
}

AccelVectorNode::AccelVectorNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aAccelVector3D, 0, 0);
		Fields[1].fieldinfo(&aAccelVector3D, 12, 0);
		Fields[2].fieldinfo(&aDT_FLOAT, 24, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AccelVectorNode::~AccelVectorNode() {
		free(Fields);
}

const char* AccelVectorNode::Name() {
		return "AccelVectorNode";
}
	
void* AccelVectorNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AccelVectorNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 12;
}
void* AccelVectorNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 24;
}

AccelVectorNode aAccelVectorNode;
// AccelVectorPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* AccelVectorPath::New() {
}

AccelVectorPath::AccelVectorPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AccelVectorPath::~AccelVectorPath() {
		free(Fields);
}

const char* AccelVectorPath::Name() {
		return "AccelVectorPath";
}
	
void* AccelVectorPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AccelVectorPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* AccelVectorPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

AccelVectorPath aAccelVectorPath;
// AngularVelocityNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


void* AngularVelocityNode::New() {
}

AngularVelocityNode::AngularVelocityNode() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aDT_ANGULARVELOCITY, 0, 32);
		Fields[1].fieldinfo(&aDT_ANGULARVELOCITY, 4, 32);
		Fields[2].fieldinfo(&aDT_FLOAT, 8, 32);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AngularVelocityNode::~AngularVelocityNode() {
		free(Fields);
}

const char* AngularVelocityNode::Name() {
		return "AngularVelocityNode";
}
	
void* AngularVelocityNode::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AngularVelocityNode::unknow_field_1(void *Data) {
	return ((char*)Data) + 4;
}
void* AngularVelocityNode::unknow_field_2(void *Data) {
	return ((char*)Data) + 8;
}

AngularVelocityNode aAngularVelocityNode;
// AngularVelocityPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


void* AngularVelocityPath::New() {
}

AngularVelocityPath::AngularVelocityPath() {
		Fields = (FieldInfo*) malloc(sizeof(FieldInfo) * 4);
		cout << "initializing Fields " << endl;
		Fields[0].fieldinfo(&aInterpolationPathHeader, 0, 0);
		Fields[1].fieldinfo(&aSerializeData, 32, 0);
		Fields[2].fieldinfo(&aDT_VARIABLEARRAY, 28, 0);
		Fields[4 - 1].fieldinfo(NULL, 0, 0);
	}
AngularVelocityPath::~AngularVelocityPath() {
		free(Fields);
}

const char* AngularVelocityPath::Name() {
		return "AngularVelocityPath";
}
	
void* AngularVelocityPath::unknow_field_0(void *Data) {
	return ((char*)Data) + 0;
}
void* AngularVelocityPath::serNodes(void *Data) {
	return ((char*)Data) + 32;
}
void* AngularVelocityPath::unknow_field_2(void *Data) {
	return ((char*)Data) + 28;
}

AngularVelocityPath aAngularVelocityPath;