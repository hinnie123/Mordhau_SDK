#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Mordhau.EAdvancedCharacterFlags
enum class EAdvancedCharacterFlags : uint8_t
{
	Airborne                       = 0,
	Burning                        = 1,
	RagdollFalling                 = 2,
	Jumped                         = 3,
	EAdvancedCharacterFlags_MAX    = 4
};


// Enum Mordhau.EAttackType
enum class EAttackType : uint8_t
{
	Regular                        = 0,
	Riposte                        = 1,
	Combo                          = 2,
	PostClash                      = 3,
	Morph                          = 4,
	EAttackType_MAX                = 5
};


// Enum Mordhau.EAttackStage
enum class EAttackStage : uint8_t
{
	Windup                         = 0,
	Release                        = 1,
	Recovery                       = 2,
	EAttackStage_MAX               = 3
};


// Enum Mordhau.EBlockedReason
enum class EBlockedReason : uint8_t
{
	Parry                          = 0,
	DisarmParry                    = 1,
	StunParry                      = 2,
	ChamberLeft                    = 3,
	ChamberRight                   = 4,
	WorldFail                      = 5,
	ClashA                         = 6,
	ClashB                         = 7,
	HitCancel                      = 8,
	WorldSuccess                   = 9,
	Hit                            = 10,
	EnvironmentHit                 = 11,
	RangedParry                    = 12,
	RiposteParry                   = 13,
	DisarmClash                    = 14,
	EBlockedReason_MAX             = 15
};


// Enum Mordhau.ESwayMethod
enum class ESwayMethod : uint8_t
{
	Sin                            = 0,
	Constant                       = 1,
	ESwayMethod_MAX                = 2
};


// Enum Mordhau.EModeSwitchType
enum class EModeSwitchType : uint8_t
{
	Regular                        = 0,
	Simple                         = 1,
	LeftToRightHand                = 2,
	RightToLeftHand                = 3,
	EModeSwitchType_MAX            = 4
};


// Enum Mordhau.ESwitchStage
enum class ESwitchStage : uint8_t
{
	Reaching                       = 0,
	Drawing                        = 1,
	ESwitchStage_MAX               = 2
};


// Enum Mordhau.EFeintType
enum class EFeintType : uint8_t
{
	Regular                        = 0,
	Combo                          = 1,
	Chamber                        = 2,
	Release                        = 3,
	EFeintType_MAX                 = 4
};


// Enum Mordhau.EAIFacingMode
enum class EAIFacingMode : uint8_t
{
	Movement                       = 0,
	Location                       = 1,
	Actor                          = 2,
	Actor2D                        = 3,
	Bone                           = 4,
	EAIFacingMode_MAX              = 5
};


// Enum Mordhau.EBeaconRequest
enum class EBeaconRequest : uint8_t
{
	Ping                           = 0,
	ReserveSlots                   = 1,
	EBeaconRequest_MAX             = 2
};


// Enum Mordhau.EReservationStatus
enum class EReservationStatus : uint8_t
{
	Success                        = 0,
	Full                           = 1,
	Failure                        = 2,
	EReservationStatus_MAX         = 3
};


// Enum Mordhau.EMotionType
enum class EMotionType : uint8_t
{
	Idle                           = 0,
	Attack                         = 1,
	Parry                          = 2,
	Flinched                       = 3,
	Stunned                        = 4,
	Feinted                        = 5,
	Blocked                        = 6,
	Disarmed                       = 7,
	EquipmentSwitch                = 8,
	DropEquipment                  = 9,
	Emote                          = 10,
	EquipmentModeSwitch            = 11,
	RangedDraw                     = 12,
	RangedRelease                  = 13,
	QuickthrowDraw                 = 14,
	QuickthrowRelease              = 15,
	InteractWith                   = 16,
	Reload                         = 17,
	RangedCancel                   = 18,
	CouchedAttack                  = 19,
	PommelDraw                     = 20,
	PommelThrow                    = 21,
	EmoteCancel                    = 22,
	Holster                        = 23,
	EnterVehicle                   = 24,
	LeaveVehicle                   = 25,
	RagdollFalling                 = 26,
	Climbing                       = 27,
	Ability                        = 28,
	EMotionType_MAX                = 29
};


// Enum Mordhau.EEquipmentCategory
enum class EEquipmentCategory : uint8_t
{
	Undefined                      = 0,
	OneHanded                      = 1,
	TwoHanded                      = 2,
	Ranged                         = 3,
	Shield                         = 4,
	Utility                        = 5,
	EEquipmentCategory_MAX         = 6
};


// Enum Mordhau.EEquipmentType
enum class EEquipmentType : uint8_t
{
	Undefined                      = 0,
	MeleeNoAltMode                 = 1,
	MeleeWithAltMode               = 2,
	MeleeThrownAltMode             = 3,
	ProjectileWeapon               = 4,
	Shield                         = 5,
	Thrown                         = 6,
	Utility                        = 7,
	EEquipmentType_MAX             = 8
};


