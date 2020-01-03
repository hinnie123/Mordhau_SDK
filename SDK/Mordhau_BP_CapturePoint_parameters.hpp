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

// Function BP_CapturePoint.BP_CapturePoint_C.OnObjectivesCompleted
struct ABP_CapturePoint_C_OnObjectivesCompleted_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ShowPushDefenderAnnouncement
struct ABP_CapturePoint_C_ShowPushDefenderAnnouncement_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ShowPushAttackerAnnouncement
struct ABP_CapturePoint_C_ShowPushAttackerAnnouncement_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ObjectivesChanged
struct ABP_CapturePoint_C_ObjectivesChanged_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.Set Cap Point Widget Colors
struct ABP_CapturePoint_C_Set_Cap_Point_Widget_Colors_Params
{
	struct FLinearColor                                Fill_Color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Progress_Bar_Color;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CapturePoint.BP_CapturePoint_C.GetTeamRelevance
struct ABP_CapturePoint_C_GetTeamRelevance_Params
{
	unsigned char                                      Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Relevance;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CapturePoint.BP_CapturePoint_C.UserConstructionScript
struct ABP_CapturePoint_C_UserConstructionScript_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ReceiveBeginPlay
struct ABP_CapturePoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.OnCapturingTeamChanged
struct ABP_CapturePoint_C_OnCapturingTeamChanged_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.OnOwningTeamChanged
struct ABP_CapturePoint_C_OnOwningTeamChanged_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.EnemyGainedPrerequisites
struct ABP_CapturePoint_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.EnemyLostPrerequisites
struct ABP_CapturePoint_C_EnemyLostPrerequisites_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.UpdateUIWidgets
struct ABP_CapturePoint_C_UpdateUIWidgets_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.OnStartedFlashing
struct ABP_CapturePoint_C_OnStartedFlashing_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.OnStoppedFlashing
struct ABP_CapturePoint_C_OnStoppedFlashing_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.TriggerWinDelayed
struct ABP_CapturePoint_C_TriggerWinDelayed_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.Pulse
struct ABP_CapturePoint_C_Pulse_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ExecuteUbergraph_BP_CapturePoint
struct ABP_CapturePoint_C_ExecuteUbergraph_BP_CapturePoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
