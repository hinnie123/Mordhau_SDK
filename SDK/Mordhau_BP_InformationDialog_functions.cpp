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

// Function BP_InformationDialog.BP_InformationDialog_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_InformationDialog_C::SetButtonText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.SetButtonText");

	UBP_InformationDialog_C_SetButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InformationDialog.BP_InformationDialog_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_InformationDialog_C::SetTitleText(const struct FText& TitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.SetTitleText");

	UBP_InformationDialog_C_SetTitleText_Params params;
	params.TitleText = TitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InformationDialog.BP_InformationDialog_C.GetInfoText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_InformationDialog_C::GetInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.GetInfoText");

	UBP_InformationDialog_C_GetInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InformationDialog.BP_InformationDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBP_InformationDialog_C::BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature");

	UBP_InformationDialog_C_BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InformationDialog.BP_InformationDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_InformationDialog_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.Show");

	UBP_InformationDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InformationDialog.BP_InformationDialog_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_InformationDialog_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.Hide");

	UBP_InformationDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InformationDialog.BP_InformationDialog_C.ExecuteUbergraph_BP_InformationDialog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InformationDialog_C::ExecuteUbergraph_BP_InformationDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.ExecuteUbergraph_BP_InformationDialog");

	UBP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InformationDialog.BP_InformationDialog_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_InformationDialog_C::ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.ButtonClicked__DelegateSignature");

	UBP_InformationDialog_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
