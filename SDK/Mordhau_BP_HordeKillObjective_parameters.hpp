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

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnWaveProgressed
struct ABP_HordeKillObjective_C_OnWaveProgressed_Params
{
	int                                                NewWave;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_OffenseUpgrades
struct ABP_HordeKillObjective_C_OnRep_OffenseUpgrades_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_DefenseUpgrades
struct ABP_HordeKillObjective_C_OnRep_DefenseUpgrades_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.SpawnOurEquipment
struct ABP_HordeKillObjective_C_SpawnOurEquipment_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.UserConstructionScript
struct ABP_HordeKillObjective_C_UserConstructionScript_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveBeginPlay
struct ABP_HordeKillObjective_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveTick
struct ABP_HordeKillObjective_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnDied
struct ABP_HordeKillObjective_C_OnDied_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnHealthChanged
struct ABP_HordeKillObjective_C_OnHealthChanged_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ExecuteUbergraph_BP_HordeKillObjective
struct ABP_HordeKillObjective_C_ExecuteUbergraph_BP_HordeKillObjective_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
