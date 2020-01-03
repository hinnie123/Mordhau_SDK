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

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.GetTransformAlongSplineOffset
struct ABP_SplinePushableActor_C_GetTransformAlongSplineOffset_Params
{
	float                                              OffsetA;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetB;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Output;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.UserConstructionScript
struct ABP_SplinePushableActor_C_UserConstructionScript_Params
{
};

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.ReceiveBeginPlay
struct ABP_SplinePushableActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.OnProgressUpdated
struct ABP_SplinePushableActor_C_OnProgressUpdated_Params
{
	float*                                             OldProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.ExecuteUbergraph_BP_SplinePushableActor
struct ABP_SplinePushableActor_C_ExecuteUbergraph_BP_SplinePushableActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
