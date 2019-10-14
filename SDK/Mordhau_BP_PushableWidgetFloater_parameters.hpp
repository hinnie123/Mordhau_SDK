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

// Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.UpdateProgress
struct UBP_PushableWidgetFloater_C_UpdateProgress_Params
{
	float                                              NewProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.Tick
struct UBP_PushableWidgetFloater_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.Construct
struct UBP_PushableWidgetFloater_C_Construct_Params
{
};

// Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.ExecuteUbergraph_BP_PushableWidgetFloater
struct UBP_PushableWidgetFloater_C_ExecuteUbergraph_BP_PushableWidgetFloater_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
