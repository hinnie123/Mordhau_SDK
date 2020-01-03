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

// Function BP_FireField.BP_FireField_C.GetAgent
struct ABP_FireField_C_GetAgent_Params
{
	class AActor*                                      Agent;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FireField.BP_FireField_C.UserConstructionScript
struct ABP_FireField_C_UserConstructionScript_Params
{
};

// Function BP_FireField.BP_FireField_C.ReceiveTick
struct ABP_FireField_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FireField.BP_FireField_C.BeginFieldDeactivation
struct ABP_FireField_C_BeginFieldDeactivation_Params
{
};

// Function BP_FireField.BP_FireField_C.ExecuteUbergraph_BP_FireField
struct ABP_FireField_C_ExecuteUbergraph_BP_FireField_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
