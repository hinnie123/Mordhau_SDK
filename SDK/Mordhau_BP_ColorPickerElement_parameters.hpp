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

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_Lock_Visibility_1
struct UBP_ColorPickerElement_C_Get_Lock_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_ImageButton_ToolTipText_1
struct UBP_ColorPickerElement_C_Get_ImageButton_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.IsSelectedElement
struct UBP_ColorPickerElement_C_IsSelectedElement_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetData
struct UBP_ColorPickerElement_C_SetData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetColor
struct UBP_ColorPickerElement_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.Construct
struct UBP_ColorPickerElement_C_Construct_Params
{
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseEnter
struct UBP_ColorPickerElement_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseLeave
struct UBP_ColorPickerElement_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature
struct UBP_ColorPickerElement_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature
struct UBP_ColorPickerElement_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.ExecuteUbergraph_BP_ColorPickerElement
struct UBP_ColorPickerElement_C_ExecuteUbergraph_BP_ColorPickerElement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
