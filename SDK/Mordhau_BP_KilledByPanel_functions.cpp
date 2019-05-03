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

// Function BP_KilledByPanel.BP_KilledByPanel_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KilledByPanel_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Hide");

	UBP_KilledByPanel_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KilledByPanel_C::Show(class AMordhauPlayerState* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Show");

	UBP_KilledByPanel_C_Show_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.Get_HealthProgressBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_KilledByPanel_C::Get_HealthProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Get_HealthProgressBar_Percent_1");

	UBP_KilledByPanel_C_Get_HealthProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.Get_StamProgressBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_KilledByPanel_C::Get_StamProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Get_StamProgressBar_Percent_1");

	UBP_KilledByPanel_C_Get_StamProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_KilledByPanel_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_2");

	UBP_KilledByPanel_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_KilledByPanel_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_1");

	UBP_KilledByPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.TakeFromKiller
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     KilledBy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KilledByPanel_C::TakeFromKiller(class AMordhauPlayerState* KilledBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.TakeFromKiller");

	UBP_KilledByPanel_C_TakeFromKiller_Params params;
	params.KilledBy = KilledBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KilledByPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Tick");

	UBP_KilledByPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_KilledByPanel_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.OnAnimationFinished");

	UBP_KilledByPanel_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KilledByPanel.BP_KilledByPanel_C.ExecuteUbergraph_BP_KilledByPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KilledByPanel_C::ExecuteUbergraph_BP_KilledByPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.ExecuteUbergraph_BP_KilledByPanel");

	UBP_KilledByPanel_C_ExecuteUbergraph_BP_KilledByPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
