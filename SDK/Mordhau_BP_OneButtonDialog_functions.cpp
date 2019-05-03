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

// Function BP_OneButtonDialog.BP_OneButtonDialog_C.GetButtonText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_OneButtonDialog_C::GetButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.GetButtonText");

	UBP_OneButtonDialog_C_GetButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_OneButtonDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.Construct");

	UBP_OneButtonDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OneButtonDialog_C::BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature");

	UBP_OneButtonDialog_C_BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_OneButtonDialog_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.Show");

	UBP_OneButtonDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_OneButtonDialog_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.Hide");

	UBP_OneButtonDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.ExecuteUbergraph_BP_OneButtonDialog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OneButtonDialog_C::ExecuteUbergraph_BP_OneButtonDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.ExecuteUbergraph_BP_OneButtonDialog");

	UBP_OneButtonDialog_C_ExecuteUbergraph_BP_OneButtonDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_OneButtonDialog_C::ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.ButtonClicked__DelegateSignature");

	UBP_OneButtonDialog_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