// Enum Mordhau.EAuxiliaryMeshMode
enum class EAuxiliaryMeshMode : uint8_t
{
	None                           = 0,
	Arrow                          = 1,
	Bolt                           = 2,
	Scabbard                       = 3,
	Pommel                         = 4,
	EAuxiliaryMeshMode_MAX         = 5
};


// Enum Mordhau.EPartyState
enum class EPartyState : uint8_t
{
	Idle                           = 0,
	Searching                      = 1,
	Joining                        = 2,
	EPartyState_MAX                = 3
};


// Enum Mordhau.ERichPresenceStatus
enum class ERichPresenceStatus : uint8_t
{
	MainMenu                       = 0,
	LocalMatch                     = 1,
	OnlineMatch                    = 2,
	ERichPresenceStatus_MAX        = 3
};


// Enum Mordhau.ELobbyMessage
enum class ELobbyMessage : uint8_t
{
	Invalid                        = 0,
	Chat                           = 1,
	Kick                           = 2,
	Status                         = 3,
	Profile                        = 4,
	ELobbyMessage_MAX              = 5
};


// Enum Mordhau.EOfficialServerVisibility
enum class EOfficialServerVisibility : uint8_t
{
	ServerBrowser                  = 0,
	Matchmaking                    = 1,
	EOfficialServerVisibility_MAX  = 2
};


// Enum Mordhau.EActionSetChangeState
enum class EActionSetChangeState : uint8_t
{
	Active                         = 0,
	Changing                       = 1,
	Changed                        = 2,
	EActionSetChangeState_MAX      = 3
};


// Enum Mordhau.EActionSet
enum class EActionSet : uint8_t
{
	InGame                         = 0,
	Spectator                      = 1,
	Menu                           = 2,
	EActionSet_MAX                 = 3
};


// Enum Mordhau.EInputLineMode
enum class EInputLineMode : uint8_t
{
	SingleLine                     = 0,
	MultiLine                      = 1,
	EInputLineMode_MAX             = 2
};


// Enum Mordhau.EInputTextMode
enum class EInputTextMode : uint8_t
{
	Normal                         = 0,
	Password                       = 1,
	EInputTextMode_MAX             = 2
};


// Enum Mordhau.EInventoryOperation
enum class EInventoryOperation : uint8_t
{
	RefreshItems                   = 0,
	SerializeItems                 = 1,
	DeserializeItems               = 2,
	SplitItems                     = 3,
	ConsolidateItems               = 4,
	UnlockItem                     = 5,
	ConsumeItem                    = 6,
	AddItem                        = 7,
	AddItems                       = 8,
	DropItems                      = 9,
	EInventoryOperation_MAX        = 10
};


// Enum Mordhau.EBlockType
enum class EBlockType : uint8_t
{
	Regular                        = 0,
	AltRegular                     = 1,
	ShieldWall                     = 2,
	EBlockType_MAX                 = 3
};


// Enum Mordhau.EMovementModifier
enum class EMovementModifier : uint8_t
{
	Walk                           = 0,
	Strafe                         = 1,
	Backpedal                      = 2,
	PartialSprint                  = 3,
	Sprint                         = 4,
	Rush                           = 5,
	Chasing                        = 6,
	Supersprint                    = 7,
	EMovementModifier_MAX          = 8
};


// Enum Mordhau.EScoreFeedReason
enum class EScoreFeedReason : uint8_t
{
	Kill                           = 0,
	TeamKill                       = 1,
	Assist                         = 2,
	Suicide                        = 3,
	PlayerDamage                   = 4,
	PlayerTeamDamage               = 5,
	OtherDamage                    = 6,
	OtherTeamDamage                = 7,
	Capturing                      = 8,
	Captured                       = 9,
	Neutralizing                   = 10,
	Neutralized                    = 11,
	Objective                      = 12,
	Heal                           = 13,
	WaveCleared                    = 14,
	Repair                         = 15,
	VehicleDamage                  = 16,
	VehicleTeamDamage              = 17,
	EScoreFeedReason_MAX           = 18
};


// Enum Mordhau.ECameraStyle
enum class ECameraStyle : uint8_t
{
	FirstPerson                    = 0,
	ThirdPerson                    = 1,
	Fixed                          = 2,
	ECameraStyle_MAX               = 3
};


// Enum Mordhau.EAntiCheat
enum class EAntiCheat : uint8_t
{
	Secure_Only                    = 0,
	Insecure_Only                  = 1,
	Both                           = 2,
	EAntiCheat_MAX                 = 3
};


// Enum Mordhau.EStatSetBy
enum class EStatSetBy : uint8_t
{
	Client                         = 0,
	Server                         = 1,
	OfficialServer                 = 2,
	EStatSetBy_MAX                 = 3
};


// Enum Mordhau.EServerRegion
enum class EServerRegion : uint8_t
{
	East_Asia                      = 0,
	Europe                         = 1,
	Oceania                        = 2,
	Russia                         = 3,
	South_America                  = 4,
	US_Central                     = 5,
	US_East                        = 6,
	US_West                        = 7,
	Worldwide                      = 8,
	EServerRegion_MAX              = 9
};


// Enum Mordhau.EAvatarSize
enum class EAvatarSize : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	EAvatarSize_MAX                = 3
};


