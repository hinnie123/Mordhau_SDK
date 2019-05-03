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

// Function BP_ScoreEntry.BP_ScoreEntry_C.UpdatePointsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ScoreEntry_C::UpdatePointsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.UpdatePointsText");

	UBP_ScoreEntry_C_UpdatePointsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreEntry.BP_ScoreEntry_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartingPoints                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPlayerName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   InLabel                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBP_ScoreFeed_C*         InScoreFeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_ScoreEntry_C::Initialize(float StartingPoints, const struct FString& InPlayerName, const struct FText& InLabel, class UBP_ScoreFeed_C* InScoreFeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.Initialize");

	UBP_ScoreEntry_C_Initialize_Params params;
	params.StartingPoints = StartingPoints;
	params.InPlayerName = InPlayerName;
	params.InLabel = InLabel;
	params.InScoreFeed = InScoreFeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreEntry.BP_ScoreEntry_C.AddPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPoints                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreEntry_C::AddPoints(float InPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.AddPoints");

	UBP_ScoreEntry_C_AddPoints_Params params;
	params.InPoints = InPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreEntry.BP_ScoreEntry_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBP_ScoreEntry_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBP_ScoreEntry_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreEntry.BP_ScoreEntry_C.ExecuteUbergraph_BP_ScoreEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreEntry_C::ExecuteUbergraph_BP_ScoreEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.ExecuteUbergraph_BP_ScoreEntry");

	UBP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
