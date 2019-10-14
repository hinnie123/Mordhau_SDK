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

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Get_timer_Text_Visibility_1
struct UBP_PushHUDWidget_C_Get_timer_Text_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Get_timer_Text_Text_1
struct UBP_PushHUDWidget_C_Get_timer_Text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.InitializeCapPointGroup
struct UBP_PushHUDWidget_C_InitializeCapPointGroup_Params
{
	struct FCapturePointGroup                          Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.GetLeftTeamColor
struct UBP_PushHUDWidget_C_GetLeftTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.GetRightTeamColor
struct UBP_PushHUDWidget_C_GetRightTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Tick
struct UBP_PushHUDWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.AddTime
struct UBP_PushHUDWidget_C_AddTime_Params
{
	float                                              Time_to_add__seconds_;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.ExecuteUbergraph_BP_PushHUDWidget
struct UBP_PushHUDWidget_C_ExecuteUbergraph_BP_PushHUDWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
