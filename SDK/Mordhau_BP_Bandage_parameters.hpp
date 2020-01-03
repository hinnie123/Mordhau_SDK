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

// Function BP_Bandage.BP_Bandage_C.OnRequestModeSwitch
struct ABP_Bandage_C_OnRequestModeSwitch_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Bandage.BP_Bandage_C.OnRequestFire
struct ABP_Bandage_C_OnRequestFire_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Bandage.BP_Bandage_C.ApplyHeal
struct ABP_Bandage_C_ApplyHeal_Params
{
};

// Function BP_Bandage.BP_Bandage_C.UserConstructionScript
struct ABP_Bandage_C_UserConstructionScript_Params
{
};

// Function BP_Bandage.BP_Bandage_C.FireProjectile
struct ABP_Bandage_C_FireProjectile_Params
{
	struct FVector*                                    Origin;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                OwningController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ExpectedDelay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bandage.BP_Bandage_C.ExecuteUbergraph_BP_Bandage
struct ABP_Bandage_C_ExecuteUbergraph_BP_Bandage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
