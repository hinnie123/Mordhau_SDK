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

// Function BP_HordeGameMode.BP_HordeGameMode_C.TriggerDefeat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameMode_C::TriggerDefeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.TriggerDefeat");

	ABP_HordeGameMode_C_TriggerDefeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnEquipmentFor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          EquipList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AMordhauCharacter*       Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeGameMode_C::SpawnEquipmentFor(class AMordhauCharacter* Char, TArray<class UClass*>* EquipList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnEquipmentFor");

	ABP_HordeGameMode_C_SpawnEquipmentFor_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipList != nullptr)
		*EquipList = params.EquipList;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.PrepareAIControllers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameMode_C::PrepareAIControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.PrepareAIControllers");

	ABP_HordeGameMode_C_PrepareAIControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.SetupCustomizationReplicationActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameMode_C::SetupCustomizationReplicationActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.SetupCustomizationReplicationActors");

	ABP_HordeGameMode_C_SetupCustomizationReplicationActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.ProgressWave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameMode_C::ProgressWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ProgressWave");

	ABP_HordeGameMode_C_ProgressWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.StartHordeMatch
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameMode_C::StartHordeMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.StartHordeMatch");

	ABP_HordeGameMode_C_StartHordeMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnWave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameMode_C::SpawnWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnWave");

	ABP_HordeGameMode_C_SpawnWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.UserConstructionScript");

	ABP_HordeGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordeGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveBeginPlay");

	ABP_HordeGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeGameMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveTick");

	ABP_HordeGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.OnKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            KilledPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  KilledPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageAgent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeGameMode_C::OnKilled(class AController** Killer, class AController** KilledPlayer, class APawn** KilledPawn, EMordhauDamageType* Type, unsigned char* SubType, class AActor** DamageSource, class AActor** DamageAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.OnKilled");

	ABP_HordeGameMode_C_OnKilled_Params params;
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


// Function BP_HordeGameMode.BP_HordeGameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeGameMode_C::K2_PostLogin(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.K2_PostLogin");

	ABP_HordeGameMode_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeGameMode.BP_HordeGameMode_C.ExecuteUbergraph_BP_HordeGameMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeGameMode_C::ExecuteUbergraph_BP_HordeGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ExecuteUbergraph_BP_HordeGameMode");

	ABP_HordeGameMode_C_ExecuteUbergraph_BP_HordeGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
