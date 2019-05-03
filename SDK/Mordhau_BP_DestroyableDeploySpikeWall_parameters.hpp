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

// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.HandleCollision
struct ABP_DestroyableDeploySpikeWall_C_HandleCollision_Params
{
	class AAdvancedCharacter*                          Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageFactor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.Impale
struct ABP_DestroyableDeploySpikeWall_C_Impale_Params
{
	class AAdvancedCharacter*                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.UserConstructionScript
struct ABP_DestroyableDeploySpikeWall_C_UserConstructionScript_Params
{
};

// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnUsedToKillOther
struct ABP_DestroyableDeploySpikeWall_C_OnUsedToKillOther_Params
{
	class AAdvancedCharacter**                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_DestroyableDeploySpikeWall_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnReplicatedHealthChanged
struct ABP_DestroyableDeploySpikeWall_C_OnReplicatedHealthChanged_Params
{
};

// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.ExecuteUbergraph_BP_DestroyableDeploySpikeWall
struct ABP_DestroyableDeploySpikeWall_C_ExecuteUbergraph_BP_DestroyableDeploySpikeWall_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
