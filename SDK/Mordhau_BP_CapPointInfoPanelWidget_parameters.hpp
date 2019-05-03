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

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetFillColorAndOpacity_1
struct UBP_CapPointInfoPanelWidget_C_GetFillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetPercent_1
struct UBP_CapPointInfoPanelWidget_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_Icon_Brush_1
struct UBP_CapPointInfoPanelWidget_C_Get_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_CapPointState_Text_1
struct UBP_CapPointInfoPanelWidget_C_Get_CapPointState_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Tick
struct UBP_CapPointInfoPanelWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Show
struct UBP_CapPointInfoPanelWidget_C_Show_Params
{
	class ABP_CapturePoint_C*                          Capture_Point_Ref;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Hide
struct UBP_CapPointInfoPanelWidget_C_Hide_Params
{
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.ExecuteUbergraph_BP_CapPointInfoPanelWidget
struct UBP_CapPointInfoPanelWidget_C_ExecuteUbergraph_BP_CapPointInfoPanelWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
