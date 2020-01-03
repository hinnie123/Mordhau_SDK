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

// Function BP_Leaderboards.BP_Leaderboards_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Leaderboards_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.Update");

	UBP_Leaderboards_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Leaderboards.BP_Leaderboards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Leaderboards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.Construct");

	UBP_Leaderboards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Leaderboards.BP_Leaderboards_C.OnGetLeaderboardComplete
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LeaderboardName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FLeaderboardEntry> Entries                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLeaderboardEntry       SelfEntry                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Leaderboards_C::OnGetLeaderboardComplete(bool bWasSuccessful, const struct FString& LeaderboardName, TArray<struct FLeaderboardEntry> Entries, const struct FLeaderboardEntry& SelfEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.OnGetLeaderboardComplete");

	UBP_Leaderboards_C_OnGetLeaderboardComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LeaderboardName = LeaderboardName;
	params.Entries = Entries;
	params.SelfEntry = SelfEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Leaderboards.BP_Leaderboards_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Leaderboards_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.Tick");

	UBP_Leaderboards_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Leaderboards.BP_Leaderboards_C.ExecuteUbergraph_BP_Leaderboards
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Leaderboards_C::ExecuteUbergraph_BP_Leaderboards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.ExecuteUbergraph_BP_Leaderboards");

	UBP_Leaderboards_C_ExecuteUbergraph_BP_Leaderboards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
