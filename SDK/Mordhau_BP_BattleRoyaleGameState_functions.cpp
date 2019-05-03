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

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.IsInGetReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleGameState_C::IsInGetReady(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.IsInGetReady");

	ABP_BattleRoyaleGameState_C_IsInGetReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.OnRep_Countdown
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleGameState_C::OnRep_Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.OnRep_Countdown");

	ABP_BattleRoyaleGameState_C_OnRep_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ShouldBlockPawnInput
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BattleRoyaleGameState_C::ShouldBlockPawnInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ShouldBlockPawnInput");

	ABP_BattleRoyaleGameState_C_ShouldBlockPawnInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ShouldHideSpawnInfoText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleGameState_C::ShouldHideSpawnInfoText(bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ShouldHideSpawnInfoText");

	ABP_BattleRoyaleGameState_C_ShouldHideSpawnInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hide != nullptr)
		*Hide = params.Hide;
}


// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.UserConstructionScript");

	ABP_BattleRoyaleGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.HandleMatchEndInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleGameState_C::HandleMatchEndInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.HandleMatchEndInfo");

	ABP_BattleRoyaleGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleGameState_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ReceiveTick");

	ABP_BattleRoyaleGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ExecuteUbergraph_BP_BattleRoyaleGameState
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleGameState_C::ExecuteUbergraph_BP_BattleRoyaleGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ExecuteUbergraph_BP_BattleRoyaleGameState");

	ABP_BattleRoyaleGameState_C_ExecuteUbergraph_BP_BattleRoyaleGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
