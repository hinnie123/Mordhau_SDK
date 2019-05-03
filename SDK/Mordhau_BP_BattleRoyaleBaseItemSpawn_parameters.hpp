#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.SpawnRandomItem
struct ABP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem_Params
{
	struct FTransform                                  InSpawnTransform;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AMordhauPlayerController*                    CustomizeFor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.GetRandomItem
struct ABP_BattleRoyaleBaseItemSpawn_C_GetRandomItem_Params
{
	class UClass*                                      FoundItem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.RenormalizeChances
struct ABP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances_Params
{
};

// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.UserConstructionScript
struct ABP_BattleRoyaleBaseItemSpawn_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
