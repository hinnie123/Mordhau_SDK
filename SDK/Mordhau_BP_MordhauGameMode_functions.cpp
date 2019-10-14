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

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.UnpossessAndDestroyPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RestartPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameMode_C::UnpossessAndDestroyPawn(class AController* Controller, bool RestartPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.UnpossessAndDestroyPawn");

	ABP_MordhauGameMode_C_UnpossessAndDestroyPawn_Params params;
	params.Controller = Controller;
	params.RestartPlayer = RestartPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameMode.BP_MordhauGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.UserConstructionScript");

	ABP_MordhauGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameMode.BP_MordhauGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MordhauGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.ReceiveBeginPlay");

	ABP_MordhauGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            KilledPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  KilledPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageAgent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameMode_C::OnKilled(class AController** Killer, class AController** KilledPlayer, class APawn** KilledPawn, EMordhauDamageType* Type, unsigned char* SubType, class AActor** DamageSource, class AActor** DamageAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnKilled");

	ABP_MordhauGameMode_C_OnKilled_Params params;
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


// Function BP_MordhauGameMode.BP_MordhauGameMode_C.AddBots
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameMode_C::AddBots(int* Amount, int* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.AddBots");

	ABP_MordhauGameMode_C_AddBots_Params params;
	params.Amount = Amount;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameMode.BP_MordhauGameMode_C.RemoveBots
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameMode_C::RemoveBots(int* Amount, int* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.RemoveBots");

	ABP_MordhauGameMode_C_RemoveBots_Params params;
	params.Amount = Amount;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnMatchStateChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  OldState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  NewState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_MordhauGameMode_C::OnMatchStateChanged(struct FName* OldState, struct FName* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnMatchStateChanged");

	ABP_MordhauGameMode_C_OnMatchStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameMode.BP_MordhauGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameMode_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.K2_OnLogout");

	ABP_MordhauGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameMode.BP_MordhauGameMode_C.ExecuteUbergraph_BP_MordhauGameMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauGameMode_C::ExecuteUbergraph_BP_MordhauGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.ExecuteUbergraph_BP_MordhauGameMode");

	ABP_MordhauGameMode_C_ExecuteUbergraph_BP_MordhauGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
