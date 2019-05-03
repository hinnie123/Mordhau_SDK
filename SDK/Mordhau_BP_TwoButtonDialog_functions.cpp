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

// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.GetRightButtonText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_TwoButtonDialog_C::GetRightButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.GetRightButtonText");

	UBP_TwoButtonDialog_C_GetRightButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.Get_LeftButtonText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_TwoButtonDialog_C::Get_LeftButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.Get_LeftButtonText");

	UBP_TwoButtonDialog_C_Get_LeftButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_TwoButtonDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.Construct");

	UBP_TwoButtonDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_TwoButtonDialog_C::BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature");

	UBP_TwoButtonDialog_C_BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_TwoButtonDialog_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature");

	UBP_TwoButtonDialog_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_TwoButtonDialog_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.Show");

	UBP_TwoButtonDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_TwoButtonDialog_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.Hide");

	UBP_TwoButtonDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.ExecuteUbergraph_BP_TwoButtonDialog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TwoButtonDialog_C::ExecuteUbergraph_BP_TwoButtonDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.ExecuteUbergraph_BP_TwoButtonDialog");

	UBP_TwoButtonDialog_C_ExecuteUbergraph_BP_TwoButtonDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.RightButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_TwoButtonDialog_C::RightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.RightButtonClicked__DelegateSignature");

	UBP_TwoButtonDialog_C_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.LeftButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_TwoButtonDialog_C::LeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwoButtonDialog.BP_TwoButtonDialog_C.LeftButtonClicked__DelegateSignature");

	UBP_TwoButtonDialog_C_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