// Enum Mordhau.ECallResult
enum class ECallResult : uint8_t
{
	Success                        = 0,
	Failure                        = 1,
	ECallResult_MAX                = 2
};


// Enum Mordhau.ESoundMix
enum class ESoundMix : uint8_t
{
	Master                         = 0,
	Effects                        = 1,
	Music                          = 2,
	ESoundMix_MAX                  = 3
};


// Enum Mordhau.EMordhauDamageType
enum class EMordhauDamageType : uint8_t
{
	Generic                        = 0,
	Melee                          = 1,
	Ranged                         = 2,
	Fall                           = 3,
	Fire                           = 4,
	EMordhauDamageType_MAX         = 5
};


// Enum Mordhau.EItemRarity
enum class EItemRarity : uint8_t
{
	Common                         = 0,
	Uncommon                       = 1,
	Rare                           = 2,
	Epic                           = 3,
	Legendary                      = 4,
	Exclusive                      = 5,
	EItemRarity_MAX                = 6
};


// Enum Mordhau.EProfileValidationFailedReason
enum class EProfileValidationFailedReason : uint8_t
{
	Unset                          = 0,
	NotEnoughPoints                = 1,
	SkillTooLow                    = 2,
	EProfileValidationFailedReason_MAX = 3
};


// Enum Mordhau.EAttackMove
enum class EAttackMove : uint8_t
{
	RightStrike                    = 0,
	LeftStrike                     = 1,
	Stab                           = 2,
	AltStab                        = 3,
	Kick                           = 4,
	Bash                           = 5,
	Couch                          = 6,
	Ranged                         = 7,
	EAttackMove_MAX                = 8
};


// Enum Mordhau.EMainWearableSlot
enum class EMainWearableSlot : uint8_t
{
	Head                           = 0,
	UpperChest                     = 1,
	Legs                           = 2,
	EMainWearableSlot_MAX          = 3
};


// Enum Mordhau.EWearableSlot
enum class EWearableSlot : uint8_t
{
	Head                           = 0,
	Coif                           = 1,
	UpperChest                     = 2,
	LowerChest                     = 3,
	Shoulders                      = 4,
	Arms                           = 5,
	Hands                          = 6,
	Legs                           = 7,
	Feet                           = 8,
	Total                          = 9,
	Invalid                        = 10,
	EWearableSlot_MAX              = 11
};


// Enum Mordhau.EBudgetType
enum class EBudgetType : uint8_t
{
	Particle                       = 0,
	Total                          = 1,
	EBudgetType_MAX                = 2
};


// Enum Mordhau.EHorseGear
enum class EHorseGear : uint8_t
{
	Walk                           = 0,
	Trot                           = 1,
	Canter                         = 2,
	Gallop                         = 3,
	Total                          = 4,
	EHorseGear_MAX                 = 5
};


// Enum Mordhau.EMovementRestriction
enum class EMovementRestriction : uint8_t
{
	None                           = 0,
	PartialSprint                  = 1,
	Walk                           = 2,
	NoMovement                     = 3,
	EMovementRestriction_MAX       = 4
};


// Enum Mordhau.EPerk
enum class EPerk : uint8_t
{
	Pugilist                       = 0,
	Acrobat                        = 1,
	Fury                           = 2,
	Peasant                        = 3,
	Fireproof                      = 4,
	Huntsman                       = 5,
	Friendly                       = 6,
	Rat                            = 7,
	Cat                            = 8,
	Wrecker                        = 9,
	Smith                          = 10,
	Tenacious                      = 11,
	SecondWind                     = 12,
	Bloodlust                      = 13,
	Rush                           = 14,
	FleshWound                     = 15,
	Scavenger                      = 16,
	Dodge                          = 17,
	Ranger                         = 18,
	EPerk_MAX                      = 19
};


// Enum Mordhau.EDismembermentType
enum class EDismembermentType : uint8_t
{
	None                           = 0,
	Blunt                          = 1,
	Pierce                         = 2,
	Cut                            = 3,
	EDismembermentType_MAX         = 4
};


// Enum Mordhau.EAuthStatus
enum class EAuthStatus : uint8_t
{
	Unauthenticated                = 0,
	Authenticating                 = 1,
	Authenticated                  = 2,
	EAuthStatus_MAX                = 3
};


// Enum Mordhau.EParryStage
enum class EParryStage : uint8_t
{
	Parry                          = 0,
	Recovery                       = 1,
	EParryStage_MAX                = 2
};


