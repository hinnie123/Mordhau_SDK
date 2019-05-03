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

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddStructureDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddStructureDamage(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddStructureDamage");

	UBP_ScoreFeed_C_AddStructureDamage_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddVehicleDamage(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleDamage");

	UBP_ScoreFeed_C_AddVehicleDamage_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleTeamDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddVehicleTeamDamage(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleTeamDamage");

	UBP_ScoreFeed_C_AddVehicleTeamDamage_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddRepair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddRepair(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddRepair");

	UBP_ScoreFeed_C_AddRepair_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddObjective(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddObjective");

	UBP_ScoreFeed_C_AddObjective_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddWaveCleared
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddWaveCleared(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddWaveCleared");

	UBP_ScoreFeed_C_AddWaveCleared_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddHeal(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeal");

	UBP_ScoreFeed_C_AddHeal_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddNeutralized(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralized");

	UBP_ScoreFeed_C_AddNeutralized_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralizing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddNeutralizing(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralizing");

	UBP_ScoreFeed_C_AddNeutralizing_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddCaptured
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddCaptured(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddCaptured");

	UBP_ScoreFeed_C_AddCaptured_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddCapturing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddCapturing(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddCapturing");

	UBP_ScoreFeed_C_AddCapturing_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeadshot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddHeadshot(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeadshot");

	UBP_ScoreFeed_C_AddHeadshot_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateCurrentPointsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ScoreFeed_C::UpdateCurrentPointsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateCurrentPointsText");

	UBP_ScoreFeed_C_UpdateCurrentPointsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateComboVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::UpdateComboVisibility(bool ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateComboVisibility");

	UBP_ScoreFeed_C_UpdateComboVisibility_Params params;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.RemoveFromFeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ScoreEntry_C*        ToRemove                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_ScoreFeed_C::RemoveFromFeed(class UBP_ScoreEntry_C* ToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.RemoveFromFeed");

	UBP_ScoreFeed_C_RemoveFromFeed_Params params;
	params.ToRemove = ToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddTeamDamage(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamDamage");

	UBP_ScoreFeed_C_AddTeamDamage_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitZone                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddDamage(float Points, int HitZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddDamage");

	UBP_ScoreFeed_C_AddDamage_Params params;
	params.Points = Points;
	params.HitZone = HitZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.CollectPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::CollectPoints(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.CollectPoints");

	UBP_ScoreFeed_C_CollectPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddSuicide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddSuicide(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddSuicide");

	UBP_ScoreFeed_C_AddSuicide_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_ScoreFeed_C::AddTeamKill(float Points, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamKill");

	UBP_ScoreFeed_C_AddTeamKill_Params params;
	params.Points = Points;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddAssist
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddAssist(float Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddAssist");

	UBP_ScoreFeed_C_AddAssist_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddKill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_ScoreFeed_C::AddKill(float Points, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddKill");

	UBP_ScoreFeed_C_AddKill_Params params;
	params.Points = Points;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CanGroup                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::AddEntry(float Points, const struct FString& PlayerName, const struct FText& Label, bool CanGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddEntry");

	UBP_ScoreFeed_C_AddEntry_Params params;
	params.Points = Points;
	params.PlayerName = PlayerName;
	params.Label = Label;
	params.CanGroup = CanGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBP_ScoreFeed_C::BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBP_ScoreFeed_C_BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ScoreFeed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.Construct");

	UBP_ScoreFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreFeed.BP_ScoreFeed_C.ExecuteUbergraph_BP_ScoreFeed
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreFeed_C::ExecuteUbergraph_BP_ScoreFeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.ExecuteUbergraph_BP_ScoreFeed");

	UBP_ScoreFeed_C_ExecuteUbergraph_BP_ScoreFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
