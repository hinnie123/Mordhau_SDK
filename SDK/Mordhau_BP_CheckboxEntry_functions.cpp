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

// Function BP_CheckboxEntry.BP_CheckboxEntry_C.IsChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CheckboxEntry_C::IsChecked(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.IsChecked");

	UBP_CheckboxEntry_C_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetIsChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheckboxEntry_C::SetIsChecked(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetIsChecked");

	UBP_CheckboxEntry_C_SetIsChecked_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheckboxEntry.BP_CheckboxEntry_C.GetCheckedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECheckBoxState                 Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CheckboxEntry_C::GetCheckedState(ECheckBoxState* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.GetCheckedState");

	UBP_CheckboxEntry_C_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECheckBoxState                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheckboxEntry_C::SetCheckedState(ECheckBoxState Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetCheckedState");

	UBP_CheckboxEntry_C_SetCheckedState_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheckboxEntry_C::BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CheckboxEntry_C::BndEvt__Button_10_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UBP_CheckboxEntry_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheckboxEntry.BP_CheckboxEntry_C.ExecuteUbergraph_BP_CheckboxEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheckboxEntry_C::ExecuteUbergraph_BP_CheckboxEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.ExecuteUbergraph_BP_CheckboxEntry");

	UBP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheckboxEntry.BP_CheckboxEntry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CheckboxEntry_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.OnHovered__DelegateSignature");

	UBP_CheckboxEntry_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheckboxEntry.BP_CheckboxEntry_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheckboxEntry_C::OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.OnCheckStateChanged__DelegateSignature");

	UBP_CheckboxEntry_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
