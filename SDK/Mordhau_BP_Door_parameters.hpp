#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Door.BP_Door_C.GetDoorToActorAngle
struct ABP_Door_C_GetDoorToActorAngle_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDegrees;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Door.BP_Door_C.GetDoorForwardVector
struct ABP_Door_C_GetDoorForwardVector_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Door.BP_Door_C.OnRep_DoorState
struct ABP_Door_C_OnRep_DoorState_Params
{
};

// Function BP_Door.BP_Door_C.UserConstructionScript
struct ABP_Door_C_UserConstructionScript_Params
{
};

// Function BP_Door.BP_Door_C.ReceiveBeginPlay
struct ABP_Door_C_ReceiveBeginPlay_Params
{
};

// Function BP_Door.BP_Door_C.ReceiveTick
struct ABP_Door_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Door.BP_Door_C.OnInteractionStart
struct ABP_Door_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Door.BP_Door_C.ReceiveAnyDamage
struct ABP_Door_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Door.BP_Door_C.ExecuteUbergraph_BP_Door
struct ABP_Door_C_ExecuteUbergraph_BP_Door_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
