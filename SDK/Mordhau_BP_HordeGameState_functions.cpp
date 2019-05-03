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

// Function BP_HordeGameState.BP_HordeGameState_C.ShouldHideSpawnInfoText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordeGameState_C::ShouldHideSpawnInfoText(bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.ShouldHideSpawnInfoText");

	ABP_HordeGameState_C_ShouldHideSpawnInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hide != nullptr)
		*Hide = params.Hide;
}


// Function BP_HordeGameState.BP_HordeGameState_C.OnRep_ReplicatedHordeMatchInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeGameState_C::OnRep_ReplicatedHordeMatchInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.OnRep_ReplicatedHordeMatchInfo");

	ABP_HordeGameState_C_OnRep_ReplicatedHordeMatchInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameState.BP_HordeGameState_C.UpdateNextPurchasableVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameState_C::UpdateNextPurchasableVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.UpdateNextPurchasableVisuals");

	ABP_HordeGameState_C_UpdateNextPurchasableVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameState.BP_HordeGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.UserConstructionScript");

	ABP_HordeGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameState.BP_HordeGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordeGameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.ReceiveBeginPlay");

	ABP_HordeGameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameState.BP_HordeGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeGameState_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.ReceiveTick");

	ABP_HordeGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameState.BP_HordeGameState_C.HandleMatchEndInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameState_C::HandleMatchEndInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.HandleMatchEndInfo");

	ABP_HordeGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameState.BP_HordeGameState_C.ExecuteUbergraph_BP_HordeGameState
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeGameState_C::ExecuteUbergraph_BP_HordeGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.ExecuteUbergraph_BP_HordeGameState");

	ABP_HordeGameState_C_ExecuteUbergraph_BP_HordeGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
