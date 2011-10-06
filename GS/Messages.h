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

#ifndef Messages__h__
#define Messages__h__

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

#endif
