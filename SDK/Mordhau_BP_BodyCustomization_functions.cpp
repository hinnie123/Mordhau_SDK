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

// Function BP_BodyCustomization.BP_BodyCustomization_C.SkinColorHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewSkinColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::SkinColorHovered(int NewSkinColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.SkinColorHovered");

	UBP_BodyCustomization_C_SkinColorHovered_Params params;
	params.NewSkinColor = NewSkinColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateDoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnlyUpdateMaterials            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::UpdateDoll(bool OnlyUpdateMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateDoll");

	UBP_BodyCustomization_C_UpdateDoll_Params params;
	params.OnlyUpdateMaterials = OnlyUpdateMaterials;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BodyCustomization_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateWidget");

	UBP_BodyCustomization_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.GetValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Voice                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Fat                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Skinny                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Strong                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SkinColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            VoiceCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FatCount                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SkinnyCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StrongCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFemale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::GetValues(int* Voice, int* Fat, int* Skinny, int* Strong, int* SkinColor, int* VoiceCount, int* FatCount, int* SkinnyCount, int* StrongCount, bool* IsFemale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.GetValues");

	UBP_BodyCustomization_C_GetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voice != nullptr)
		*Voice = params.Voice;
	if (Fat != nullptr)
		*Fat = params.Fat;
	if (Skinny != nullptr)
		*Skinny = params.Skinny;
	if (Strong != nullptr)
		*Strong = params.Strong;
	if (SkinColor != nullptr)
		*SkinColor = params.SkinColor;
	if (VoiceCount != nullptr)
		*VoiceCount = params.VoiceCount;
	if (FatCount != nullptr)
		*FatCount = params.FatCount;
	if (SkinnyCount != nullptr)
		*SkinnyCount = params.SkinnyCount;
	if (StrongCount != nullptr)
		*StrongCount = params.StrongCount;
	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.RegisterPreviewEvents
// (BlueprintCallable, BlueprintEvent)

void UBP_BodyCustomization_C::RegisterPreviewEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.RegisterPreviewEvents");

	UBP_BodyCustomization_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.OnDrag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::OnDrag(float DeltaDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.OnDrag");

	UBP_BodyCustomization_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.OnScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScrollDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::OnScroll(float ScrollDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.OnScroll");

	UBP_BodyCustomization_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            LstSelectedColorIndex          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature_Params params;
	params.LstSelectedColorIndex = LstSelectedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BodyCustomization_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.SetActive");

	UBP_BodyCustomization_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.OnProfileChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BodyCustomization_C::OnProfileChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.OnProfileChanged");

	UBP_BodyCustomization_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BodyCustomization.BP_BodyCustomization_C.ExecuteUbergraph_BP_BodyCustomization
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BodyCustomization_C::ExecuteUbergraph_BP_BodyCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.ExecuteUbergraph_BP_BodyCustomization");

	UBP_BodyCustomization_C_ExecuteUbergraph_BP_BodyCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
