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

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.GetObjectiveProgress
struct ABP_FrontlineKillObjective_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.AwardScorePointsIfApplicable
struct ABP_FrontlineKillObjective_C_AwardScorePointsIfApplicable_Params
{
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.CompileCandidatesList
struct ABP_FrontlineKillObjective_C_CompileCandidatesList_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCandidateValidForPossession
struct ABP_FrontlineKillObjective_C_IsCandidateValidForPossession_Params
{
	class ABP_FrontlinePlayerController_C*             Candidate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.NotifyCandidateForPossession
struct ABP_FrontlineKillObjective_C_NotifyCandidateForPossession_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ProcessPossessionCandidates
struct ABP_FrontlineKillObjective_C_ProcessPossessionCandidates_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UpdateUIWidgets
struct ABP_FrontlineKillObjective_C_UpdateUIWidgets_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.SpawnOurEquipment
struct ABP_FrontlineKillObjective_C_SpawnOurEquipment_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UserConstructionScript
struct ABP_FrontlineKillObjective_C_UserConstructionScript_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveBeginPlay
struct ABP_FrontlineKillObjective_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyGainedPrerequisites
struct ABP_FrontlineKillObjective_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyLostPrerequisites
struct ABP_FrontlineKillObjective_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveAnyDamage
struct ABP_FrontlineKillObjective_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnInitialize
struct ABP_FrontlineKillObjective_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnDied
struct ABP_FrontlineKillObjective_C_OnDied_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnUpdateUIWidgets
struct ABP_FrontlineKillObjective_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnHealthChanged
struct ABP_FrontlineKillObjective_C_OnHealthChanged_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.BPLODTick
struct ABP_FrontlineKillObjective_C_BPLODTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnAnyObjectiveProgressChanged
struct ABP_FrontlineKillObjective_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.MoveBlockedBySlow
struct ABP_FrontlineKillObjective_C_MoveBlockedBySlow_Params
{
	struct FHitResult*                                 Impact;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ExecuteUbergraph_BP_FrontlineKillObjective
struct ABP_FrontlineKillObjective_C_ExecuteUbergraph_BP_FrontlineKillObjective_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
