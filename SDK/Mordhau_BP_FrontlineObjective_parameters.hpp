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

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnAnyObjectiveProgressChanged
struct UBP_FrontlineObjective_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnInitialize
struct UBP_FrontlineObjective_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnUpdateUIWidgets
struct UBP_FrontlineObjective_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyLostPrerequisites
struct UBP_FrontlineObjective_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyGainedPrerequisites
struct UBP_FrontlineObjective_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.GetObjectiveProgress
struct UBP_FrontlineObjective_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
