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

// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetOriginCorner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Corner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPickerContainer_C::SetOriginCorner(int Corner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetOriginCorner");

	UBP_ColorPickerContainer_C_SetOriginCorner_Params params;
	params.Corner = Corner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateWidth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPickerContainer_C::GetColorPickerApproximateWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateWidth");

	UBP_ColorPickerContainer_C_GetColorPickerApproximateWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
}


// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPickerContainer_C::GetColorPickerApproximateHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateHeight");

	UBP_ColorPickerContainer_C_GetColorPickerApproximateHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetColors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Colors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ColorPickerContainer_C::SetColors(TArray<class UClass*>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetColors");

	UBP_ColorPickerContainer_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.Show
// (BlueprintCallable, BlueprintEvent)

void UBP_ColorPickerContainer_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.Show");

	UBP_ColorPickerContainer_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.ExecuteUbergraph_BP_ColorPickerContainer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPickerContainer_C::ExecuteUbergraph_BP_ColorPickerContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.ExecuteUbergraph_BP_ColorPickerContainer");

	UBP_ColorPickerContainer_C_ExecuteUbergraph_BP_ColorPickerContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
