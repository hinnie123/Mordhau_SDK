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

// Function BP_SliderEntry.BP_SliderEntry_C.GetValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SliderEntry_C::GetValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.GetValue");

	UBP_SliderEntry_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_SliderEntry.BP_SliderEntry_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SliderEntry_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.SetValue");

	UBP_SliderEntry_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliderEntry.BP_SliderEntry_C.GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_SliderEntry_C::GetPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.GetPercent");

	UBP_SliderEntry_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SliderEntry.BP_SliderEntry_C.GetNumericValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_SliderEntry_C::GetNumericValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.GetNumericValue");

	UBP_SliderEntry_C_GetNumericValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SliderEntry_C::BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SliderEntry_C::BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SliderEntry_C::BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SliderEntry_C::BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliderEntry.BP_SliderEntry_C.ExecuteUbergraph_BP_SliderEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SliderEntry_C::ExecuteUbergraph_BP_SliderEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.ExecuteUbergraph_BP_SliderEntry");

	UBP_SliderEntry_C_ExecuteUbergraph_BP_SliderEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliderEntry.BP_SliderEntry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_SliderEntry_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.OnHovered__DelegateSignature");

	UBP_SliderEntry_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliderEntry.BP_SliderEntry_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SliderEntry_C::OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.OnValueChanged__DelegateSignature");

	UBP_SliderEntry_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
