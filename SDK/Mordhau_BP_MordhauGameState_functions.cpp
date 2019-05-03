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

// Function BP_MordhauGameState.BP_MordhauGameState_C.FinishVoteKick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_VoteKickResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::FinishVoteKick(TEnumAsByte<E_VoteKickResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.FinishVoteKick");

	ABP_MordhauGameState_C_FinishVoteKick_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_VoteKickInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_MordhauGameState_C::OnRep_VoteKickInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_VoteKickInfo");

	ABP_MordhauGameState_C_OnRep_VoteKickInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.ShouldHideSpawnInfoText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::ShouldHideSpawnInfoText(bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ShouldHideSpawnInfoText");

	ABP_MordhauGameState_C_ShouldHideSpawnInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hide != nullptr)
		*Hide = params.Hide;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveKillNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Flags                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::ReceiveKillNotify(class APlayerState* Killer, class APlayerState* Killed, class UClass* Weapon, unsigned char Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveKillNotify");

	ABP_MordhauGameState_C_ReceiveKillNotify_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.Weapon = Weapon;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.AddKillNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType             DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::AddKillNotify(class APlayerState* Killer, class APlayerState* Killed, class AActor* Weapon, EMordhauDamageType DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.AddKillNotify");

	ABP_MordhauGameState_C_AddKillNotify_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.Weapon = Weapon;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.GetChatColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void ABP_MordhauGameState_C::GetChatColor(class APlayerState* PlayerState, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetChatColor");

	ABP_MordhauGameState_C_GetChatColor_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.GetKillfeedColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void ABP_MordhauGameState_C::GetKillfeedColor(class APlayerState* PlayerState, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetKillfeedColor");

	ABP_MordhauGameState_C_GetKillfeedColor_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.HandleMatchEndInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauGameState_C::HandleMatchEndInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.HandleMatchEndInfo");

	ABP_MordhauGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_MatchEndInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_MordhauGameState_C::OnRep_MatchEndInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_MatchEndInfo");

	ABP_MordhauGameState_C_OnRep_MatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTeamObjectiveValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Output                         (Parm, OutParm, ZeroConstructor)

void ABP_MordhauGameState_C::GetScoreboardTeamObjectiveValue(int Team, struct FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTeamObjectiveValue");

	ABP_MordhauGameState_C_GetScoreboardTeamObjectiveValue_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardObjectiveName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   NewParam                       (Parm, OutParm)

void ABP_MordhauGameState_C::GetScoreboardObjectiveName(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardObjectiveName");

	ABP_MordhauGameState_C_GetScoreboardObjectiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTimeInProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan               Time                           (Parm, OutParm)

void ABP_MordhauGameState_C::GetScoreboardTimeInProgress(struct FTimespan* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTimeInProgress");

	ABP_MordhauGameState_C_GetScoreboardTimeInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan               Time                           (Parm, OutParm)

void ABP_MordhauGameState_C::GetScoreboardTime(struct FTimespan* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTime");

	ABP_MordhauGameState_C_GetScoreboardTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.UserConstructionScript");

	ABP_MordhauGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveTick");

	ABP_MordhauGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.ReplicatedKillNotify
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Flags                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::ReplicatedKillNotify(class APlayerState* Killer, class APlayerState* Killed, class UClass* Weapon, unsigned char Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ReplicatedKillNotify");

	ABP_MordhauGameState_C_ReplicatedKillNotify_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.Weapon = Weapon;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.ShowScoreboardDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_MordhauGameState_C::ShowScoreboardDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ShowScoreboardDelayed");

	ABP_MordhauGameState_C_ShowScoreboardDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteKick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMordhauPlayerState*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::OnRequestedVoteKick(class AMordhauPlayerState* Initiator, class AMordhauPlayerState* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteKick");

	ABP_MordhauGameState_C_OnRequestedVoteKick_Params params;
	params.Initiator = Initiator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.TallyVoteKickVotes
// (BlueprintCallable, BlueprintEvent)

void ABP_MordhauGameState_C::TallyVoteKickVotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.TallyVoteKickVotes");

	ABP_MordhauGameState_C_TallyVoteKickVotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::OnRequestedVoteCancel(class AMordhauPlayerState* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteCancel");

	ABP_MordhauGameState_C_OnRequestedVoteCancel_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.OnVoteKickVote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           VotedYes                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::OnVoteKickVote(class APlayerController* Controller, bool VotedYes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnVoteKickVote");

	ABP_MordhauGameState_C_OnVoteKickVote_Params params;
	params.Controller = Controller;
	params.VotedYes = VotedYes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameState.BP_MordhauGameState_C.ExecuteUbergraph_BP_MordhauGameState
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameState_C::ExecuteUbergraph_BP_MordhauGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ExecuteUbergraph_BP_MordhauGameState");

	ABP_MordhauGameState_C_ExecuteUbergraph_BP_MordhauGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
