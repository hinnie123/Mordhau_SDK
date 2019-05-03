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

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.GetObjectiveProgress
struct ABP_FrontlineDestroyable_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UpdateUIWidgets
struct ABP_FrontlineDestroyable_C_UpdateUIWidgets_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyLostPrerequisites
struct ABP_FrontlineDestroyable_C_EnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyGainedPrerequisites
struct ABP_FrontlineDestroyable_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.Initialize
struct ABP_FrontlineDestroyable_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          InCapturePoint;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UserConstructionScript
struct ABP_FrontlineDestroyable_C_UserConstructionScript_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveBeginPlay
struct ABP_FrontlineDestroyable_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnReplicatedHealthChanged
struct ABP_FrontlineDestroyable_C_OnReplicatedHealthChanged_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveAnyDamage
struct ABP_FrontlineDestroyable_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyGainedPrerequisites
struct ABP_FrontlineDestroyable_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyLostPrerequisites
struct ABP_FrontlineDestroyable_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnUpdateUIWidgets
struct ABP_FrontlineDestroyable_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnInitialize
struct ABP_FrontlineDestroyable_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ExecuteUbergraph_BP_FrontlineDestroyable
struct ABP_FrontlineDestroyable_C_ExecuteUbergraph_BP_FrontlineDestroyable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
