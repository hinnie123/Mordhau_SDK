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

// Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_Regenerating
struct ABP_DestroyableActor_C_OnRep_Regenerating_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.OnReplicatedHealthChanged
struct ABP_DestroyableActor_C_OnReplicatedHealthChanged_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.StopRegenerating
struct ABP_DestroyableActor_C_StopRegenerating_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.PlayParticle
struct ABP_DestroyableActor_C_PlayParticle_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.SetHealth
struct ABP_DestroyableActor_C_SetHealth_Params
{
	float                                              NewHealth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_ReplicatedHealth
struct ABP_DestroyableActor_C_OnRep_ReplicatedHealth_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.UpdateReplicatedHealth
struct ABP_DestroyableActor_C_UpdateReplicatedHealth_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.UserConstructionScript
struct ABP_DestroyableActor_C_UserConstructionScript_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveAnyDamage
struct ABP_DestroyableActor_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveBeginPlay
struct ABP_DestroyableActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.RegenTickEvent
struct ABP_DestroyableActor_C_RegenTickEvent_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.StartRegenerating
struct ABP_DestroyableActor_C_StartRegenerating_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.ExecuteUbergraph_BP_DestroyableActor
struct ABP_DestroyableActor_C_ExecuteUbergraph_BP_DestroyableActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
