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

// Function BP_BearTrap.BP_BearTrap_C.CanHeldInteract
struct ABP_BearTrap_C_CanHeldInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.ShouldShine
struct ABP_BearTrap_C_ShouldShine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.CanInteract
struct ABP_BearTrap_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.DealDamage
struct ABP_BearTrap_C_DealDamage_Params
{
	class AAdvancedCharacter*                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.ValidatePlantSpot
struct ABP_BearTrap_C_ValidatePlantSpot_Params
{
	struct FVector                                     CameraLocation1P;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    CameraRotattion1P;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.OnRequestFire
struct ABP_BearTrap_C_OnRequestFire_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.UserConstructionScript
struct ABP_BearTrap_C_UserConstructionScript_Params
{
};

// Function BP_BearTrap.BP_BearTrap_C.OnLoadedChanged
struct ABP_BearTrap_C_OnLoadedChanged_Params
{
};

// Function BP_BearTrap.BP_BearTrap_C.ReceiveActorBeginOverlap
struct ABP_BearTrap_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.FireProjectile
struct ABP_BearTrap_C_FireProjectile_Params
{
	struct FVector*                                    Origin;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                OwningController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ExpectedDelay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.ReceiveAnyDamage
struct ABP_BearTrap_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.OnUsedToKillOther
struct ABP_BearTrap_C_OnUsedToKillOther_Params
{
	class AAdvancedCharacter**                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.OnPostDismemberedOther
struct ABP_BearTrap_C_OnPostDismemberedOther_Params
{
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASeparatedBodyPart**                         Part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.OnAmmoChanged
struct ABP_BearTrap_C_OnAmmoChanged_Params
{
};

// Function BP_BearTrap.BP_BearTrap_C.PlanterDied
struct ABP_BearTrap_C_PlanterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.PlanterDestroyed
struct ABP_BearTrap_C_PlanterDestroyed_Params
{
	class AAdvancedCharacter*                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.OnInteractionStart
struct ABP_BearTrap_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.OnHeldInteractionStart
struct ABP_BearTrap_C_OnHeldInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap.BP_BearTrap_C.ExecuteUbergraph_BP_BearTrap
struct ABP_BearTrap_C_ExecuteUbergraph_BP_BearTrap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
