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

// Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_KillsElement_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_HordeHUDWidget_C::Get_KillsElement_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_KillsElement_Visibility_1");

	UBP_HordeHUDWidget_C_Get_KillsElement_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_CountdownText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_HordeHUDWidget_C::Get_CountdownText_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_CountdownText_Visibility_1");

	UBP_HordeHUDWidget_C_Get_CountdownText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_HordeHUDWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.GetVisibility_1");

	UBP_HordeHUDWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_Coins_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_HordeHUDWidget_C::Get_Coins_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_Coins_Text_1");

	UBP_HordeHUDWidget_C_Get_Coins_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_Wave_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_HordeHUDWidget_C::Get_Wave_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_Wave_Text_1");

	UBP_HordeHUDWidget_C_Get_Wave_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_WaveText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_HordeHUDWidget_C::Get_WaveText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Get_WaveText_Text_1");

	UBP_HordeHUDWidget_C_Get_WaveText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HordeHUDWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.Tick");

	UBP_HordeHUDWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.ExecuteUbergraph_BP_HordeHUDWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HordeHUDWidget_C::ExecuteUbergraph_BP_HordeHUDWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUDWidget.BP_HordeHUDWidget_C.ExecuteUbergraph_BP_HordeHUDWidget");

	UBP_HordeHUDWidget_C_ExecuteUbergraph_BP_HordeHUDWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
