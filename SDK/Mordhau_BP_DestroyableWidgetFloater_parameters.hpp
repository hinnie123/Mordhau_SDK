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

// Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.UpdateHealth
struct UBP_DestroyableWidgetFloater_C_UpdateHealth_Params
{
	float                                              NewHealth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.Tick
struct UBP_DestroyableWidgetFloater_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.ExecuteUbergraph_BP_DestroyableWidgetFloater
struct UBP_DestroyableWidgetFloater_C_ExecuteUbergraph_BP_DestroyableWidgetFloater_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
