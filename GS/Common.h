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

#ifndef Common__h__
#define Common__h__

// PRTransform
//
// { unknow_field_0 }
// { unknow_field_1 }


class PRTransform : public D3Struct {
	public:
	void* New();

	PRTransform();
	~PRTransform();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern PRTransform aPRTransform;


// PRSTransform
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PRSTransform : public D3Struct {
	public:
	void* New();

	PRSTransform();
	~PRSTransform();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern PRSTransform aPRSTransform;


// RGBAColor
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class RGBAColor : public D3Struct {
	public:
	void* New();

	RGBAColor();
	~RGBAColor();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern RGBAColor aRGBAColor;


// RGBAColorValue
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class RGBAColorValue : public D3Struct {
	public:
	void* New();

	RGBAColorValue();
	~RGBAColorValue();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern RGBAColorValue aRGBAColorValue;


// SerializeData
//
// { unknow_field_0 }
// { unknow_field_1 }


class SerializeData : public D3Struct {
	public:
	void* New();

	SerializeData();
	~SerializeData();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern SerializeData aSerializeData;


// IVector2D
//
// { unknow_field_0 }
// { unknow_field_1 }


class IVector2D : public D3Struct {
	public:
	void* New();

	IVector2D();
	~IVector2D();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern IVector2D aIVector2D;


// Vector2D
//
// { unknow_field_0 }
// { unknow_field_1 }


class Vector2D : public D3Struct {
	public:
	void* New();

	Vector2D();
	~Vector2D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Vector2D aVector2D;


// Vector3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class Vector3D : public D3Struct {
	public:
	void* New();

	Vector3D();
	~Vector3D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern Vector3D aVector3D;


// Vector4D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class Vector4D : public D3Struct {
	public:
	void* New();

	Vector4D();
	~Vector4D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern Vector4D aVector4D;


// AABB
//
// { unknow_field_0 }
// { unknow_field_1 }


class AABB : public D3Struct {
	public:
	void* New();

	AABB();
	~AABB();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern AABB aAABB;


// OBB
//
// { unknow_field_0 }
// { unknow_field_1 }


class OBB : public D3Struct {
	public:
	void* New();

	OBB();
	~OBB();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern OBB aOBB;


// Circle
//
// { unknow_field_0 }
// { unknow_field_1 }


class Circle : public D3Struct {
	public:
	void* New();

	Circle();
	~Circle();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Circle aCircle;


// Sphere
//
// { unknow_field_0 }
// { unknow_field_1 }


class Sphere : public D3Struct {
	public:
	void* New();

	Sphere();
	~Sphere();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Sphere aSphere;


// Quaternion
//
// { unknow_field_0 }
// { unknow_field_1 }


class Quaternion : public D3Struct {
	public:
	void* New();

	Quaternion();
	~Quaternion();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Quaternion aQuaternion;


// Quaternion16
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class Quaternion16 : public D3Struct {
	public:
	void* New();

	Quaternion16();
	~Quaternion16();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern Quaternion16 aQuaternion16;


// AxialCylinder
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AxialCylinder : public D3Struct {
	public:
	void* New();

	AxialCylinder();
	~AxialCylinder();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern AxialCylinder aAxialCylinder;


// Cylinder
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class Cylinder : public D3Struct {
	public:
	void* New();

	Cylinder();
	~Cylinder();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern Cylinder aCylinder;


// Capsule
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class Capsule : public D3Struct {
	public:
	void* New();

	Capsule();
	~Capsule();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern Capsule aCapsule;


// Ray3D
//
// { unknow_field_0 }
// { unknow_field_1 }


class Ray3D : public D3Struct {
	public:
	void* New();

	Ray3D();
	~Ray3D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Ray3D aRay3D;


// LineSeg3D
//
// { unknow_field_0 }
// { unknow_field_1 }


class LineSeg3D : public D3Struct {
	public:
	void* New();

	LineSeg3D();
	~LineSeg3D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern LineSeg3D aLineSeg3D;


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


class Matrix3x3 : public D3Struct {
	public:
	void* New();

	Matrix3x3();
	~Matrix3x3();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
};

extern Matrix3x3 aMatrix3x3;


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


class Matrix4x4 : public D3Struct {
	public:
	void* New();

	Matrix4x4();
	~Matrix4x4();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
};

extern Matrix4x4 aMatrix4x4;


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


class ConstraintParameters : public D3Struct {
	public:
	void* New();

	ConstraintParameters();
	~ConstraintParameters();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
};

extern ConstraintParameters aConstraintParameters;


// OctreeCube
//
// { unknow_field_0 }
// { unknow_field_1 }


class OctreeCube : public D3Struct {
	public:
	void* New();

	OctreeCube();
	~OctreeCube();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern OctreeCube aOctreeCube;


// OctreeNode
//
// { unknow_field_0 }
// { unknow_field_1 }


class OctreeNode : public D3Struct {
	public:
	void* New();

	OctreeNode();
	~OctreeNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern OctreeNode aOctreeNode;


// OctreeLeaf
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class OctreeLeaf : public D3Struct {
	public:
	void* New();

	OctreeLeaf();
	~OctreeLeaf();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern OctreeLeaf aOctreeLeaf;


// OctreePrimitive
//
// { unknow_field_0 }
// { unknow_field_1 }


class OctreePrimitive : public D3Struct {
	public:
	void* New();

	OctreePrimitive();
	~OctreePrimitive();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern OctreePrimitive aOctreePrimitive;


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


class Octree : public D3Struct {
	public:
	void* New();

	Octree();
	~Octree();
	const char* Name();
	
	int* nMaxNodes(void *Data);
	int* nMaxLeaves(void *Data);
	int* nMaxPrimitives(void *Data);
	int* nNodeCount(void *Data);
	int* nLeafCount(void *Data);
	int* nPrimitiveCount(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_7(void *Data);
	void* serLeaves(void *Data);
	void* unknow_field_9(void *Data);
	void* serPrimitives(void *Data);
	void* unknow_field_11(void *Data);
};

extern Octree aOctree;


// Plane
//
// { unknow_field_0 }
// { unknow_field_1 }


class Plane : public D3Struct {
	public:
	void* New();

	Plane();
	~Plane();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Plane aPlane;


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


class Shape : public D3Struct {
	public:
	void* New();

	Shape();
	~Shape();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
};

extern Shape aShape;


// Triangle3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class Triangle3D : public D3Struct {
	public:
	void* New();

	Triangle3D();
	~Triangle3D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern Triangle3D aTriangle3D;


// IndexedTriangle
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class IndexedTriangle : public D3Struct {
	public:
	void* New();

	IndexedTriangle();
	~IndexedTriangle();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern IndexedTriangle aIndexedTriangle;


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


class ConvexHull : public D3Struct {
	public:
	void* New();

	ConvexHull();
	~ConvexHull();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serVertices(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serTriangles(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* serPlanes(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
};

extern ConvexHull aConvexHull;


// SNOFileHeader
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class SNOFileHeader : public D3Struct {
	public:
	void* New();

	SNOFileHeader();
	~SNOFileHeader();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern SNOFileHeader aSNOFileHeader;


// SNOEntry
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class SNOEntry : public D3Struct {
	public:
	void* New();

	SNOEntry();
	~SNOEntry();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern SNOEntry aSNOEntry;


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


class GameSyncedData : public D3Struct {
	public:
	void* New();

	GameSyncedData();
	~GameSyncedData();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern GameSyncedData aGameSyncedData;


// GameSyncedDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class GameSyncedDataMessage : public D3Struct {
	public:
	void* New();

	GameSyncedDataMessage();
	~GameSyncedDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern GameSyncedDataMessage aGameSyncedDataMessage;


// EntityId
//
// { unknow_field_0 }
// { unknow_field_1 }


class EntityId : public D3Struct {
	public:
	void* New();

	EntityId();
	~EntityId();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern EntityId aEntityId;


// EntityIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class EntityIdMessage : public D3Struct {
	public:
	void* New();

	EntityIdMessage();
	~EntityIdMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern EntityIdMessage aEntityIdMessage;


// GameId
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class GameId : public D3Struct {
	public:
	void* New();

	GameId();
	~GameId();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern GameId aGameId;


// GameIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class GameIdMessage : public D3Struct {
	public:
	void* New();

	GameIdMessage();
	~GameIdMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern GameIdMessage aGameIdMessage;


// ItemId
//
// { unknow_field_0 }
// { unknow_field_1 }


class ItemId : public D3Struct {
	public:
	void* New();

	ItemId();
	~ItemId();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern ItemId aItemId;


// ItemIdMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class ItemIdMessage : public D3Struct {
	public:
	void* New();

	ItemIdMessage();
	~ItemIdMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern ItemIdMessage aItemIdMessage;


// EnchantItemMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class EnchantItemMessage : public D3Struct {
	public:
	void* New();

	EnchantItemMessage();
	~EnchantItemMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern EnchantItemMessage aEnchantItemMessage;


// CraftingResultsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class CraftingResultsMessage : public D3Struct {
	public:
	void* New();

	CraftingResultsMessage();
	~CraftingResultsMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern CraftingResultsMessage aCraftingResultsMessage;


// CrafterLevelUpMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class CrafterLevelUpMessage : public D3Struct {
	public:
	void* New();

	CrafterLevelUpMessage();
	~CrafterLevelUpMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern CrafterLevelUpMessage aCrafterLevelUpMessage;


// RareItemName
//
// { unknow_field_0 }
// { snoAffixStringList }
// { unknow_field_2 }
// { unknow_field_3 }


class RareItemName : public D3Struct {
	public:
	void* New();

	RareItemName();
	~RareItemName();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* snoAffixStringList(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern RareItemName aRareItemName;


// AttributeSpecifier
//
// { unknow_field_0 }
// { SNOParam }
// { serAttributeFormula }
// { Formula }


class AttributeSpecifier : public D3Struct {
	public:
	void* New();

	AttributeSpecifier();
	~AttributeSpecifier();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* SNOParam(void *Data);
	void* serAttributeFormula(void *Data);
	void* Formula(void *Data);
};

extern AttributeSpecifier aAttributeSpecifier;


// GBHandle
//
// { unknow_field_0 }
// { unknow_field_1 }


class GBHandle : public D3Struct {
	public:
	void* New();

	GBHandle();
	~GBHandle();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern GBHandle aGBHandle;


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


class Item : public D3Struct {
	public:
	void* New();

	Item();
	~Item();
	const char* Name();
	
	void* Name(void *Data);
	void* Actor(void *Data);
	void* ItemType1(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	void* BaseItem(void *Data);
	void* Set(void *Data);
	void* ComponentTreasureClass(void *Data);
	void* ComponentTreasureClassMagic(void *Data);
	void* ComponentTreasureClassRare(void *Data);
	void* RareNamePrefixStringList(void *Data);
	void* RareNameSuffixStringList(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	int* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* unknow_field_31(void *Data);
	void* unknow_field_32(void *Data);
	void* unknow_field_33(void *Data);
	void* Skill0(void *Data);
	int* unknow_field_35(void *Data);
	void* Skill1(void *Data);
	int* unknow_field_37(void *Data);
	void* Skill2(void *Data);
	int* unknow_field_39(void *Data);
	void* Skill3(void *Data);
	int* unknow_field_41(void *Data);
	void* unknow_field_42(void *Data);
	void* unknow_field_43(void *Data);
	void* AttributeParam1(void *Data);
	void* ptAttributes_0__serAttributeFormula(void *Data);
	void* AttributeFormula1(void *Data);
	void* unknow_field_47(void *Data);
	void* AttributeParam2(void *Data);
	void* ptAttributes_1__serAttributeFormula(void *Data);
	void* AttributeFormula2(void *Data);
	void* unknow_field_51(void *Data);
	void* AttributeParam3(void *Data);
	void* ptAttributes_2__serAttributeFormula(void *Data);
	void* AttributeFormula3(void *Data);
	void* unknow_field_55(void *Data);
	void* AttributeParam4(void *Data);
	void* ptAttributes_3__serAttributeFormula(void *Data);
	void* AttributeFormula4(void *Data);
	void* unknow_field_59(void *Data);
	void* AttributeParam5(void *Data);
	void* ptAttributes_4__serAttributeFormula(void *Data);
	void* AttributeFormula5(void *Data);
	void* unknow_field_63(void *Data);
	void* AttributeParam6(void *Data);
	void* ptAttributes_5__serAttributeFormula(void *Data);
	void* AttributeFormula6(void *Data);
	void* unknow_field_67(void *Data);
	void* AttributeParam7(void *Data);
	void* ptAttributes_6__serAttributeFormula(void *Data);
	void* AttributeFormula7(void *Data);
	void* unknow_field_71(void *Data);
	void* AttributeParam8(void *Data);
	void* ptAttributes_7__serAttributeFormula(void *Data);
	void* AttributeFormula8(void *Data);
	void* unknow_field_75(void *Data);
	void* AttributeParam9(void *Data);
	void* ptAttributes_8__serAttributeFormula(void *Data);
	void* AttributeFormula9(void *Data);
	void* unknow_field_79(void *Data);
	void* AttributeParam10(void *Data);
	void* ptAttributes_9__serAttributeFormula(void *Data);
	void* AttributeFormula10(void *Data);
	void* unknow_field_83(void *Data);
	void* AttributeParam11(void *Data);
	void* ptAttributes_10__serAttributeFormula(void *Data);
	void* AttributeFormula11(void *Data);
	void* unknow_field_87(void *Data);
	void* AttributeParam12(void *Data);
	void* ptAttributes_11__serAttributeFormula(void *Data);
	void* AttributeFormula12(void *Data);
	void* unknow_field_91(void *Data);
	void* AttributeParam13(void *Data);
	void* ptAttributes_12__serAttributeFormula(void *Data);
	void* AttributeFormula13(void *Data);
	void* unknow_field_95(void *Data);
	void* AttributeParam14(void *Data);
	void* ptAttributes_13__serAttributeFormula(void *Data);
	void* AttributeFormula14(void *Data);
	void* unknow_field_99(void *Data);
	void* AttributeParam15(void *Data);
	void* ptAttributes_14__serAttributeFormula(void *Data);
	void* AttributeFormula15(void *Data);
	void* unknow_field_103(void *Data);
	void* AttributeParam16(void *Data);
	void* ptAttributes_15__serAttributeFormula(void *Data);
	void* AttributeFormula16(void *Data);
	void* unknow_field_107(void *Data);
	void* RecipeToGrant(void *Data);
	void* EnhancementToGrant(void *Data);
	void* LegendaryAffixFamily1(void *Data);
	void* LegendaryAffixFamily2(void *Data);
	void* LegendaryAffixFamily3(void *Data);
	void* LegendaryAffixFamily4(void *Data);
	void* LegendaryAffixFamily5(void *Data);
	void* LegendaryAffixFamily6(void *Data);
	int* unknow_field_116(void *Data);
	int* unknow_field_117(void *Data);
	int* unknow_field_118(void *Data);
	int* unknow_field_119(void *Data);
	int* unknow_field_120(void *Data);
	int* unknow_field_121(void *Data);
};

extern Item aItem;


// Items
//
// { serItems }
// { unknow_field_1 }


class Items : public D3Struct {
	public:
	void* New();

	Items();
	~Items();
	const char* Name();
	
	void* serItems(void *Data);
	void* unknow_field_1(void *Data);
};

extern Items aItems;


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


class ItemType : public D3Struct {
	public:
	void* New();

	ItemType();
	~ItemType();
	const char* Name();
	
	void* Name(void *Data);
	void* ParentType(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* InherentAffix1(void *Data);
	void* InherentAffix2(void *Data);
	void* InherentAffix3(void *Data);
	void* InherentAffixFamily1(void *Data);
	void* unknow_field_22(void *Data);
};

extern ItemType aItemType;


// Items_1
//
// { serItemTypes }
// { unknow_field_1 }


class Items_1 : public D3Struct {
	public:
	void* New();

	Items_1();
	~Items_1();
	const char* Name();
	
	void* serItemTypes(void *Data);
	void* unknow_field_1(void *Data);
};

extern Items_1 aItems_1;


// RecipeIngredient
//
// { gbidItem }
// { unknow_field_1 }


class RecipeIngredient : public D3Struct {
	public:
	void* New();

	RecipeIngredient();
	~RecipeIngredient();
	const char* Name();
	
	void* gbidItem(void *Data);
	int* unknow_field_1(void *Data);
};

extern RecipeIngredient aRecipeIngredient;


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


class ItemEnhancement : public D3Struct {
	public:
	void* New();

	ItemEnhancement();
	~ItemEnhancement();
	const char* Name();
	
	void* Name(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern ItemEnhancement aItemEnhancement;


// ItemEnhancementTable
//
// { serItemEnhancements }
// { unknow_field_1 }


class ItemEnhancementTable : public D3Struct {
	public:
	void* New();

	ItemEnhancementTable();
	~ItemEnhancementTable();
	const char* Name();
	
	void* serItemEnhancements(void *Data);
	void* unknow_field_1(void *Data);
};

extern ItemEnhancementTable aItemEnhancementTable;


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


class ExperienceLevel : public D3Struct {
	public:
	void* New();

	ExperienceLevel();
	~ExperienceLevel();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	int* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
	int* unknow_field_22(void *Data);
	int* unknow_field_23(void *Data);
	int* unknow_field_24(void *Data);
	int* unknow_field_25(void *Data);
	int* unknow_field_26(void *Data);
	int* unknow_field_27(void *Data);
	int* unknow_field_28(void *Data);
	int* unknow_field_29(void *Data);
	int* unknow_field_30(void *Data);
	int* unknow_field_31(void *Data);
	int* unknow_field_32(void *Data);
	int* unknow_field_33(void *Data);
	int* unknow_field_34(void *Data);
	int* unknow_field_35(void *Data);
	int* unknow_field_36(void *Data);
	int* unknow_field_37(void *Data);
	int* unknow_field_38(void *Data);
	int* unknow_field_39(void *Data);
	int* unknow_field_40(void *Data);
	int* unknow_field_41(void *Data);
	int* unknow_field_42(void *Data);
	int* unknow_field_43(void *Data);
	int* unknow_field_44(void *Data);
	int* unknow_field_45(void *Data);
	int* unknow_field_46(void *Data);
	int* unknow_field_47(void *Data);
	int* unknow_field_48(void *Data);
	int* unknow_field_49(void *Data);
	int* unknow_field_50(void *Data);
	int* unknow_field_51(void *Data);
};

extern ExperienceLevel aExperienceLevel;


// ExperienceTable
//
// { serExperienceLevels }
// { unknow_field_1 }


class ExperienceTable : public D3Struct {
	public:
	void* New();

	ExperienceTable();
	~ExperienceTable();
	const char* Name();
	
	void* serExperienceLevels(void *Data);
	void* unknow_field_1(void *Data);
};

extern ExperienceTable aExperienceTable;


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


class PowerFormulaTableEntry : public D3Struct {
	public:
	void* New();

	PowerFormulaTableEntry();
	~PowerFormulaTableEntry();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* unknow_field_31(void *Data);
	void* unknow_field_32(void *Data);
	void* unknow_field_33(void *Data);
	void* unknow_field_34(void *Data);
	void* unknow_field_35(void *Data);
	void* unknow_field_36(void *Data);
	void* unknow_field_37(void *Data);
	void* unknow_field_38(void *Data);
	void* unknow_field_39(void *Data);
	void* unknow_field_40(void *Data);
	void* unknow_field_41(void *Data);
	void* unknow_field_42(void *Data);
	void* unknow_field_43(void *Data);
	void* unknow_field_44(void *Data);
	void* unknow_field_45(void *Data);
	void* unknow_field_46(void *Data);
	void* unknow_field_47(void *Data);
	void* unknow_field_48(void *Data);
	void* unknow_field_49(void *Data);
	void* unknow_field_50(void *Data);
	void* unknow_field_51(void *Data);
	void* unknow_field_52(void *Data);
	void* unknow_field_53(void *Data);
	void* unknow_field_54(void *Data);
	void* unknow_field_55(void *Data);
	void* unknow_field_56(void *Data);
	void* unknow_field_57(void *Data);
	void* unknow_field_58(void *Data);
	void* unknow_field_59(void *Data);
	void* unknow_field_60(void *Data);
	void* unknow_field_61(void *Data);
};

extern PowerFormulaTableEntry aPowerFormulaTableEntry;


// PowerFormulaTable
//
// { serPowerFormulaTableEntries }
// { unknow_field_1 }


class PowerFormulaTable : public D3Struct {
	public:
	void* New();

	PowerFormulaTable();
	~PowerFormulaTable();
	const char* Name();
	
	void* serPowerFormulaTableEntries(void *Data);
	void* unknow_field_1(void *Data);
};

extern PowerFormulaTable aPowerFormulaTable;


// HelpCodes
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class HelpCodes : public D3Struct {
	public:
	void* New();

	HelpCodes();
	~HelpCodes();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern HelpCodes aHelpCodes;


// HelpCodes_1
//
// { serHelpCodes }
// { unknow_field_1 }


class HelpCodes_1 : public D3Struct {
	public:
	void* New();

	HelpCodes_1();
	~HelpCodes_1();
	const char* Name();
	
	void* serHelpCodes(void *Data);
	void* unknow_field_1(void *Data);
};

extern HelpCodes_1 aHelpCodes_1;


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


class ItemTierData : public D3Struct {
	public:
	void* New();

	ItemTierData();
	~ItemTierData();
	const char* Name();
	
	void* Head(void *Data);
	void* Torso(void *Data);
	void* Feet(void *Data);
	void* Hands(void *Data);
	void* Shoulders(void *Data);
	void* Legs(void *Data);
	void* Bracers(void *Data);
	void* Belt(void *Data);
};

extern ItemTierData aItemTierData;


// ItemTiers
//
// { serTiers }
// { unknow_field_1 }


class ItemTiers : public D3Struct {
	public:
	void* New();

	ItemTiers();
	~ItemTiers();
	const char* Name();
	
	void* serTiers(void *Data);
	void* unknow_field_1(void *Data);
};

extern ItemTiers aItemTiers;


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


class LootDistribution : public D3Struct {
	public:
	void* New();

	LootDistribution();
	~LootDistribution();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
	int* unknow_field_22(void *Data);
};

extern LootDistribution aLootDistribution;


// LootDistributionTable
//
// { serLootDistributions }
// { unknow_field_1 }


class LootDistributionTable : public D3Struct {
	public:
	void* New();

	LootDistributionTable();
	~LootDistributionTable();
	const char* Name();
	
	void* serLootDistributions(void *Data);
	void* unknow_field_1(void *Data);
};

extern LootDistributionTable aLootDistributionTable;


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


class LootDistribution_1 : public D3Struct {
	public:
	void* New();

	LootDistribution_1();
	~LootDistribution_1();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	int* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
	int* unknow_field_22(void *Data);
};

extern LootDistribution_1 aLootDistribution_1;


// ItemLevelModTable
//
// { serItemLevelModifiers }
// { unknow_field_1 }


class ItemLevelModTable : public D3Struct {
	public:
	void* New();

	ItemLevelModTable();
	~ItemLevelModTable();
	const char* Name();
	
	void* serItemLevelModifiers(void *Data);
	void* unknow_field_1(void *Data);
};

extern ItemLevelModTable aItemLevelModTable;


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


class QualityClass : public D3Struct {
	public:
	void* New();

	QualityClass();
	~QualityClass();
	const char* Name();
	
	void* Name(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
};

extern QualityClass aQualityClass;


// QualityClassTable
//
// { serQualityClasses }
// { unknow_field_1 }


class QualityClassTable : public D3Struct {
	public:
	void* New();

	QualityClassTable();
	~QualityClassTable();
	const char* Name();
	
	void* serQualityClasses(void *Data);
	void* unknow_field_1(void *Data);
};

extern QualityClassTable aQualityClassTable;


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


class HeroData : public D3Struct {
	public:
	void* New();

	HeroData();
	~HeroData();
	const char* Name();
	
	void* Name(void *Data);
	void* MaleActor(void *Data);
	void* FemaleActor(void *Data);
	void* Inventory_SNO(void *Data);
	int* unknow_field_4(void *Data);
	void* StartingLMBSkill(void *Data);
	void* StartingRMBSkill(void *Data);
	void* SkillKit0(void *Data);
	void* SkillKit1(void *Data);
	void* SkillKit2(void *Data);
	void* SkillKit3(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* unknow_field_31(void *Data);
	void* unknow_field_32(void *Data);
	void* unknow_field_33(void *Data);
	void* unknow_field_34(void *Data);
	void* unknow_field_35(void *Data);
	void* unknow_field_36(void *Data);
	void* unknow_field_37(void *Data);
	void* unknow_field_38(void *Data);
	void* unknow_field_39(void *Data);
	void* unknow_field_40(void *Data);
	void* unknow_field_41(void *Data);
	void* unknow_field_42(void *Data);
	void* unknow_field_43(void *Data);
	void* unknow_field_44(void *Data);
	void* unknow_field_45(void *Data);
	void* unknow_field_46(void *Data);
	void* unknow_field_47(void *Data);
	void* unknow_field_48(void *Data);
	void* unknow_field_49(void *Data);
	void* unknow_field_50(void *Data);
	void* unknow_field_51(void *Data);
	void* unknow_field_52(void *Data);
	void* unknow_field_53(void *Data);
	void* unknow_field_54(void *Data);
	void* unknow_field_55(void *Data);
	void* unknow_field_56(void *Data);
};

extern HeroData aHeroData;


// Heros
//
// { serHeros }
// { unknow_field_1 }


class Heros : public D3Struct {
	public:
	void* New();

	Heros();
	~Heros();
	const char* Name();
	
	void* serHeros(void *Data);
	void* unknow_field_1(void *Data);
};

extern Heros aHeros;


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


class MovementStyleDefinition : public D3Struct {
	public:
	void* New();

	MovementStyleDefinition();
	~MovementStyleDefinition();
	const char* Name();
	
	void* Name(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* snoPowerToBreakObjects(void *Data);
};

extern MovementStyleDefinition aMovementStyleDefinition;


// MovementStyles
//
// { serMovementStyles }
// { unknow_field_1 }


class MovementStyles : public D3Struct {
	public:
	void* New();

	MovementStyles();
	~MovementStyles();
	const char* Name();
	
	void* serMovementStyles(void *Data);
	void* unknow_field_1(void *Data);
};

extern MovementStyles aMovementStyles;


// LabelGBID
//
// { Name }
// { unknow_field_1 }


class LabelGBID : public D3Struct {
	public:
	void* New();

	LabelGBID();
	~LabelGBID();
	const char* Name();
	
	void* Name(void *Data);
	int* unknow_field_1(void *Data);
};

extern LabelGBID aLabelGBID;


// Labels
//
// { serLabelGBIDs }
// { unknow_field_1 }


class Labels : public D3Struct {
	public:
	void* New();

	Labels();
	~Labels();
	const char* Name();
	
	void* serLabelGBIDs(void *Data);
	void* unknow_field_1(void *Data);
};

extern Labels aLabels;


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


class MonsterLevelDefinition : public D3Struct {
	public:
	void* New();

	MonsterLevelDefinition();
	~MonsterLevelDefinition();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* unknow_field_31(void *Data);
	void* unknow_field_32(void *Data);
	void* unknow_field_33(void *Data);
	void* unknow_field_34(void *Data);
	void* unknow_field_35(void *Data);
	void* unknow_field_36(void *Data);
	void* unknow_field_37(void *Data);
	void* unknow_field_38(void *Data);
	void* unknow_field_39(void *Data);
	void* unknow_field_40(void *Data);
	void* unknow_field_41(void *Data);
	void* unknow_field_42(void *Data);
	void* unknow_field_43(void *Data);
	void* unknow_field_44(void *Data);
	void* unknow_field_45(void *Data);
	void* unknow_field_46(void *Data);
	void* unknow_field_47(void *Data);
	void* unknow_field_48(void *Data);
	void* unknow_field_49(void *Data);
	void* unknow_field_50(void *Data);
	void* unknow_field_51(void *Data);
	void* unknow_field_52(void *Data);
};

extern MonsterLevelDefinition aMonsterLevelDefinition;


// MonsterLevelTable
//
// { serMonsterLevels }
// { unknow_field_1 }


class MonsterLevelTable : public D3Struct {
	public:
	void* New();

	MonsterLevelTable();
	~MonsterLevelTable();
	const char* Name();
	
	void* serMonsterLevels(void *Data);
	void* unknow_field_1(void *Data);
};

extern MonsterLevelTable aMonsterLevelTable;


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


class AffixTableEntry : public D3Struct {
	public:
	void* New();

	AffixTableEntry();
	~AffixTableEntry();
	const char* Name();
	
	void* Name(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* RareNamePrefixStringList(void *Data);
	void* RareNameSuffixStringList(void *Data);
	void* AffixFamily0(void *Data);
	void* AffixFamily1(void *Data);
	int* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* AssociatedAffix(void *Data);
	void* ExclusionCategory(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
};

extern AffixTableEntry aAffixTableEntry;


// AffixTable
//
// { serAffixes }
// { unknow_field_1 }


class AffixTable : public D3Struct {
	public:
	void* New();

	AffixTable();
	~AffixTable();
	const char* Name();
	
	void* serAffixes(void *Data);
	void* unknow_field_1(void *Data);
};

extern AffixTable aAffixTable;


// SetItemBonusTableEntry
//
// { Name }
// { unknow_field_1 }
// { Set }
// { unknow_field_3 }


class SetItemBonusTableEntry : public D3Struct {
	public:
	void* New();

	SetItemBonusTableEntry();
	~SetItemBonusTableEntry();
	const char* Name();
	
	void* Name(void *Data);
	int* unknow_field_1(void *Data);
	void* Set(void *Data);
	void* unknow_field_3(void *Data);
};

extern SetItemBonusTableEntry aSetItemBonusTableEntry;


// SetItemBonusTable
//
// { serSetItemBonuses }
// { unknow_field_1 }


class SetItemBonusTable : public D3Struct {
	public:
	void* New();

	SetItemBonusTable();
	~SetItemBonusTable();
	const char* Name();
	
	void* serSetItemBonuses(void *Data);
	void* unknow_field_1(void *Data);
};

extern SetItemBonusTable aSetItemBonusTable;


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


class MonsterAffixesEntry : public D3Struct {
	public:
	void* New();

	MonsterAffixesEntry();
	~MonsterAffixesEntry();
	const char* Name();
	
	void* Name(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* On_Spawn_Power_Minion(void *Data);
	void* On_Spawn_Power_Rare(void *Data);
	void* On_Spawn_Power_Champion(void *Data);
	void* unknow_field_13(void *Data);
	void* Param0(void *Data);
	void* ptAttributes_0__serAttributeFormula(void *Data);
	void* Value0(void *Data);
	void* unknow_field_17(void *Data);
	void* Param1(void *Data);
	void* ptAttributes_1__serAttributeFormula(void *Data);
	void* Value1(void *Data);
	void* unknow_field_21(void *Data);
	void* Param2(void *Data);
	void* ptAttributes_2__serAttributeFormula(void *Data);
	void* Value2(void *Data);
	void* unknow_field_25(void *Data);
	void* Param3(void *Data);
	void* ptAttributes_3__serAttributeFormula(void *Data);
	void* Value3(void *Data);
	void* unknow_field_29(void *Data);
	void* Param4(void *Data);
	void* ptAttributes_4__serAttributeFormula(void *Data);
	void* Value4(void *Data);
	void* unknow_field_33(void *Data);
	void* Param5(void *Data);
	void* ptAttributes_5__serAttributeFormula(void *Data);
	void* Value5(void *Data);
	void* unknow_field_37(void *Data);
	void* Param6(void *Data);
	void* ptAttributes_6__serAttributeFormula(void *Data);
	void* Value6(void *Data);
	void* unknow_field_41(void *Data);
	void* Param7(void *Data);
	void* ptAttributes_7__serAttributeFormula(void *Data);
	void* Value7(void *Data);
	void* unknow_field_45(void *Data);
	void* Param8(void *Data);
	void* ptAttributes_8__serAttributeFormula(void *Data);
	void* Value8(void *Data);
	void* unknow_field_49(void *Data);
	void* Param9(void *Data);
	void* ptAttributes_9__serAttributeFormula(void *Data);
	void* Value9(void *Data);
	void* unknow_field_53(void *Data);
	void* MinionParam0(void *Data);
	void* ptMinionAttributes_0__serAttributeFormula(void *Data);
	void* MinionValue0(void *Data);
	void* unknow_field_57(void *Data);
	void* MinionParam1(void *Data);
	void* ptMinionAttributes_1__serAttributeFormula(void *Data);
	void* MinionValue1(void *Data);
	void* unknow_field_61(void *Data);
	void* MinionParam2(void *Data);
	void* ptMinionAttributes_2__serAttributeFormula(void *Data);
	void* MinionValue2(void *Data);
	void* unknow_field_65(void *Data);
	void* MinionParam3(void *Data);
	void* ptMinionAttributes_3__serAttributeFormula(void *Data);
	void* MinionValue3(void *Data);
	void* unknow_field_69(void *Data);
	void* MinionParam4(void *Data);
	void* ptMinionAttributes_4__serAttributeFormula(void *Data);
	void* MinionValue4(void *Data);
	void* unknow_field_73(void *Data);
	void* MinionParam5(void *Data);
	void* ptMinionAttributes_5__serAttributeFormula(void *Data);
	void* MinionValue5(void *Data);
	void* unknow_field_77(void *Data);
	void* MinionParam6(void *Data);
	void* ptMinionAttributes_6__serAttributeFormula(void *Data);
	void* MinionValue6(void *Data);
	void* unknow_field_81(void *Data);
	void* MinionParam7(void *Data);
	void* ptMinionAttributes_7__serAttributeFormula(void *Data);
	void* MinionValue7(void *Data);
	void* unknow_field_85(void *Data);
	void* MinionParam8(void *Data);
	void* ptMinionAttributes_8__serAttributeFormula(void *Data);
	void* MinionValue8(void *Data);
	void* unknow_field_89(void *Data);
	void* MinionParam9(void *Data);
	void* ptMinionAttributes_9__serAttributeFormula(void *Data);
	void* MinionValue9(void *Data);
};

extern MonsterAffixesEntry aMonsterAffixesEntry;


// MonsterAffixesTable
//
// { serMonsterAffixes }
// { unknow_field_1 }


class MonsterAffixesTable : public D3Struct {
	public:
	void* New();

	MonsterAffixesTable();
	~MonsterAffixesTable();
	const char* Name();
	
	void* serMonsterAffixes(void *Data);
	void* unknow_field_1(void *Data);
};

extern MonsterAffixesTable aMonsterAffixesTable;


// RareMonsterNamesEntry
//
// { Name }
// { unknow_field_1 }
// { unknow_field_2 }


class RareMonsterNamesEntry : public D3Struct {
	public:
	void* New();

	RareMonsterNamesEntry();
	~RareMonsterNamesEntry();
	const char* Name();
	
	void* Name(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern RareMonsterNamesEntry aRareMonsterNamesEntry;


// RareMonsterNamesTable
//
// { serRareMonsterNames }
// { unknow_field_1 }


class RareMonsterNamesTable : public D3Struct {
	public:
	void* New();

	RareMonsterNamesTable();
	~RareMonsterNamesTable();
	const char* Name();
	
	void* serRareMonsterNames(void *Data);
	void* unknow_field_1(void *Data);
};

extern RareMonsterNamesTable aRareMonsterNamesTable;


// RareItemNamesEntry
//
// { Name }
// { RelatedAffixOrItemType }
// { unknow_field_2 }
// { unknow_field_3 }


class RareItemNamesEntry : public D3Struct {
	public:
	void* New();

	RareItemNamesEntry();
	~RareItemNamesEntry();
	const char* Name();
	
	void* Name(void *Data);
	void* RelatedAffixOrItemType(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern RareItemNamesEntry aRareItemNamesEntry;


// RareItemNamesTable
//
// { serRareItemNames }
// { unknow_field_1 }


class RareItemNamesTable : public D3Struct {
	public:
	void* New();

	RareItemNamesTable();
	~RareItemNamesTable();
	const char* Name();
	
	void* serRareItemNames(void *Data);
	void* unknow_field_1(void *Data);
};

extern RareItemNamesTable aRareItemNamesTable;


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


class SocketedEffectsTableEntry : public D3Struct {
	public:
	void* New();

	SocketedEffectsTableEntry();
	~SocketedEffectsTableEntry();
	const char* Name();
	
	void* Name(void *Data);
	void* Item(void *Data);
	void* ItemType(void *Data);
	void* unknow_field_3(void *Data);
	void* AttributeParam1(void *Data);
	void* ptAttributes_0__serAttributeFormula(void *Data);
	void* AttributeFormula1(void *Data);
	void* unknow_field_7(void *Data);
	void* AttributeParam2(void *Data);
	void* ptAttributes_1__serAttributeFormula(void *Data);
	void* AttributeFormula2(void *Data);
	void* unknow_field_11(void *Data);
	void* AttributeParam3(void *Data);
	void* ptAttributes_2__serAttributeFormula(void *Data);
	void* AttributeFormula3(void *Data);
	void* unknow_field_15(void *Data);
	void* ReqAttribParam1(void *Data);
	void* ptRequirements_0__serAttributeFormula(void *Data);
	void* ReqAttribFormula1(void *Data);
	void* unknow_field_19(void *Data);
	void* ReqAttribParam2(void *Data);
	void* ptRequirements_1__serAttributeFormula(void *Data);
	void* ReqAttribFormula2(void *Data);
	void* unknow_field_23(void *Data);
};

extern SocketedEffectsTableEntry aSocketedEffectsTableEntry;


// SocketedEffectsTable
//
// { serSocketedEffects }
// { unknow_field_1 }


class SocketedEffectsTable : public D3Struct {
	public:
	void* New();

	SocketedEffectsTable();
	~SocketedEffectsTable();
	const char* Name();
	
	void* serSocketedEffects(void *Data);
	void* unknow_field_1(void *Data);
};

extern SocketedEffectsTable aSocketedEffectsTable;


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


class ItemDropTableEntry : public D3Struct {
	public:
	void* New();

	ItemDropTableEntry();
	~ItemDropTableEntry();
	const char* Name();
	
	void* Name(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	int* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
	int* unknow_field_22(void *Data);
	int* unknow_field_23(void *Data);
	int* unknow_field_24(void *Data);
	int* unknow_field_25(void *Data);
	int* unknow_field_26(void *Data);
	int* unknow_field_27(void *Data);
	int* unknow_field_28(void *Data);
	int* unknow_field_29(void *Data);
	int* unknow_field_30(void *Data);
	int* unknow_field_31(void *Data);
	int* unknow_field_32(void *Data);
	int* unknow_field_33(void *Data);
	int* unknow_field_34(void *Data);
	int* unknow_field_35(void *Data);
	int* unknow_field_36(void *Data);
	int* unknow_field_37(void *Data);
	int* unknow_field_38(void *Data);
	int* unknow_field_39(void *Data);
	int* unknow_field_40(void *Data);
	int* unknow_field_41(void *Data);
	int* unknow_field_42(void *Data);
	int* unknow_field_43(void *Data);
	int* unknow_field_44(void *Data);
	int* unknow_field_45(void *Data);
	int* unknow_field_46(void *Data);
	int* unknow_field_47(void *Data);
	int* unknow_field_48(void *Data);
	int* unknow_field_49(void *Data);
	int* unknow_field_50(void *Data);
	int* unknow_field_51(void *Data);
	int* unknow_field_52(void *Data);
	int* unknow_field_53(void *Data);
	int* unknow_field_54(void *Data);
	int* unknow_field_55(void *Data);
	int* unknow_field_56(void *Data);
	int* unknow_field_57(void *Data);
	int* unknow_field_58(void *Data);
	int* unknow_field_59(void *Data);
	int* unknow_field_60(void *Data);
	int* unknow_field_61(void *Data);
	int* unknow_field_62(void *Data);
	int* unknow_field_63(void *Data);
	int* unknow_field_64(void *Data);
	int* unknow_field_65(void *Data);
	int* unknow_field_66(void *Data);
	int* unknow_field_67(void *Data);
	int* unknow_field_68(void *Data);
	int* unknow_field_69(void *Data);
	int* unknow_field_70(void *Data);
	int* unknow_field_71(void *Data);
	int* unknow_field_72(void *Data);
	int* unknow_field_73(void *Data);
	int* unknow_field_74(void *Data);
	int* unknow_field_75(void *Data);
	int* unknow_field_76(void *Data);
	int* unknow_field_77(void *Data);
	int* unknow_field_78(void *Data);
	int* unknow_field_79(void *Data);
	int* unknow_field_80(void *Data);
	int* unknow_field_81(void *Data);
	int* unknow_field_82(void *Data);
	int* unknow_field_83(void *Data);
	int* unknow_field_84(void *Data);
	int* unknow_field_85(void *Data);
	int* unknow_field_86(void *Data);
	int* unknow_field_87(void *Data);
	int* unknow_field_88(void *Data);
	int* unknow_field_89(void *Data);
	int* unknow_field_90(void *Data);
	int* unknow_field_91(void *Data);
	int* unknow_field_92(void *Data);
	int* unknow_field_93(void *Data);
	int* unknow_field_94(void *Data);
	int* unknow_field_95(void *Data);
	int* unknow_field_96(void *Data);
	int* unknow_field_97(void *Data);
	int* unknow_field_98(void *Data);
	int* unknow_field_99(void *Data);
	int* unknow_field_100(void *Data);
	int* unknow_field_101(void *Data);
	int* unknow_field_102(void *Data);
	int* unknow_field_103(void *Data);
	int* unknow_field_104(void *Data);
	int* unknow_field_105(void *Data);
	int* unknow_field_106(void *Data);
	int* unknow_field_107(void *Data);
	int* unknow_field_108(void *Data);
	int* unknow_field_109(void *Data);
	int* unknow_field_110(void *Data);
	int* unknow_field_111(void *Data);
	int* unknow_field_112(void *Data);
	int* unknow_field_113(void *Data);
	int* unknow_field_114(void *Data);
	int* unknow_field_115(void *Data);
	int* unknow_field_116(void *Data);
	int* unknow_field_117(void *Data);
	int* unknow_field_118(void *Data);
	int* unknow_field_119(void *Data);
	int* unknow_field_120(void *Data);
	int* unknow_field_121(void *Data);
	int* unknow_field_122(void *Data);
	int* unknow_field_123(void *Data);
	int* unknow_field_124(void *Data);
	int* unknow_field_125(void *Data);
	int* unknow_field_126(void *Data);
	int* unknow_field_127(void *Data);
	int* unknow_field_128(void *Data);
	int* unknow_field_129(void *Data);
	int* unknow_field_130(void *Data);
	int* unknow_field_131(void *Data);
	int* unknow_field_132(void *Data);
	int* unknow_field_133(void *Data);
	int* unknow_field_134(void *Data);
	int* unknow_field_135(void *Data);
	int* unknow_field_136(void *Data);
	int* unknow_field_137(void *Data);
	int* unknow_field_138(void *Data);
	int* unknow_field_139(void *Data);
	int* unknow_field_140(void *Data);
	int* unknow_field_141(void *Data);
	int* unknow_field_142(void *Data);
	int* unknow_field_143(void *Data);
	int* unknow_field_144(void *Data);
	int* unknow_field_145(void *Data);
	int* unknow_field_146(void *Data);
	int* unknow_field_147(void *Data);
	int* unknow_field_148(void *Data);
	int* unknow_field_149(void *Data);
	int* unknow_field_150(void *Data);
	int* unknow_field_151(void *Data);
	int* unknow_field_152(void *Data);
	int* unknow_field_153(void *Data);
	int* unknow_field_154(void *Data);
	int* unknow_field_155(void *Data);
	int* unknow_field_156(void *Data);
	int* unknow_field_157(void *Data);
	int* unknow_field_158(void *Data);
	int* unknow_field_159(void *Data);
	int* unknow_field_160(void *Data);
	int* unknow_field_161(void *Data);
	int* unknow_field_162(void *Data);
	int* unknow_field_163(void *Data);
	int* unknow_field_164(void *Data);
	int* unknow_field_165(void *Data);
	int* unknow_field_166(void *Data);
	int* unknow_field_167(void *Data);
	int* unknow_field_168(void *Data);
	int* unknow_field_169(void *Data);
	int* unknow_field_170(void *Data);
	int* unknow_field_171(void *Data);
	int* unknow_field_172(void *Data);
	int* unknow_field_173(void *Data);
	int* unknow_field_174(void *Data);
	int* unknow_field_175(void *Data);
	int* unknow_field_176(void *Data);
	int* unknow_field_177(void *Data);
	int* unknow_field_178(void *Data);
	int* unknow_field_179(void *Data);
	int* unknow_field_180(void *Data);
	int* unknow_field_181(void *Data);
	int* unknow_field_182(void *Data);
	int* unknow_field_183(void *Data);
	int* unknow_field_184(void *Data);
	int* unknow_field_185(void *Data);
	int* unknow_field_186(void *Data);
	int* unknow_field_187(void *Data);
	int* unknow_field_188(void *Data);
	int* unknow_field_189(void *Data);
	int* unknow_field_190(void *Data);
	int* unknow_field_191(void *Data);
	int* unknow_field_192(void *Data);
	int* unknow_field_193(void *Data);
	int* unknow_field_194(void *Data);
	int* unknow_field_195(void *Data);
	int* unknow_field_196(void *Data);
	int* unknow_field_197(void *Data);
	int* unknow_field_198(void *Data);
	int* unknow_field_199(void *Data);
	int* unknow_field_200(void *Data);
	int* unknow_field_201(void *Data);
	int* unknow_field_202(void *Data);
	int* unknow_field_203(void *Data);
	int* unknow_field_204(void *Data);
	int* unknow_field_205(void *Data);
	int* unknow_field_206(void *Data);
	int* unknow_field_207(void *Data);
	int* unknow_field_208(void *Data);
	int* unknow_field_209(void *Data);
	int* unknow_field_210(void *Data);
	int* unknow_field_211(void *Data);
	int* unknow_field_212(void *Data);
	int* unknow_field_213(void *Data);
	int* unknow_field_214(void *Data);
	int* unknow_field_215(void *Data);
	int* unknow_field_216(void *Data);
	int* unknow_field_217(void *Data);
	int* unknow_field_218(void *Data);
	int* unknow_field_219(void *Data);
};

extern ItemDropTableEntry aItemDropTableEntry;


// ItemDropTable
//
// { serItemDrops }
// { unknow_field_1 }


class ItemDropTable : public D3Struct {
	public:
	void* New();

	ItemDropTable();
	~ItemDropTable();
	const char* Name();
	
	void* serItemDrops(void *Data);
	void* unknow_field_1(void *Data);
};

extern ItemDropTable aItemDropTable;


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


class HirelingEntry : public D3Struct {
	public:
	void* New();

	HirelingEntry();
	~HirelingEntry();
	const char* Name();
	
	void* Name(void *Data);
	void* Actor(void *Data);
	void* Proxy(void *Data);
	void* Inventory(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
};

extern HirelingEntry aHirelingEntry;


// Hirelings
//
// { serHirelings }
// { unknow_field_1 }


class Hirelings : public D3Struct {
	public:
	void* New();

	Hirelings();
	~Hirelings();
	const char* Name();
	
	void* serHirelings(void *Data);
	void* unknow_field_1(void *Data);
};

extern Hirelings aHirelings;


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


class EliteModifierData : public D3Struct {
	public:
	void* New();

	EliteModifierData();
	~EliteModifierData();
	const char* Name();
	
	void* Name(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
};

extern EliteModifierData aEliteModifierData;


// EliteModifiers
//
// { serMods }
// { unknow_field_1 }


class EliteModifiers : public D3Struct {
	public:
	void* New();

	EliteModifiers();
	~EliteModifiers();
	const char* Name();
	
	void* serMods(void *Data);
	void* unknow_field_1(void *Data);
};

extern EliteModifiers aEliteModifiers;


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


class RecipeEntry : public D3Struct {
	public:
	void* New();

	RecipeEntry();
	~RecipeEntry();
	const char* Name();
	
	void* Name(void *Data);
	void* snoRecipe(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern RecipeEntry aRecipeEntry;


// RecipesTable
//
// { serRecipes }
// { unknow_field_1 }


class RecipesTable : public D3Struct {
	public:
	void* New();

	RecipesTable();
	~RecipesTable();
	const char* Name();
	
	void* serRecipes(void *Data);
	void* unknow_field_1(void *Data);
};

extern RecipesTable aRecipesTable;


// ScriptedAchievementEvent
//
// { Name }


class ScriptedAchievementEvent : public D3Struct {
	public:
	void* New();

	ScriptedAchievementEvent();
	~ScriptedAchievementEvent();
	const char* Name();
	
	void* Name(void *Data);
};

extern ScriptedAchievementEvent aScriptedAchievementEvent;


// ScriptedAchievementEventsTable
//
// { serScriptedAchievementEvents }
// { unknow_field_1 }


class ScriptedAchievementEventsTable : public D3Struct {
	public:
	void* New();

	ScriptedAchievementEventsTable();
	~ScriptedAchievementEventsTable();
	const char* Name();
	
	void* serScriptedAchievementEvents(void *Data);
	void* unknow_field_1(void *Data);
};

extern ScriptedAchievementEventsTable aScriptedAchievementEventsTable;


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


class GameBalance : public D3Struct {
	public:
	void* New();

	GameBalance();
	~GameBalance();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* tItemTypeTable(void *Data);
	void* tItemTable(void *Data);
	void* tExperienceTable(void *Data);
	void* tHelpCodesTable(void *Data);
	void* tMonsterLevelTable(void *Data);
	void* tHeroTable(void *Data);
	void* tMovementStyleTable(void *Data);
	void* tLabelGBIDTable(void *Data);
	void* tAffixTable(void *Data);
	void* tLootDistTable(void *Data);
	void* tRareItemNamesTable(void *Data);
	void* tMonsterAffixesTable(void *Data);
	void* tMonsterNamesTable(void *Data);
	void* tSocketedEffectTable(void *Data);
	void* tItemEnhancementTable(void *Data);
	void* tItemDropTable(void *Data);
	void* tItemLevelModTable(void *Data);
	void* tQualityClassTable(void *Data);
	void* tHirelingTable(void *Data);
	void* tSetItemBonusTable(void *Data);
	void* tEliteModTable(void *Data);
	void* tItemTierTable(void *Data);
	void* tPowerFormulaTable(void *Data);
	void* tRecipeTable(void *Data);
	void* tScriptedAchievementEventsTable(void *Data);
};

extern GameBalance aGameBalance;


// QuestUpdateMessage
//
// { unknow_field_0 }
// { snoQuest }
// { snoLevelArea }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class QuestUpdateMessage : public D3Struct {
	public:
	void* New();

	QuestUpdateMessage();
	~QuestUpdateMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoQuest(void *Data);
	void* snoLevelArea(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
};

extern QuestUpdateMessage aQuestUpdateMessage;


// QuestMeterMessage
//
// { unknow_field_0 }
// { snoQuest }
// { unknow_field_2 }
// { unknow_field_3 }


class QuestMeterMessage : public D3Struct {
	public:
	void* New();

	QuestMeterMessage();
	~QuestMeterMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoQuest(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern QuestMeterMessage aQuestMeterMessage;


// QuestCounterMessage
//
// { unknow_field_0 }
// { snoQuest }
// { snoLevelArea }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


class QuestCounterMessage : public D3Struct {
	public:
	void* New();

	QuestCounterMessage();
	~QuestCounterMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoQuest(void *Data);
	void* snoLevelArea(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
};

extern QuestCounterMessage aQuestCounterMessage;


// SkillKeyMapping
//
// { Power }
// { unknow_field_1 }
// { unknow_field_2 }


class SkillKeyMapping : public D3Struct {
	public:
	void* New();

	SkillKeyMapping();
	~SkillKeyMapping();
	const char* Name();
	
	void* Power(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern SkillKeyMapping aSkillKeyMapping;


// PlayerSavedQuest
//
// { snoQuest }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class PlayerSavedQuest : public D3Struct {
	public:
	void* New();

	PlayerSavedQuest();
	~PlayerSavedQuest();
	const char* Name();
	
	void* snoQuest(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern PlayerSavedQuest aPlayerSavedQuest;


// PlayerQuestHistoryEntry
//
// { snoQuest }
// { unknow_field_1 }


class PlayerQuestHistoryEntry : public D3Struct {
	public:
	void* New();

	PlayerQuestHistoryEntry();
	~PlayerQuestHistoryEntry();
	const char* Name();
	
	void* snoQuest(void *Data);
	void* unknow_field_1(void *Data);
};

extern PlayerQuestHistoryEntry aPlayerQuestHistoryEntry;


// PlayerQuestRewardHistoryEntry
//
// { snoQuest }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerQuestRewardHistoryEntry : public D3Struct {
	public:
	void* New();

	PlayerQuestRewardHistoryEntry();
	~PlayerQuestRewardHistoryEntry();
	const char* Name();
	
	void* snoQuest(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern PlayerQuestRewardHistoryEntry aPlayerQuestRewardHistoryEntry;


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


class HirelingInfo : public D3Struct {
	public:
	void* New();

	HirelingInfo();
	~HirelingInfo();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
};

extern HirelingInfo aHirelingInfo;


// HirelingSavedData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class HirelingSavedData : public D3Struct {
	public:
	void* New();

	HirelingSavedData();
	~HirelingSavedData();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern HirelingSavedData aHirelingSavedData;


// LearnedLore
//
// { unknow_field_0 }
// { m_snoLoreLearned }


class LearnedLore : public D3Struct {
	public:
	void* New();

	LearnedLore();
	~LearnedLore();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* m_snoLoreLearned(void *Data);
};

extern LearnedLore aLearnedLore;


// SavedConversations
//
// { unknow_field_0 }
// { unknow_field_1 }
// { m_snoSavedConv }


class SavedConversations : public D3Struct {
	public:
	void* New();

	SavedConversations();
	~SavedConversations();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* m_snoSavedConv(void *Data);
};

extern SavedConversations aSavedConversations;


// SavePointData
//
// { snoWorld }
// { unknow_field_1 }


class SavePointData : public D3Struct {
	public:
	void* New();

	SavePointData();
	~SavePointData();
	const char* Name();
	
	void* snoWorld(void *Data);
	int* unknow_field_1(void *Data);
};

extern SavePointData aSavePointData;


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


class PlayerSavedData : public D3Struct {
	public:
	void* New();

	PlayerSavedData();
	~PlayerSavedData();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* snoActiveSkills(void *Data);
	void* snoTraits(void *Data);
	void* unknow_field_9(void *Data);
	void* m_SeenTutorials(void *Data);
};

extern PlayerSavedData aPlayerSavedData;


// Hero
//
// { serProtoData }
// { unknow_field_1 }


class Hero : public D3Struct {
	public:
	void* New();

	Hero();
	~Hero();
	const char* Name();
	
	void* serProtoData(void *Data);
	void* unknow_field_1(void *Data);
};

extern Hero aHero;


// Account
//
// { serProtoData }
// { unknow_field_1 }


class Account : public D3Struct {
	public:
	void* New();

	Account();
	~Account();
	const char* Name();
	
	void* serProtoData(void *Data);
	void* unknow_field_1(void *Data);
};

extern Account aAccount;


// Tutorial
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class Tutorial : public D3Struct {
	public:
	void* New();

	Tutorial();
	~Tutorial();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern Tutorial aTutorial;


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


class BossEncounter : public D3Struct {
	public:
	void* New();

	BossEncounter();
	~BossEncounter();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* snoQuestRange(void *Data);
	void* arrWorlds(void *Data);
	void* arrScripts(void *Data);
};

extern BossEncounter aBossEncounter;


// ItemSpecifierData
//
// { gbidItem }
// { unknow_field_1 }
// { gbidAffixes }
// { unknow_field_3 }


class ItemSpecifierData : public D3Struct {
	public:
	void* New();

	ItemSpecifierData();
	~ItemSpecifierData();
	const char* Name();
	
	void* gbidItem(void *Data);
	int* unknow_field_1(void *Data);
	void* gbidAffixes(void *Data);
	int* unknow_field_3(void *Data);
};

extern ItemSpecifierData aItemSpecifierData;


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


class LootDropModifier : public D3Struct {
	public:
	void* New();

	LootDropModifier();
	~LootDropModifier();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* snoSubTreasureClass(void *Data);
	void* unknow_field_2(void *Data);
	void* gbidQualityClass(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* snoCondition(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
};

extern LootDropModifier aLootDropModifier;


// TreasureClass
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { serModifierList }
// { unknow_field_4 }


class TreasureClass : public D3Struct {
	public:
	void* New();

	TreasureClass();
	~TreasureClass();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* serModifierList(void *Data);
	void* unknow_field_4(void *Data);
};

extern TreasureClass aTreasureClass;


// QuestSubcondition
//
// { snoQuest }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class QuestSubcondition : public D3Struct {
	public:
	void* New();

	QuestSubcondition();
	~QuestSubcondition();
	const char* Name();
	
	void* snoQuest(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern QuestSubcondition aQuestSubcondition;


// LoreSubcondition
//
// { snoLore }
// { unknow_field_1 }


class LoreSubcondition : public D3Struct {
	public:
	void* New();

	LoreSubcondition();
	~LoreSubcondition();
	const char* Name();
	
	void* snoLore(void *Data);
	int* unknow_field_1(void *Data);
};

extern LoreSubcondition aLoreSubcondition;


// ItemSubcondition
//
// { gbidItem }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ItemSubcondition : public D3Struct {
	public:
	void* New();

	ItemSubcondition();
	~ItemSubcondition();
	const char* Name();
	
	void* gbidItem(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern ItemSubcondition aItemSubcondition;


// LabelSubcondition
//
// { gbidLabel }
// { unknow_field_1 }


class LabelSubcondition : public D3Struct {
	public:
	void* New();

	LabelSubcondition();
	~LabelSubcondition();
	const char* Name();
	
	void* gbidLabel(void *Data);
	int* unknow_field_1(void *Data);
};

extern LabelSubcondition aLabelSubcondition;


// SkillSubcondition
//
// { snoSkillPower }
// { unknow_field_1 }
// { unknow_field_2 }


class SkillSubcondition : public D3Struct {
	public:
	void* New();

	SkillSubcondition();
	~SkillSubcondition();
	const char* Name();
	
	void* snoSkillPower(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern SkillSubcondition aSkillSubcondition;


// MonsterSubcondition
//
// { snoMonsterActor }


class MonsterSubcondition : public D3Struct {
	public:
	void* New();

	MonsterSubcondition();
	~MonsterSubcondition();
	const char* Name();
	
	void* snoMonsterActor(void *Data);
};

extern MonsterSubcondition aMonsterSubcondition;


// GameFlagSubcondition
//
// { unknow_field_0 }


class GameFlagSubcondition : public D3Struct {
	public:
	void* New();

	GameFlagSubcondition();
	~GameFlagSubcondition();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern GameFlagSubcondition aGameFlagSubcondition;


// PlayerFlagSubcondition
//
// { unknow_field_0 }


class PlayerFlagSubcondition : public D3Struct {
	public:
	void* New();

	PlayerFlagSubcondition();
	~PlayerFlagSubcondition();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern PlayerFlagSubcondition aPlayerFlagSubcondition;


// FollowerSubcondition
//
// { unknow_field_0 }
// { unknow_field_1 }


class FollowerSubcondition : public D3Struct {
	public:
	void* New();

	FollowerSubcondition();
	~FollowerSubcondition();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern FollowerSubcondition aFollowerSubcondition;


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


class Condition : public D3Struct {
	public:
	void* New();

	Condition();
	~Condition();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	void* snoCurrentWorld(void *Data);
	void* snoCurrentLevelArea(void *Data);
	void* snoQuestRange(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
};

extern Condition aCondition;


// Lore
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { snoConversation }
// { unknow_field_5 }


class Lore : public D3Struct {
	public:
	void* New();

	Lore();
	~Lore();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* snoConversation(void *Data);
	int* unknow_field_5(void *Data);
};

extern Lore aLore;


// ResolvedPortalDestination
//
// { snoWorld }
// { unknow_field_1 }
// { snoDestLevelArea }


class ResolvedPortalDestination : public D3Struct {
	public:
	void* New();

	ResolvedPortalDestination();
	~ResolvedPortalDestination();
	const char* Name();
	
	void* snoWorld(void *Data);
	int* unknow_field_1(void *Data);
	void* snoDestLevelArea(void *Data);
};

extern ResolvedPortalDestination aResolvedPortalDestination;


// WaypointInfo
//
// { snoWorld }
// { snoLevelArea }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { snoQuestRange }
// { unknow_field_6 }


class WaypointInfo : public D3Struct {
	public:
	void* New();

	WaypointInfo();
	~WaypointInfo();
	const char* Name();
	
	void* snoWorld(void *Data);
	void* snoLevelArea(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* snoQuestRange(void *Data);
	int* unknow_field_6(void *Data);
};

extern WaypointInfo aWaypointInfo;


// ActQuestInfo
//
// { snoQuest }


class ActQuestInfo : public D3Struct {
	public:
	void* New();

	ActQuestInfo();
	~ActQuestInfo();
	const char* Name();
	
	void* snoQuest(void *Data);
};

extern ActQuestInfo aActQuestInfo;


// ActStartLocOverride
//
// { unknow_field_0 }
// { snoQuestRange }


class ActStartLocOverride : public D3Struct {
	public:
	void* New();

	ActStartLocOverride();
	~ActStartLocOverride();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoQuestRange(void *Data);
};

extern ActStartLocOverride aActStartLocOverride;


// Act
//
// { serQuests }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class Act : public D3Struct {
	public:
	void* New();

	Act();
	~Act();
	const char* Name();
	
	void* serQuests(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern Act aAct;


// TimedEvent
//
// { unknow_field_0 }


class TimedEvent : public D3Struct {
	public:
	void* New();

	TimedEvent();
	~TimedEvent();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern TimedEvent aTimedEvent;


// Recipe
//
// { unknow_field_0 }


class Recipe : public D3Struct {
	public:
	void* New();

	Recipe();
	~Recipe();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern Recipe aRecipe;


// HealthDropInfo
//
// { unknow_field_0 }
// { gbidHealthItem }
// { unknow_field_2 }


class HealthDropInfo : public D3Struct {
	public:
	void* New();

	HealthDropInfo();
	~HealthDropInfo();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* gbidHealthItem(void *Data);
	int* unknow_field_2(void *Data);
};

extern HealthDropInfo aHealthDropInfo;


// SkillDeclaration
//
// { snoPower }
// { unknow_field_1 }


class SkillDeclaration : public D3Struct {
	public:
	void* New();

	SkillDeclaration();
	~SkillDeclaration();
	const char* Name();
	
	void* snoPower(void *Data);
	int* unknow_field_1(void *Data);
};

extern SkillDeclaration aSkillDeclaration;


// MonsterSkillDeclaration
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class MonsterSkillDeclaration : public D3Struct {
	public:
	void* New();

	MonsterSkillDeclaration();
	~MonsterSkillDeclaration();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern MonsterSkillDeclaration aMonsterSkillDeclaration;


// Monster
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class Monster : public D3Struct {
	public:
	void* New();

	Monster();
	~Monster();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern Monster aMonster;


// MonsterMinionSpawnItem
//
// { snoSpawn }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class MonsterMinionSpawnItem : public D3Struct {
	public:
	void* New();

	MonsterMinionSpawnItem();
	~MonsterMinionSpawnItem();
	const char* Name();
	
	void* snoSpawn(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern MonsterMinionSpawnItem aMonsterMinionSpawnItem;


// MonsterMinionSpawnGroup
//
// { unknow_field_0 }
// { unknow_field_1 }
// { serSpawnItems }
// { unknow_field_3 }


class MonsterMinionSpawnGroup : public D3Struct {
	public:
	void* New();

	MonsterMinionSpawnGroup();
	~MonsterMinionSpawnGroup();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* serSpawnItems(void *Data);
	void* unknow_field_3(void *Data);
};

extern MonsterMinionSpawnGroup aMonsterMinionSpawnGroup;


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


class Monster_1 : public D3Struct {
	public:
	void* New();

	Monster_1();
	~Monster_1();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* snoActor(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* snoInventory(void *Data);
	void* snoSecondaryInventory(void *Data);
	void* snoLore(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	int* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* snoSkillKit(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* snoTreasureClassFirstKill(void *Data);
	void* snoTreasureClass(void *Data);
	void* snoTreasureClassRare(void *Data);
	void* snoTreasureClassChampion(void *Data);
	void* snoTreasureClassChampionLight(void *Data);
	void* unknow_field_33(void *Data);
	void* unknow_field_34(void *Data);
	void* unknow_field_35(void *Data);
	void* unknow_field_36(void *Data);
	void* unknow_field_37(void *Data);
	int* unknow_field_38(void *Data);
	void* unknow_field_39(void *Data);
	int* unknow_field_40(void *Data);
	int* unknow_field_41(void *Data);
	void* arAIBehaviors(void *Data);
	void* unknow_field_43(void *Data);
	void* snoSummonActor(void *Data);
	void* unknow_field_45(void *Data);
	void* unknow_field_46(void *Data);
	int* unknow_field_47(void *Data);
	int* unknow_field_48(void *Data);
	int* unknow_field_49(void *Data);
	void* unknow_field_50(void *Data);
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
	int* unknow_field_53(void *Data);
	void* serSpawnGroups(void *Data);
	void* unknow_field_55(void *Data);
};

extern Monster_1 aMonster_1;


// TraitEntry
//
// { snoPower }
// { unknow_field_1 }
// { unknow_field_2 }


class TraitEntry : public D3Struct {
	public:
	void* New();

	TraitEntry();
	~TraitEntry();
	const char* Name();
	
	void* snoPower(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern TraitEntry aTraitEntry;


// ActiveSkillEntry
//
// { snoPower }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ActiveSkillEntry : public D3Struct {
	public:
	void* New();

	ActiveSkillEntry();
	~ActiveSkillEntry();
	const char* Name();
	
	void* snoPower(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern ActiveSkillEntry aActiveSkillEntry;


// SkillKit
//
// { serTraitEntries }
// { unknow_field_1 }
// { serActiveSkillEntries }
// { unknow_field_3 }


class SkillKit : public D3Struct {
	public:
	void* New();

	SkillKit();
	~SkillKit();
	const char* Name();
	
	void* serTraitEntries(void *Data);
	void* unknow_field_1(void *Data);
	void* serActiveSkillEntries(void *Data);
	void* unknow_field_3(void *Data);
};

extern SkillKit aSkillKit;


// QuestTime
//
// { snoQuest }
// { unknow_field_1 }


class QuestTime : public D3Struct {
	public:
	void* New();

	QuestTime();
	~QuestTime();
	const char* Name();
	
	void* snoQuest(void *Data);
	int* unknow_field_1(void *Data);
};

extern QuestTime aQuestTime;


// QuestRange
//
// { unknow_field_0 }
// { unknow_field_1 }


class QuestRange : public D3Struct {
	public:
	void* New();

	QuestRange();
	~QuestRange();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern QuestRange aQuestRange;


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


class QuestStepObjective : public D3Struct {
	public:
	void* New();

	QuestStepObjective();
	~QuestStepObjective();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	void* gbidItemToShow(void *Data);
};

extern QuestStepObjective aQuestStepObjective;


// QuestStepObjectiveSet
//
// { unknow_field_0 }
// { serStepObjectives }
// { unknow_field_2 }


class QuestStepObjectiveSet : public D3Struct {
	public:
	void* New();

	QuestStepObjectiveSet();
	~QuestStepObjectiveSet();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serStepObjectives(void *Data);
	void* unknow_field_2(void *Data);
};

extern QuestStepObjectiveSet aQuestStepObjectiveSet;


// QuestStepBonusObjectiveSet
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { serStepBonusObjectives }
// { unknow_field_6 }


class QuestStepBonusObjectiveSet : public D3Struct {
	public:
	void* New();

	QuestStepBonusObjectiveSet();
	~QuestStepBonusObjectiveSet();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* serStepBonusObjectives(void *Data);
	void* unknow_field_6(void *Data);
};

extern QuestStepBonusObjectiveSet aQuestStepBonusObjectiveSet;


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


class QuestStepFailureCondition : public D3Struct {
	public:
	void* New();

	QuestStepFailureCondition();
	~QuestStepFailureCondition();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
};

extern QuestStepFailureCondition aQuestStepFailureCondition;


// QuestStepFailureConditionSet
//
// { serStepFailureConditions }
// { unknow_field_1 }


class QuestStepFailureConditionSet : public D3Struct {
	public:
	void* New();

	QuestStepFailureConditionSet();
	~QuestStepFailureConditionSet();
	const char* Name();
	
	void* serStepFailureConditions(void *Data);
	void* unknow_field_1(void *Data);
};

extern QuestStepFailureConditionSet aQuestStepFailureConditionSet;


// QuestUnassignedStep
//
// { unknow_field_0 }
// { serStepObjectiveSets }
// { unknow_field_2 }
// { serStepFailureConditionSets }
// { unknow_field_4 }


class QuestUnassignedStep : public D3Struct {
	public:
	void* New();

	QuestUnassignedStep();
	~QuestUnassignedStep();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serStepObjectiveSets(void *Data);
	void* unknow_field_2(void *Data);
	void* serStepFailureConditionSets(void *Data);
	void* unknow_field_4(void *Data);
};

extern QuestUnassignedStep aQuestUnassignedStep;


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


class QuestStep : public D3Struct {
	public:
	void* New();

	QuestStep();
	~QuestStep();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* snoRewardRecipe(void *Data);
	void* snoRewardTreasureClass(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* snoReplayRewardRecipe(void *Data);
	void* snoReplayRewardTreasureClass(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* serStepObjectiveSets(void *Data);
	void* unknow_field_14(void *Data);
	void* serStepBonusObjectiveSets(void *Data);
	void* unknow_field_16(void *Data);
	void* serStepFailureConditionSets(void *Data);
	void* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	void* snoPowerGranted(void *Data);
	void* snoWaypointLevelAreas(void *Data);
};

extern QuestStep aQuestStep;


// QuestCompletionStep
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class QuestCompletionStep : public D3Struct {
	public:
	void* New();

	QuestCompletionStep();
	~QuestCompletionStep();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern QuestCompletionStep aQuestCompletionStep;


// QuestLevelRange
//
// { unknow_field_0 }
// { unknow_field_1 }


class QuestLevelRange : public D3Struct {
	public:
	void* New();

	QuestLevelRange();
	~QuestLevelRange();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern QuestLevelRange aQuestLevelRange;


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


class Quest : public D3Struct {
	public:
	void* New();

	Quest();
	~Quest();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* serQuestSteps(void *Data);
	void* unknow_field_6(void *Data);
	void* serQuestCompletionSteps(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
};

extern Quest aQuest;


// LevelAreaSpawnItem
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class LevelAreaSpawnItem : public D3Struct {
	public:
	void* New();

	LevelAreaSpawnItem();
	~LevelAreaSpawnItem();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
};

extern LevelAreaSpawnItem aLevelAreaSpawnItem;


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


class LevelAreaSpawnGroup : public D3Struct {
	public:
	void* New();

	LevelAreaSpawnGroup();
	~LevelAreaSpawnGroup();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* serSpawnItems(void *Data);
	void* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
};

extern LevelAreaSpawnGroup aLevelAreaSpawnGroup;


// LevelAreaSpawnPopulation
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serSpawnGroups }
// { unknow_field_5 }


class LevelAreaSpawnPopulation : public D3Struct {
	public:
	void* New();

	LevelAreaSpawnPopulation();
	~LevelAreaSpawnPopulation();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serSpawnGroups(void *Data);
	void* unknow_field_5(void *Data);
};

extern LevelAreaSpawnPopulation aLevelAreaSpawnPopulation;


// LevelArea
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoLevelAreaOverrideForGizmoLocs }
// { unknow_field_3 }
// { unknow_field_4 }
// { serSpawnPopulations }
// { unknow_field_6 }


class LevelArea : public D3Struct {
	public:
	void* New();

	LevelArea();
	~LevelArea();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* snoLevelAreaOverrideForGizmoLocs(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* serSpawnPopulations(void *Data);
	void* unknow_field_6(void *Data);
};

extern LevelArea aLevelArea;


// SceneGroupItem
//
// { snoScene }
// { unknow_field_1 }
// { gbidLabel }


class SceneGroupItem : public D3Struct {
	public:
	void* New();

	SceneGroupItem();
	~SceneGroupItem();
	const char* Name();
	
	void* snoScene(void *Data);
	int* unknow_field_1(void *Data);
	void* gbidLabel(void *Data);
};

extern SceneGroupItem aSceneGroupItem;


// SceneGroup
//
// { unknow_field_0 }
// { serScenes }
// { unknow_field_2 }
// { unknow_field_3 }


class SceneGroup : public D3Struct {
	public:
	void* New();

	SceneGroup();
	~SceneGroup();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serScenes(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern SceneGroup aSceneGroup;


// FlagLookup
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class FlagLookup : public D3Struct {
	public:
	void* New();

	FlagLookup();
	~FlagLookup();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern FlagLookup aFlagLookup;


// FlagSet
//
// { serFlagLookups }
// { unknow_field_1 }


class FlagSet : public D3Struct {
	public:
	void* New();

	FlagSet();
	~FlagSet();
	const char* Name();
	
	void* serFlagLookups(void *Data);
	void* unknow_field_1(void *Data);
};

extern FlagSet aFlagSet;


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


class ConversationListEntry : public D3Struct {
	public:
	void* New();

	ConversationListEntry();
	~ConversationListEntry();
	const char* Name();
	
	void* snoConv(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* gbidItem(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* snoQuestCurrent(void *Data);
	int* unknow_field_8(void *Data);
	void* snoQuestAssigned(void *Data);
	void* snoQuestActive(void *Data);
	void* snoQuestComplete(void *Data);
	void* snoQuestRange(void *Data);
	void* snoLevelArea(void *Data);
};

extern ConversationListEntry aConversationListEntry;


// ConversationList
//
// { serConvList }
// { unknow_field_1 }


class ConversationList : public D3Struct {
	public:
	void* New();

	ConversationList();
	~ConversationList();
	const char* Name();
	
	void* serConvList(void *Data);
	void* unknow_field_1(void *Data);
};

extern ConversationList aConversationList;


// ConvLocaleDisplayTimes
//
// { unknow_field_0 }


class ConvLocaleDisplayTimes : public D3Struct {
	public:
	void* New();

	ConvLocaleDisplayTimes();
	~ConvLocaleDisplayTimes();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern ConvLocaleDisplayTimes aConvLocaleDisplayTimes;


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


class ConversationTreeNode : public D3Struct {
	public:
	void* New();

	ConversationTreeNode();
	~ConversationTreeNode();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* serComment(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	void* serTrueNodes(void *Data);
	void* unknow_field_13(void *Data);
	void* serFalseNodes(void *Data);
	void* unknow_field_15(void *Data);
	void* serChildNodes(void *Data);
	void* unknow_field_17(void *Data);
};

extern ConversationTreeNode aConversationTreeNode;


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


class Conversation : public D3Struct {
	public:
	void* New();

	Conversation();
	~Conversation();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* snoQuest(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* snoConvPiggyback(void *Data);
	void* snoConvUnlock(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* snoPrimaryNpc(void *Data);
	void* snoAltNpc1(void *Data);
	void* snoAltNpc2(void *Data);
	void* snoAltNpc3(void *Data);
	void* snoAltNpc4(void *Data);
	int* unknow_field_15(void *Data);
	void* serRootTreeNodes(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	void* serCompiledScript(void *Data);
	void* unknow_field_21(void *Data);
	void* snoBossEncounter(void *Data);
};

extern Conversation aConversation;


// Adventure
//
// { snoSymbolActor }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { snoMarkerSet }


class Adventure : public D3Struct {
	public:
	void* New();

	Adventure();
	~Adventure();
	const char* Name();
	
	void* snoSymbolActor(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* snoMarkerSet(void *Data);
};

extern Adventure aAdventure;


// EncounterSpawnOption
//
// { snoSpawn }
// { unknow_field_1 }
// { unknow_field_2 }


class EncounterSpawnOption : public D3Struct {
	public:
	void* New();

	EncounterSpawnOption();
	~EncounterSpawnOption();
	const char* Name();
	
	void* snoSpawn(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern EncounterSpawnOption aEncounterSpawnOption;


// Encounter
//
// { snoSymbol }
// { serSpawnOptions }
// { unknow_field_2 }


class Encounter : public D3Struct {
	public:
	void* New();

	Encounter();
	~Encounter();
	const char* Name();
	
	void* snoSymbol(void *Data);
	void* serSpawnOptions(void *Data);
	void* unknow_field_2(void *Data);
};

extern Encounter aEncounter;


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


class MarkerSet : public D3Struct {
	public:
	void* New();

	MarkerSet();
	~MarkerSet();
	const char* Name();
	
	void* serMarkers(void *Data);
	void* unknow_field_1(void *Data);
	void* serNoSpawns(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* nLabel(void *Data);
	int* nSpecialIndexCount(void *Data);
	void* serSpecialIndexList(void *Data);
	void* unknow_field_10(void *Data);
};

extern MarkerSet aMarkerSet;


// ScriptFormulaDetails
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ScriptFormulaDetails : public D3Struct {
	public:
	void* New();

	ScriptFormulaDetails();
	~ScriptFormulaDetails();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern ScriptFormulaDetails aScriptFormulaDetails;


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


class Power : public D3Struct {
	public:
	void* New();

	Power();
	~Power();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* serScriptFormulaDetails(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* serCompiledScript(void *Data);
	void* unknow_field_10(void *Data);
	void* snoQuestMetaData(void *Data);
};

extern Power aPower;


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


class StringTableEntry : public D3Struct {
	public:
	void* New();

	StringTableEntry();
	~StringTableEntry();
	const char* Name();
	
	void* serLabel(void *Data);
	void* unknow_field_1(void *Data);
	void* serText(void *Data);
	void* unknow_field_3(void *Data);
	void* serComment(void *Data);
	void* unknow_field_5(void *Data);
	void* serSpeaker(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
};

extern StringTableEntry aStringTableEntry;


// StringList
//
// { serStrings }
// { unknow_field_1 }


class StringList : public D3Struct {
	public:
	void* New();

	StringList();
	~StringList();
	const char* Name();
	
	void* serStrings(void *Data);
	void* unknow_field_1(void *Data);
};

extern StringList aStringList;


// TranslationKey
//
// { unknow_field_0 }
// { unknow_field_1 }


class TranslationKey : public D3Struct {
	public:
	void* New();

	TranslationKey();
	~TranslationKey();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern TranslationKey aTranslationKey;


// RotationKey
//
// { unknow_field_0 }
// { unknow_field_1 }


class RotationKey : public D3Struct {
	public:
	void* New();

	RotationKey();
	~RotationKey();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern RotationKey aRotationKey;


// ScaleKey
//
// { unknow_field_0 }
// { unknow_field_1 }


class ScaleKey : public D3Struct {
	public:
	void* New();

	ScaleKey();
	~ScaleKey();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern ScaleKey aScaleKey;


// TranslationCurve
//
// { unknow_field_0 }
// { serKeys }
// { unknow_field_2 }


class TranslationCurve : public D3Struct {
	public:
	void* New();

	TranslationCurve();
	~TranslationCurve();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serKeys(void *Data);
	void* unknow_field_2(void *Data);
};

extern TranslationCurve aTranslationCurve;


// RotationCurve
//
// { unknow_field_0 }
// { serKeys }
// { unknow_field_2 }


class RotationCurve : public D3Struct {
	public:
	void* New();

	RotationCurve();
	~RotationCurve();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serKeys(void *Data);
	void* unknow_field_2(void *Data);
};

extern RotationCurve aRotationCurve;


// ScaleCurve
//
// { unknow_field_0 }
// { serKeys }
// { unknow_field_2 }


class ScaleCurve : public D3Struct {
	public:
	void* New();

	ScaleCurve();
	~ScaleCurve();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serKeys(void *Data);
	void* unknow_field_2(void *Data);
};

extern ScaleCurve aScaleCurve;


// KeyframedAttachment
//
// { unknow_field_0 }
// { unknow_field_1 }


class KeyframedAttachment : public D3Struct {
	public:
	void* New();

	KeyframedAttachment();
	~KeyframedAttachment();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern KeyframedAttachment aKeyframedAttachment;


// BoneName
//
// { unknow_field_0 }


class BoneName : public D3Struct {
	public:
	void* New();

	BoneName();
	~BoneName();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern BoneName aBoneName;


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


class AnimPermutation : public D3Struct {
	public:
	void* New();

	AnimPermutation();
	~AnimPermutation();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	void* serBoneNames(void *Data);
	void* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	void* serTranslationCurves(void *Data);
	void* unknow_field_19(void *Data);
	void* serRotationCurves(void *Data);
	void* unknow_field_21(void *Data);
	void* serScaleCurves(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* unknow_field_31(void *Data);
	void* unknow_field_32(void *Data);
	int* unknow_field_33(void *Data);
	void* serKeyedAttachments(void *Data);
	void* unknow_field_35(void *Data);
	void* serKeyframePosList(void *Data);
	void* unknow_field_37(void *Data);
	void* serNonlinearOffset(void *Data);
	void* unknow_field_39(void *Data);
	void* unknow_field_40(void *Data);
	void* unknow_field_41(void *Data);
	void* unknow_field_42(void *Data);
	void* unknow_field_43(void *Data);
};

extern AnimPermutation aAnimPermutation;


// Anim
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoAppearance }
// { unknow_field_3 }
// { serPermutations }
// { unknow_field_5 }
// { unknow_field_6 }


class Anim : public D3Struct {
	public:
	void* New();

	Anim();
	~Anim();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* snoAppearance(void *Data);
	int* unknow_field_3(void *Data);
	void* serPermutations(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
};

extern Anim aAnim;


// AnimSetTagMap
//
// { serTagMap }
// { hTagMap }


class AnimSetTagMap : public D3Struct {
	public:
	void* New();

	AnimSetTagMap();
	~AnimSetTagMap();
	const char* Name();
	
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
};

extern AnimSetTagMap aAnimSetTagMap;


// AnimSet
//
// { snoParentAnimSet }
// { serTagMapAnimDefault }
// { hTagMapAnimDefault }
// { unknow_field_3 }


class AnimSet : public D3Struct {
	public:
	void* New();

	AnimSet();
	~AnimSet();
	const char* Name();
	
	void* snoParentAnimSet(void *Data);
	void* serTagMapAnimDefault(void *Data);
	void* hTagMapAnimDefault(void *Data);
	void* unknow_field_3(void *Data);
};

extern AnimSet aAnimSet;


// ActorCollisionFlags
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ActorCollisionFlags : public D3Struct {
	public:
	void* New();

	ActorCollisionFlags();
	~ActorCollisionFlags();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern ActorCollisionFlags aActorCollisionFlags;


// ActorCollisionData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class ActorCollisionData : public D3Struct {
	public:
	void* New();

	ActorCollisionData();
	~ActorCollisionData();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern ActorCollisionData aActorCollisionData;


// WeightedLook
//
// { unknow_field_0 }
// { unknow_field_1 }


class WeightedLook : public D3Struct {
	public:
	void* New();

	WeightedLook();
	~WeightedLook();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern WeightedLook aWeightedLook;


// InventoryImages
//
// { unknow_field_0 }
// { unknow_field_1 }


class InventoryImages : public D3Struct {
	public:
	void* New();

	InventoryImages();
	~InventoryImages();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern InventoryImages aInventoryImages;


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


class Actor : public D3Struct {
	public:
	void* New();

	Actor();
	~Actor();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* snoAppearance(void *Data);
	void* snoPhysMesh(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* aabbBounds(void *Data);
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
	void* snoAnimSet(void *Data);
	void* snoMonster(void *Data);
	int* unknow_field_11(void *Data);
	void* serMsgTriggeredEvents(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* snoPhysics(void *Data);
	int* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	int* unknow_field_24(void *Data);
	void* serVOCastingNotes(void *Data);
	void* unknow_field_26(void *Data);
	void* serVORole(void *Data);
	void* unknow_field_28(void *Data);
};

extern Actor aActor;


// PostFXParams
//
// { unknow_field_0 }
// { unknow_field_1 }


class PostFXParams : public D3Struct {
	public:
	void* New();

	PostFXParams();
	~PostFXParams();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern PostFXParams aPostFXParams;


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


class Environment : public D3Struct {
	public:
	void* New();

	Environment();
	~Environment();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* snoMusic(void *Data);
	void* snoCombatMusic(void *Data);
	void* snoAmbient(void *Data);
	void* snoReverb(void *Data);
	void* snoWeather(void *Data);
	void* snoIrradianceTex(void *Data);
	void* snoIrradianceTexDead(void *Data);
};

extern Environment aEnvironment;


// SceneCachedValues
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


class SceneCachedValues : public D3Struct {
	public:
	void* New();

	SceneCachedValues();
	~SceneCachedValues();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
};

extern SceneCachedValues aSceneCachedValues;


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


class SceneSpecification : public D3Struct {
	public:
	void* New();

	SceneSpecification();
	~SceneSpecification();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* arSnoLevelAreas(void *Data);
	void* snoPrevWorld(void *Data);
	int* unknow_field_4(void *Data);
	void* snoPrevLevelArea(void *Data);
	void* snoNextWorld(void *Data);
	int* unknow_field_7(void *Data);
	void* snoNextLevelArea(void *Data);
	void* snoMusic(void *Data);
	void* snoCombatMusic(void *Data);
	void* snoAmbient(void *Data);
	void* snoReverb(void *Data);
	void* snoWeather(void *Data);
	void* snoPresetWorld(void *Data);
	int* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	void* tCachedValues(void *Data);
};

extern SceneSpecification aSceneSpecification;


// SceneChunk
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class SceneChunk : public D3Struct {
	public:
	void* New();

	SceneChunk();
	~SceneChunk();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern SceneChunk aSceneChunk;


// SceneParams
//
// { serSceneChunks }
// { unknow_field_1 }
// { unknow_field_2 }


class SceneParams : public D3Struct {
	public:
	void* New();

	SceneParams();
	~SceneParams();
	const char* Name();
	
	void* serSceneChunks(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern SceneParams aSceneParams;


// CustomTileCell
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { snoScene }
// { unknow_field_4 }
// { unknow_field_5 }


class CustomTileCell : public D3Struct {
	public:
	void* New();

	CustomTileCell();
	~CustomTileCell();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* snoScene(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
};

extern CustomTileCell aCustomTileCell;


// CustomTileInfo
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serTiles }
// { unknow_field_5 }


class CustomTileInfo : public D3Struct {
	public:
	void* New();

	CustomTileInfo();
	~CustomTileInfo();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* serTiles(void *Data);
	void* unknow_field_5(void *Data);
};

extern CustomTileInfo aCustomTileInfo;


// TileInfo
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { snoScene }
// { serTileTagMap }
// { hTileTagMap }
// { unknow_field_6 }


class TileInfo : public D3Struct {
	public:
	void* New();

	TileInfo();
	~TileInfo();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* snoScene(void *Data);
	void* serTileTagMap(void *Data);
	void* hTileTagMap(void *Data);
	void* unknow_field_6(void *Data);
};

extern TileInfo aTileInfo;


// DRLGCommand
//
// { unknow_field_0 }
// { unknow_field_1 }
// { serCommandTagMap }
// { hCommandTagMap }


class DRLGCommand : public D3Struct {
	public:
	void* New();

	DRLGCommand();
	~DRLGCommand();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* serCommandTagMap(void *Data);
	void* hCommandTagMap(void *Data);
};

extern DRLGCommand aDRLGCommand;


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


class DRLGParams : public D3Struct {
	public:
	void* New();

	DRLGParams();
	~DRLGParams();
	const char* Name();
	
	void* serTiles(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* serCommands(void *Data);
	void* unknow_field_4(void *Data);
	void* serParentIndices(void *Data);
	void* unknow_field_6(void *Data);
	void* serDRLGTagMap(void *Data);
	void* hDRLGTagMap(void *Data);
};

extern DRLGParams aDRLGParams;


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


class Worlds : public D3Struct {
	public:
	void* New();

	Worlds();
	~Worlds();
	const char* Name();
	
	void* serDLRGParams(void *Data);
	void* unknow_field_1(void *Data);
	void* serSceneParams(void *Data);
	void* unknow_field_3(void *Data);
	void* serMarkerSets(void *Data);
	void* arMarkerSets(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* arNavMeshFuncs(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* snoScript(void *Data);
	int* unknow_field_14(void *Data);
};

extern Worlds aWorlds;


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


class RevealSceneMessage : public D3Struct {
	public:
	void* New();

	RevealSceneMessage();
	~RevealSceneMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* snoScene(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* snoSceneGroup(void *Data);
	void* arAppliedLabels(void *Data);
};

extern RevealSceneMessage aRevealSceneMessage;


// DestroySceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class DestroySceneMessage : public D3Struct {
	public:
	void* New();

	DestroySceneMessage();
	~DestroySceneMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern DestroySceneMessage aDestroySceneMessage;


// SwapSceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class SwapSceneMessage : public D3Struct {
	public:
	void* New();

	SwapSceneMessage();
	~SwapSceneMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern SwapSceneMessage aSwapSceneMessage;


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


class NavMeshDef : public D3Struct {
	public:
	void* New();

	NavMeshDef();
	~NavMeshDef();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* serNavMeshArraySquares(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern NavMeshDef aNavMeshDef;


// NavCell
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class NavCell : public D3Struct {
	public:
	void* New();

	NavCell();
	~NavCell();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern NavCell aNavCell;


// NavGridSquare
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class NavGridSquare : public D3Struct {
	public:
	void* New();

	NavGridSquare();
	~NavGridSquare();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern NavGridSquare aNavGridSquare;


// NavCellLookup
//
// { unknow_field_0 }
// { unknow_field_1 }


class NavCellLookup : public D3Struct {
	public:
	void* New();

	NavCellLookup();
	~NavCellLookup();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern NavCellLookup aNavCellLookup;


// NavCellBorderData
//
// { unknow_field_0 }
// { unknow_field_1 }


class NavCellBorderData : public D3Struct {
	public:
	void* New();

	NavCellBorderData();
	~NavCellBorderData();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern NavCellBorderData aNavCellBorderData;


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


class NavZoneDefinition : public D3Struct {
	public:
	void* New();

	NavZoneDefinition();
	~NavZoneDefinition();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serNavCells(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serNavCellNeighbors(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* serGridSquares(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* serCellLookups(void *Data);
	void* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	void* serBorderData(void *Data);
	void* unknow_field_17(void *Data);
};

extern NavZoneDefinition aNavZoneDefinition;


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


class Scene : public D3Struct {
	public:
	void* New();

	Scene();
	~Scene();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* snoAppearance(void *Data);
	void* snoPhysMesh(void *Data);
	void* aabbBounds(void *Data);
	void* aabbMarkerSetBounds(void *Data);
	void* unknow_field_5(void *Data);
	void* serExclusions(void *Data);
	void* arExclusions(void *Data);
	void* serInclusions(void *Data);
	void* arInclusions(void *Data);
	void* serMarkerSets(void *Data);
	void* arMarkerSets(void *Data);
	void* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	void* serMsgTriggeredEvents(void *Data);
	void* unknow_field_15(void *Data);
	void* tNavZoneDef(void *Data);
};

extern Scene aScene;


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


class Observer : public D3Struct {
	public:
	void* New();

	Observer();
	~Observer();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
};

extern Observer aObserver;


// ActorGroup
//
// { uHash }
// { unknow_field_1 }


class ActorGroup : public D3Struct {
	public:
	void* New();

	ActorGroup();
	~ActorGroup();
	const char* Name();
	
	int* uHash(void *Data);
	void* unknow_field_1(void *Data);
};

extern ActorGroup aActorGroup;


// StartLocationName
//
// { unknow_field_0 }
// { unknow_field_1 }


class StartLocationName : public D3Struct {
	public:
	void* New();

	StartLocationName();
	~StartLocationName();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern StartLocationName aStartLocationName;


// GlobalScriptVariable
//
// { uHash }
// { unknow_field_1 }
// { unknow_field_2 }


class GlobalScriptVariable : public D3Struct {
	public:
	void* New();

	GlobalScriptVariable();
	~GlobalScriptVariable();
	const char* Name();
	
	int* uHash(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern GlobalScriptVariable aGlobalScriptVariable;


// DifficultyTuningParams
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


class DifficultyTuningParams : public D3Struct {
	public:
	void* New();

	DifficultyTuningParams();
	~DifficultyTuningParams();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
};

extern DifficultyTuningParams aDifficultyTuningParams;


// BannerTexturePair
//
// { snoTexture }
// { unknow_field_1 }


class BannerTexturePair : public D3Struct {
	public:
	void* New();

	BannerTexturePair();
	~BannerTexturePair();
	const char* Name();
	
	void* snoTexture(void *Data);
	int* unknow_field_1(void *Data);
};

extern BannerTexturePair aBannerTexturePair;


// BannerColorSet
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class BannerColorSet : public D3Struct {
	public:
	void* New();

	BannerColorSet();
	~BannerColorSet();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern BannerColorSet aBannerColorSet;


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


class BannerParams : public D3Struct {
	public:
	void* New();

	BannerParams();
	~BannerParams();
	const char* Name();
	
	void* serTexBackgrounds(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* serTexPatterns(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* serTexMainSigils(void *Data);
	void* unknow_field_7(void *Data);
	void* serTexVariantSigils(void *Data);
	void* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	void* serTexSigilAccents(void *Data);
	void* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	void* serColorSets(void *Data);
	void* unknow_field_15(void *Data);
	void* serActorBases(void *Data);
	void* arActorBases(void *Data);
	void* serActorCaps(void *Data);
	void* arActorCaps(void *Data);
	void* serActorPoles(void *Data);
	void* arActorPoles(void *Data);
	void* serActorRibbons(void *Data);
	void* arActorRibbons(void *Data);
};

extern BannerParams aBannerParams;


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


class Globals : public D3Struct {
	public:
	void* New();

	Globals();
	~Globals();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	int* unknow_field_23(void *Data);
	int* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* unknow_field_31(void *Data);
	int* unknow_field_32(void *Data);
	void* unknow_field_33(void *Data);
	void* unknow_field_34(void *Data);
	void* serActorGroups(void *Data);
	void* unknow_field_36(void *Data);
	int* unknow_field_37(void *Data);
	void* serStartLocationNames(void *Data);
	void* unknow_field_39(void *Data);
	void* serScriptGlobalVars(void *Data);
	void* unknow_field_41(void *Data);
	void* unknow_field_42(void *Data);
	int* unknow_field_43(void *Data);
	int* unknow_field_44(void *Data);
	int* unknow_field_45(void *Data);
	int* unknow_field_46(void *Data);
	int* unknow_field_47(void *Data);
	void* unknow_field_48(void *Data);
	void* unknow_field_49(void *Data);
	void* unknow_field_50(void *Data);
	void* unknow_field_51(void *Data);
	void* unknow_field_52(void *Data);
};

extern Globals aGlobals;


// dmMeshNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class dmMeshNode : public D3Struct {
	public:
	void* New();

	dmMeshNode();
	~dmMeshNode();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern dmMeshNode admMeshNode;


// dmMeshTriangle
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


class dmMeshTriangle : public D3Struct {
	public:
	void* New();

	dmMeshTriangle();
	~dmMeshTriangle();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
};

extern dmMeshTriangle admMeshTriangle;


// dmMeshEdge
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class dmMeshEdge : public D3Struct {
	public:
	void* New();

	dmMeshEdge();
	~dmMeshEdge();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern dmMeshEdge admMeshEdge;


// dmFloat3
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class dmFloat3 : public D3Struct {
	public:
	void* New();

	dmFloat3();
	~dmFloat3();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern dmFloat3 admFloat3;


// dmPlane
//
// { unknow_field_0 }
// { unknow_field_1 }


class dmPlane : public D3Struct {
	public:
	void* New();

	dmPlane();
	~dmPlane();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern dmPlane admPlane;


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


class CollisionMesh : public D3Struct {
	public:
	void* New();

	CollisionMesh();
	~CollisionMesh();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serDominoVertices(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* serDominoTriangles(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* serDominoEdges(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* serDominoNodes(void *Data);
	void* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
};

extern CollisionMesh aCollisionMesh;


// PhysMesh
//
// { unknow_field_0 }
// { nCollisionMeshCount }
// { serCollisionMeshes }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


class PhysMesh : public D3Struct {
	public:
	void* New();

	PhysMesh();
	~PhysMesh();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* nCollisionMeshCount(void *Data);
	void* serCollisionMeshes(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
};

extern PhysMesh aPhysMesh;


// MarkerLink
//
// { unknow_field_0 }
// { unknow_field_1 }


class MarkerLink : public D3Struct {
	public:
	void* New();

	MarkerLink();
	~MarkerLink();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern MarkerLink aMarkerLink;


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


class Marker : public D3Struct {
	public:
	void* New();

	Marker();
	~Marker();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
	int* unknow_field_6(void *Data);
	void* serMarkerLinks(void *Data);
	void* unknow_field_8(void *Data);
};

extern Marker aMarker;


// GameErrorData
//
// { unknow_field_0 }
// { unknow_field_1 }


class GameErrorData : public D3Struct {
	public:
	void* New();

	GameErrorData();
	~GameErrorData();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern GameErrorData aGameErrorData;


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


class NewPlayerMessage : public D3Struct {
	public:
	void* New();

	NewPlayerMessage();
	~NewPlayerMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* snoActorPortrait(void *Data);
	int* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
};

extern NewPlayerMessage aNewPlayerMessage;


// HeroStateData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { tQuestRewardHistory }


class HeroStateData : public D3Struct {
	public:
	void* New();

	HeroStateData();
	~HeroStateData();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* tQuestRewardHistory(void *Data);
};

extern HeroStateData aHeroStateData;


// HeroStateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class HeroStateMessage : public D3Struct {
	public:
	void* New();

	HeroStateMessage();
	~HeroStateMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern HeroStateMessage aHeroStateMessage;


// LogoutContextMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class LogoutContextMessage : public D3Struct {
	public:
	void* New();

	LogoutContextMessage();
	~LogoutContextMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern LogoutContextMessage aLogoutContextMessage;


// RareMonsterNamesMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class RareMonsterNamesMessage : public D3Struct {
	public:
	void* New();

	RareMonsterNamesMessage();
	~RareMonsterNamesMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern RareMonsterNamesMessage aRareMonsterNamesMessage;


// RareItemNameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class RareItemNameMessage : public D3Struct {
	public:
	void* New();

	RareItemNameMessage();
	~RareItemNameMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern RareItemNameMessage aRareItemNameMessage;


// ACDCollFlagsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ACDCollFlagsMessage : public D3Struct {
	public:
	void* New();

	ACDCollFlagsMessage();
	~ACDCollFlagsMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern ACDCollFlagsMessage aACDCollFlagsMessage;


// GoldModifiedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class GoldModifiedMessage : public D3Struct {
	public:
	void* New();

	GoldModifiedMessage();
	~GoldModifiedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern GoldModifiedMessage aGoldModifiedMessage;


// SNOName
//
// { unknow_field_0 }
// { unknow_field_1 }


class SNOName : public D3Struct {
	public:
	void* New();

	SNOName();
	~SNOName();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern SNOName aSNOName;


// PlayAnimationMessageSpec
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class PlayAnimationMessageSpec : public D3Struct {
	public:
	void* New();

	PlayAnimationMessageSpec();
	~PlayAnimationMessageSpec();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern PlayAnimationMessageSpec aPlayAnimationMessageSpec;


// PlayAnimationMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { tAnim }


class PlayAnimationMessage : public D3Struct {
	public:
	void* New();

	PlayAnimationMessage();
	~PlayAnimationMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* tAnim(void *Data);
};

extern PlayAnimationMessage aPlayAnimationMessage;


// SetIdleAnimationMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class SetIdleAnimationMessage : public D3Struct {
	public:
	void* New();

	SetIdleAnimationMessage();
	~SetIdleAnimationMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern SetIdleAnimationMessage aSetIdleAnimationMessage;


// RequiredMessageHeader
//
// { unknow_field_0 }


class RequiredMessageHeader : public D3Struct {
	public:
	void* New();

	RequiredMessageHeader();
	~RequiredMessageHeader();
	const char* Name();
	
	int* unknow_field_0(void *Data);
};

extern RequiredMessageHeader aRequiredMessageHeader;


// SimpleMessage
//
// { unknow_field_0 }


class SimpleMessage : public D3Struct {
	public:
	void* New();

	SimpleMessage();
	~SimpleMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern SimpleMessage aSimpleMessage;


// GenericBlobMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class GenericBlobMessage : public D3Struct {
	public:
	void* New();

	GenericBlobMessage();
	~GenericBlobMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern GenericBlobMessage aGenericBlobMessage;


// BoolDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class BoolDataMessage : public D3Struct {
	public:
	void* New();

	BoolDataMessage();
	~BoolDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern BoolDataMessage aBoolDataMessage;


// ByteDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class ByteDataMessage : public D3Struct {
	public:
	void* New();

	ByteDataMessage();
	~ByteDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern ByteDataMessage aByteDataMessage;


// PlayerIndexMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class PlayerIndexMessage : public D3Struct {
	public:
	void* New();

	PlayerIndexMessage();
	~PlayerIndexMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern PlayerIndexMessage aPlayerIndexMessage;


// DataIDDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class DataIDDataMessage : public D3Struct {
	public:
	void* New();

	DataIDDataMessage();
	~DataIDDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern DataIDDataMessage aDataIDDataMessage;


// DWordDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class DWordDataMessage : public D3Struct {
	public:
	void* New();

	DWordDataMessage();
	~DWordDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern DWordDataMessage aDWordDataMessage;


// NetworkAddressMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class NetworkAddressMessage : public D3Struct {
	public:
	void* New();

	NetworkAddressMessage();
	~NetworkAddressMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern NetworkAddressMessage aNetworkAddressMessage;


// IntDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class IntDataMessage : public D3Struct {
	public:
	void* New();

	IntDataMessage();
	~IntDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern IntDataMessage aIntDataMessage;


// Int64DataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class Int64DataMessage : public D3Struct {
	public:
	void* New();

	Int64DataMessage();
	~Int64DataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Int64DataMessage aInt64DataMessage;


// UInt64DataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class UInt64DataMessage : public D3Struct {
	public:
	void* New();

	UInt64DataMessage();
	~UInt64DataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern UInt64DataMessage aUInt64DataMessage;


// FloatDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class FloatDataMessage : public D3Struct {
	public:
	void* New();

	FloatDataMessage();
	~FloatDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern FloatDataMessage aFloatDataMessage;


// SNODataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class SNODataMessage : public D3Struct {
	public:
	void* New();

	SNODataMessage();
	~SNODataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern SNODataMessage aSNODataMessage;


// SNONameDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class SNONameDataMessage : public D3Struct {
	public:
	void* New();

	SNONameDataMessage();
	~SNONameDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern SNONameDataMessage aSNONameDataMessage;


// GBIDDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class GBIDDataMessage : public D3Struct {
	public:
	void* New();

	GBIDDataMessage();
	~GBIDDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern GBIDDataMessage aGBIDDataMessage;


// DisplayGameTextMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class DisplayGameTextMessage : public D3Struct {
	public:
	void* New();

	DisplayGameTextMessage();
	~DisplayGameTextMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern DisplayGameTextMessage aDisplayGameTextMessage;


// BroadcastTextMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class BroadcastTextMessage : public D3Struct {
	public:
	void* New();

	BroadcastTextMessage();
	~BroadcastTextMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern BroadcastTextMessage aBroadcastTextMessage;


// ANNDataMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class ANNDataMessage : public D3Struct {
	public:
	void* New();

	ANNDataMessage();
	~ANNDataMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern ANNDataMessage aANNDataMessage;


// JoinLANGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class JoinLANGameMessage : public D3Struct {
	public:
	void* New();

	JoinLANGameMessage();
	~JoinLANGameMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern JoinLANGameMessage aJoinLANGameMessage;


// QuitGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class QuitGameMessage : public D3Struct {
	public:
	void* New();

	QuitGameMessage();
	~QuitGameMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern QuitGameMessage aQuitGameMessage;


// ConnectionEstablishedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ConnectionEstablishedMessage : public D3Struct {
	public:
	void* New();

	ConnectionEstablishedMessage();
	~ConnectionEstablishedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern ConnectionEstablishedMessage aConnectionEstablishedMessage;


// GameSetupMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class GameSetupMessage : public D3Struct {
	public:
	void* New();

	GameSetupMessage();
	~GameSetupMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern GameSetupMessage aGameSetupMessage;


// EnterWorldMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class EnterWorldMessage : public D3Struct {
	public:
	void* New();

	EnterWorldMessage();
	~EnterWorldMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern EnterWorldMessage aEnterWorldMessage;


// RevealWorldMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class RevealWorldMessage : public D3Struct {
	public:
	void* New();

	RevealWorldMessage();
	~RevealWorldMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern RevealWorldMessage aRevealWorldMessage;


// WorldLocationMessageData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class WorldLocationMessageData : public D3Struct {
	public:
	void* New();

	WorldLocationMessageData();
	~WorldLocationMessageData();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern WorldLocationMessageData aWorldLocationMessageData;


// InventoryLocationMessageData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class InventoryLocationMessageData : public D3Struct {
	public:
	void* New();

	InventoryLocationMessageData();
	~InventoryLocationMessageData();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern InventoryLocationMessageData aInventoryLocationMessageData;


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


class ACDEnterKnownMessage : public D3Struct {
	public:
	void* New();

	ACDEnterKnownMessage();
	~ACDEnterKnownMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
};

extern ACDEnterKnownMessage aACDEnterKnownMessage;


// PlayerEnterKnownMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerEnterKnownMessage : public D3Struct {
	public:
	void* New();

	PlayerEnterKnownMessage();
	~PlayerEnterKnownMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern PlayerEnterKnownMessage aPlayerEnterKnownMessage;


// ACDInventoryPositionMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ACDInventoryPositionMessage : public D3Struct {
	public:
	void* New();

	ACDInventoryPositionMessage();
	~ACDInventoryPositionMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern ACDInventoryPositionMessage aACDInventoryPositionMessage;


// ACDInventoryUpdateActorSNO
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ACDInventoryUpdateActorSNO : public D3Struct {
	public:
	void* New();

	ACDInventoryUpdateActorSNO();
	~ACDInventoryUpdateActorSNO();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern ACDInventoryUpdateActorSNO aACDInventoryUpdateActorSNO;


// ACDWorldPositionMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ACDWorldPositionMessage : public D3Struct {
	public:
	void* New();

	ACDWorldPositionMessage();
	~ACDWorldPositionMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern ACDWorldPositionMessage aACDWorldPositionMessage;


// ACDShearMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ACDShearMessage : public D3Struct {
	public:
	void* New();

	ACDShearMessage();
	~ACDShearMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern ACDShearMessage aACDShearMessage;


// ACDGroupMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ACDGroupMessage : public D3Struct {
	public:
	void* New();

	ACDGroupMessage();
	~ACDGroupMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern ACDGroupMessage aACDGroupMessage;


// ACDChangeActorMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ACDChangeActorMessage : public D3Struct {
	public:
	void* New();

	ACDChangeActorMessage();
	~ACDChangeActorMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern ACDChangeActorMessage aACDChangeActorMessage;


// ACDPickupFailedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ACDPickupFailedMessage : public D3Struct {
	public:
	void* New();

	ACDPickupFailedMessage();
	~ACDPickupFailedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern ACDPickupFailedMessage aACDPickupFailedMessage;


// AffixMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { aAffixGBIDs }


class AffixMessage : public D3Struct {
	public:
	void* New();

	AffixMessage();
	~AffixMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* aAffixGBIDs(void *Data);
};

extern AffixMessage aAffixMessage;


// LearnedSkillMessage
//
// { unknow_field_0 }
// { aSkillSNOs }


class LearnedSkillMessage : public D3Struct {
	public:
	void* New();

	LearnedSkillMessage();
	~LearnedSkillMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* aSkillSNOs(void *Data);
};

extern LearnedSkillMessage aLearnedSkillMessage;


// AttributeCreateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class AttributeCreateMessage : public D3Struct {
	public:
	void* New();

	AttributeCreateMessage();
	~AttributeCreateMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern AttributeCreateMessage aAttributeCreateMessage;


// AttributeDeleteMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AttributeDeleteMessage : public D3Struct {
	public:
	void* New();

	AttributeDeleteMessage();
	~AttributeDeleteMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern AttributeDeleteMessage aAttributeDeleteMessage;


// ProjectileStickMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ProjectileStickMessage : public D3Struct {
	public:
	void* New();

	ProjectileStickMessage();
	~ProjectileStickMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern ProjectileStickMessage aProjectileStickMessage;


// PlayerActorSetInitialMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerActorSetInitialMessage : public D3Struct {
	public:
	void* New();

	PlayerActorSetInitialMessage();
	~PlayerActorSetInitialMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern PlayerActorSetInitialMessage aPlayerActorSetInitialMessage;


// AnimPreplayData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AnimPreplayData : public D3Struct {
	public:
	void* New();

	AnimPreplayData();
	~AnimPreplayData();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern AnimPreplayData aAnimPreplayData;


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


class TargetMessage : public D3Struct {
	public:
	void* New();

	TargetMessage();
	~TargetMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* snoPower(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern TargetMessage aTargetMessage;


// SecondaryAnimationPowerMessage
//
// { unknow_field_0 }
// { snoPower }
// { unknow_field_2 }


class SecondaryAnimationPowerMessage : public D3Struct {
	public:
	void* New();

	SecondaryAnimationPowerMessage();
	~SecondaryAnimationPowerMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoPower(void *Data);
	void* unknow_field_2(void *Data);
};

extern SecondaryAnimationPowerMessage aSecondaryAnimationPowerMessage;


// TryConsoleCommand
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class TryConsoleCommand : public D3Struct {
	public:
	void* New();

	TryConsoleCommand();
	~TryConsoleCommand();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern TryConsoleCommand aTryConsoleCommand;


// TryChatMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class TryChatMessage : public D3Struct {
	public:
	void* New();

	TryChatMessage();
	~TryChatMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern TryChatMessage aTryChatMessage;


// ChatMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ChatMessage : public D3Struct {
	public:
	void* New();

	ChatMessage();
	~ChatMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern ChatMessage aChatMessage;


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


class VictimMessage : public D3Struct {
	public:
	void* New();

	VictimMessage();
	~VictimMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* snoKillerMonster(void *Data);
	void* snoKillerActor(void *Data);
	int* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* snoPowerDmgSource(void *Data);
};

extern VictimMessage aVictimMessage;


// KillCountMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class KillCountMessage : public D3Struct {
	public:
	void* New();

	KillCountMessage();
	~KillCountMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern KillCountMessage aKillCountMessage;


// InvLoc
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class InvLoc : public D3Struct {
	public:
	void* New();

	InvLoc();
	~InvLoc();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern InvLoc aInvLoc;


// InventoryRequestMoveMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class InventoryRequestMoveMessage : public D3Struct {
	public:
	void* New();

	InventoryRequestMoveMessage();
	~InventoryRequestMoveMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern InventoryRequestMoveMessage aInventoryRequestMoveMessage;


// InventorySplitStackMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class InventorySplitStackMessage : public D3Struct {
	public:
	void* New();

	InventorySplitStackMessage();
	~InventorySplitStackMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern InventorySplitStackMessage aInventorySplitStackMessage;


// InventoryStackTransferMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class InventoryStackTransferMessage : public D3Struct {
	public:
	void* New();

	InventoryStackTransferMessage();
	~InventoryStackTransferMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern InventoryStackTransferMessage aInventoryStackTransferMessage;


// InventoryRequestUseMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class InventoryRequestUseMessage : public D3Struct {
	public:
	void* New();

	InventoryRequestUseMessage();
	~InventoryRequestUseMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern InventoryRequestUseMessage aInventoryRequestUseMessage;


// InventoryRequestSocketMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class InventoryRequestSocketMessage : public D3Struct {
	public:
	void* New();

	InventoryRequestSocketMessage();
	~InventoryRequestSocketMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern InventoryRequestSocketMessage aInventoryRequestSocketMessage;


// SocketSpellMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class SocketSpellMessage : public D3Struct {
	public:
	void* New();

	SocketSpellMessage();
	~SocketSpellMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern SocketSpellMessage aSocketSpellMessage;


// HelperDetachMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class HelperDetachMessage : public D3Struct {
	public:
	void* New();

	HelperDetachMessage();
	~HelperDetachMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern HelperDetachMessage aHelperDetachMessage;


// PetMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class PetMessage : public D3Struct {
	public:
	void* New();

	PetMessage();
	~PetMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern PetMessage aPetMessage;


// FlippyMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class FlippyMessage : public D3Struct {
	public:
	void* New();

	FlippyMessage();
	~FlippyMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern FlippyMessage aFlippyMessage;


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


class ComplexEffectAddMessage : public D3Struct {
	public:
	void* New();

	ComplexEffectAddMessage();
	~ComplexEffectAddMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
};

extern ComplexEffectAddMessage aComplexEffectAddMessage;


// PlayerLevel
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerLevel : public D3Struct {
	public:
	void* New();

	PlayerLevel();
	~PlayerLevel();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern PlayerLevel aPlayerLevel;


// AimTargetMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class AimTargetMessage : public D3Struct {
	public:
	void* New();

	AimTargetMessage();
	~AimTargetMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern AimTargetMessage aAimTargetMessage;


// ACDChangeGBHandleMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ACDChangeGBHandleMessage : public D3Struct {
	public:
	void* New();

	ACDChangeGBHandleMessage();
	~ACDChangeGBHandleMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern ACDChangeGBHandleMessage aACDChangeGBHandleMessage;


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


class TrickleMessage : public D3Struct {
	public:
	void* New();

	TrickleMessage();
	~TrickleMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
};

extern TrickleMessage aTrickleMessage;


// PlayerInteractMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerInteractMessage : public D3Struct {
	public:
	void* New();

	PlayerInteractMessage();
	~PlayerInteractMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern PlayerInteractMessage aPlayerInteractMessage;


// PlayerIntValMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerIntValMessage : public D3Struct {
	public:
	void* New();

	PlayerIntValMessage();
	~PlayerIntValMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern PlayerIntValMessage aPlayerIntValMessage;


// UIElementMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class UIElementMessage : public D3Struct {
	public:
	void* New();

	UIElementMessage();
	~UIElementMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern UIElementMessage aUIElementMessage;


// PlasmaAttachMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlasmaAttachMessage : public D3Struct {
	public:
	void* New();

	PlasmaAttachMessage();
	~PlasmaAttachMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern PlasmaAttachMessage aPlasmaAttachMessage;


// RitualTetherEffectMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class RitualTetherEffectMessage : public D3Struct {
	public:
	void* New();

	RitualTetherEffectMessage();
	~RitualTetherEffectMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern RitualTetherEffectMessage aRitualTetherEffectMessage;


// HirelingInfoUpdateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class HirelingInfoUpdateMessage : public D3Struct {
	public:
	void* New();

	HirelingInfoUpdateMessage();
	~HirelingInfoUpdateMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern HirelingInfoUpdateMessage aHirelingInfoUpdateMessage;


// RevealTeamMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class RevealTeamMessage : public D3Struct {
	public:
	void* New();

	RevealTeamMessage();
	~RevealTeamMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern RevealTeamMessage aRevealTeamMessage;


// DeathFadeTimeMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class DeathFadeTimeMessage : public D3Struct {
	public:
	void* New();

	DeathFadeTimeMessage();
	~DeathFadeTimeMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern DeathFadeTimeMessage aDeathFadeTimeMessage;


// MapRevealSceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoScene }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class MapRevealSceneMessage : public D3Struct {
	public:
	void* New();

	MapRevealSceneMessage();
	~MapRevealSceneMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* snoScene(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
};

extern MapRevealSceneMessage aMapRevealSceneMessage;


// SavePointInfoMessage
//
// { unknow_field_0 }
// { snoLevelArea }


class SavePointInfoMessage : public D3Struct {
	public:
	void* New();

	SavePointInfoMessage();
	~SavePointInfoMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoLevelArea(void *Data);
};

extern SavePointInfoMessage aSavePointInfoMessage;


// HearthPortalInfoMessage
//
// { unknow_field_0 }
// { snoLevelArea }
// { unknow_field_2 }


class HearthPortalInfoMessage : public D3Struct {
	public:
	void* New();

	HearthPortalInfoMessage();
	~HearthPortalInfoMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoLevelArea(void *Data);
	int* unknow_field_2(void *Data);
};

extern HearthPortalInfoMessage aHearthPortalInfoMessage;


// ReturnPointInfoMessage
//
// { unknow_field_0 }
// { snoLevelArea }


class ReturnPointInfoMessage : public D3Struct {
	public:
	void* New();

	ReturnPointInfoMessage();
	~ReturnPointInfoMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoLevelArea(void *Data);
};

extern ReturnPointInfoMessage aReturnPointInfoMessage;


// ACDLookAtMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ACDLookAtMessage : public D3Struct {
	public:
	void* New();

	ACDLookAtMessage();
	~ACDLookAtMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern ACDLookAtMessage aACDLookAtMessage;


// KillCounterUpdateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class KillCounterUpdateMessage : public D3Struct {
	public:
	void* New();

	KillCounterUpdateMessage();
	~KillCounterUpdateMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern KillCounterUpdateMessage aKillCounterUpdateMessage;


// LowHealthCombatMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class LowHealthCombatMessage : public D3Struct {
	public:
	void* New();

	LowHealthCombatMessage();
	~LowHealthCombatMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern LowHealthCombatMessage aLowHealthCombatMessage;


// SaviorMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class SaviorMessage : public D3Struct {
	public:
	void* New();

	SaviorMessage();
	~SaviorMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern SaviorMessage aSaviorMessage;


// FloatingNumberMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class FloatingNumberMessage : public D3Struct {
	public:
	void* New();

	FloatingNumberMessage();
	~FloatingNumberMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern FloatingNumberMessage aFloatingNumberMessage;


// FloatingAmountMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class FloatingAmountMessage : public D3Struct {
	public:
	void* New();

	FloatingAmountMessage();
	~FloatingAmountMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern FloatingAmountMessage aFloatingAmountMessage;


// RemoveRagdollMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class RemoveRagdollMessage : public D3Struct {
	public:
	void* New();

	RemoveRagdollMessage();
	~RemoveRagdollMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern RemoveRagdollMessage aRemoveRagdollMessage;


// WorldStatusMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class WorldStatusMessage : public D3Struct {
	public:
	void* New();

	WorldStatusMessage();
	~WorldStatusMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern WorldStatusMessage aWorldStatusMessage;


// WorldDeletedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class WorldDeletedMessage : public D3Struct {
	public:
	void* New();

	WorldDeletedMessage();
	~WorldDeletedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern WorldDeletedMessage aWorldDeletedMessage;


// BlizzconCVarsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class BlizzconCVarsMessage : public D3Struct {
	public:
	void* New();

	BlizzconCVarsMessage();
	~BlizzconCVarsMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern BlizzconCVarsMessage aBlizzconCVarsMessage;


// WeatherOverrideMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class WeatherOverrideMessage : public D3Struct {
	public:
	void* New();

	WeatherOverrideMessage();
	~WeatherOverrideMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern WeatherOverrideMessage aWeatherOverrideMessage;


// WaypointActivatedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class WaypointActivatedMessage : public D3Struct {
	public:
	void* New();

	WaypointActivatedMessage();
	~WaypointActivatedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern WaypointActivatedMessage aWaypointActivatedMessage;


// TryWaypointMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class TryWaypointMessage : public D3Struct {
	public:
	void* New();

	TryWaypointMessage();
	~TryWaypointMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern TryWaypointMessage aTryWaypointMessage;


// LoreMessage
//
// { unknow_field_0 }
// { snoLore }


class LoreMessage : public D3Struct {
	public:
	void* New();

	LoreMessage();
	~LoreMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoLore(void *Data);
};

extern LoreMessage aLoreMessage;


// PRTransformMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class PRTransformMessage : public D3Struct {
	public:
	void* New();

	PRTransformMessage();
	~PRTransformMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern PRTransformMessage aPRTransformMessage;


// PlayerQuestMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerQuestMessage : public D3Struct {
	public:
	void* New();

	PlayerQuestMessage();
	~PlayerQuestMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern PlayerQuestMessage aPlayerQuestMessage;


// PlayerDeSyncSnapMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerDeSyncSnapMessage : public D3Struct {
	public:
	void* New();

	PlayerDeSyncSnapMessage();
	~PlayerDeSyncSnapMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern PlayerDeSyncSnapMessage aPlayerDeSyncSnapMessage;


// TradeMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


class TradeMessage : public D3Struct {
	public:
	void* New();

	TradeMessage();
	~TradeMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
};

extern TradeMessage aTradeMessage;


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


class MapMarkerInfoMessage : public D3Struct {
	public:
	void* New();

	MapMarkerInfoMessage();
	~MapMarkerInfoMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* m_snoStringList(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
};

extern MapMarkerInfoMessage aMapMarkerInfoMessage;


// AssignSkillMessage
//
// { unknow_field_0 }
// { snoPower }
// { unknow_field_2 }


class AssignSkillMessage : public D3Struct {
	public:
	void* New();

	AssignSkillMessage();
	~AssignSkillMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoPower(void *Data);
	int* unknow_field_2(void *Data);
};

extern AssignSkillMessage aAssignSkillMessage;


// BossEncounterMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { snoEncounter }


class BossEncounterMessage : public D3Struct {
	public:
	void* New();

	BossEncounterMessage();
	~BossEncounterMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* snoEncounter(void *Data);
};

extern BossEncounterMessage aBossEncounterMessage;


// EncounterInviteStateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class EncounterInviteStateMessage : public D3Struct {
	public:
	void* New();

	EncounterInviteStateMessage();
	~EncounterInviteStateMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern EncounterInviteStateMessage aEncounterInviteStateMessage;


// ActTransitionMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ActTransitionMessage : public D3Struct {
	public:
	void* New();

	ActTransitionMessage();
	~ActTransitionMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern ActTransitionMessage aActTransitionMessage;


// InterstitialMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class InterstitialMessage : public D3Struct {
	public:
	void* New();

	InterstitialMessage();
	~InterstitialMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern InterstitialMessage aInterstitialMessage;


// CameraFocusMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class CameraFocusMessage : public D3Struct {
	public:
	void* New();

	CameraFocusMessage();
	~CameraFocusMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern CameraFocusMessage aCameraFocusMessage;


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


class DebugDrawPrimMessage : public D3Struct {
	public:
	void* New();

	DebugDrawPrimMessage();
	~DebugDrawPrimMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
};

extern DebugDrawPrimMessage aDebugDrawPrimMessage;


// CameraZoomMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class CameraZoomMessage : public D3Struct {
	public:
	void* New();

	CameraZoomMessage();
	~CameraZoomMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern CameraZoomMessage aCameraZoomMessage;


// CameraYawMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class CameraYawMessage : public D3Struct {
	public:
	void* New();

	CameraYawMessage();
	~CameraYawMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern CameraYawMessage aCameraYawMessage;


// BossZoomMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class BossZoomMessage : public D3Struct {
	public:
	void* New();

	BossZoomMessage();
	~BossZoomMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern BossZoomMessage aBossZoomMessage;


// PlayCutsceneMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class PlayCutsceneMessage : public D3Struct {
	public:
	void* New();

	PlayCutsceneMessage();
	~PlayCutsceneMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern PlayCutsceneMessage aPlayCutsceneMessage;


// PlayerWarpedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerWarpedMessage : public D3Struct {
	public:
	void* New();

	PlayerWarpedMessage();
	~PlayerWarpedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern PlayerWarpedMessage aPlayerWarpedMessage;


// DebugActorTooltipMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class DebugActorTooltipMessage : public D3Struct {
	public:
	void* New();

	DebugActorTooltipMessage();
	~DebugActorTooltipMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern DebugActorTooltipMessage aDebugActorTooltipMessage;


// SalvageResultsMessage
//
// { unknow_field_0 }
// { gbidOriginalItem }
// { unknow_field_2 }
// { unknow_field_3 }
// { gbidNewItems }


class SalvageResultsMessage : public D3Struct {
	public:
	void* New();

	SalvageResultsMessage();
	~SalvageResultsMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* gbidOriginalItem(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* gbidNewItems(void *Data);
};

extern SalvageResultsMessage aSalvageResultsMessage;


// GameTestingSamplingStartMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class GameTestingSamplingStartMessage : public D3Struct {
	public:
	void* New();

	GameTestingSamplingStartMessage();
	~GameTestingSamplingStartMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern GameTestingSamplingStartMessage aGameTestingSamplingStartMessage;


// RequestBuffCancelMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class RequestBuffCancelMessage : public D3Struct {
	public:
	void* New();

	RequestBuffCancelMessage();
	~RequestBuffCancelMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern RequestBuffCancelMessage aRequestBuffCancelMessage;


// PlayErrorSoundMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class PlayErrorSoundMessage : public D3Struct {
	public:
	void* New();

	PlayErrorSoundMessage();
	~PlayErrorSoundMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern PlayErrorSoundMessage aPlayErrorSoundMessage;


// HirelingRequestLearnSkillMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class HirelingRequestLearnSkillMessage : public D3Struct {
	public:
	void* New();

	HirelingRequestLearnSkillMessage();
	~HirelingRequestLearnSkillMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern HirelingRequestLearnSkillMessage aHirelingRequestLearnSkillMessage;


// LogoutTickTimeMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class LogoutTickTimeMessage : public D3Struct {
	public:
	void* New();

	LogoutTickTimeMessage();
	~LogoutTickTimeMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern LogoutTickTimeMessage aLogoutTickTimeMessage;


// VersionsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class VersionsMessage : public D3Struct {
	public:
	void* New();

	VersionsMessage();
	~VersionsMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern VersionsMessage aVersionsMessage;


// VisualItem
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class VisualItem : public D3Struct {
	public:
	void* New();

	VisualItem();
	~VisualItem();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern VisualItem aVisualItem;


// VisualEquipment
//
// { unknow_field_0 }


class VisualEquipment : public D3Struct {
	public:
	void* New();

	VisualEquipment();
	~VisualEquipment();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern VisualEquipment aVisualEquipment;


// VisualInventoryMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class VisualInventoryMessage : public D3Struct {
	public:
	void* New();

	VisualInventoryMessage();
	~VisualInventoryMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern VisualInventoryMessage aVisualInventoryMessage;


// NPCInteraction
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class NPCInteraction : public D3Struct {
	public:
	void* New();

	NPCInteraction();
	~NPCInteraction();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern NPCInteraction aNPCInteraction;


// NPCInteractOptionsMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { tNPCInteraction }
// { unknow_field_3 }


class NPCInteractOptionsMessage : public D3Struct {
	public:
	void* New();

	NPCInteractOptionsMessage();
	~NPCInteractOptionsMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* tNPCInteraction(void *Data);
	int* unknow_field_3(void *Data);
};

extern NPCInteractOptionsMessage aNPCInteractOptionsMessage;


// NetAttributeKeyValue
//
// { unknow_field_0 }
// { unknow_field_1 }


class NetAttributeKeyValue : public D3Struct {
	public:
	void* New();

	NetAttributeKeyValue();
	~NetAttributeKeyValue();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern NetAttributeKeyValue aNetAttributeKeyValue;


// AttributeSetValueMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AttributeSetValueMessage : public D3Struct {
	public:
	void* New();

	AttributeSetValueMessage();
	~AttributeSetValueMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern AttributeSetValueMessage aAttributeSetValueMessage;


// AttributesSetValuesMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { atKeyVals }


class AttributesSetValuesMessage : public D3Struct {
	public:
	void* New();

	AttributesSetValuesMessage();
	~AttributesSetValuesMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* atKeyVals(void *Data);
};

extern AttributesSetValuesMessage aAttributesSetValuesMessage;


// HirelingSwapMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class HirelingSwapMessage : public D3Struct {
	public:
	void* New();

	HirelingSwapMessage();
	~HirelingSwapMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern HirelingSwapMessage aHirelingSwapMessage;


// HotbarButtonData
//
// { m_snoPower }
// { m_gbidItem }


class HotbarButtonData : public D3Struct {
	public:
	void* New();

	HotbarButtonData();
	~HotbarButtonData();
	const char* Name();
	
	void* m_snoPower(void *Data);
	void* m_gbidItem(void *Data);
};

extern HotbarButtonData aHotbarButtonData;


// PlayerChangeHotbarButtonMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PlayerChangeHotbarButtonMessage : public D3Struct {
	public:
	void* New();

	PlayerChangeHotbarButtonMessage();
	~PlayerChangeHotbarButtonMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern PlayerChangeHotbarButtonMessage aPlayerChangeHotbarButtonMessage;


// LabelCondition
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class LabelCondition : public D3Struct {
	public:
	void* New();

	LabelCondition();
	~LabelCondition();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern LabelCondition aLabelCondition;


// LabelEntry
//
// { gbidLabel }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class LabelEntry : public D3Struct {
	public:
	void* New();

	LabelEntry();
	~LabelEntry();
	const char* Name();
	
	void* gbidLabel(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern LabelEntry aLabelEntry;


// LabelRule
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serEntries }
// { unknow_field_5 }


class LabelRule : public D3Struct {
	public:
	void* New();

	LabelRule();
	~LabelRule();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serEntries(void *Data);
	void* unknow_field_5(void *Data);
};

extern LabelRule aLabelRule;


// LabelRuleSet
//
// { unknow_field_0 }
// { serRules }
// { unknow_field_2 }


class LabelRuleSet : public D3Struct {
	public:
	void* New();

	LabelRuleSet();
	~LabelRuleSet();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serRules(void *Data);
	void* unknow_field_2(void *Data);
};

extern LabelRuleSet aLabelRuleSet;


// NavMeshSquare
//
// { unknow_field_0 }
// { unknow_field_1 }


class NavMeshSquare : public D3Struct {
	public:
	void* New();

	NavMeshSquare();
	~NavMeshSquare();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern NavMeshSquare aNavMeshSquare;


// NavMeshConnectedSquare
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class NavMeshConnectedSquare : public D3Struct {
	public:
	void* New();

	NavMeshConnectedSquare();
	~NavMeshConnectedSquare();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern NavMeshConnectedSquare aNavMeshConnectedSquare;


// GizmoLocSpawnEntry
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class GizmoLocSpawnEntry : public D3Struct {
	public:
	void* New();

	GizmoLocSpawnEntry();
	~GizmoLocSpawnEntry();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern GizmoLocSpawnEntry aGizmoLocSpawnEntry;


// GizmoLocSpawnType
//
// { serEntry }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class GizmoLocSpawnType : public D3Struct {
	public:
	void* New();

	GizmoLocSpawnType();
	~GizmoLocSpawnType();
	const char* Name();
	
	void* serEntry(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern GizmoLocSpawnType aGizmoLocSpawnType;


// GizmoLocSet
//
// { unknow_field_0 }


class GizmoLocSet : public D3Struct {
	public:
	void* New();

	GizmoLocSet();
	~GizmoLocSet();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern GizmoLocSet aGizmoLocSet;


// BuffDef
//
// { serBuffFilterPowers }
// { arBuffFilterPowers }


class BuffDef : public D3Struct {
	public:
	void* New();

	BuffDef();
	~BuffDef();
	const char* Name();
	
	void* serBuffFilterPowers(void *Data);
	void* arBuffFilterPowers(void *Data);
};

extern BuffDef aBuffDef;


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


class PowerDef : public D3Struct {
	public:
	void* New();

	PowerDef();
	~PowerDef();
	const char* Name();
	
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
	void* serGlobalTagMap(void *Data);
	void* hGeneralTagMap(void *Data);
	void* serPVPGlobalTagMap(void *Data);
	void* hPVPGeneralTagMap(void *Data);
	void* serContactTagMap_0_(void *Data);
	void* hContact0TagMap(void *Data);
	void* serContactTagMap_1_(void *Data);
	void* hContact1TagMap(void *Data);
	void* serContactTagMap_2_(void *Data);
	void* hContact2TagMap(void *Data);
	void* serContactTagMap_3_(void *Data);
	void* hContact3TagMap(void *Data);
	void* serPVPContactTagMap_0_(void *Data);
	void* hPVPContact0TagMap(void *Data);
	void* serPVPContactTagMap_1_(void *Data);
	void* hPVPContact1TagMap(void *Data);
	void* serPVPContactTagMap_2_(void *Data);
	void* hPVPContact2TagMap(void *Data);
	void* serPVPContactTagMap_3_(void *Data);
	void* hPVPContact3TagMap(void *Data);
	int* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
};

extern PowerDef aPowerDef;


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


class TriggerConditions : public D3Struct {
	public:
	void* New();

	TriggerConditions();
	~TriggerConditions();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
};

extern TriggerConditions aTriggerConditions;


// Hardpoint
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class Hardpoint : public D3Struct {
	public:
	void* New();

	Hardpoint();
	~Hardpoint();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern Hardpoint aHardpoint;


// HardpointLink
//
// { unknow_field_0 }
// { unknow_field_1 }


class HardpointLink : public D3Struct {
	public:
	void* New();

	HardpointLink();
	~HardpointLink();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern HardpointLink aHardpointLink;


// LookLink
//
// { unknow_field_0 }


class LookLink : public D3Struct {
	public:
	void* New();

	LookLink();
	~LookLink();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern LookLink aLookLink;


// ConstraintLink
//
// { unknow_field_0 }


class ConstraintLink : public D3Struct {
	public:
	void* New();

	ConstraintLink();
	~ConstraintLink();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern ConstraintLink aConstraintLink;


// MsgTriggeredEvent
//
// { unknow_field_0 }
// { unknow_field_1 }


class MsgTriggeredEvent : public D3Struct {
	public:
	void* New();

	MsgTriggeredEvent();
	~MsgTriggeredEvent();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern MsgTriggeredEvent aMsgTriggeredEvent;


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


class TriggerEvent : public D3Struct {
	public:
	void* New();

	TriggerEvent();
	~TriggerEvent();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	int* eRuneType(void *Data);
	int* bUseRuneType(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
};

extern TriggerEvent aTriggerEvent;


// VelocityVector3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class VelocityVector3D : public D3Struct {
	public:
	void* New();

	VelocityVector3D();
	~VelocityVector3D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern VelocityVector3D aVelocityVector3D;


// AccelVector3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AccelVector3D : public D3Struct {
	public:
	void* New();

	AccelVector3D();
	~AccelVector3D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern AccelVector3D aAccelVector3D;


// ImpulseVector3D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ImpulseVector3D : public D3Struct {
	public:
	void* New();

	ImpulseVector3D();
	~ImpulseVector3D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern ImpulseVector3D aImpulseVector3D;


// SubSceneLabel
//
// { unknow_field_0 }
// { unknow_field_1 }


class SubSceneLabel : public D3Struct {
	public:
	void* New();

	SubSceneLabel();
	~SubSceneLabel();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern SubSceneLabel aSubSceneLabel;


// SubSceneEntry
//
// { snoScene }
// { unknow_field_1 }
// { unknow_field_2 }
// { serLabels }
// { unknow_field_4 }


class SubSceneEntry : public D3Struct {
	public:
	void* New();

	SubSceneEntry();
	~SubSceneEntry();
	const char* Name();
	
	void* snoScene(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* serLabels(void *Data);
	void* unknow_field_4(void *Data);
};

extern SubSceneEntry aSubSceneEntry;


// SubSceneGroup
//
// { unknow_field_0 }
// { unknow_field_1 }
// { serSubScenes }
// { unknow_field_3 }


class SubSceneGroup : public D3Struct {
	public:
	void* New();

	SubSceneGroup();
	~SubSceneGroup();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* serSubScenes(void *Data);
	void* unknow_field_3(void *Data);
};

extern SubSceneGroup aSubSceneGroup;


// SceneCluster
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { serSubSceneGroups }
// { unknow_field_4 }
// { unknow_field_5 }


class SceneCluster : public D3Struct {
	public:
	void* New();

	SceneCluster();
	~SceneCluster();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* serSubSceneGroups(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
};

extern SceneCluster aSceneCluster;


// SceneClusterSet
//
// { unknow_field_0 }
// { serClusters }
// { unknow_field_2 }


class SceneClusterSet : public D3Struct {
	public:
	void* New();

	SceneClusterSet();
	~SceneClusterSet();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serClusters(void *Data);
	void* unknow_field_2(void *Data);
};

extern SceneClusterSet aSceneClusterSet;


// WorldPlace
//
// { unknow_field_0 }
// { unknow_field_1 }


class WorldPlace : public D3Struct {
	public:
	void* New();

	WorldPlace();
	~WorldPlace();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern WorldPlace aWorldPlace;


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


class ACDTranslateNormalMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateNormalMessage();
	~ACDTranslateNormalMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
};

extern ACDTranslateNormalMessage aACDTranslateNormalMessage;


// ACDTranslateSnappedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class ACDTranslateSnappedMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateSnappedMessage();
	~ACDTranslateSnappedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
};

extern ACDTranslateSnappedMessage aACDTranslateSnappedMessage;


// ACDTranslateFacingMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ACDTranslateFacingMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateFacingMessage();
	~ACDTranslateFacingMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern ACDTranslateFacingMessage aACDTranslateFacingMessage;


// ACDTranslateFixedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class ACDTranslateFixedMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateFixedMessage();
	~ACDTranslateFixedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
};

extern ACDTranslateFixedMessage aACDTranslateFixedMessage;


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


class ACDTranslateArcMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateArcMessage();
	~ACDTranslateArcMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
};

extern ACDTranslateArcMessage aACDTranslateArcMessage;


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


class ACDTranslateDetPathMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateDetPathMessage();
	~ACDTranslateDetPathMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
};

extern ACDTranslateDetPathMessage aACDTranslateDetPathMessage;


// DPathSinData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class DPathSinData : public D3Struct {
	public:
	void* New();

	DPathSinData();
	~DPathSinData();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
};

extern DPathSinData aDPathSinData;


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


class ACDTranslateDetPathSinMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateDetPathSinMessage();
	~ACDTranslateDetPathSinMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
};

extern ACDTranslateDetPathSinMessage aACDTranslateDetPathSinMessage;


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


class ACDTranslateDetPathSpiralMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateDetPathSpiralMessage();
	~ACDTranslateDetPathSpiralMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern ACDTranslateDetPathSpiralMessage aACDTranslateDetPathSpiralMessage;


// ACDTranslateSyncMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ACDTranslateSyncMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateSyncMessage();
	~ACDTranslateSyncMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern ACDTranslateSyncMessage aACDTranslateSyncMessage;


// ACDTranslateFixedUpdateMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class ACDTranslateFixedUpdateMessage : public D3Struct {
	public:
	void* New();

	ACDTranslateFixedUpdateMessage();
	~ACDTranslateFixedUpdateMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern ACDTranslateFixedUpdateMessage aACDTranslateFixedUpdateMessage;


// PortalSpecifierMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class PortalSpecifierMessage : public D3Struct {
	public:
	void* New();

	PortalSpecifierMessage();
	~PortalSpecifierMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern PortalSpecifierMessage aPortalSpecifierMessage;


// ActTransitionStartedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ActTransitionStartedMessage : public D3Struct {
	public:
	void* New();

	ActTransitionStartedMessage();
	~ActTransitionStartedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern ActTransitionStartedMessage aActTransitionStartedMessage;


// ActiveEvent
//
// { snoTimedEvent }
// { unknow_field_1 }
// { unknow_field_2 }


class ActiveEvent : public D3Struct {
	public:
	void* New();

	ActiveEvent();
	~ActiveEvent();
	const char* Name();
	
	void* snoTimedEvent(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern ActiveEvent aActiveEvent;


// TimedEventStartedMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class TimedEventStartedMessage : public D3Struct {
	public:
	void* New();

	TimedEventStartedMessage();
	~TimedEventStartedMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern TimedEventStartedMessage aTimedEventStartedMessage;


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


class PlayLineParams : public D3Struct {
	public:
	void* New();

	PlayLineParams();
	~PlayLineParams();
	const char* Name();
	
	void* snoConversation(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* snoSpeakerActor(void *Data);
	void* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
};

extern PlayLineParams aPlayLineParams;


// PlayConvLineMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class PlayConvLineMessage : public D3Struct {
	public:
	void* New();

	PlayConvLineMessage();
	~PlayConvLineMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern PlayConvLineMessage aPlayConvLineMessage;


// StopConvLineMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class StopConvLineMessage : public D3Struct {
	public:
	void* New();

	StopConvLineMessage();
	~StopConvLineMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern StopConvLineMessage aStopConvLineMessage;


// EndConversationMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class EndConversationMessage : public D3Struct {
	public:
	void* New();

	EndConversationMessage();
	~EndConversationMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern EndConversationMessage aEndConversationMessage;


// PlayEffectMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class PlayEffectMessage : public D3Struct {
	public:
	void* New();

	PlayEffectMessage();
	~PlayEffectMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern PlayEffectMessage aPlayEffectMessage;


// PlayHitEffectMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class PlayHitEffectMessage : public D3Struct {
	public:
	void* New();

	PlayHitEffectMessage();
	~PlayHitEffectMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern PlayHitEffectMessage aPlayHitEffectMessage;


// PlayHitEffectOverrideMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class PlayHitEffectOverrideMessage : public D3Struct {
	public:
	void* New();

	PlayHitEffectOverrideMessage();
	~PlayHitEffectOverrideMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern PlayHitEffectOverrideMessage aPlayHitEffectOverrideMessage;


// PlayNonPositionalSoundMessage
//
// { unknow_field_0 }
// { unknow_field_1 }


class PlayNonPositionalSoundMessage : public D3Struct {
	public:
	void* New();

	PlayNonPositionalSoundMessage();
	~PlayNonPositionalSoundMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern PlayNonPositionalSoundMessage aPlayNonPositionalSoundMessage;


// PlayMusicMessage
//
// { unknow_field_0 }
// { snoMusic }


class PlayMusicMessage : public D3Struct {
	public:
	void* New();

	PlayMusicMessage();
	~PlayMusicMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoMusic(void *Data);
};

extern PlayMusicMessage aPlayMusicMessage;


// RopeEffectMessageACDToACD
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class RopeEffectMessageACDToACD : public D3Struct {
	public:
	void* New();

	RopeEffectMessageACDToACD();
	~RopeEffectMessageACDToACD();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
};

extern RopeEffectMessageACDToACD aRopeEffectMessageACDToACD;


// RopeEffectMessageACDToPlace
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class RopeEffectMessageACDToPlace : public D3Struct {
	public:
	void* New();

	RopeEffectMessageACDToPlace();
	~RopeEffectMessageACDToPlace();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern RopeEffectMessageACDToPlace aRopeEffectMessageACDToPlace;


// EffectGroupACDToACDMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class EffectGroupACDToACDMessage : public D3Struct {
	public:
	void* New();

	EffectGroupACDToACDMessage();
	~EffectGroupACDToACDMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern EffectGroupACDToACDMessage aEffectGroupACDToACDMessage;


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


class CreateBNetGameMessage : public D3Struct {
	public:
	void* New();

	CreateBNetGameMessage();
	~CreateBNetGameMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
};

extern CreateBNetGameMessage aCreateBNetGameMessage;


// CreateBNetGameResultMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class CreateBNetGameResultMessage : public D3Struct {
	public:
	void* New();

	CreateBNetGameResultMessage();
	~CreateBNetGameResultMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern CreateBNetGameResultMessage aCreateBNetGameResultMessage;


// RequestJoinBNetGameMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class RequestJoinBNetGameMessage : public D3Struct {
	public:
	void* New();

	RequestJoinBNetGameMessage();
	~RequestJoinBNetGameMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern RequestJoinBNetGameMessage aRequestJoinBNetGameMessage;


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


class BNetJoinGameRequestResultMessage : public D3Struct {
	public:
	void* New();

	BNetJoinGameRequestResultMessage();
	~BNetJoinGameRequestResultMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
};

extern BNetJoinGameRequestResultMessage aBNetJoinGameRequestResultMessage;


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


class JoinBNetGameMessage : public D3Struct {
	public:
	void* New();

	JoinBNetGameMessage();
	~JoinBNetGameMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
};

extern JoinBNetGameMessage aJoinBNetGameMessage;


// CreateHeroMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class CreateHeroMessage : public D3Struct {
	public:
	void* New();

	CreateHeroMessage();
	~CreateHeroMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern CreateHeroMessage aCreateHeroMessage;


// CreateHeroResultMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class CreateHeroResultMessage : public D3Struct {
	public:
	void* New();

	CreateHeroResultMessage();
	~CreateHeroResultMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern CreateHeroResultMessage aCreateHeroResultMessage;


// Influence
//
// { unknow_field_0 }
// { unknow_field_1 }


class Influence : public D3Struct {
	public:
	void* New();

	Influence();
	~Influence();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Influence aInfluence;


// VertInfluences
//
// { unknow_field_0 }


class VertInfluences : public D3Struct {
	public:
	void* New();

	VertInfluences();
	~VertInfluences();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern VertInfluences aVertInfluences;


// FatVertex
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }
// { unknow_field_6 }


class FatVertex : public D3Struct {
	public:
	void* New();

	FatVertex();
	~FatVertex();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
};

extern FatVertex aFatVertex;


// dmSubEdge
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class dmSubEdge : public D3Struct {
	public:
	void* New();

	dmSubEdge();
	~dmSubEdge();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern dmSubEdge admSubEdge;


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


class PolytopeData : public D3Struct {
	public:
	void* New();

	PolytopeData();
	~PolytopeData();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serVertices(void *Data);
	void* unknow_field_2(void *Data);
	void* serPlanes(void *Data);
	void* unknow_field_4(void *Data);
	void* serSubEdges(void *Data);
	void* unknow_field_6(void *Data);
	void* serFaceSubEdges(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
};

extern PolytopeData aPolytopeData;


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


class CollisionShape : public D3Struct {
	public:
	void* New();

	CollisionShape();
	~CollisionShape();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* serPolytope(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
};

extern CollisionShape aCollisionShape;


// CollisionCapsule
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class CollisionCapsule : public D3Struct {
	public:
	void* New();

	CollisionCapsule();
	~CollisionCapsule();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern CollisionCapsule aCollisionCapsule;


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


class ClothVertex : public D3Struct {
	public:
	void* New();

	ClothVertex();
	~ClothVertex();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
};

extern ClothVertex aClothVertex;


// ClothFace
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class ClothFace : public D3Struct {
	public:
	void* New();

	ClothFace();
	~ClothFace();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern ClothFace aClothFace;


// ClothConstraint
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class ClothConstraint : public D3Struct {
	public:
	void* New();

	ClothConstraint();
	~ClothConstraint();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
};

extern ClothConstraint aClothConstraint;


// ClothStaple
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ClothStaple : public D3Struct {
	public:
	void* New();

	ClothStaple();
	~ClothStaple();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern ClothStaple aClothStaple;


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


class ClothStructure : public D3Struct {
	public:
	void* New();

	ClothStructure();
	~ClothStructure();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serVertices(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serFaces(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* serStaples(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* serDistanceConstraints(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* serBendingConstraints(void *Data);
	void* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
};

extern ClothStructure aClothStructure;


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


class SubObject : public D3Struct {
	public:
	void* New();

	SubObject();
	~SubObject();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* nVertCount(void *Data);
	void* serVertList(void *Data);
	void* unknow_field_3(void *Data);
	void* serInfluenceList(void *Data);
	void* unknow_field_5(void *Data);
	int* nIndexCount(void *Data);
	void* serIndexList(void *Data);
	void* unknow_field_8(void *Data);
	void* serClothStructure(void *Data);
	void* unknow_field_10(void *Data);
	void* snoSurface(void *Data);
	int* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* aabbBounds(void *Data);
	int* nShapeCount(void *Data);
	void* serShapes(void *Data);
	void* unknow_field_19(void *Data);
};

extern SubObject aSubObject;


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


class BoneStructure : public D3Struct {
	public:
	void* New();

	BoneStructure();
	~BoneStructure();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* wsBounds(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	void* serShapes(void *Data);
	void* unknow_field_9(void *Data);
	void* serConstraint(void *Data);
	void* unknow_field_11(void *Data);
	void* snoParticleSystem(void *Data);
};

extern BoneStructure aBoneStructure;


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


class LookAtData : public D3Struct {
	public:
	void* New();

	LookAtData();
	~LookAtData();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern LookAtData aLookAtData;


// BonePulseData
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class BonePulseData : public D3Struct {
	public:
	void* New();

	BonePulseData();
	~BonePulseData();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern BonePulseData aBonePulseData;


// GeoSet
//
// { unknow_field_0 }
// { serSubObjects }
// { unknow_field_2 }


class GeoSet : public D3Struct {
	public:
	void* New();

	GeoSet();
	~GeoSet();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serSubObjects(void *Data);
	void* unknow_field_2(void *Data);
};

extern GeoSet aGeoSet;


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


class Structure : public D3Struct {
	public:
	void* New();

	Structure();
	~Structure();
	const char* Name();
	
	int* dwFlags(void *Data);
	int* nBoneCount(void *Data);
	void* serBoneStructure(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* serBonePulses(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	int* nCollisionCapsuleCount(void *Data);
	void* serCollisionCapsules(void *Data);
	void* unknow_field_12(void *Data);
	int* nHardpointCount(void *Data);
	void* serHardpoints(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* tOctreeVisualMesh(void *Data);
	void* aabbBounds(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	int* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	int* unknow_field_25(void *Data);
	int* nLoopConstraintCount(void *Data);
	void* serLoopConstraints(void *Data);
	void* unknow_field_28(void *Data);
	int* uRagdollDegrade(void *Data);
};

extern Structure aStructure;


// SubObjectAppearance
//
// { unknow_field_0 }
// { snoCloth }
// { serTagMap }
// { hTagMap }
// { unknow_field_4 }
// { snoMaterial }


class SubObjectAppearance : public D3Struct {
	public:
	void* New();

	SubObjectAppearance();
	~SubObjectAppearance();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* snoCloth(void *Data);
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
	void* unknow_field_4(void *Data);
	void* snoMaterial(void *Data);
};

extern SubObjectAppearance aSubObjectAppearance;


// AppearanceMaterial
//
// { unknow_field_0 }
// { serSOAs }
// { unknow_field_2 }


class AppearanceMaterial : public D3Struct {
	public:
	void* New();

	AppearanceMaterial();
	~AppearanceMaterial();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serSOAs(void *Data);
	void* unknow_field_2(void *Data);
};

extern AppearanceMaterial aAppearanceMaterial;


// AppearanceLook
//
// { unknow_field_0 }


class AppearanceLook : public D3Struct {
	public:
	void* New();

	AppearanceLook();
	~AppearanceLook();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern AppearanceLook aAppearanceLook;


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


class StaticLight : public D3Struct {
	public:
	void* New();

	StaticLight();
	~StaticLight();
	const char* Name();
	
	int* fCastsShadows(void *Data);
	int* eType(void *Data);
	void* wp(void *Data);
	void* wv(void *Data);
	void* wdRadius(void *Data);
	int* eAttenType(void *Data);
	void* unknow_field_6(void *Data);
	void* flAttenNearStart(void *Data);
	void* flAttenNearEnd(void *Data);
	void* flAttenFarStart(void *Data);
	void* flAttenFarEnd(void *Data);
	int* aHotspot(void *Data);
	int* aFalloff(void *Data);
	void* rgbavalDiffuse(void *Data);
};

extern StaticLight aStaticLight;


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


class Appearance : public D3Struct {
	public:
	void* New();

	Appearance();
	~Appearance();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serAppearanceMaterials(void *Data);
	void* unknow_field_2(void *Data);
	void* serAppearanceLooks(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* nStaticLightCount(void *Data);
	void* serStaticLights(void *Data);
	void* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
};

extern Appearance aAppearance;


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


class ReverbParams : public D3Struct {
	public:
	void* New();

	ReverbParams();
	~ReverbParams();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
};

extern ReverbParams aReverbParams;


// Reverb
//
// { unknow_field_0 }


class Reverb : public D3Struct {
	public:
	void* New();

	Reverb();
	~Reverb();
	const char* Name();
	
	void* unknow_field_0(void *Data);
};

extern Reverb aReverb;


// Material
//
// { unknow_field_0 }
// { serTagMap }
// { hTagMap }
// { unknow_field_3 }


class Material : public D3Struct {
	public:
	void* New();

	Material();
	~Material();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
	void* unknow_field_3(void *Data);
};

extern Material aMaterial;


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


class Shakes : public D3Struct {
	public:
	void* New();

	Shakes();
	~Shakes();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
};

extern Shakes aShakes;


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


class WeatherStateParams : public D3Struct {
	public:
	void* New();

	WeatherStateParams();
	~WeatherStateParams();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* snoSunLightScene(void *Data);
	void* snoSunLightActor(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* snoPlayerLightScene(void *Data);
	void* snoPlayerLightActor(void *Data);
	void* snoLocalPlayerHeadLight(void *Data);
};

extern WeatherStateParams aWeatherStateParams;


// ColorCorrectionParams
//
// { snoTexSaturationVignette }
// { snoTexCorrectionA }
// { snoTexCorrectionB }


class ColorCorrectionParams : public D3Struct {
	public:
	void* New();

	ColorCorrectionParams();
	~ColorCorrectionParams();
	const char* Name();
	
	void* snoTexSaturationVignette(void *Data);
	void* snoTexCorrectionA(void *Data);
	void* snoTexCorrectionB(void *Data);
};

extern ColorCorrectionParams aColorCorrectionParams;


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


class Weather : public D3Struct {
	public:
	void* New();

	Weather();
	~Weather();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* snoWeatherParticle(void *Data);
	void* snoFogParticle(void *Data);
	void* snoSound(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* snoLightning(void *Data);
	void* snoThunder(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
};

extern Weather aWeather;


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


class Rope : public D3Struct {
	public:
	void* New();

	Rope();
	~Rope();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* snoPhysics(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* unknow_field_28(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* unknow_field_31(void *Data);
	void* unknow_field_32(void *Data);
	void* unknow_field_33(void *Data);
	void* unknow_field_34(void *Data);
	int* unknow_field_35(void *Data);
	void* serMsgTriggeredEvents(void *Data);
	void* unknow_field_37(void *Data);
};

extern Rope aRope;


// RandomMusicSoundParams
//
// { snoSound }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class RandomMusicSoundParams : public D3Struct {
	public:
	void* New();

	RandomMusicSoundParams();
	~RandomMusicSoundParams();
	const char* Name();
	
	void* snoSound(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern RandomMusicSoundParams aRandomMusicSoundParams;


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


class PlaylistEntry : public D3Struct {
	public:
	void* New();

	PlaylistEntry();
	~PlaylistEntry();
	const char* Name();
	
	void* snoSoundBank(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
};

extern PlaylistEntry aPlaylistEntry;


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


class Music : public D3Struct {
	public:
	void* New();

	Music();
	~Music();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* serPlaylistEntries(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern Music aMusic;


// DspParam
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class DspParam : public D3Struct {
	public:
	void* New();

	DspParam();
	~DspParam();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
};

extern DspParam aDspParam;


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


class SoundPermutation : public D3Struct {
	public:
	void* New();

	SoundPermutation();
	~SoundPermutation();
	const char* Name();
	
	void* snoSoundBank(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
};

extern SoundPermutation aSoundPermutation;


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


class Sound : public D3Struct {
	public:
	void* New();

	Sound();
	~Sound();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	int* unknow_field_13(void *Data);
	void* serPermutations(void *Data);
	void* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	void* serDspEffects(void *Data);
	void* unknow_field_20(void *Data);
};

extern Sound aSound;


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


class SoundSample : public D3Struct {
	public:
	void* New();

	SoundSample();
	~SoundSample();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* eFormat(void *Data);
	void* serSamples(void *Data);
	void* unknow_field_9(void *Data);
};

extern SoundSample aSoundSample;


// SoundBank
//
// { unknow_field_0 }
// { serSoundSamples }
// { unknow_field_2 }
// { serSampleTimestamps }
// { unknow_field_4 }
// { unknow_field_5 }


class SoundBank : public D3Struct {
	public:
	void* New();

	SoundBank();
	~SoundBank();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serSoundSamples(void *Data);
	void* unknow_field_2(void *Data);
	void* serSampleTimestamps(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
};

extern SoundBank aSoundBank;


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


class LightStateParams : public D3Struct {
	public:
	void* New();

	LightStateParams();
	~LightStateParams();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
};

extern LightStateParams aLightStateParams;


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


class Light : public D3Struct {
	public:
	void* New();

	Light();
	~Light();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
};

extern Light aLight;


// UIControlElement
//
// { unknow_field_0 }
// { unknow_field_1 }


class UIControlElement : public D3Struct {
	public:
	void* New();

	UIControlElement();
	~UIControlElement();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern UIControlElement aUIControlElement;


// UIDataElementInt32
//
// { unknow_field_0 }
// { unknow_field_1 }


class UIDataElementInt32 : public D3Struct {
	public:
	void* New();

	UIDataElementInt32();
	~UIDataElementInt32();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern UIDataElementInt32 aUIDataElementInt32;


// UIDataElementFloat32
//
// { unknow_field_0 }
// { unknow_field_1 }


class UIDataElementFloat32 : public D3Struct {
	public:
	void* New();

	UIDataElementFloat32();
	~UIDataElementFloat32();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern UIDataElementFloat32 aUIDataElementFloat32;


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


class DataElements : public D3Struct {
	public:
	void* New();

	DataElements();
	~DataElements();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serStringElements(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serInt32Elements(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* serFloat32Elements(void *Data);
	void* unknow_field_8(void *Data);
};

extern DataElements aDataElements;


// UIStyleChildSpec
//
// { unknow_field_0 }
// { unknow_field_1 }


class UIStyleChildSpec : public D3Struct {
	public:
	void* New();

	UIStyleChildSpec();
	~UIStyleChildSpec();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern UIStyleChildSpec aUIStyleChildSpec;


// UIStyle
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { serChildSpecs }
// { unknow_field_5 }


class UIStyle : public D3Struct {
	public:
	void* New();

	UIStyle();
	~UIStyle();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serChildSpecs(void *Data);
	void* unknow_field_5(void *Data);
};

extern UIStyle aUIStyle;


// UIAnimationElementInt32
//
// { unknow_field_0 }
// { unknow_field_1 }


class UIAnimationElementInt32 : public D3Struct {
	public:
	void* New();

	UIAnimationElementInt32();
	~UIAnimationElementInt32();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern UIAnimationElementInt32 aUIAnimationElementInt32;


// UIAnimationElementFloat
//
// { unknow_field_0 }
// { unknow_field_1 }


class UIAnimationElementFloat : public D3Struct {
	public:
	void* New();

	UIAnimationElementFloat();
	~UIAnimationElementFloat();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern UIAnimationElementFloat aUIAnimationElementFloat;


// UIAnimationElementVector2D
//
// { unknow_field_0 }
// { unknow_field_1 }


class UIAnimationElementVector2D : public D3Struct {
	public:
	void* New();

	UIAnimationElementVector2D();
	~UIAnimationElementVector2D();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern UIAnimationElementVector2D aUIAnimationElementVector2D;


// UIAnimationDescription
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }


class UIAnimationDescription : public D3Struct {
	public:
	void* New();

	UIAnimationDescription();
	~UIAnimationDescription();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
};

extern UIAnimationDescription aUIAnimationDescription;


// UIControlAnimationBinding
//
// { unknow_field_0 }
// { unknow_field_1 }


class UIControlAnimationBinding : public D3Struct {
	public:
	void* New();

	UIControlAnimationBinding();
	~UIControlAnimationBinding();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern UIControlAnimationBinding aUIControlAnimationBinding;


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


class UIAnimationElements : public D3Struct {
	public:
	void* New();

	UIAnimationElements();
	~UIAnimationElements();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serInt32Elements(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* serFloatElements(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* serVector2DElements(void *Data);
	void* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	void* serAnimationDescriptions(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* serAnimationBindings(void *Data);
	void* unknow_field_14(void *Data);
};

extern UIAnimationElements aUIAnimationElements;


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


class UIControlData : public D3Struct {
	public:
	void* New();

	UIControlData();
	~UIControlData();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
};

extern UIControlData aUIControlData;


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


class UI : public D3Struct {
	public:
	void* New();

	UI();
	~UI();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* dwNumControls(void *Data);
	void* serControlList(void *Data);
	void* unknow_field_5(void *Data);
	int* dwNumStyles(void *Data);
	void* serStyleList(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
};

extern UI aUI;


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


class RenderParams : public D3Struct {
	public:
	void* New();

	RenderParams();
	~RenderParams();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	int* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
	int* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
};

extern RenderParams aRenderParams;


// TextureStageParams
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class TextureStageParams : public D3Struct {
	public:
	void* New();

	TextureStageParams();
	~TextureStageParams();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern TextureStageParams aTextureStageParams;


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


class RenderPass : public D3Struct {
	public:
	void* New();

	RenderPass();
	~RenderPass();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
};

extern RenderPass aRenderPass;


// Shaders
//
// { unknow_field_0 }
// { unknow_field_1 }
// { serPasses }
// { unknow_field_3 }
// { unknow_field_4 }


class Shaders : public D3Struct {
	public:
	void* New();

	Shaders();
	~Shaders();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* serPasses(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern Shaders aShaders;


// Anim2DFrame
//
// { unknow_field_0 }
// { unknow_field_1 }


class Anim2DFrame : public D3Struct {
	public:
	void* New();

	Anim2DFrame();
	~Anim2DFrame();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern Anim2DFrame aAnim2DFrame;


// Anim2D
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { snoSound }
// { unknow_field_4 }
// { serFrames }
// { unknow_field_6 }


class Anim2D : public D3Struct {
	public:
	void* New();

	Anim2D();
	~Anim2D();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* snoSound(void *Data);
	int* unknow_field_4(void *Data);
	void* serFrames(void *Data);
	void* unknow_field_6(void *Data);
};

extern Anim2D aAnim2D;


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


class Font : public D3Struct {
	public:
	void* New();

	Font();
	~Font();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* serTTFData(void *Data);
	void* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
};

extern Font aFont;


// EmitterParams
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class EmitterParams : public D3Struct {
	public:
	void* New();

	EmitterParams();
	~EmitterParams();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern EmitterParams aEmitterParams;


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


class Particle : public D3Struct {
	public:
	void* New();

	Particle();
	~Particle();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* snoPhysics(void *Data);
	void* unknow_field_19(void *Data);
	int* unknow_field_20(void *Data);
	void* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
	void* unknow_field_25(void *Data);
	void* unknow_field_26(void *Data);
	void* unknow_field_27(void *Data);
	void* snoActor(void *Data);
	void* unknow_field_29(void *Data);
	void* unknow_field_30(void *Data);
	void* unknow_field_31(void *Data);
	void* unknow_field_32(void *Data);
	void* unknow_field_33(void *Data);
	void* unknow_field_34(void *Data);
	void* unknow_field_35(void *Data);
	void* unknow_field_36(void *Data);
	void* unknow_field_37(void *Data);
	void* unknow_field_38(void *Data);
	void* unknow_field_39(void *Data);
	void* unknow_field_40(void *Data);
	void* unknow_field_41(void *Data);
	void* unknow_field_42(void *Data);
	void* unknow_field_43(void *Data);
	void* unknow_field_44(void *Data);
	void* unknow_field_45(void *Data);
	void* unknow_field_46(void *Data);
	void* unknow_field_47(void *Data);
	void* unknow_field_48(void *Data);
	void* unknow_field_49(void *Data);
	void* unknow_field_50(void *Data);
	void* unknow_field_51(void *Data);
	void* unknow_field_52(void *Data);
	void* unknow_field_53(void *Data);
	void* unknow_field_54(void *Data);
	int* unknow_field_55(void *Data);
	void* unknow_field_56(void *Data);
	void* unknow_field_57(void *Data);
	int* unknow_field_58(void *Data);
	void* serMsgTriggeredEvents(void *Data);
	void* unknow_field_60(void *Data);
};

extern Particle aParticle;


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


class Trail : public D3Struct {
	public:
	void* New();

	Trail();
	~Trail();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
};

extern Trail aTrail;


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


class Cloth : public D3Struct {
	public:
	void* New();

	Cloth();
	~Cloth();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* snoAmbientSound(void *Data);
};

extern Cloth aCloth;


// EffectItem
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class EffectItem : public D3Struct {
	public:
	void* New();

	EffectItem();
	~EffectItem();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern EffectItem aEffectItem;


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


class EffectGroup : public D3Struct {
	public:
	void* New();

	EffectGroup();
	~EffectGroup();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	void* snoPower(void *Data);
	void* serEffects(void *Data);
	void* unknow_field_7(void *Data);
};

extern EffectGroup aEffectGroup;


// Surface
//
// { unknow_field_0 }
// { snoParticleSystem }
// { unknow_field_2 }
// { serTagMap }
// { hTagMap }


class Surface : public D3Struct {
	public:
	void* New();

	Surface();
	~Surface();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* snoParticleSystem(void *Data);
	int* unknow_field_2(void *Data);
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
};

extern Surface aSurface;


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


class Explosion : public D3Struct {
	public:
	void* New();

	Explosion();
	~Explosion();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
};

extern Explosion aExplosion;


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


class Physics : public D3Struct {
	public:
	void* New();

	Physics();
	~Physics();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
};

extern Physics aPhysics;


// RandomAmbientSoundParams
//
// { snoSound }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class RandomAmbientSoundParams : public D3Struct {
	public:
	void* New();

	RandomAmbientSoundParams();
	~RandomAmbientSoundParams();
	const char* Name();
	
	void* snoSound(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern RandomAmbientSoundParams aRandomAmbientSoundParams;


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


class AmbientSound : public D3Struct {
	public:
	void* New();

	AmbientSound();
	~AmbientSound();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* snoBackground(void *Data);
	void* unknow_field_2(void *Data);
	void* snoFixedIntervalSound(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
};

extern AmbientSound aAmbientSound;


// ShaderMap
//
// { unknow_field_0 }
// { serTagMap }
// { hTagMap }


class ShaderMap : public D3Struct {
	public:
	void* New();

	ShaderMap();
	~ShaderMap();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* serTagMap(void *Data);
	void* hTagMap(void *Data);
};

extern ShaderMap aShaderMap;


// ImageFileID
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ImageFileID : public D3Struct {
	public:
	void* New();

	ImageFileID();
	~ImageFileID();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern ImageFileID aImageFileID;


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


class Textures : public D3Struct {
	public:
	void* New();

	Textures();
	~Textures();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* dwWidth(void *Data);
	int* dwHeight(void *Data);
	int* dwFaceCount(void *Data);
	int* dwMipMapLevelMax(void *Data);
	void* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* serImageFileIDs(void *Data);
	void* unknow_field_10(void *Data);
	void* serFrame(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	int* unknow_field_14(void *Data);
	int* unknow_field_15(void *Data);
	int* unknow_field_16(void *Data);
	int* unknow_field_17(void *Data);
	int* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	void* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
	void* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	void* unknow_field_24(void *Data);
};

extern Textures aTextures;


// EndOfTickMessage
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class EndOfTickMessage : public D3Struct {
	public:
	void* New();

	EndOfTickMessage();
	~EndOfTickMessage();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
};

extern EndOfTickMessage aEndOfTickMessage;


// Material_1
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }
// { unknow_field_5 }


class Material_1 : public D3Struct {
	public:
	void* New();

	Material_1();
	~Material_1();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
};

extern Material_1 aMaterial_1;


// MaterialTexture
//
// { snoTex }
// { unknow_field_1 }


class MaterialTexture : public D3Struct {
	public:
	void* New();

	MaterialTexture();
	~MaterialTexture();
	const char* Name();
	
	void* snoTex(void *Data);
	void* unknow_field_1(void *Data);
};

extern MaterialTexture aMaterialTexture;


// MaterialTextureEntry
//
// { unknow_field_0 }
// { unknow_field_1 }


class MaterialTextureEntry : public D3Struct {
	public:
	void* New();

	MaterialTextureEntry();
	~MaterialTextureEntry();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
};

extern MaterialTextureEntry aMaterialTextureEntry;


// UberMaterial
//
// { unknow_field_0 }
// { snoShaderMap }
// { serMatTexList }
// { unknow_field_3 }


class UberMaterial : public D3Struct {
	public:
	void* New();

	UberMaterial();
	~UberMaterial();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* snoShaderMap(void *Data);
	void* serMatTexList(void *Data);
	void* unknow_field_3(void *Data);
};

extern UberMaterial aUberMaterial;


// PrefetchRunOnDisk
//
// { unknow_field_0 }
// { unknow_field_1 }


class PrefetchRunOnDisk : public D3Struct {
	public:
	void* New();

	PrefetchRunOnDisk();
	~PrefetchRunOnDisk();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
};

extern PrefetchRunOnDisk aPrefetchRunOnDisk;


// TexFrame
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class TexFrame : public D3Struct {
	public:
	void* New();

	TexFrame();
	~TexFrame();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern TexFrame aTexFrame;


// FrameAnim
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class FrameAnim : public D3Struct {
	public:
	void* New();

	FrameAnim();
	~FrameAnim();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern FrameAnim aFrameAnim;


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


class TexAnimParams : public D3Struct {
	public:
	void* New();

	TexAnimParams();
	~TexAnimParams();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
	void* unknow_field_5(void *Data);
	void* unknow_field_6(void *Data);
	void* unknow_field_7(void *Data);
	void* unknow_field_8(void *Data);
	void* unknow_field_9(void *Data);
	void* unknow_field_10(void *Data);
	void* unknow_field_11(void *Data);
	void* unknow_field_12(void *Data);
	void* unknow_field_13(void *Data);
	void* unknow_field_14(void *Data);
	void* unknow_field_15(void *Data);
	void* unknow_field_16(void *Data);
	void* unknow_field_17(void *Data);
	void* unknow_field_18(void *Data);
	int* unknow_field_19(void *Data);
	int* unknow_field_20(void *Data);
	int* unknow_field_21(void *Data);
	int* unknow_field_22(void *Data);
	void* unknow_field_23(void *Data);
	int* unknow_field_24(void *Data);
};

extern TexAnimParams aTexAnimParams;


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


class DisplayMode : public D3Struct {
	public:
	void* New();

	DisplayMode();
	~DisplayMode();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	int* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
	int* unknow_field_5(void *Data);
	int* unknow_field_6(void *Data);
	int* unknow_field_7(void *Data);
	int* unknow_field_8(void *Data);
	int* unknow_field_9(void *Data);
	int* unknow_field_10(void *Data);
	int* unknow_field_11(void *Data);
	int* unknow_field_12(void *Data);
};

extern DisplayMode aDisplayMode;


// InterpolationScalar
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class InterpolationScalar : public D3Struct {
	public:
	void* New();

	InterpolationScalar();
	~InterpolationScalar();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern InterpolationScalar aInterpolationScalar;


// InterpolationPathHeader
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class InterpolationPathHeader : public D3Struct {
	public:
	void* New();

	InterpolationPathHeader();
	~InterpolationPathHeader();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	int* unknow_field_3(void *Data);
	void* unknow_field_4(void *Data);
};

extern InterpolationPathHeader aInterpolationPathHeader;


// FloatNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class FloatNode : public D3Struct {
	public:
	void* New();

	FloatNode();
	~FloatNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern FloatNode aFloatNode;


// FloatPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class FloatPath : public D3Struct {
	public:
	void* New();

	FloatPath();
	~FloatPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern FloatPath aFloatPath;


// IntNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class IntNode : public D3Struct {
	public:
	void* New();

	IntNode();
	~IntNode();
	const char* Name();
	
	int* unknow_field_0(void *Data);
	int* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern IntNode aIntNode;


// IntPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class IntPath : public D3Struct {
	public:
	void* New();

	IntPath();
	~IntPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern IntPath aIntPath;


// VectorNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class VectorNode : public D3Struct {
	public:
	void* New();

	VectorNode();
	~VectorNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern VectorNode aVectorNode;


// VectorPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class VectorPath : public D3Struct {
	public:
	void* New();

	VectorPath();
	~VectorPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern VectorPath aVectorPath;


// ColorNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class ColorNode : public D3Struct {
	public:
	void* New();

	ColorNode();
	~ColorNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern ColorNode aColorNode;


// ColorPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class ColorPath : public D3Struct {
	public:
	void* New();

	ColorPath();
	~ColorPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern ColorPath aColorPath;


// AngleNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AngleNode : public D3Struct {
	public:
	void* New();

	AngleNode();
	~AngleNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern AngleNode aAngleNode;


// AnglePath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class AnglePath : public D3Struct {
	public:
	void* New();

	AnglePath();
	~AnglePath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern AnglePath aAnglePath;


// TimeNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class TimeNode : public D3Struct {
	public:
	void* New();

	TimeNode();
	~TimeNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern TimeNode aTimeNode;


// TimePath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class TimePath : public D3Struct {
	public:
	void* New();

	TimePath();
	~TimePath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern TimePath aTimePath;


// VelocityNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class VelocityNode : public D3Struct {
	public:
	void* New();

	VelocityNode();
	~VelocityNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern VelocityNode aVelocityNode;


// VelocityPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class VelocityPath : public D3Struct {
	public:
	void* New();

	VelocityPath();
	~VelocityPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern VelocityPath aVelocityPath;


// AccelNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AccelNode : public D3Struct {
	public:
	void* New();

	AccelNode();
	~AccelNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern AccelNode aAccelNode;


// AccelPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class AccelPath : public D3Struct {
	public:
	void* New();

	AccelPath();
	~AccelPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern AccelPath aAccelPath;


// VelocityVectorNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class VelocityVectorNode : public D3Struct {
	public:
	void* New();

	VelocityVectorNode();
	~VelocityVectorNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern VelocityVectorNode aVelocityVectorNode;


// VelocityVectorPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class VelocityVectorPath : public D3Struct {
	public:
	void* New();

	VelocityVectorPath();
	~VelocityVectorPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern VelocityVectorPath aVelocityVectorPath;


// AccelVectorNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AccelVectorNode : public D3Struct {
	public:
	void* New();

	AccelVectorNode();
	~AccelVectorNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern AccelVectorNode aAccelVectorNode;


// AccelVectorPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class AccelVectorPath : public D3Struct {
	public:
	void* New();

	AccelVectorPath();
	~AccelVectorPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern AccelVectorPath aAccelVectorPath;


// AngularVelocityNode
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }


class AngularVelocityNode : public D3Struct {
	public:
	void* New();

	AngularVelocityNode();
	~AngularVelocityNode();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
};

extern AngularVelocityNode aAngularVelocityNode;


// AngularVelocityPath
//
// { unknow_field_0 }
// { serNodes }
// { unknow_field_2 }


class AngularVelocityPath : public D3Struct {
	public:
	void* New();

	AngularVelocityPath();
	~AngularVelocityPath();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* serNodes(void *Data);
	void* unknow_field_2(void *Data);
};

extern AngularVelocityPath aAngularVelocityPath;

#endif
