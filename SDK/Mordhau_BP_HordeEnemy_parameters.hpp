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

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnRep_StunnedBySkillCounter
struct ABP_HordeEnemy_C_OnRep_StunnedBySkillCounter_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.GetEnragedTarget
struct ABP_HordeEnemy_C_GetEnragedTarget_Params
{
	class AMordhauCharacter*                           OutTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyParryResult
struct ABP_HordeEnemy_C_ModifyParryResult_Params
{
	bool*                                              InResult;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AMordhauCharacter**                          Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyDamage
struct ABP_HordeEnemy_C_ModifyDamage_Params
{
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.UserConstructionScript
struct ABP_HordeEnemy_C_UserConstructionScript_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveBeginPlay
struct ABP_HordeEnemy_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnDied
struct ABP_HordeEnemy_C_OnDied_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.MoveBlockedBySlow
struct ABP_HordeEnemy_C_MoveBlockedBySlow_Params
{
	struct FHitResult*                                 Impact;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.CompleteTask
struct ABP_HordeEnemy_C_CompleteTask_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveMordhauDamage
struct ABP_HordeEnemy_C_ReceiveMordhauDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	EMordhauDamageType*                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubDamageType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.LegSweep
struct ABP_HordeEnemy_C_LegSweep_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnBlockedMelee
struct ABP_HordeEnemy_C_OnBlockedMelee_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AMordhauCharacter**                          Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.Recoil
struct ABP_HordeEnemy_C_Recoil_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.Cripple
struct ABP_HordeEnemy_C_Cripple_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.Enrage
struct ABP_HordeEnemy_C_Enrage_Params
{
	class AMordhauCharacter*                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnKilled
struct ABP_HordeEnemy_C_OnKilled_Params
{
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ExecuteUbergraph_BP_HordeEnemy
struct ABP_HordeEnemy_C_ExecuteUbergraph_BP_HordeEnemy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
