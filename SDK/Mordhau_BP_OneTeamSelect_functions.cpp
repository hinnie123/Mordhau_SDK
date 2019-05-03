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

// Function BP_OneTeamSelect.BP_OneTeamSelect_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_OneTeamSelect_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTeamSelect.BP_OneTeamSelect_C.GetText_2");

	UBP_OneTeamSelect_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OneTeamSelect.BP_OneTeamSelect_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_OneTeamSelect_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTeamSelect.BP_OneTeamSelect_C.GetText_1");

	UBP_OneTeamSelect_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OneTeamSelect.BP_OneTeamSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OneTeamSelect_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTeamSelect.BP_OneTeamSelect_C.PreConstruct");

	UBP_OneTeamSelect_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneTeamSelect.BP_OneTeamSelect_C.BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OneTeamSelect_C::BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTeamSelect.BP_OneTeamSelect_C.BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_OneTeamSelect_C_BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneTeamSelect.BP_OneTeamSelect_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OneTeamSelect_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTeamSelect.BP_OneTeamSelect_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_OneTeamSelect_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneTeamSelect.BP_OneTeamSelect_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_OneTeamSelect_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTeamSelect.BP_OneTeamSelect_C.Show");

	UBP_OneTeamSelect_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneTeamSelect.BP_OneTeamSelect_C.ExecuteUbergraph_BP_OneTeamSelect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OneTeamSelect_C::ExecuteUbergraph_BP_OneTeamSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTeamSelect.BP_OneTeamSelect_C.ExecuteUbergraph_BP_OneTeamSelect");

	UBP_OneTeamSelect_C_ExecuteUbergraph_BP_OneTeamSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
