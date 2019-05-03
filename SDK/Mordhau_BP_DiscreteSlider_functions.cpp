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

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_DiscreteSlider_C::GetPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetPercent");

	UBP_DiscreteSlider_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.ContinualizeValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ContinualizedValue             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DiscreteSlider_C::ContinualizeValue(int Value, float* ContinualizedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.ContinualizeValue");

	UBP_DiscreteSlider_C_ContinualizeValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContinualizedValue != nullptr)
		*ContinualizedValue = params.ContinualizedValue;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChangedInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscreteSlider_C::OnValueChangedInternal(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChangedInternal");

	UBP_DiscreteSlider_C_OnValueChangedInternal_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DiscreteSlider_C::GetValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetValue");

	UBP_DiscreteSlider_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumOfIndices                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscreteSlider_C::SetValue(int Value, int NumOfIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.SetValue");

	UBP_DiscreteSlider_C_SetValue_Params params;
	params.Value = Value;
	params.NumOfIndices = NumOfIndices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.DiscretizeValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DiscretizedValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DiscreteSlider_C::DiscretizeValue(float Value, int* DiscretizedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.DiscretizeValue");

	UBP_DiscreteSlider_C_DiscretizeValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DiscretizedValue != nullptr)
		*DiscretizedValue = params.DiscretizedValue;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscreteSlider_C::BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature");

	UBP_DiscreteSlider_C_BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UBP_DiscreteSlider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature");

	UBP_DiscreteSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.ExecuteUbergraph_BP_DiscreteSlider
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscreteSlider_C::ExecuteUbergraph_BP_DiscreteSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.ExecuteUbergraph_BP_DiscreteSlider");

	UBP_DiscreteSlider_C_ExecuteUbergraph_BP_DiscreteSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnStartedTouching__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DiscreteSlider_C::OnStartedTouching__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnStartedTouching__DelegateSignature");

	UBP_DiscreteSlider_C_OnStartedTouching__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscreteSlider_C::OnValueChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChanged__DelegateSignature");

	UBP_DiscreteSlider_C_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