// Enum Mordhau.EPlayFabRestriction
enum class EPlayFabRestriction : uint8_t
{
	Ban                            = 0,
	Mute                           = 1,
	EPlayFabRestriction_MAX        = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Mordhau.PrePhysTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPrePhysTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.FloatAndVector
// 0x0010
struct FFloatAndVector
{
	float                                              Float;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0004(0x000C) (IsPlainOldData)
};

// ScriptStruct Mordhau.NetDamage
// 0x0020
struct FNetDamage
{
	unsigned char                                      PackedType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bone;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PackedFlags;                                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector_NetQuantize                         Point;                                                    // 0x0004(0x000C)
	TWeakObjectPtr<class AActor>                       DamageSource;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageAgent;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.WoundMaterialData
// 0x0038
struct FWoundMaterialData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     UpVector;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     RightVector;                                              // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // 0x0024(0x000C) (IsPlainOldData)
	struct FVector2D                                   WoundType;                                                // 0x0030(0x0008) (IsPlainOldData)
};

// ScriptStruct Mordhau.SphericalLimbBounds
// 0x0020
struct FSphericalLimbBounds
{
	struct FName                                       StartSocket;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndSocket;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PatternInfo
// 0x0010
struct FPatternInfo
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor1;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor2;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor3;                                               // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct Mordhau.WoundInfo
// 0x0014
struct FWoundInfo
{
	struct FVector2D                                   WoundType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     WoundSize;                                                // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.AttackInfo
// 0x0120
struct FAttackInfo
{
	bool                                               bCanCombo;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForcesRearingFromFront;                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoFlinch;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              FlinchSpeedModifier;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchDurationModifier;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Windup;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ComboWindupIncrease;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Release;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintLockOut;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FeintCost;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChamberFeintCost;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChamberCost;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MorphCost;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TurnCaps;                                                 // 0x002C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TurnCapCurve;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HitEffectIKWeightCurve;                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitEffectSpeedUpExponent;                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrain;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraStaminaDrainVsHeldBlock;                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<float>                                      Damage;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      HeadBonus;                                                // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      LegBonus;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WoodDamage;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StoneDamage;                                              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnHit;                                               // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrainAllStamOnBlock;                                     // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRagdollOnBlock;                                          // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0093(0x0001) MISSED OFFSET
	float                                              ChipDamagePercentageOnBlock;                              // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRagdollOnHit;                                            // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDismountsHorseRider;                                     // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDismountsLadderUser;                                     // 0x009A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x009B(0x0001) MISSED OFFSET
	float                                              MissStaminaCost;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitStaminaReward;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MissRecovery;                                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitKockbackFactor;                                        // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowAttackDirectionFactor;                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWoundInfo>                          WoundInfoArray;                                           // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      HitShake;                                                 // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitStopShake;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x00D0(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.AttackInfo.IgnoreBones
};

// ScriptStruct Mordhau.SpineSpaceAdditive
// 0x0084
struct FSpineSpaceAdditive
{
	struct FRotator                                    head;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Neck;                                                     // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Spine1;                                                   // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftShoulder;                                             // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftArm;                                                  // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftForearm;                                              // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftHand;                                                 // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightShoulder;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightArm;                                                 // 0x0060(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightForearm;                                             // 0x006C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightHand;                                                // 0x0078(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.WearableCustomization
// 0x0040
struct FWearableCustomization
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              Colors;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              Team1Colors;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              Team2Colors;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      Pattern;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.EquipmentCustomization
// 0x0030
struct FEquipmentCustomization
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              Colors;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              Parts;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      Pattern;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Skin;                                                     // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Mordhau.CharacterGearCustomization
// 0x0020
struct FCharacterGearCustomization
{
	TArray<struct FWearableCustomization>              Wearables;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FEquipmentCustomization>             Equipment;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.AppearanceCustomization
// 0x0028
struct FAppearanceCustomization
{
	int                                                Emblem;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              EmblemColors;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      MetalRoughnessScale;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MetalTint;                                                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Age;                                                      // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Voice;                                                    // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      VoicePitch;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFemale;                                                // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Fat;                                                      // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Skinny;                                                   // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Strong;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SkinColor;                                                // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Face;                                                     // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EyeColor;                                                 // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HairColor;                                                // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Hair;                                                     // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FacialHair;                                               // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Eyebrows;                                                 // 0x0027(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.FaceCustomization
// 0x0030
struct FFaceCustomization
{
	TArray<uint16_t>                                   Translate;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint16_t>                                   Rotate;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint16_t>                                   Scale;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.SkillsCustomization
// 0x0004
struct FSkillsCustomization
{
	uint32_t                                           Perks;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.CharacterProfile
// 0x00A0
struct FCharacterProfile
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FCharacterGearCustomization                 GearCustomization;                                        // 0x0018(0x0020) (Edit, BlueprintVisible)
	struct FAppearanceCustomization                    AppearanceCustomization;                                  // 0x0038(0x0028) (Edit, BlueprintVisible)
	struct FFaceCustomization                          FaceCustomization;                                        // 0x0060(0x0030) (Edit, BlueprintVisible)
	struct FSkillsCustomization                        SkillsCustomization;                                      // 0x0090(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FSteamID                                    SteamID;                                                  // 0x0098(0x0008) (Transient)
};

// ScriptStruct Mordhau.VehicleTransitionInfo
// 0x0010
struct FVehicleTransitionInfo
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.FootGroundingLimb
// 0x01F0
struct FFootGroundingLimb
{
	struct FName                                       TraceEndBone;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TraceStartBone;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootstepBone;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceDistance;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UpValueLimits;                                            // 0x001C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FHitResult                                  TraceResult;                                              // 0x0028(0x0088) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x114];                                     // 0x00B0(0x0114) MISSED OFFSET
	float                                              RootSpaceImpactZ;                                         // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x01C8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     InternalTranslationOffset;                                // 0x01D4(0x000C) (IsPlainOldData)
	struct FVector                                     TranslationOffset;                                        // 0x01E0(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
};

// ScriptStruct Mordhau.RepArrayShortWithVersion
// 0x0018
struct FRepArrayShortWithVersion
{
	TArray<uint16_t>                                   Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      Version;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.RepArrayAppearanceWithVersion
// 0x0030
struct FRepArrayAppearanceWithVersion
{
	struct FAppearanceCustomization                    Appearance;                                               // 0x0000(0x0028)
	unsigned char                                      Version;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.RepArraySkillsWithVersion
// 0x0008
struct FRepArraySkillsWithVersion
{
	struct FSkillsCustomization                        Skills;                                                   // 0x0000(0x0004)
	unsigned char                                      Version;                                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Mordhau.RepArrayByteWithVersion
// 0x0018
struct FRepArrayByteWithVersion
{
	TArray<unsigned char>                              Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      Version;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.StatBase
// 0x0010
struct FStatBase
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStatSetBy                                         SetBy;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.StatInt
// 0x0008 (0x0018 - 0x0010)
struct FStatInt : public FStatBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.EquipmentPartEntry
// 0x0028
struct FEquipmentPartEntry
{
	struct FText                                       PartName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<class UClass*>                              Parts;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.EquipmentSkinEntry
// 0x0048
struct FEquipmentSkinEntry
{
	struct FText                                       SkinName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FEquipmentPartEntry>                 PartTypes;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              ColorTables;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPatternInfo>                        Patterns;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.EmoteEntry
// 0x0020
struct FEmoteEntry
{
	struct FText                                       EmoteName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      EmoteMotion;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.EquipmentHolsterInfo
// 0x0060
struct FEquipmentHolsterInfo
{
	struct FName                                       HolsterSocket;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHiddenIn1P;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UAnimMontage*                                DrawAnimation;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DrawAnimation1P;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIKDrawing;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.ActorSetAndArray
// 0x0060
struct FActorSetAndArray
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.ActorSetAndArray.Set
	TArray<class AActor*>                              Array;                                                    // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.HorseGearInfo
// 0x0018
struct FHorseGearInfo
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowJump;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRiderRegenHealth;                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRiderRegenStamina;                                    // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanHorseRegen;                                           // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      HeadBobShake;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.HighMidLowSpineSpaceAdditive
// 0x018C
struct FHighMidLowSpineSpaceAdditive
{
	struct FSpineSpaceAdditive                         High;                                                     // 0x0000(0x0084) (Edit, BlueprintVisible)
	struct FSpineSpaceAdditive                         Mid;                                                      // 0x0084(0x0084) (Edit, BlueprintVisible)
	struct FSpineSpaceAdditive                         Low;                                                      // 0x0108(0x0084) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnglingSpineSpaceAdditive
// 0x0318
struct FAnglingSpineSpaceAdditive
{
	struct FHighMidLowSpineSpaceAdditive               Right;                                                    // 0x0000(0x018C) (Edit, BlueprintVisible)
	struct FHighMidLowSpineSpaceAdditive               Left;                                                     // 0x018C(0x018C) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.PerceptionInfo
// 0x0008
struct FPerceptionInfo
{
	bool                                               bSight;                                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHearing;                                                 // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDamage;                                                  // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Team;                                                     // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateTime;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.FacialBoneSetup
// 0x0088
struct FFacialBoneSetup
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SelectionBoneOverride;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSymmetrical;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              SelectionBiasFactor;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ChildBones;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Level;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SymmetryTwinBoneIndex;                                    // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SymmetryTwinBoneName;                                     // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TranslateXRange;                                          // 0x003C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   TranslateYRange;                                          // 0x0044(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   TranslateZRange;                                          // 0x004C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ScaleXRange;                                              // 0x0054(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ScaleYRange;                                              // 0x005C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ScaleZRange;                                              // 0x0064(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RotateXRange;                                             // 0x006C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RotateYRange;                                             // 0x0074(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RotateZRange;                                             // 0x007C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Mordhau.AnimNodePackedFaceCustomization
// 0x0020
struct FAnimNodePackedFaceCustomization
{
	TArray<struct FFacialBoneSetup>                    FaceCustomizationSetup;                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          FaceCustomizationBonesTransforms;                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.AnimNodePackedDismemberment
// 0x0010
struct FAnimNodePackedDismemberment
{
	TArray<int>                                        DismemberedBonesIndices;                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.DamageRecord
// 0x0010
struct FDamageRecord
{
	TWeakObjectPtr<class AController>                  Source;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.NetBlock
// 0x0010
struct FNetBlock
{
	unsigned char                                      BlockedReason;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockedMove;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockType;                                                // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockedAngle;                                             // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       BlockingActor;                                            // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnsureReplication;                                        // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Mordhau.NetMotion
// 0x0006
struct FNetMotion
{
	unsigned char                                      ID;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionType;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionParam0;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionParam1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionParam2;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionDynamicParam;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.SessionSearchResult
// 0x01F8
struct FSessionSearchResult
{
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0000(0x01F8) MISSED OFFSET
};

// ScriptStruct Mordhau.ServerSearchResult
// 0x0000 (0x01F8 - 0x01F8)
struct FServerSearchResult : public FSessionSearchResult
{

};

// ScriptStruct Mordhau.PlayerProfile
// 0x00A8
struct FPlayerProfile
{
	int                                                Rank;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Banner;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCharacterProfile                           Character;                                                // 0x0008(0x00A0) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.LobbySearchResult
// 0x0000 (0x01F8 - 0x01F8)
struct FLobbySearchResult : public FSessionSearchResult
{

};

// ScriptStruct Mordhau.ServerAddress
// 0x0008
struct FServerAddress
{
	uint32_t                                           IP;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Port;                                                     // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Mordhau.MapInfo
// 0x0020
struct FMapInfo
{
	struct FString                                     GameModeMapName;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UGameModeMetadata*                           GameModeMetadata;                                         // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMapMetadata*                                MapMetadata;                                              // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.CapturePointGroup
// 0x0010
struct FCapturePointGroup
{
	TArray<class AControlPoint*>                       CapturePoints;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.DigitalActionKey
// 0x0020
struct FDigitalActionKey
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Mordhau.AnalogActionKey
// 0x0028
struct FAnalogActionKey
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Mordhau.UnlockRecipe
// 0x0038
struct FUnlockRecipe
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RequiredGold;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RequiredXP;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             RequiredItems;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             UnlockedItems;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.ItemStack
// 0x0010
struct FItemStack
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.ServerStats
// 0x0018
struct FServerStats
{
	unsigned char                                      TargetTickRate;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinTickRate;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxTickRate;                                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AvgTickRate;                                              // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           InBytesPerSecond;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OutBytesPerSecond;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxInternetClientRate;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NumPlayers;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxPlayers;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.DecalInfo
// 0x0018
struct FDecalInfo
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Mordhau.ReplicatedProjectileInfo
// 0x0034
struct FReplicatedProjectileInfo
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FVector_NetQuantize                         Orientation;                                              // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FVector_NetQuantizeNormal                   HitNormal;                                                // 0x0018(0x000C) (Edit, BlueprintVisible)
	float                                              BounceForce;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Creator;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitSurface;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasStopped;                                              // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasHitWorld;                                             // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitCounter;                                               // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.FindServerSessionsFilter
// 0x0038
struct FFindServerSessionsFilter
{
	bool                                               bIsNotFull;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPlayers;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEmpty;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNotPasswordProtected;                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDevBuild;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOfficial;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMatchmaking;                                           // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAntiCheat                                         AntiCheat;                                                // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinOpenSlots;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPing;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerName;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EServerRegion                                      Region;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.FindLobbySessionsFilter
// 0x0028
struct FFindLobbySessionsFilter
{
	int                                                MinOpenSlots;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PreferredOpenSlots;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MMR;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FString>                             GameModes;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EServerRegion                                      Region;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.MordhauColorItemTable
// 0x0028
struct FMordhauColorItemTable
{
	struct FText                                       TableName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<class UClass*>                              Entries;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.Achievement
// 0x0010
struct FAchievement
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EStatSetBy                                         SetBy;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Mordhau.StatFloat
// 0x0008 (0x0018 - 0x0010)
struct FStatFloat : public FStatBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.StatAvgRate
// 0x0000 (0x0018 - 0x0018)
struct FStatAvgRate : public FStatFloat
{

};

// ScriptStruct Mordhau.ProgressAchievementInt
// 0x0020 (0x0030 - 0x0010)
struct FProgressAchievementInt : public FAchievement
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Mordhau.ProgressAchievementFloat
// 0x0020 (0x0030 - 0x0010)
struct FProgressAchievementFloat : public FAchievement
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Mordhau.SoundMixInfo
// 0x0018
struct FSoundMixInfo
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USoundClass*>                         SoundClasses;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.LeaderboardEntry
// 0x0030
struct FLeaderboardEntry
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Position;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MMR;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FString                                     Name;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.MordhauDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FMordhauDamageEvent : public FPointDamageEvent
{
	EMordhauDamageType                                 Type;                                                     // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       DamageSource;                                             // 0x00AC(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageAgent;                                              // 0x00B4(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bWantsFlinchAnimation;                                    // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
};

// ScriptStruct Mordhau.AnimNode_AttackAngling
// 0x0190 (0x02A8 - 0x0118)
struct FAnimNode_AttackAngling : public FAnimNode_SkeletalControlBase
{
	struct FSpineSpaceAdditive                         SpineSpaceAdditivePose;                                   // 0x0118(0x0084) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	struct FBoneReference                              head;                                                     // 0x01A0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              Neck;                                                     // 0x01B8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              Spine;                                                    // 0x01D0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftShoulder;                                             // 0x01E8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftArm;                                                  // 0x0200(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftForearm;                                              // 0x0218(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHand;                                                 // 0x0230(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightShoulder;                                            // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightArm;                                                 // 0x0260(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightForearm;                                             // 0x0278(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightHand;                                                // 0x0290(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_Dismemberment
// 0x0010 (0x0128 - 0x0118)
struct FAnimNode_Dismemberment : public FAnimNode_SkeletalControlBase
{
	struct FAnimNodePackedDismemberment                Dismemberment;                                            // 0x0118(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_FaceCustomization
// 0x0020 (0x0138 - 0x0118)
struct FAnimNode_FaceCustomization : public FAnimNode_SkeletalControlBase
{
	struct FAnimNodePackedFaceCustomization            FaceCustomization;                                        // 0x0118(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_FastUMAJiggle
// 0x0250 (0x0368 - 0x0118)
struct FAnimNode_FastUMAJiggle : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     BreastsOffset;                                            // 0x0118(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LowerBackBellyOffset;                                     // 0x0124(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpineOffset;                                              // 0x0130(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftArmOffset;                                            // 0x013C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightArmOffset;                                           // 0x0148(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftLegOffset;                                            // 0x0154(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightLegOffset;                                           // 0x0160(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FBoneReference                              LowerBackBelly;                                           // 0x0170(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LowerBackAdjust;                                          // 0x0188(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              SpineAdjust;                                              // 0x01A0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightOuterBreast;                                         // 0x01B8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightInnerBreast;                                         // 0x01D0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftOuterBreast;                                          // 0x01E8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftInnerBreast;                                          // 0x0200(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftForearmTwistAdjust;                                   // 0x0218(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftForearmAdjust;                                        // 0x0230(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftArmAdjust;                                            // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftShoulderAdjust;                                       // 0x0260(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftTrapezius;                                            // 0x0278(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightForearmTwistAdjust;                                  // 0x0290(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightForearmAdjust;                                       // 0x02A8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightArmAdjust;                                           // 0x02C0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightShoulderAdjust;                                      // 0x02D8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightTrapezius;                                           // 0x02F0(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftLegAdjust;                                            // 0x0308(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftUpLegAdjust;                                          // 0x0320(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightLegAdjust;                                           // 0x0338(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightUpLegAdjust;                                         // 0x0350(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_MordhauSpringBone
// 0x0088 (0x01A0 - 0x0118)
struct FAnimNode_MordhauSpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              bone;                                                     // 0x0118(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsRotationSpring;                                        // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRotationFlipped;                                       // 0x0131(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	struct FVector                                     BoneOffset;                                               // 0x0134(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bIsBoneOffsetInComponentSpace;                            // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	float                                              BoneOffsetRotationProjection;                             // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringMass;                                               // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDisplacement;                                          // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDisplacementLimits;                                   // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	struct FVector                                     DisplacementLimitsMin;                                    // 0x015C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DisplacementLimitsMax;                                    // 0x0168(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TeleportThreshold;                                        // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoneLocation;                                             // 0x0178(0x000C) (IsPlainOldData)
	struct FVectorSpringState                          SpringState;                                              // 0x0184(0x0018)
	float                                              DeltaTime;                                                // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.AnimNode_RotateAroundPivot
// 0x0038 (0x0150 - 0x0118)
struct FAnimNode_RotateAroundPivot : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<EBoneControlSpace>                     Space;                                                    // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FBoneReference                              BoneToModify;                                             // 0x0120(0x0018) (Edit, BlueprintVisible)
	struct FRotator                                    Rotation;                                                 // 0x0138(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Pivot;                                                    // 0x0144(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.AnimNode_SpeedWarping
// 0x00F0 (0x0208 - 0x0118)
struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              Hips;                                                     // 0x0118(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftLegTarget;                                            // 0x0130(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftUpLeg;                                                // 0x0148(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftFoot;                                                 // 0x0160(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightLegTarget;                                           // 0x0178(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightUpLeg;                                               // 0x0190(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightFoot;                                                // 0x01A8(0x0018) (Edit, BlueprintVisible)
	float                                              Speed;                                                    // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalLegLength;                                           // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // 0x01C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FFloatSpringState                           SpringState;                                              // 0x01D4(0x0008)
	float                                              SpringStiffness;                                          // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringMass;                                               // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HipsOffsetRemapIn;                                        // 0x01E8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   HipsOffsetRemapOut;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   HipsOffsetClamp;                                          // 0x01F8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HipsZOffset;                                              // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.AnimNode_SpineSpreader
// 0x0080 (0x0198 - 0x0118)
struct FAnimNode_SpineSpreader : public FAnimNode_SkeletalControlBase
{
	float                                              SpreadPercentage;                                         // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FBoneReference                              Spine1;                                                   // 0x0120(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightShoulder;                                            // 0x0138(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightArm;                                                 // 0x0150(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightForearm;                                             // 0x0168(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightHand;                                                // 0x0180(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.AnimNode_TwoBoneIKOffset
// 0x0030 (0x02A0 - 0x0270)
struct FAnimNode_TwoBoneIKOffset : public FAnimNode_TwoBoneIK
{
	struct FVector                                     OffsetVector;                                             // 0x0270(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotateEndBonePivot;                                       // 0x027C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotateEndBoneOffset;                                      // 0x0288(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseParentZLimit;                                         // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	float                                              ParentZLimitOffset;                                       // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEffectorLocationIsOffset;                                // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
};

// ScriptStruct Mordhau.AnimNode_WeightShift
// 0x0068 (0x0180 - 0x0118)
struct FAnimNode_WeightShift : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<EBoneControlSpace>                     Space;                                                    // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FBoneReference                              BoneToModify;                                             // 0x0120(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              Bone1ToMaintain;                                          // 0x0138(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              Bone2ToMaintain;                                          // 0x0150(0x0018) (Edit, BlueprintVisible)
	struct FRotator                                    Rotation;                                                 // 0x0168(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Pivot;                                                    // 0x0174(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.CharacterInventory
// 0x0020
struct FCharacterInventory
{
	class AMordhauEquipment*                           RightHand;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           LeftHand;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AMordhauEquipment*>                   Equipment;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.RichPresence
// 0x0028
struct FRichPresence
{
	ERichPresenceStatus                                Status;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     GameMode;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.ResponseData
// 0x0010
struct FResponseData
{
	struct FString                                     item_json;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.InventoryData
// 0x0010
struct FInventoryData
{
	struct FResponseData                               response;                                                 // 0x0000(0x0010)
};

// ScriptStruct Mordhau.ItemData
// 0x0090
struct FItemData
{
	struct FString                                     accountid;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (ZeroConstructor)
	int                                                quantity;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     originalitemid;                                           // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ItemDefID;                                                // 0x0038(0x0010) (ZeroConstructor)
	int                                                appid;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     acquired;                                                 // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     State;                                                    // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     Origin;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     state_changed_timestamp;                                  // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.InventoryOperation
// 0x0010
struct FInventoryOperation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.ConsolidateItemsOperation
// 0x0018 (0x0028 - 0x0010)
struct FConsolidateItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Mordhau.SplitItemsOperation
// 0x0010 (0x0020 - 0x0010)
struct FSplitItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.DropItemsOperation
// 0x0010 (0x0020 - 0x0010)
struct FDropItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.DeserializeItemsOperation
// 0x0020 (0x0030 - 0x0010)
struct FDeserializeItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Mordhau.SerializeItemsOperation
// 0x0000 (0x0010 - 0x0010)
struct FSerializeItemsOperation : public FInventoryOperation
{

};

// ScriptStruct Mordhau.UnlockItemOperation
// 0x0008 (0x0018 - 0x0010)
struct FUnlockItemOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.AddItemsOperation
// 0x0010 (0x0020 - 0x0010)
struct FAddItemsOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Mordhau.AddItemOperation
// 0x0008 (0x0018 - 0x0010)
struct FAddItemOperation : public FInventoryOperation
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Mordhau.RefreshItemsOperation
// 0x0000 (0x0010 - 0x0010)
struct FRefreshItemsOperation : public FInventoryOperation
{

};

// ScriptStruct Mordhau.ColorTableEntry
// 0x0028
struct FColorTableEntry
{
	struct FText                                       EntryName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.MordhauColorTable
// 0x0028
struct FMordhauColorTable
{
	struct FText                                       TableName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FColorTableEntry>                    Entries;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.CachedAvatars
// 0x0018
struct FCachedAvatars
{
	TWeakObjectPtr<class UTexture2D>                   Small;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UTexture2D>                   Medium;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UTexture2D>                   Large;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.SoundClassInfo
// 0x0018
struct FSoundClassInfo
{
	class USoundClass*                                 SoundClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USoundMix*>                           SoundMixes;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.PermutationValuePair
// 0x0008
struct FPermutationValuePair
{
	int                                                Permutation;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.MordhauWebAPIRequest
// 0x0078
struct FMordhauWebAPIRequest
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Mordhau.Reward
// 0x0018
struct FReward
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                Gold;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                XP;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PlayFabGlobalData
// 0x00B0
struct FPlayFabGlobalData
{
	TArray<uint64_t>                                   Admins;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TMap<uint64_t, int64_t>                            BannedPlayers;                                            // 0x0010(0x0050) (ZeroConstructor)
	TMap<uint64_t, int64_t>                            MutedPlayers;                                             // 0x0060(0x0050) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayFabServerInfo
// 0x0020
struct FPlayFabServerInfo
{
	struct FString                                     ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        Mods;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayFabStat
// 0x0018
struct FPlayFabStat
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Version;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PlayFabStats
// 0x0050
struct FPlayFabStats
{
	TMap<struct FString, struct FPlayFabStat>          Stats;                                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Mordhau.PlayFabPlayerData
// 0x0018
struct FPlayFabPlayerData
{
	bool                                               bImportedInventory;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImportedOfficialServerStats;                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	int64_t                                            BanEndTime;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            MuteEndTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.SerializedItems
// 0x0020
struct FSerializedItems
{
	uint32_t                                           BufferSize;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Data;                                                     // 0x0008(0x0010) (ZeroConstructor)
	uint32_t                                           Timestamp;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
