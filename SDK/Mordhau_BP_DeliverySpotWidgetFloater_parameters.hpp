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

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.SetProgressBarStyle
struct UBP_DeliverySpotWidgetFloater_C_SetProgressBarStyle_Params
{
};

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.UpdateProgress
struct UBP_DeliverySpotWidgetFloater_C_UpdateProgress_Params
{
	float                                              NewProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.Tick
struct UBP_DeliverySpotWidgetFloater_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.Construct
struct UBP_DeliverySpotWidgetFloater_C_Construct_Params
{
};

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.ExecuteUbergraph_BP_DeliverySpotWidgetFloater
struct UBP_DeliverySpotWidgetFloater_C_ExecuteUbergraph_BP_DeliverySpotWidgetFloater_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
