// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetEnteredText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   EnteredText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::SetEnteredText(const struct FText& EnteredText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetEnteredText");

	UBP_TextInputDialog_C_SetEnteredText_Params params;
	params.EnteredText = EnteredText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.GetEnteredText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_TextInputDialog_C::GetEnteredText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.GetEnteredText");

	UBP_TextInputDialog_C_GetEnteredText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::SetTitleText(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetTitleText");

	UBP_TextInputDialog_C_SetTitleText_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.SetRightButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::SetRightButtonText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetRightButtonText");

	UBP_TextInputDialog_C_SetRightButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.SetLeftButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::SetLeftButtonText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetLeftButtonText");

	UBP_TextInputDialog_C_SetLeftButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.GetHintText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_TextInputDialog_C::GetHintText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.GetHintText");

	UBP_TextInputDialog_C_GetHintText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TextInputDialog_C::BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBP_TextInputDialog_C::BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBP_TextInputDialog_C::BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_TextInputDialog_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.Show");

	UBP_TextInputDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_TextInputDialog_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.Hide");

	UBP_TextInputDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TextInputDialog_C::BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_TextInputDialog_C::BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_TextInputDialog_C::BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TextInputDialog_C::ExecuteUbergraph_BP_TextInputDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog");

	UBP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.TextChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::TextChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.TextChanged__DelegateSignature");

	UBP_TextInputDialog_C_TextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.TextCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>       Commit_Method                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TextInputDialog_C::TextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> Commit_Method)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.TextCommitted__DelegateSignature");

	UBP_TextInputDialog_C_TextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.Commit_Method = Commit_Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.RightButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_TextInputDialog_C::RightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.RightButtonClicked__DelegateSignature");

	UBP_TextInputDialog_C_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.LeftButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_TextInputDialog_C::LeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.LeftButtonClicked__DelegateSignature");

	UBP_TextInputDialog_C_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
