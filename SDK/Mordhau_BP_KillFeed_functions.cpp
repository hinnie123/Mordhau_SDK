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

// Function BP_KillFeed.BP_KillFeed_C.AddEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   KilledBy                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerState*            Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KillFeed_C::AddEntry(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.AddEntry");

	UBP_KillFeed_C_AddEntry_Params params;
	params.Killer = Killer;
	params.KilledBy = KilledBy;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillFeed.BP_KillFeed_C.OnMessageReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   KilledBy                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerState*            Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KillFeed_C::OnMessageReceived(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.OnMessageReceived");

	UBP_KillFeed_C_OnMessageReceived_Params params;
	params.Killer = Killer;
	params.KilledBy = KilledBy;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillFeed.BP_KillFeed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_KillFeed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.Construct");

	UBP_KillFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillFeed.BP_KillFeed_C.HideAfterSomeTime
// (BlueprintCallable, BlueprintEvent)

void UBP_KillFeed_C::HideAfterSomeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.HideAfterSomeTime");

	UBP_KillFeed_C_HideAfterSomeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillFeed.BP_KillFeed_C.HideCallback
// (BlueprintCallable, BlueprintEvent)

void UBP_KillFeed_C::HideCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.HideCallback");

	UBP_KillFeed_C_HideCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillFeed.BP_KillFeed_C.ExecuteUbergraph_BP_KillFeed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KillFeed_C::ExecuteUbergraph_BP_KillFeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.ExecuteUbergraph_BP_KillFeed");

	UBP_KillFeed_C_ExecuteUbergraph_BP_KillFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
