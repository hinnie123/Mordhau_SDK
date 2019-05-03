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

// Function BP_ColorPicker.BP_ColorPicker_C.CloseColorPicker
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ColorPicker_C::CloseColorPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.CloseColorPicker");

	UBP_ColorPicker_C_CloseColorPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.SetColorsAndIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Colors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::SetColorsAndIndex(int Index, TArray<class UClass*>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.SetColorsAndIndex");

	UBP_ColorPicker_C_SetColorsAndIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedColors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Colors                         (Parm, OutParm, ZeroConstructor)

void UBP_ColorPicker_C::GetSelectedColors(TArray<class UClass*>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedColors");

	UBP_ColorPicker_C_GetSelectedColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function BP_ColorPicker.BP_ColorPicker_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::SetIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.SetIndex");

	UBP_ColorPicker_C_SetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::GetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedIndex");

	UBP_ColorPicker_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_ColorPicker.BP_ColorPicker_C.SetColors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Colors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ColorPicker_C::SetColors(TArray<class UClass*>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.SetColors");

	UBP_ColorPicker_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function BP_ColorPicker.BP_ColorPicker_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColorIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::OnClicked(int ColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnClicked");

	UBP_ColorPicker_C_OnClicked_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ColorPicker_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature");

	UBP_ColorPicker_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::OnHovered(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnHovered");

	UBP_ColorPicker_C_OnHovered_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.UpdatePreviewColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_ColorPicker_C::UpdatePreviewColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.UpdatePreviewColor");

	UBP_ColorPicker_C_UpdatePreviewColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.OnColsed
// (BlueprintCallable, BlueprintEvent)

void UBP_ColorPicker_C::OnColsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnColsed");

	UBP_ColorPicker_C_OnColsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.ExecuteUbergraph_BP_ColorPicker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::ExecuteUbergraph_BP_ColorPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.ExecuteUbergraph_BP_ColorPicker");

	UBP_ColorPicker_C_ExecuteUbergraph_BP_ColorPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.OnColorPickerClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LstSelectedColorIndex          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnColorPickerClosed__DelegateSignature");

	UBP_ColorPicker_C_OnColorPickerClosed__DelegateSignature_Params params;
	params.LstSelectedColorIndex = LstSelectedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.OnColorHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::OnColorHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnColorHovered__DelegateSignature");

	UBP_ColorPicker_C_OnColorHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPicker.BP_ColorPicker_C.OnColorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPicker_C::OnColorClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnColorClicked__DelegateSignature");

	UBP_ColorPicker_C_OnColorClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
