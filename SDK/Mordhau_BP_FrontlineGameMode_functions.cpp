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

// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.UserConstructionScript");

	ABP_FrontlineGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.MatchTimeRanOut
// (Event, Public, BlueprintEvent)

void ABP_FrontlineGameMode_C::MatchTimeRanOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.MatchTimeRanOut");

	ABP_FrontlineGameMode_C_MatchTimeRanOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnTeamScoreChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineGameMode_C::OnTeamScoreChanged(int* Team, float* OldValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnTeamScoreChanged");

	ABP_FrontlineGameMode_C_OnTeamScoreChanged_Params params;
	params.Team = Team;
	params.OldValue = OldValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            KilledPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  KilledPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageAgent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineGameMode_C::OnKilled(class AController** Killer, class AController** KilledPlayer, class APawn** KilledPawn, EMordhauDamageType* Type, unsigned char* SubType, class AActor** DamageSource, class AActor** DamageAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnKilled");

	ABP_FrontlineGameMode_C_OnKilled_Params params;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;
	params.KilledPawn = KilledPawn;
	params.Type = Type;
	params.SubType = SubType;
	params.DamageSource = DamageSource;
	params.DamageAgent = DamageAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.ExecuteUbergraph_BP_FrontlineGameMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineGameMode_C::ExecuteUbergraph_BP_FrontlineGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.ExecuteUbergraph_BP_FrontlineGameMode");

	ABP_FrontlineGameMode_C_ExecuteUbergraph_BP_FrontlineGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
