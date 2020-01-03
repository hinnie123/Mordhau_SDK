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

// Function BP_HordeGameMode.BP_HordeGameMode_C.TriggerDefeat
struct ABP_HordeGameMode_C_TriggerDefeat_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnEquipmentFor
struct ABP_HordeGameMode_C_SpawnEquipmentFor_Params
{
	TArray<class UClass*>                              EquipList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AMordhauCharacter*                           Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.PrepareAIControllers
struct ABP_HordeGameMode_C_PrepareAIControllers_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.SetupCustomizationReplicationActors
struct ABP_HordeGameMode_C_SetupCustomizationReplicationActors_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ProgressWave
struct ABP_HordeGameMode_C_ProgressWave_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.StartHordeMatch
struct ABP_HordeGameMode_C_StartHordeMatch_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnWave
struct ABP_HordeGameMode_C_SpawnWave_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.UserConstructionScript
struct ABP_HordeGameMode_C_UserConstructionScript_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveBeginPlay
struct ABP_HordeGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveTick
struct ABP_HordeGameMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.OnKilled
struct ABP_HordeGameMode_C_OnKilled_Params
{
	class AController**                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                KilledPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      KilledPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageAgent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.K2_PostLogin
struct ABP_HordeGameMode_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ExecuteUbergraph_BP_HordeGameMode
struct ABP_HordeGameMode_C_ExecuteUbergraph_BP_HordeGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
