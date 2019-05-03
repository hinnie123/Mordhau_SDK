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

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SetWidgetBinding
struct UBP_KeyBindingsSettings_C_SetWidgetBinding_Params
{
	class UBP_KeyBindingElementWidget_C*               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsPrimary;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindDuplicateBindingWidget
struct UBP_KeyBindingsSettings_C_FindDuplicateBindingWidget_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsPrimary;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_KeyBindingElementWidget_C*               Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SelectWidget
struct UBP_KeyBindingsSettings_C_SelectWidget_Params
{
	class UBP_KeyBindingElementWidget_C*               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseWheel
struct UBP_KeyBindingsSettings_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewMouseButtonDown
struct UBP_KeyBindingsSettings_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseMove
struct UBP_KeyBindingsSettings_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindWidgetByName
struct UBP_KeyBindingsSettings_C_FindWidgetByName_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_KeyBindingElementWidget_C*               Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.PopulateCustomBindings
struct UBP_KeyBindingsSettings_C_PopulateCustomBindings_Params
{
	int                                                SourceScheme;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.HandleInputEvent
struct UBP_KeyBindingsSettings_C_HandleInputEvent_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsAxis;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 _Handled;                                                 // (Parm, OutParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnAnalogValueChanged
struct UBP_KeyBindingsSettings_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewKeyDown
struct UBP_KeyBindingsSettings_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingsSettings_C_BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingsSettings_C_BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingsSettings_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.Construct
struct UBP_KeyBindingsSettings_C_Construct_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnYesClicked
struct UBP_KeyBindingsSettings_C_OnYesClicked_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnNoClicked
struct UBP_KeyBindingsSettings_C_OnNoClicked_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ApplyKeyBindings
struct UBP_KeyBindingsSettings_C_ApplyKeyBindings_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ExecuteUbergraph_BP_KeyBindingsSettings
struct UBP_KeyBindingsSettings_C_ExecuteUbergraph_BP_KeyBindingsSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
