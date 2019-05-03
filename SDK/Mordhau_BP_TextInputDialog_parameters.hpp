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

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetEnteredText
struct UBP_TextInputDialog_C_SetEnteredText_Params
{
	struct FText                                       EnteredText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.GetEnteredText
struct UBP_TextInputDialog_C_GetEnteredText_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetTitleText
struct UBP_TextInputDialog_C_SetTitleText_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetRightButtonText
struct UBP_TextInputDialog_C_SetRightButtonText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetLeftButtonText
struct UBP_TextInputDialog_C_SetLeftButtonText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.GetHintText
struct UBP_TextInputDialog_C_GetHintText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBP_TextInputDialog_C_BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature
struct UBP_TextInputDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature_Params
{
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature
struct UBP_TextInputDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature_Params
{
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.Show
struct UBP_TextInputDialog_C_Show_Params
{
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.Hide
struct UBP_TextInputDialog_C_Hide_Params
{
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBP_TextInputDialog_C_BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature
struct UBP_TextInputDialog_C_BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature
struct UBP_TextInputDialog_C_BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog
struct UBP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.TextChanged__DelegateSignature
struct UBP_TextInputDialog_C_TextChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.TextCommitted__DelegateSignature
struct UBP_TextInputDialog_C_TextCommitted__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           Commit_Method;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.RightButtonClicked__DelegateSignature
struct UBP_TextInputDialog_C_RightButtonClicked__DelegateSignature_Params
{
};

// Function BP_TextInputDialog.BP_TextInputDialog_C.LeftButtonClicked__DelegateSignature
struct UBP_TextInputDialog_C_LeftButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
