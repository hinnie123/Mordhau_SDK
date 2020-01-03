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

// Function BP_UltimateDisplay.BP_UltimateDisplay_C.Get_BackgroundImage_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_UltimateDisplay_C::Get_BackgroundImage_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.Get_BackgroundImage_Visibility_1");

	UBP_UltimateDisplay_C_Get_BackgroundImage_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UltimateDisplay.BP_UltimateDisplay_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_UltimateDisplay_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.GetVisibility_1");

	UBP_UltimateDisplay_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UltimateDisplay.BP_UltimateDisplay_C.Get_IconImage_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBP_UltimateDisplay_C::Get_IconImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.Get_IconImage_ColorAndOpacity_1");

	UBP_UltimateDisplay_C_Get_IconImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UltimateDisplay.BP_UltimateDisplay_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_UltimateDisplay_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.GetText_1");

	UBP_UltimateDisplay_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UltimateDisplay.BP_UltimateDisplay_C.Set Percent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UltimateDisplay_C::Set_Percent(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.Set Percent");

	UBP_UltimateDisplay_C_Set_Percent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UltimateDisplay.BP_UltimateDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UltimateDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.PreConstruct");

	UBP_UltimateDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UltimateDisplay.BP_UltimateDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_UltimateDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.Construct");

	UBP_UltimateDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UltimateDisplay.BP_UltimateDisplay_C.UltimateUsed
// (BlueprintCallable, BlueprintEvent)

void UBP_UltimateDisplay_C::UltimateUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.UltimateUsed");

	UBP_UltimateDisplay_C_UltimateUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UltimateDisplay.BP_UltimateDisplay_C.ExecuteUbergraph_BP_UltimateDisplay
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UltimateDisplay_C::ExecuteUbergraph_BP_UltimateDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.ExecuteUbergraph_BP_UltimateDisplay");

	UBP_UltimateDisplay_C_ExecuteUbergraph_BP_UltimateDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
