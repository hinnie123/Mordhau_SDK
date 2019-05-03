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

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnArmorReplicated
struct ABP_BattleRoyaleCharacter_C_OnArmorReplicated_Params
{
	EWearableSlot                                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.PlayWearablePickupSound
struct ABP_BattleRoyaleCharacter_C_PlayWearablePickupSound_Params
{
	class UClass*                                      Wearable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_LegArmor
struct ABP_BattleRoyaleCharacter_C_OnRep_LegArmor_Params
{
};

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_ChestArmor
struct ABP_BattleRoyaleCharacter_C_OnRep_ChestArmor_Params
{
};

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnRep_HeadArmor
struct ABP_BattleRoyaleCharacter_C_OnRep_HeadArmor_Params
{
};

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.SpawnArmorPiece
struct ABP_BattleRoyaleCharacter_C_SpawnArmorPiece_Params
{
	class UClass*                                      WearablePickupClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.UserConstructionScript
struct ABP_BattleRoyaleCharacter_C_UserConstructionScript_Params
{
};

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.OnKilled
struct ABP_BattleRoyaleCharacter_C_OnKilled_Params
{
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C.ExecuteUbergraph_BP_BattleRoyaleCharacter
struct ABP_BattleRoyaleCharacter_C_ExecuteUbergraph_BP_BattleRoyaleCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
