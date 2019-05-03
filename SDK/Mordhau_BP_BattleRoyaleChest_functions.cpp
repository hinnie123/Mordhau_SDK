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

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.BreakChest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerController* DestroyerPlayerController      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleChest_C::BreakChest(class AMordhauPlayerController* DestroyerPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.BreakChest");

	ABP_BattleRoyaleChest_C_BreakChest_Params params;
	params.DestroyerPlayerController = DestroyerPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnChestDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleChest_C::OnChestDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnChestDestroyed");

	ABP_BattleRoyaleChest_C_OnChestDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnRep_Destroyed
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleChest_C::OnRep_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnRep_Destroyed");

	ABP_BattleRoyaleChest_C_OnRep_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.SpawnContents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerController* CustomizeFor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleChest_C::SpawnContents(class AMordhauPlayerController* CustomizeFor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.SpawnContents");

	ABP_BattleRoyaleChest_C_SpawnContents_Params params;
	params.CustomizeFor = CustomizeFor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.UserConstructionScript");

	ABP_BattleRoyaleChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleChest_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.ReceiveAnyDamage");

	ABP_BattleRoyaleChest_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.RespawnChest
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleChest_C::RespawnChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.RespawnChest");

	ABP_BattleRoyaleChest_C_RespawnChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleChest_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnInteractionStart");

	ABP_BattleRoyaleChest_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.ExecuteUbergraph_BP_BattleRoyaleChest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleChest_C::ExecuteUbergraph_BP_BattleRoyaleChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.ExecuteUbergraph_BP_BattleRoyaleChest");

	ABP_BattleRoyaleChest_C_ExecuteUbergraph_BP_BattleRoyaleChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
