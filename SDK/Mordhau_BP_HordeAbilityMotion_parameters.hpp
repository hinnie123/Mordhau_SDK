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

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnBegin
struct UBP_HordeAbilityMotion_C_OnBegin_Params
{
};

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnLeave
struct UBP_HordeAbilityMotion_C_OnLeave_Params
{
	bool*                                              Interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnTick
struct UBP_HordeAbilityMotion_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.ExecuteUbergraph_BP_HordeAbilityMotion
struct UBP_HordeAbilityMotion_C_ExecuteUbergraph_BP_HordeAbilityMotion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
