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

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnWaveProgressed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewWave                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeKillObjective_C::OnWaveProgressed(int NewWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnWaveProgressed");

	ABP_HordeKillObjective_C_OnWaveProgressed_Params params;
	params.NewWave = NewWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_OffenseUpgrades
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeKillObjective_C::OnRep_OffenseUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_OffenseUpgrades");

	ABP_HordeKillObjective_C_OnRep_OffenseUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_DefenseUpgrades
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeKillObjective_C::OnRep_DefenseUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_DefenseUpgrades");

	ABP_HordeKillObjective_C_OnRep_DefenseUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.SpawnOurEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeKillObjective_C::SpawnOurEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.SpawnOurEquipment");

	ABP_HordeKillObjective_C_SpawnOurEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeKillObjective_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.UserConstructionScript");

	ABP_HordeKillObjective_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordeKillObjective_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveBeginPlay");

	ABP_HordeKillObjective_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeKillObjective_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveTick");

	ABP_HordeKillObjective_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeKillObjective_C::OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnDied");

	ABP_HordeKillObjective_C_OnDied_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnHealthChanged
// (Event, Public, BlueprintEvent)

void ABP_HordeKillObjective_C::OnHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnHealthChanged");

	ABP_HordeKillObjective_C_OnHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ExecuteUbergraph_BP_HordeKillObjective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeKillObjective_C::ExecuteUbergraph_BP_HordeKillObjective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.ExecuteUbergraph_BP_HordeKillObjective");

	ABP_HordeKillObjective_C_ExecuteUbergraph_BP_HordeKillObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
