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

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.DrainTickets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MordhauGameMode_C*   GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineGameState_C::DrainTickets(class ABP_MordhauGameMode_C* GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.DrainTickets");

	ABP_FrontlineGameState_C_DrainTickets_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameState.BP_FrontlineGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.UserConstructionScript");

	ABP_FrontlineGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrontlineGameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveBeginPlay");

	ABP_FrontlineGameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineGameState_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveTick");

	ABP_FrontlineGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameState.BP_FrontlineGameState_C.HandleMatchEndInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineGameState_C::HandleMatchEndInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.HandleMatchEndInfo");

	ABP_FrontlineGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameState.BP_FrontlineGameState_C.LocalPlayerChangedTeam
// (Event, Public, BlueprintEvent)

void ABP_FrontlineGameState_C::LocalPlayerChangedTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.LocalPlayerChangedTeam");

	ABP_FrontlineGameState_C_LocalPlayerChangedTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameState.BP_FrontlineGameState_C.TriggerWinDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_FrontlineGameState_C::TriggerWinDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.TriggerWinDelayed");

	ABP_FrontlineGameState_C_TriggerWinDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ExecuteUbergraph_BP_FrontlineGameState
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineGameState_C::ExecuteUbergraph_BP_FrontlineGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.ExecuteUbergraph_BP_FrontlineGameState");

	ABP_FrontlineGameState_C_ExecuteUbergraph_BP_FrontlineGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
