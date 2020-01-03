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

// Function BP_HookshotProjectile.BP_HookshotProjectile_C.UserConstructionScript
struct ABP_HookshotProjectile_C_UserConstructionScript_Params
{
};

// Function BP_HookshotProjectile.BP_HookshotProjectile_C.ReceiveTick
struct ABP_HookshotProjectile_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HookshotProjectile.BP_HookshotProjectile_C.OnProjectileDamagedCharacter
struct ABP_HookshotProjectile_C_OnProjectileDamagedCharacter_Params
{
	class AAdvancedCharacter**                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWillKill;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    WorldLocation;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HookshotProjectile.BP_HookshotProjectile_C.ExecuteUbergraph_BP_HookshotProjectile
struct ABP_HookshotProjectile_C_ExecuteUbergraph_BP_HookshotProjectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
