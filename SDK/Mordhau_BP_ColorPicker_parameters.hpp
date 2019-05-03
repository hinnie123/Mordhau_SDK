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

// Function BP_ColorPicker.BP_ColorPicker_C.CloseColorPicker
struct UBP_ColorPicker_C_CloseColorPicker_Params
{
};

// Function BP_ColorPicker.BP_ColorPicker_C.SetColorsAndIndex
struct UBP_ColorPicker_C_SetColorsAndIndex_Params
{
	TArray<class UClass*>                              Colors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedColors
struct UBP_ColorPicker_C_GetSelectedColors_Params
{
	TArray<class UClass*>                              Colors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ColorPicker.BP_ColorPicker_C.SetIndex
struct UBP_ColorPicker_C_SetIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedIndex
struct UBP_ColorPicker_C_GetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.SetColors
struct UBP_ColorPicker_C_SetColors_Params
{
	TArray<class UClass*>                              Colors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnClicked
struct UBP_ColorPicker_C_OnClicked_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature
struct UBP_ColorPicker_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnHovered
struct UBP_ColorPicker_C_OnHovered_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.UpdatePreviewColor
struct UBP_ColorPicker_C_UpdatePreviewColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnColsed
struct UBP_ColorPicker_C_OnColsed_Params
{
};

// Function BP_ColorPicker.BP_ColorPicker_C.ExecuteUbergraph_BP_ColorPicker
struct UBP_ColorPicker_C_ExecuteUbergraph_BP_ColorPicker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnColorPickerClosed__DelegateSignature
struct UBP_ColorPicker_C_OnColorPickerClosed__DelegateSignature_Params
{
	int                                                LstSelectedColorIndex;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnColorHovered__DelegateSignature
struct UBP_ColorPicker_C_OnColorHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnColorClicked__DelegateSignature
struct UBP_ColorPicker_C_OnColorClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
