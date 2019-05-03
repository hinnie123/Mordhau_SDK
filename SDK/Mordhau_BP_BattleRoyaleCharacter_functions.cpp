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

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnArmorReplicated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWearableSlot                  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleCharacter_C::OnArmorReplicated(EWearableSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnArmorReplicated");

	ABP_BattleRoyaleCharacter_C_OnArmorReplicated_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.PlayWearablePickupSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Wearable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleCharacter_C::PlayWearablePickupSound(class UClass* Wearable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.PlayWearablePickupSound");

	ABP_BattleRoyaleCharacter_C_PlayWearablePickupSound_Params params;
	params.Wearable = Wearable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_LegArmor
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleCharacter_C::OnRep_LegArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_LegArmor");

	ABP_BattleRoyaleCharacter_C_OnRep_LegArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_ChestArmor
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleCharacter_C::OnRep_ChestArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_ChestArmor");

	ABP_BattleRoyaleCharacter_C_OnRep_ChestArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_HeadArmor
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleCharacter_C::OnRep_HeadArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_HeadArmor");

	ABP_BattleRoyaleCharacter_C_OnRep_HeadArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.SpawnArmorPiece
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WearablePickupClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleCharacter_C::SpawnArmorPiece(class UClass* WearablePickupClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.SpawnArmorPiece");

	ABP_BattleRoyaleCharacter_C_SpawnArmorPiece_Params params;
	params.WearablePickupClass = WearablePickupClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.UserConstructionScript");

	ABP_BattleRoyaleCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleCharacter_C::OnKilled(class AController** EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnKilled");

	ABP_BattleRoyaleCharacter_C_OnKilled_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.ExecuteUbergraph_BP_BattleRoyaleCharacter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleCharacter_C::ExecuteUbergraph_BP_BattleRoyaleCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.ExecuteUbergraph_BP_BattleRoyaleCharacter");

	ABP_BattleRoyaleCharacter_C_ExecuteUbergraph_BP_BattleRoyaleCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
