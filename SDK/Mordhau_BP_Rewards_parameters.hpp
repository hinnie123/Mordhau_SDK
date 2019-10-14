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

// Function BP_Rewards.BP_Rewards_C.FindProgressBarTarget
struct UBP_Rewards_C_FindProgressBarTarget_Params
{
	int                                                Next_Rank_XP;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Current_Rank_XP;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Current_XP;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Earned_XP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Rewards.BP_Rewards_C.HandleRankUp
struct UBP_Rewards_C_HandleRankUp_Params
{
	class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Rewards.BP_Rewards_C.XP Interpolation
struct UBP_Rewards_C_XP_Interpolation_Params
{
	class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Rewards.BP_Rewards_C.InitializeRankValues
struct UBP_Rewards_C_InitializeRankValues_Params
{
	class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Rewards.BP_Rewards_C.Get_EarnedXPText_Text_1
struct UBP_Rewards_C_Get_EarnedXPText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Rewards.BP_Rewards_C.BeginGoldAnimation
struct UBP_Rewards_C_BeginGoldAnimation_Params
{
};

// Function BP_Rewards.BP_Rewards_C.MergeGold
struct UBP_Rewards_C_MergeGold_Params
{
};

// Function BP_Rewards.BP_Rewards_C.BeginXPSequence
struct UBP_Rewards_C_BeginXPSequence_Params
{
};

// Function BP_Rewards.BP_Rewards_C.ExitGold
struct UBP_Rewards_C_ExitGold_Params
{
};

// Function BP_Rewards.BP_Rewards_C.AddToXPBar
struct UBP_Rewards_C_AddToXPBar_Params
{
};

// Function BP_Rewards.BP_Rewards_C.Tick
struct UBP_Rewards_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Rewards.BP_Rewards_C.RankUp
struct UBP_Rewards_C_RankUp_Params
{
};

// Function BP_Rewards.BP_Rewards_C.ProceedToMapVote
struct UBP_Rewards_C_ProceedToMapVote_Params
{
};

// Function BP_Rewards.BP_Rewards_C.ExitXP
struct UBP_Rewards_C_ExitXP_Params
{
};

// Function BP_Rewards.BP_Rewards_C.RankUpAnimDone
struct UBP_Rewards_C_RankUpAnimDone_Params
{
};

// Function BP_Rewards.BP_Rewards_C.RequestRewards
struct UBP_Rewards_C_RequestRewards_Params
{
};

// Function BP_Rewards.BP_Rewards_C.RewardDropTimedOut
struct UBP_Rewards_C_RewardDropTimedOut_Params
{
};

// Function BP_Rewards.BP_Rewards_C.Construct
struct UBP_Rewards_C_Construct_Params
{
};

// Function BP_Rewards.BP_Rewards_C.OnRewardsDropped
struct UBP_Rewards_C_OnRewardsDropped_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Gold;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Rewards.BP_Rewards_C.Enable
struct UBP_Rewards_C_Enable_Params
{
};

// Function BP_Rewards.BP_Rewards_C.ExecuteUbergraph_BP_Rewards
struct UBP_Rewards_C_ExecuteUbergraph_BP_Rewards_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
