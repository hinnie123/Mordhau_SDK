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

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.GetObjectiveProgress
struct ABP_FrontlinePushable_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.UpdateUIWidgets
struct ABP_FrontlinePushable_C_UpdateUIWidgets_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyLostPrerequisites
struct ABP_FrontlinePushable_C_EnemyLostPrerequisites_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyGainedPrerequisites
struct ABP_FrontlinePushable_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.Initialize
struct ABP_FrontlinePushable_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          CapturePoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.UserConstructionScript
struct ABP_FrontlinePushable_C_UserConstructionScript_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnProgressUpdated
struct ABP_FrontlinePushable_C_OnProgressUpdated_Params
{
	float*                                             OldProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnInitialize
struct ABP_FrontlinePushable_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyLostPrerequisites
struct ABP_FrontlinePushable_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyGainedPrerequisites
struct ABP_FrontlinePushable_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnUpdateUIWidgets
struct ABP_FrontlinePushable_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.PushableArrivedAtDestination
struct ABP_FrontlinePushable_C_PushableArrivedAtDestination_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.ExecuteUbergraph_BP_FrontlinePushable
struct ABP_FrontlinePushable_C_ExecuteUbergraph_BP_FrontlinePushable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
