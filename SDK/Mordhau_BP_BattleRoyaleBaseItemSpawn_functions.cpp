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

// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.SpawnRandomItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              InSpawnTransform               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AMordhauPlayerController* CustomizeFor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleBaseItemSpawn_C::SpawnRandomItem(const struct FTransform& InSpawnTransform, class AMordhauPlayerController* CustomizeFor, class AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.SpawnRandomItem");

	ABP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem_Params params;
	params.InSpawnTransform = InSpawnTransform;
	params.CustomizeFor = CustomizeFor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;
}


// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.GetRandomItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  FoundItem                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleBaseItemSpawn_C::GetRandomItem(class UClass** FoundItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.GetRandomItem");

	ABP_BattleRoyaleBaseItemSpawn_C_GetRandomItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundItem != nullptr)
		*FoundItem = params.FoundItem;
}


// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.RenormalizeChances
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleBaseItemSpawn_C::RenormalizeChances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.RenormalizeChances");

	ABP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleBaseItemSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.UserConstructionScript");

	ABP_BattleRoyaleBaseItemSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
