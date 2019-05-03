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

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnhideMouse
struct UBP_CustomizationPreview_C_UnhideMouse_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.HideMouse
struct UBP_CustomizationPreview_C_HideMouse_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyDown
struct UBP_CustomizationPreview_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonUp
struct UBP_CustomizationPreview_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonDown
struct UBP_CustomizationPreview_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnbindEvents
struct UBP_CustomizationPreview_C_UnbindEvents_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheel
struct UBP_CustomizationPreview_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseMove
struct UBP_CustomizationPreview_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseLeave
struct UBP_CustomizationPreview_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseEnter
struct UBP_CustomizationPreview_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.Tick
struct UBP_CustomizationPreview_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.ExecuteUbergraph_BP_CustomizationPreview
struct UBP_CustomizationPreview_C_ExecuteUbergraph_BP_CustomizationPreview_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyPressed__DelegateSignature
struct UBP_CustomizationPreview_C_OnKeyPressed__DelegateSignature_Params
{
	struct FKey                                        KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBReleased__DelegateSignature
struct UBP_CustomizationPreview_C_OnMMBReleased__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBPressed__DelegateSignature
struct UBP_CustomizationPreview_C_OnMMBPressed__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBReleased__DelegateSignature
struct UBP_CustomizationPreview_C_OnRMBReleased__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBPressed__DelegateSignature
struct UBP_CustomizationPreview_C_OnRMBPressed__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBReleased__DelegateSignature
struct UBP_CustomizationPreview_C_OnLMBReleased__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBPressed__DelegateSignature
struct UBP_CustomizationPreview_C_OnLMBPressed__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseAxis__DelegateSignature
struct UBP_CustomizationPreview_C_OnMouseAxis__DelegateSignature_Params
{
	struct FVector2D                                   Movement;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheelScrolling__DelegateSignature
struct UBP_CustomizationPreview_C_OnMouseWheelScrolling__DelegateSignature_Params
{
	float                                              ScrollDelta;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnDrag__DelegateSignature
struct UBP_CustomizationPreview_C_OnDrag__DelegateSignature_Params
{
	float                                              DeltaDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
