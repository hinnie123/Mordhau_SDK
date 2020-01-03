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

// Function BP_Medpack.BP_Medpack_C.ApplyHeal
struct ABP_Medpack_C_ApplyHeal_Params
{
	class AMordhauCharacter*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Medpack.BP_Medpack_C.CanHeldInteract
struct ABP_Medpack_C_CanHeldInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Medpack.BP_Medpack_C.CanInteract
struct ABP_Medpack_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Medpack.BP_Medpack_C.UserConstructionScript
struct ABP_Medpack_C_UserConstructionScript_Params
{
};

// Function BP_Medpack.BP_Medpack_C.FireProjectile
struct ABP_Medpack_C_FireProjectile_Params
{
	struct FVector*                                    Origin;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                OwningController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ExpectedDelay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Medpack.BP_Medpack_C.OnLoadedChanged
struct ABP_Medpack_C_OnLoadedChanged_Params
{
};

// Function BP_Medpack.BP_Medpack_C.OnHeldInteractionStart
struct ABP_Medpack_C_OnHeldInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Medpack.BP_Medpack_C.ExecuteUbergraph_BP_Medpack
struct ABP_Medpack_C_ExecuteUbergraph_BP_Medpack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
