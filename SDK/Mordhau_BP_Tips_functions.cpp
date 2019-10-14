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

// Function BP_Tips.BP_Tips_C.Get_TeamTip_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_Tips_C::Get_TeamTip_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Get_TeamTip_Visibility_1");

	UBP_Tips_C_Get_TeamTip_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_Tips_C::Get_LoadoutTip_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Visibility_1");

	UBP_Tips_C_Get_LoadoutTip_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Tips.BP_Tips_C.Get_TeamTip_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_Tips_C::Get_TeamTip_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Get_TeamTip_Text_1");

	UBP_Tips_C_Get_TeamTip_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_Tips_C::Get_LoadoutTip_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Text_1");

	UBP_Tips_C_Get_LoadoutTip_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Tips.BP_Tips_C.Show
// (BlueprintCallable, BlueprintEvent)

void UBP_Tips_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Show");

	UBP_Tips_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tips.BP_Tips_C.BndEvt__Blink_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBP_Tips_C::BndEvt__Blink_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.BndEvt__Blink_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBP_Tips_C_BndEvt__Blink_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tips.BP_Tips_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Tips_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Construct");

	UBP_Tips_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tips.BP_Tips_C.ExecuteUbergraph_BP_Tips
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Tips_C::ExecuteUbergraph_BP_Tips(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.ExecuteUbergraph_BP_Tips");

	UBP_Tips_C_ExecuteUbergraph_BP_Tips_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
