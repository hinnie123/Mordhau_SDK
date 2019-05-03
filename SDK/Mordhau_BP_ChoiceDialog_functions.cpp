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

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetWaitingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWaitingMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChoiceDialog_C::SetWaitingMode(bool IsWaitingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetWaitingMode");

	UBP_ChoiceDialog_C_SetWaitingMode_Params params;
	params.IsWaitingMode = IsWaitingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_ChoiceDialog_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnPreviewKeyDown");

	UBP_ChoiceDialog_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.GetChoiceText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ChoiceDialog_C::GetChoiceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.GetChoiceText");

	UBP_ChoiceDialog_C_GetChoiceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChoiceDialog_C::SetTitleText(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetTitleText");

	UBP_ChoiceDialog_C_SetTitleText_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetRightButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChoiceDialog_C::SetRightButtonText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetRightButtonText");

	UBP_ChoiceDialog_C_SetRightButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetLeftButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChoiceDialog_C::SetLeftButtonText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetLeftButtonText");

	UBP_ChoiceDialog_C_SetLeftButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBP_ChoiceDialog_C::BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature");

	UBP_ChoiceDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBP_ChoiceDialog_C::BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature");

	UBP_ChoiceDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_ChoiceDialog_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.Show");

	UBP_ChoiceDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_ChoiceDialog_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.Hide");

	UBP_ChoiceDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.ExecuteUbergraph_BP_ChoiceDialog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChoiceDialog_C::ExecuteUbergraph_BP_ChoiceDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.ExecuteUbergraph_BP_ChoiceDialog");

	UBP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.RightButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ChoiceDialog_C::RightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.RightButtonClicked__DelegateSignature");

	UBP_ChoiceDialog_C_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.LeftButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ChoiceDialog_C::LeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.LeftButtonClicked__DelegateSignature");

	UBP_ChoiceDialog_C_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
