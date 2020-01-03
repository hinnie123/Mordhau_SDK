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

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_DivineFavorCounter
struct ABP_HordeCharacter_C_OnRep_DivineFavorCounter_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.AwardHealthOnKillToTeammates
struct ABP_HordeCharacter_C_AwardHealthOnKillToTeammates_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilledEnemy
struct ABP_HordeCharacter_C_OnKilledEnemy_Params
{
	class ABP_HordeEnemy_C*                            Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.SpecialCooldown
struct ABP_HordeCharacter_C_SpecialCooldown_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.DoSpecialAbility
struct ABP_HordeCharacter_C_DoSpecialAbility_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Vanish
struct ABP_HordeCharacter_C_Stage2Vanish_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginVanish
struct ABP_HordeCharacter_C_BeginVanish_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Immortality
struct ABP_HordeCharacter_C_Stage2Immortality_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginImmortality
struct ABP_HordeCharacter_C_BeginImmortality_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2DivineFavor
struct ABP_HordeCharacter_C_Stage2DivineFavor_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginDivineFavor
struct ABP_HordeCharacter_C_BeginDivineFavor_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Taunt
struct ABP_HordeCharacter_C_Stage2Taunt_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginTaunt
struct ABP_HordeCharacter_C_BeginTaunt_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Shockwave
struct ABP_HordeCharacter_C_Stage2Shockwave_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Hookshot
struct ABP_HordeCharacter_C_Stage2Hookshot_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginShockwave
struct ABP_HordeCharacter_C_BeginShockwave_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginHookshot
struct ABP_HordeCharacter_C_BeginHookshot_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyDamage
struct ABP_HordeCharacter_C_ModifyDamage_Params
{
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkillsToEquipment
struct ABP_HordeCharacter_C_ApplySkillsToEquipment_Params
{
	class AMordhauEquipment*                           Equip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyOutgoingDamage
struct ABP_HordeCharacter_C_ModifyOutgoingDamage_Params
{
	class AActor*                                      Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDamage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkillFloat
struct ABP_HordeCharacter_C_GetSkillFloat_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.RoundEnded
struct ABP_HordeCharacter_C_RoundEnded_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkills
struct ABP_HordeCharacter_C_ApplySkills_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkill
struct ABP_HordeCharacter_C_GetSkill_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_ReplicatedSkills
struct ABP_HordeCharacter_C_OnRep_ReplicatedSkills_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.UserConstructionScript
struct ABP_HordeCharacter_C_UserConstructionScript_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveBeginPlay
struct ABP_HordeCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnDied
struct ABP_HordeCharacter_C_OnDied_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnArmorReplicated
struct ABP_HordeCharacter_C_OnArmorReplicated_Params
{
	EWearableSlot*                                     Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilled
struct ABP_HordeCharacter_C_OnKilled_Params
{
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnPickedUp
struct ABP_HordeCharacter_C_OnPickedUp_Params
{
	class AMordhauEquipment**                          Eq;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnBlockedMelee
struct ABP_HordeCharacter_C_OnBlockedMelee_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AMordhauCharacter**                          Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnAttackStarted
struct ABP_HordeCharacter_C_OnAttackStarted_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.TriggerImmortality
struct ABP_HordeCharacter_C_TriggerImmortality_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Unvanish
struct ABP_HordeCharacter_C_Unvanish_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveDestroyed
struct ABP_HordeCharacter_C_ReceiveDestroyed_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.RegenerationTick
struct ABP_HordeCharacter_C_RegenerationTick_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.MaintenanceTick
struct ABP_HordeCharacter_C_MaintenanceTick_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.RequestVolley
struct ABP_HordeCharacter_C_RequestVolley_Params
{
	struct FRotator                                    Aim;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ExecuteUbergraph_BP_HordeCharacter
struct ABP_HordeCharacter_C_ExecuteUbergraph_BP_HordeCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
