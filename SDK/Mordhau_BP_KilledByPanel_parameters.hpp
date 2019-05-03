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

// Function BP_KilledByPanel.BP_KilledByPanel_C.Hide
struct UBP_KilledByPanel_C_Hide_Params
{
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.Show
struct UBP_KilledByPanel_C_Show_Params
{
	class AMordhauPlayerState*                         Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.Get_HealthProgressBar_Percent_1
struct UBP_KilledByPanel_C_Get_HealthProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.Get_StamProgressBar_Percent_1
struct UBP_KilledByPanel_C_Get_StamProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_2
struct UBP_KilledByPanel_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_1
struct UBP_KilledByPanel_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.TakeFromKiller
struct UBP_KilledByPanel_C_TakeFromKiller_Params
{
	class AMordhauPlayerState*                         KilledBy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.Tick
struct UBP_KilledByPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.OnAnimationFinished
struct UBP_KilledByPanel_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.ExecuteUbergraph_BP_KilledByPanel
struct UBP_KilledByPanel_C_ExecuteUbergraph_BP_KilledByPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
