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

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.EndEditBinding
struct UBP_KeyBindingElementWidget_C_EndEditBinding_Params
{
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetActionNameText
struct UBP_KeyBindingElementWidget_C_GetActionNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetCustomBinding
struct UBP_KeyBindingElementWidget_C_GetCustomBinding_Params
{
	bool                                               bIsPrimary;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm, OutParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.SetCustomBinding
struct UBP_KeyBindingElementWidget_C_SetCustomBinding_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsPrimary;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetKeyText
struct UBP_KeyBindingElementWidget_C_GetKeyText_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsEditingBinding;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KeyText;                                                  // (Parm, OutParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetSecondaryKeyText
struct UBP_KeyBindingElementWidget_C_GetSecondaryKeyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetPrimaryKeyText
struct UBP_KeyBindingElementWidget_C_GetPrimaryKeyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.AddCustomBinding
struct UBP_KeyBindingElementWidget_C_AddCustomBinding_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.StartEditBinding
struct UBP_KeyBindingElementWidget_C_StartEditBinding_Params
{
	bool                                               bIsPrimary;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.Construct
struct UBP_KeyBindingElementWidget_C_Construct_Params
{
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingElementWidget_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingElementWidget_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.ExecuteUbergraph_BP_KeyBindingElementWidget
struct UBP_KeyBindingElementWidget_C_ExecuteUbergraph_BP_KeyBindingElementWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
