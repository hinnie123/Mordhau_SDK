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

// Function BP_Rewards.BP_Rewards_C.FindProgressBarTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Next_Rank_XP                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current_Rank_XP                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current_XP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Earned_XP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards_C::FindProgressBarTarget(int Next_Rank_XP, int Current_Rank_XP, int Current_XP, int Earned_XP, float* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.FindProgressBarTarget");

	UBP_Rewards_C_FindProgressBarTarget_Params params;
	params.Next_Rank_XP = Next_Rank_XP;
	params.Current_Rank_XP = Current_Rank_XP;
	params.Current_XP = Current_XP;
	params.Earned_XP = Earned_XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BP_Rewards.BP_Rewards_C.HandleRankUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CasualRankWidget_C*  Casual_Rank_Widget_Ref         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Rewards_C::HandleRankUp(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.HandleRankUp");

	UBP_Rewards_C_HandleRankUp_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.XP Interpolation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CasualRankWidget_C*  Casual_Rank_Widget_Ref         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards_C::XP_Interpolation(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref, float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.XP Interpolation");

	UBP_Rewards_C_XP_Interpolation_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.InitializeRankValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CasualRankWidget_C*  Casual_Rank_Widget_Ref         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Rewards_C::InitializeRankValues(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.InitializeRankValues");

	UBP_Rewards_C_InitializeRankValues_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.Get_EarnedXPText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_Rewards_C::Get_EarnedXPText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.Get_EarnedXPText_Text_1");

	UBP_Rewards_C_Get_EarnedXPText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Rewards.BP_Rewards_C.BeginGoldAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::BeginGoldAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.BeginGoldAnimation");

	UBP_Rewards_C_BeginGoldAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.MergeGold
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::MergeGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.MergeGold");

	UBP_Rewards_C_MergeGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.BeginXPSequence
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::BeginXPSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.BeginXPSequence");

	UBP_Rewards_C_BeginXPSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.ExitGold
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::ExitGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.ExitGold");

	UBP_Rewards_C_ExitGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.AddToXPBar
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::AddToXPBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.AddToXPBar");

	UBP_Rewards_C_AddToXPBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.Tick");

	UBP_Rewards_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.RankUp
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::RankUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.RankUp");

	UBP_Rewards_C_RankUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.ProceedToMapVote
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::ProceedToMapVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.ProceedToMapVote");

	UBP_Rewards_C_ProceedToMapVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.ExitXP
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::ExitXP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.ExitXP");

	UBP_Rewards_C_ExitXP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.RankUpAnimDone
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::RankUpAnimDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.RankUpAnimDone");

	UBP_Rewards_C_RankUpAnimDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.RequestRewards
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::RequestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.RequestRewards");

	UBP_Rewards_C_RequestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.RewardDropTimedOut
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::RewardDropTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.RewardDropTimedOut");

	UBP_Rewards_C_RewardDropTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Rewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.Construct");

	UBP_Rewards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.OnRewardsDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Gold                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards_C::OnRewardsDropped(bool bWasSuccessful, const struct FString& PlayerId, int Gold, int XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.OnRewardsDropped");

	UBP_Rewards_C_OnRewardsDropped_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerId = PlayerId;
	params.Gold = Gold;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.Enable
// (BlueprintCallable, BlueprintEvent)

void UBP_Rewards_C::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.Enable");

	UBP_Rewards_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rewards.BP_Rewards_C.ExecuteUbergraph_BP_Rewards
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Rewards_C::ExecuteUbergraph_BP_Rewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rewards.BP_Rewards_C.ExecuteUbergraph_BP_Rewards");

	UBP_Rewards_C_ExecuteUbergraph_BP_Rewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
