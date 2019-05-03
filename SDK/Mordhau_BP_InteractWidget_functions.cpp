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

// Function BP_InteractWidget.BP_InteractWidget_C.GetText_3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_InteractWidget_C::GetText_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.GetText_3");

	UBP_InteractWidget_C_GetText_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InteractWidget.BP_InteractWidget_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_InteractWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.GetVisibility_1");

	UBP_InteractWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InteractWidget.BP_InteractWidget_C.Get_TopSegment_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_InteractWidget_C::Get_TopSegment_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.Get_TopSegment_Visibility_1");

	UBP_InteractWidget_C_Get_TopSegment_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InteractWidget.BP_InteractWidget_C.Get_ProgressBar_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_InteractWidget_C::Get_ProgressBar_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.Get_ProgressBar_Visibility_1");

	UBP_InteractWidget_C_Get_ProgressBar_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InteractWidget.BP_InteractWidget_C.Get_BottomSegment_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_InteractWidget_C::Get_BottomSegment_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.Get_BottomSegment_Visibility_1");

	UBP_InteractWidget_C_Get_BottomSegment_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InteractWidget.BP_InteractWidget_C.GetText_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_InteractWidget_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.GetText_2");

	UBP_InteractWidget_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InteractWidget.BP_InteractWidget_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_InteractWidget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.GetText_1");

	UBP_InteractWidget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InteractWidget.BP_InteractWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InteractWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.Tick");

	UBP_InteractWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractWidget.BP_InteractWidget_C.ExecuteUbergraph_BP_InteractWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InteractWidget_C::ExecuteUbergraph_BP_InteractWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidget.BP_InteractWidget_C.ExecuteUbergraph_BP_InteractWidget");

	UBP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
