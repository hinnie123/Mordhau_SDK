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

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.BreakChest
struct ABP_BattleRoyaleChest_C_BreakChest_Params
{
	class AMordhauPlayerController*                    DestroyerPlayerController;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnChestDestroyed
struct ABP_BattleRoyaleChest_C_OnChestDestroyed_Params
{
};

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnRep_Destroyed
struct ABP_BattleRoyaleChest_C_OnRep_Destroyed_Params
{
};

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.SpawnContents
struct ABP_BattleRoyaleChest_C_SpawnContents_Params
{
	class AMordhauPlayerController*                    CustomizeFor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.UserConstructionScript
struct ABP_BattleRoyaleChest_C_UserConstructionScript_Params
{
};

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.ReceiveAnyDamage
struct ABP_BattleRoyaleChest_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.RespawnChest
struct ABP_BattleRoyaleChest_C_RespawnChest_Params
{
};

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.OnInteractionStart
struct ABP_BattleRoyaleChest_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleChest.BP_BattleRoyaleChest_C.ExecuteUbergraph_BP_BattleRoyaleChest
struct ABP_BattleRoyaleChest_C_ExecuteUbergraph_BP_BattleRoyaleChest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
