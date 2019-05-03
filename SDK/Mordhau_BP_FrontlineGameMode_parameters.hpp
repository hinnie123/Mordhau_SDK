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

// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.UserConstructionScript
struct ABP_FrontlineGameMode_C_UserConstructionScript_Params
{
};

// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.MatchTimeRanOut
struct ABP_FrontlineGameMode_C_MatchTimeRanOut_Params
{
};

// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnTeamScoreChanged
struct ABP_FrontlineGameMode_C_OnTeamScoreChanged_Params
{
	int*                                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnKilled
struct ABP_FrontlineGameMode_C_OnKilled_Params
{
	class AController**                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                KilledPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      KilledPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageAgent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.ExecuteUbergraph_BP_FrontlineGameMode
struct ABP_FrontlineGameMode_C_ExecuteUbergraph_BP_FrontlineGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
