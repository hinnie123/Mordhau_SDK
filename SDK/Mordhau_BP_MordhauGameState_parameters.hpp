#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MordhauGameState.BP_MordhauGameState_C.FinishVoteKick
struct ABP_MordhauGameState_C_FinishVoteKick_Params
{
	TEnumAsByte<E_VoteKickResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_VoteKickInfo
struct ABP_MordhauGameState_C_OnRep_VoteKickInfo_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ShouldHideSpawnInfoText
struct ABP_MordhauGameState_C_ShouldHideSpawnInfoText_Params
{
	bool                                               Hide;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveKillNotify
struct ABP_MordhauGameState_C_ReceiveKillNotify_Params
{
	class APlayerState*                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flags;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.AddKillNotify
struct ABP_MordhauGameState_C_AddKillNotify_Params
{
	class APlayerState*                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetChatColor
struct ABP_MordhauGameState_C_GetChatColor_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetKillfeedColor
struct ABP_MordhauGameState_C_GetKillfeedColor_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.HandleMatchEndInfo
struct ABP_MordhauGameState_C_HandleMatchEndInfo_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_MatchEndInfo
struct ABP_MordhauGameState_C_OnRep_MatchEndInfo_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTeamObjectiveValue
struct ABP_MordhauGameState_C_GetScoreboardTeamObjectiveValue_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardObjectiveName
struct ABP_MordhauGameState_C_GetScoreboardObjectiveName_Params
{
	struct FText                                       NewParam;                                                 // (Parm, OutParm)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTimeInProgress
struct ABP_MordhauGameState_C_GetScoreboardTimeInProgress_Params
{
	struct FTimespan                                   Time;                                                     // (Parm, OutParm)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTime
struct ABP_MordhauGameState_C_GetScoreboardTime_Params
{
	struct FTimespan                                   Time;                                                     // (Parm, OutParm)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.UserConstructionScript
struct ABP_MordhauGameState_C_UserConstructionScript_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveTick
struct ABP_MordhauGameState_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ReplicatedKillNotify
struct ABP_MordhauGameState_C_ReplicatedKillNotify_Params
{
	class APlayerState*                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flags;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ShowScoreboardDelayed
struct ABP_MordhauGameState_C_ShowScoreboardDelayed_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteKick
struct ABP_MordhauGameState_C_OnRequestedVoteKick_Params
{
	class AMordhauPlayerState*                         Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauPlayerState*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.TallyVoteKickVotes
struct ABP_MordhauGameState_C_TallyVoteKickVotes_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteCancel
struct ABP_MordhauGameState_C_OnRequestedVoteCancel_Params
{
	class AMordhauPlayerState*                         Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnVoteKickVote
struct ABP_MordhauGameState_C_OnVoteKickVote_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VotedYes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ExecuteUbergraph_BP_MordhauGameState
struct ABP_MordhauGameState_C_ExecuteUbergraph_BP_MordhauGameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
