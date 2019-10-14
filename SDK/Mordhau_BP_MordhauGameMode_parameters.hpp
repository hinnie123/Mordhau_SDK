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

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.UnpossessAndDestroyPawn
struct ABP_MordhauGameMode_C_UnpossessAndDestroyPawn_Params
{
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RestartPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.UserConstructionScript
struct ABP_MordhauGameMode_C_UserConstructionScript_Params
{
};

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.ReceiveBeginPlay
struct ABP_MordhauGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnKilled
struct ABP_MordhauGameMode_C_OnKilled_Params
{
	class AController**                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                KilledPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      KilledPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageAgent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.AddBots
struct ABP_MordhauGameMode_C_AddBots_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.RemoveBots
struct ABP_MordhauGameMode_C_RemoveBots_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnMatchStateChanged
struct ABP_MordhauGameMode_C_OnMatchStateChanged_Params
{
	struct FName*                                      OldState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      NewState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.K2_OnLogout
struct ABP_MordhauGameMode_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameMode.BP_MordhauGameMode_C.ExecuteUbergraph_BP_MordhauGameMode
struct ABP_MordhauGameMode_C_ExecuteUbergraph_BP_MordhauGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
