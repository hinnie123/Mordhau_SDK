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

// Function Mordhau.AdvancedCharacter.UnHighlight
struct AAdvancedCharacter_UnHighlight_Params
{
};

// Function Mordhau.AdvancedCharacter.TurnNotAbsolute
struct AAdvancedCharacter_TurnNotAbsolute_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.TurnAtRate
struct AAdvancedCharacter_TurnAtRate_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.Turn
struct AAdvancedCharacter_Turn_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAbsolute;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.Trip
struct AAdvancedCharacter_Trip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.Suicide
struct AAdvancedCharacter_Suicide_Params
{
};

// Function Mordhau.AdvancedCharacter.StopRegen
struct AAdvancedCharacter_StopRegen_Params
{
	float                                              ExtraTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.StopHealthRegen
struct AAdvancedCharacter_StopHealthRegen_Params
{
	float                                              ExtraTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.StopBurningCosmetic
struct AAdvancedCharacter_StopBurningCosmetic_Params
{
};

// Function Mordhau.AdvancedCharacter.StartRagdollWithBlend
struct AAdvancedCharacter_StartRagdollWithBlend_Params
{
	float                                              BlendDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.StartRagdoll
struct AAdvancedCharacter_StartRagdoll_Params
{
};

// Function Mordhau.AdvancedCharacter.StartBurningCosmetic
struct AAdvancedCharacter_StartBurningCosmetic_Params
{
};

// Function Mordhau.AdvancedCharacter.StartBurning
struct AAdvancedCharacter_StartBurning_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Tick;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatorController;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.SpawnParticlesAttached
struct AAdvancedCharacter_SpawnParticlesAttached_Params
{
	class UParticleSystem*                             Particle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.SetOnSmoke
struct AAdvancedCharacter_SetOnSmoke_Params
{
	class AMasterField*                                SmokeField;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.SetOnFire
struct AAdvancedCharacter_SetOnFire_Params
{
	class AMasterField*                                FireField;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.SetLookLagInductionTarget
struct AAdvancedCharacter_SetLookLagInductionTarget_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChangeSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.SetLocationLagInductionTarget
struct AAdvancedCharacter_SetLocationLagInductionTarget_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChangeSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.SetIsRagdollFalling
struct AAdvancedCharacter_SetIsRagdollFalling_Params
{
	bool                                               bInIsRagdollFalling;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.SetAdditiveOverrideType
struct AAdvancedCharacter_SetAdditiveOverrideType_Params
{
	struct FName                                       NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.ServerTrip
struct AAdvancedCharacter_ServerTrip_Params
{
};

// Function Mordhau.AdvancedCharacter.ServerSuicide
struct AAdvancedCharacter_ServerSuicide_Params
{
};

// Function Mordhau.AdvancedCharacter.ServerLookUp
struct AAdvancedCharacter_ServerLookUp_Params
{
	float                                              NewLookUp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.ResetLookLagInductionTarget
struct AAdvancedCharacter_ResetLookLagInductionTarget_Params
{
};

// Function Mordhau.AdvancedCharacter.ResetLocationLagInductionTarget
struct AAdvancedCharacter_ResetLocationLagInductionTarget_Params
{
};

// Function Mordhau.AdvancedCharacter.ResetLagInductionTargets
struct AAdvancedCharacter_ResetLagInductionTargets_Params
{
};

// Function Mordhau.AdvancedCharacter.ResetAdditiveOverrideType
struct AAdvancedCharacter_ResetAdditiveOverrideType_Params
{
};

// Function Mordhau.AdvancedCharacter.RequestTrip
struct AAdvancedCharacter_RequestTrip_Params
{
};

// Function Mordhau.AdvancedCharacter.RequestSuicide
struct AAdvancedCharacter_RequestSuicide_Params
{
};

// Function Mordhau.AdvancedCharacter.RequestMeshEnablePhysics
struct AAdvancedCharacter_RequestMeshEnablePhysics_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.ReplicateHealth
struct AAdvancedCharacter_ReplicateHealth_Params
{
};

// Function Mordhau.AdvancedCharacter.RegisterMaterialToDissolve
struct AAdvancedCharacter_RegisterMaterialToDissolve_Params
{
	class UMaterialInstanceDynamic*                    Mat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.PlayHitEffectParticle
struct AAdvancedCharacter_PlayHitEffectParticle_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFindOptimalSpot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.PlayCharacterSound
struct AAdvancedCharacter_PlayCharacterSound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAttach;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Override;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OnTookDamage
struct AAdvancedCharacter_OnTookDamage_Params
{
	bool                                               bWillKill;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OnRep_Team
struct AAdvancedCharacter_OnRep_Team_Params
{
};

// Function Mordhau.AdvancedCharacter.OnRep_SpawnTurnValue
struct AAdvancedCharacter_OnRep_SpawnTurnValue_Params
{
};

// Function Mordhau.AdvancedCharacter.OnRep_ReplicatedLookUpValue
struct AAdvancedCharacter_OnRep_ReplicatedLookUpValue_Params
{
};

// Function Mordhau.AdvancedCharacter.OnRep_ReplicatedHealth
struct AAdvancedCharacter_OnRep_ReplicatedHealth_Params
{
};

// Function Mordhau.AdvancedCharacter.OnRep_ReplicatedCharacterFlags
struct AAdvancedCharacter_OnRep_ReplicatedCharacterFlags_Params
{
	unsigned char                                      OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OnRep_NetDamage
struct AAdvancedCharacter_OnRep_NetDamage_Params
{
};

// Function Mordhau.AdvancedCharacter.OnKilled
struct AAdvancedCharacter_OnKilled_Params
{
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OnInteractionStart
struct AAdvancedCharacter_OnInteractionStart_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OnInteractionEnd
struct AAdvancedCharacter_OnInteractionEnd_Params
{
};

// Function Mordhau.AdvancedCharacter.OnHit
struct AAdvancedCharacter_OnHit_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OnHighlightStart
struct AAdvancedCharacter_OnHighlightStart_Params
{
};

// Function Mordhau.AdvancedCharacter.OnHighlightEnd
struct AAdvancedCharacter_OnHighlightEnd_Params
{
};

// Function Mordhau.AdvancedCharacter.OnHealthChanged
struct AAdvancedCharacter_OnHealthChanged_Params
{
};

// Function Mordhau.AdvancedCharacter.OnDied
struct AAdvancedCharacter_OnDied_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OnCosmeticHit
struct AAdvancedCharacter_OnCosmeticHit_Params
{
	EMordhauDamageType                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OnAfterDied
struct AAdvancedCharacter_OnAfterDied_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.OffsetHealth
struct AAdvancedCharacter_OffsetHealth_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.MoveRight
struct AAdvancedCharacter_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.MoveForward
struct AAdvancedCharacter_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.MordhauTakeDamage
struct AAdvancedCharacter_MordhauTakeDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EMordhauDamageType                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DamageSubType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.LookUpNotAbsolute
struct AAdvancedCharacter_LookUpNotAbsolute_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.LookUpAtRate
struct AAdvancedCharacter_LookUpAtRate_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.LookUp
struct AAdvancedCharacter_LookUp_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAbsolute;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.LeftOutOfBoundsArea
struct AAdvancedCharacter_LeftOutOfBoundsArea_Params
{
};

// Function Mordhau.AdvancedCharacter.Knockback
struct AAdvancedCharacter_Knockback_Params
{
	struct FVector                                     Amount;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.IsOutOfBounds
struct AAdvancedCharacter_IsOutOfBounds_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.IsLocallyPlayerControlled
struct AAdvancedCharacter_IsLocallyPlayerControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.IsLocallyControlledOrUncontrolled
struct AAdvancedCharacter_IsLocallyControlledOrUncontrolled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.IsAirborne
struct AAdvancedCharacter_IsAirborne_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.InteractionStart
struct AAdvancedCharacter_InteractionStart_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.InteractionEnd
struct AAdvancedCharacter_InteractionEnd_Params
{
};

// Function Mordhau.AdvancedCharacter.Highlight
struct AAdvancedCharacter_Highlight_Params
{
};

// Function Mordhau.AdvancedCharacter.GetRawLookUpValue
struct AAdvancedCharacter_GetRawLookUpValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetOutOfBoundsTimeUntilDeath
struct AAdvancedCharacter_GetOutOfBoundsTimeUntilDeath_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetLookUpValue
struct AAdvancedCharacter_GetLookUpValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetIsDead
struct AAdvancedCharacter_GetIsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetIsBurning
struct AAdvancedCharacter_GetIsBurning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetDistanceIntoSmokeFieldSmoothed
struct AAdvancedCharacter_GetDistanceIntoSmokeFieldSmoothed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetDistanceIntoSmokeField
struct AAdvancedCharacter_GetDistanceIntoSmokeField_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetBestStickyLocation
struct AAdvancedCharacter_GetBestStickyLocation_Params
{
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutNormal;                                                // (Parm, OutParm, IsPlainOldData)
	struct FName                                       OutBone;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetArmorTierForBone
struct AAdvancedCharacter_GetArmorTierForBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetAdditiveOverrideTypeNormalizedTime
struct AAdvancedCharacter_GetAdditiveOverrideTypeNormalizedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.GetAdditiveOverrideType
struct AAdvancedCharacter_GetAdditiveOverrideType_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.EnteredOutOfBoundsArea
struct AAdvancedCharacter_EnteredOutOfBoundsArea_Params
{
};

// Function Mordhau.AdvancedCharacter.DouseFire
struct AAdvancedCharacter_DouseFire_Params
{
};

// Function Mordhau.AdvancedCharacter.CanInteract
struct AAdvancedCharacter_CanInteract_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.CanBleedOutFromHit
struct AAdvancedCharacter_CanBleedOutFromHit_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EMordhauDamageType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.BPLODTick
struct AAdvancedCharacter_BPLODTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.BeginFlinchAdditiveOverride
struct AAdvancedCharacter_BeginFlinchAdditiveOverride_Params
{
	struct FName                                       FlinchOverrideName;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       AltFlinchOverrideName;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Degree;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHead;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SnapDegreeToSteps;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.AssignNetDamage
struct AAdvancedCharacter_AssignNetDamage_Params
{
	unsigned char                                      InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InSubType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InBone;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InPoint;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bInWillKill;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInSimulateFlinch;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIDBit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InDamageSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InDamageAgent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.ApplyRagdollForce
struct AAdvancedCharacter_ApplyRagdollForce_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.AddWound
struct AAdvancedCharacter_AddWound_Params
{
	struct FVector                                     ImpactPoint;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DamageSubType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.AdvancedCharacter.AddTurnDegrees
struct AAdvancedCharacter_AddTurnDegrees_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.ArmsWearable.GetHandsWearablesNum
struct UArmsWearable_GetHandsWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.ArmsWearable.GetHandsWearable
struct UArmsWearable_GetHandsWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauMotion.ProcessFeint
struct UMordhauMotion_ProcessFeint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauMotion.ProcessBlock
struct UMordhauMotion_ProcessBlock_Params
{
	EBlockType                                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauMotion.ProcessAttack
struct UMordhauMotion_ProcessAttack_Params
{
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauMotion.OnTick
struct UMordhauMotion_OnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauMotion.OnLeave
struct UMordhauMotion_OnLeave_Params
{
	bool                                               Interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauMotion.OnLateTick
struct UMordhauMotion_OnLateTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauMotion.OnEnded
struct UMordhauMotion_OnEnded_Params
{
};

// Function Mordhau.MordhauMotion.OnDynamicParamChanged
struct UMordhauMotion_OnDynamicParamChanged_Params
{
	unsigned char                                      OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauMotion.OnBegin
struct UMordhauMotion_OnBegin_Params
{
};

// Function Mordhau.MordhauMotion.CanInitiateMotion
struct UMordhauMotion_CanInitiateMotion_Params
{
	class UClass*                                      NewMotionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.AttackMotion.SetHasHitIncludingCosmeticHit
struct UAttackMotion_SetHasHitIncludingCosmeticHit_Params
{
};

// Function Mordhau.BotProfile.AssignToController
struct UBotProfile_AssignToController_Params
{
	class AMordhauAIController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CapturePointBanner.UpdateVisuals
struct ACapturePointBanner_UpdateVisuals_Params
{
};

// Function Mordhau.CapturePointBanner.InitializeBanner
struct ACapturePointBanner_InitializeBanner_Params
{
	class AControlPoint*                               OwningPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.UpdateFPCameraFor
struct AMordhauVehicle_UpdateFPCameraFor_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.UpdateAnimationFor
struct AMordhauVehicle_UpdateAnimationFor_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauAnimInstance*                        AnimInst;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.StopDriving
struct AMordhauVehicle_StopDriving_Params
{
};

// Function Mordhau.MordhauVehicle.StartDriving
struct AMordhauVehicle_StartDriving_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.SetDriver
struct AMordhauVehicle_SetDriver_Params
{
	class AMordhauCharacter*                           NewDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.ServerSecondaryTurn
struct AMordhauVehicle_ServerSecondaryTurn_Params
{
	float                                              NewTurn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.SecondaryTurnAtRate
struct AMordhauVehicle_SecondaryTurnAtRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.SecondaryTurn
struct AMordhauVehicle_SecondaryTurn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAbsolute;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.RequestUse
struct AMordhauVehicle_RequestUse_Params
{
};

// Function Mordhau.MordhauVehicle.PostProcessCameraPOV
struct AMordhauVehicle_PostProcessCameraPOV_Params
{
	struct FPOV                                        InPOV;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPOV                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauVehicle.OverrideAttackAngle
struct AMordhauVehicle_OverrideAttackAngle_Params
{
	class UAttackMotion*                               Motion;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.OnStoppedDriving
struct AMordhauVehicle_OnStoppedDriving_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.OnStartedDriving
struct AMordhauVehicle_OnStartedDriving_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.OnRep_ReplicatedSecondaryTurnValue
struct AMordhauVehicle_OnRep_ReplicatedSecondaryTurnValue_Params
{
};

// Function Mordhau.MordhauVehicle.KnockOffDriver
struct AMordhauVehicle_KnockOffDriver_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.GetVehicleLeaveInfo
struct AMordhauVehicle_GetVehicleLeaveInfo_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  FromTransform;                                            // (Parm, IsPlainOldData)
	struct FVehicleTransitionInfo                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauVehicle.GetVehicleEnterInfo
struct AMordhauVehicle_GetVehicleEnterInfo_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  FromTransform;                                            // (Parm, IsPlainOldData)
	struct FVehicleTransitionInfo                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauVehicle.GetExitTransform
struct AMordhauVehicle_GetExitTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.DriverLateTick
struct AMordhauVehicle_DriverLateTick_Params
{
	class AMordhauCharacter*                           FromDriver;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauVehicle.CanDrive
struct AMordhauVehicle_CanDrive_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.TogglePerk
struct UCharacterProfileBPWrapper_TogglePerk_Params
{
	unsigned char                                      Perk;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetWearablePattern
struct UCharacterProfileBPWrapper_SetWearablePattern_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetWearableId
struct UCharacterProfileBPWrapper_SetWearableId_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetWearableColor
struct UCharacterProfileBPWrapper_SetWearableColor_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ColorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetVoicePitch
struct UCharacterProfileBPWrapper_SetVoicePitch_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetVoice
struct UCharacterProfileBPWrapper_SetVoice_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetStrong
struct UCharacterProfileBPWrapper_SetStrong_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetSkinny
struct UCharacterProfileBPWrapper_SetSkinny_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetSkinColor
struct UCharacterProfileBPWrapper_SetSkinColor_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetProfileName
struct UCharacterProfileBPWrapper_SetProfileName_Params
{
	struct FText                                       NewName;                                                  // (Parm)
};

// Function Mordhau.CharacterProfileBPWrapper.SetMetalTint
struct UCharacterProfileBPWrapper_SetMetalTint_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetMetalRoughnessScale
struct UCharacterProfileBPWrapper_SetMetalRoughnessScale_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetIsFemale
struct UCharacterProfileBPWrapper_SetIsFemale_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetHairColor
struct UCharacterProfileBPWrapper_SetHairColor_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetHair
struct UCharacterProfileBPWrapper_SetHair_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetFat
struct UCharacterProfileBPWrapper_SetFat_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetFacialHair
struct UCharacterProfileBPWrapper_SetFacialHair_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetFace
struct UCharacterProfileBPWrapper_SetFace_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEyeColor
struct UCharacterProfileBPWrapper_SetEyeColor_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEyebrows
struct UCharacterProfileBPWrapper_SetEyebrows_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentSkin
struct UCharacterProfileBPWrapper_SetEquipmentSkin_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewSkin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentPattern
struct UCharacterProfileBPWrapper_SetEquipmentPattern_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentPartId
struct UCharacterProfileBPWrapper_SetEquipmentPartId_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PartIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewPartId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentId
struct UCharacterProfileBPWrapper_SetEquipmentId_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentCustomizationDirect
struct UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentCustomization                     NewCustomization;                                         // (Parm)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentColor
struct UCharacterProfileBPWrapper_SetEquipmentColor_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ColorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEmblemColor
struct UCharacterProfileBPWrapper_SetEmblemColor_Params
{
	unsigned char                                      ColorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEmblem
struct UCharacterProfileBPWrapper_SetEmblem_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.SetAge
struct UCharacterProfileBPWrapper_SetAge_Params
{
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.RemoveAllEquipment
struct UCharacterProfileBPWrapper_RemoveAllEquipment_Params
{
};

// Function Mordhau.CharacterProfileBPWrapper.HasPerk
struct UCharacterProfileBPWrapper_HasPerk_Params
{
	unsigned char                                      Perk;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.CharacterProfileBPWrapper.ForceValidate
struct UCharacterProfileBPWrapper_ForceValidate_Params
{
};

// Function Mordhau.ComboBoxText.SetSelectedOption
struct UComboBoxText_SetSelectedOption_Params
{
	struct FText                                       Option;                                                   // (Parm)
};

// Function Mordhau.ComboBoxText.RemoveOption
struct UComboBoxText_RemoveOption_Params
{
	struct FText                                       Option;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.ComboBoxText.RefreshOptions
struct UComboBoxText_RefreshOptions_Params
{
};

// DelegateFunction Mordhau.ComboBoxText.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxText_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                             // (Parm)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Mordhau.ComboBoxText.OnOpeningEvent__DelegateSignature
struct UComboBoxText_OnOpeningEvent__DelegateSignature_Params
{
};

// Function Mordhau.ComboBoxText.GetSelectedOption
struct UComboBoxText_GetSelectedOption_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.ComboBoxText.GetOptionCount
struct UComboBoxText_GetOptionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.ComboBoxText.GetOptionAtIndex
struct UComboBoxText_GetOptionAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.ComboBoxText.FindOptionIndex
struct UComboBoxText_FindOptionIndex_Params
{
	struct FText                                       Option;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.ComboBoxText.ClearSelection
struct UComboBoxText_ClearSelection_Params
{
};

// Function Mordhau.ComboBoxText.ClearOptions
struct UComboBoxText_ClearOptions_Params
{
};

// Function Mordhau.ComboBoxText.AddOption
struct UComboBoxText_AddOption_Params
{
	struct FText                                       Option;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.ControlPoint.UpdateVisuals
struct AControlPoint_UpdateVisuals_Params
{
};

// Function Mordhau.ControlPoint.UpdateUIWidgets
struct AControlPoint_UpdateUIWidgets_Params
{
};

// Function Mordhau.ControlPoint.UpdateUIMaterialInstance
struct AControlPoint_UpdateUIMaterialInstance_Params
{
};

// Function Mordhau.ControlPoint.UpdatePresenceNumbers
struct AControlPoint_UpdatePresenceNumbers_Params
{
};

// Function Mordhau.ControlPoint.UpdateCaptureProgress
struct AControlPoint_UpdateCaptureProgress_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.ControlPoint.SetCaptureProgress
struct AControlPoint_SetCaptureProgress_Params
{
	float                                              NewProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCaptor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAwardScore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.ControlPoint.OnStoppedFlashing
struct AControlPoint_OnStoppedFlashing_Params
{
};

// Function Mordhau.ControlPoint.OnStartedFlashing
struct AControlPoint_OnStartedFlashing_Params
{
};

// Function Mordhau.ControlPoint.OnRep_ReplicatedCaptureProgress
struct AControlPoint_OnRep_ReplicatedCaptureProgress_Params
{
};

// Function Mordhau.ControlPoint.OnRep_OwningTeam
struct AControlPoint_OnRep_OwningTeam_Params
{
};

// Function Mordhau.ControlPoint.OnRep_CapturingTeam
struct AControlPoint_OnRep_CapturingTeam_Params
{
};

// Function Mordhau.ControlPoint.OnOwningTeamChanged
struct AControlPoint_OnOwningTeamChanged_Params
{
};

// Function Mordhau.ControlPoint.OnCapturingTeamChanged
struct AControlPoint_OnCapturingTeamChanged_Params
{
};

// Function Mordhau.ControlPoint.OnCaptureAreaEndOverlap
struct AControlPoint_OnCaptureAreaEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.ControlPoint.OnCaptureAreaBeginOverlap
struct AControlPoint_OnCaptureAreaBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.ControlPoint.EnemyLostPrerequisites
struct AControlPoint_EnemyLostPrerequisites_Params
{
};

// Function Mordhau.ControlPoint.EnemyGainedPrerequisites
struct AControlPoint_EnemyGainedPrerequisites_Params
{
};

// Function Mordhau.ControlPoint.CanCapture
struct AControlPoint_CanCapture_Params
{
	unsigned char                                      Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.CreatureAnimInstance.OnFootstep
struct UCreatureAnimInstance_OnFootstep_Params
{
	int                                                Limb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CreatureAnimInstance.DoFootstep
struct UCreatureAnimInstance_DoFootstep_Params
{
	int                                                Limb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CustomizationReplicationActor.UpdateCharacterProfile
struct ACustomizationReplicationActor_UpdateCharacterProfile_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CustomizationReplicationActor.UnregisterCharacter
struct ACustomizationReplicationActor_UnregisterCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CustomizationReplicationActor.TriggerUpdateIfUpToDate
struct ACustomizationReplicationActor_TriggerUpdateIfUpToDate_Params
{
};

// Function Mordhau.CustomizationReplicationActor.RegisterCharacter
struct ACustomizationReplicationActor_RegisterCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedWearablePattern
struct ACustomizationReplicationActor_OnRep_ReplicatedWearablePattern_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedWearableId
struct ACustomizationReplicationActor_OnRep_ReplicatedWearableId_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedWearableColor2
struct ACustomizationReplicationActor_OnRep_ReplicatedWearableColor2_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedWearableColor1
struct ACustomizationReplicationActor_OnRep_ReplicatedWearableColor1_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedSkillsCustomization
struct ACustomizationReplicationActor_OnRep_ReplicatedSkillsCustomization_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedFaceBonesTranslate
struct ACustomizationReplicationActor_OnRep_ReplicatedFaceBonesTranslate_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedFaceBonesScale
struct ACustomizationReplicationActor_OnRep_ReplicatedFaceBonesScale_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedFaceBonesRotate
struct ACustomizationReplicationActor_OnRep_ReplicatedFaceBonesRotate_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedDefaultEquipmentId
struct ACustomizationReplicationActor_OnRep_ReplicatedDefaultEquipmentId_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedAppearanceCustomization
struct ACustomizationReplicationActor_OnRep_ReplicatedAppearanceCustomization_Params
{
};

// Function Mordhau.CustomizationReplicationActor.IsUpToDate
struct ACustomizationReplicationActor_IsUpToDate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.CustomizationReplicationActor.AssignDataFromProfile
struct ACustomizationReplicationActor_AssignDataFromProfile_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.EmoteMotion.DoDrop
struct UEmoteMotion_DoDrop_Params
{
	class AMordhauEquipment*                           Equipment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Force;                                                    // (Parm, IsPlainOldData)
};

// Function Mordhau.EnvironmentMovable.InitializeMovable
struct AEnvironmentMovable_InitializeMovable_Params
{
	class USceneComponent*                             InSwayingComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InRollPitchYawFrequency;                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InRollPitchYawMagnitude;                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InRollPitchYawSpeed;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.EquipmentSwitchMotion.GetSwitchingTo
struct UEquipmentSwitchMotion_GetSwitchingTo_Params
{
	class AMordhauEquipment*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauActor.UpdateThudVelocity
struct AMordhauActor_UpdateThudVelocity_Params
{
	float                                              NewThudVelocity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.UnHighlight
struct AMordhauActor_UnHighlight_Params
{
};

// Function Mordhau.MordhauActor.PostInteractionWidgetCreated
struct AMordhauActor_PostInteractionWidgetCreated_Params
{
};

// Function Mordhau.MordhauActor.OnUsedToKillOther
struct AMordhauActor_OnUsedToKillOther_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.OnThud
struct AMordhauActor_OnThud_Params
{
};

// Function Mordhau.MordhauActor.OnRep_ReplicatedThud
struct AMordhauActor_OnRep_ReplicatedThud_Params
{
};

// Function Mordhau.MordhauActor.OnReceiveCosmeticHit
struct AMordhauActor_OnReceiveCosmeticHit_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauActor.OnPostDismemberedOther
struct AMordhauActor_OnPostDismemberedOther_Params
{
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ASeparatedBodyPart*                          Part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.OnLocalPlayerUsedToKillOther
struct AMordhauActor_OnLocalPlayerUsedToKillOther_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.OnInteractPassively
struct AMordhauActor_OnInteractPassively_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.OnInteractionStart
struct AMordhauActor_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.OnInteractionEnd
struct AMordhauActor_OnInteractionEnd_Params
{
};

// Function Mordhau.MordhauActor.OnHighlightStart
struct AMordhauActor_OnHighlightStart_Params
{
};

// Function Mordhau.MordhauActor.OnHighlightEnd
struct AMordhauActor_OnHighlightEnd_Params
{
};

// Function Mordhau.MordhauActor.OnHeldInteractionStart
struct AMordhauActor_OnHeldInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.InteractPassively
struct AMordhauActor_InteractPassively_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.InteractionStart
struct AMordhauActor_InteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.InteractionEnd
struct AMordhauActor_InteractionEnd_Params
{
};

// Function Mordhau.MordhauActor.Highlight
struct AMordhauActor_Highlight_Params
{
};

// Function Mordhau.MordhauActor.HeldInteractionStart
struct AMordhauActor_HeldInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauActor.CanInteractPassively
struct AMordhauActor_CanInteractPassively_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauActor.CanInteract
struct AMordhauActor_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauActor.CanHeldInteract
struct AMordhauActor_CanHeldInteract_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.UpdateMaterial
struct AMordhauEquipment_UpdateMaterial_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.UpdateInteractionCollision
struct AMordhauEquipment_UpdateInteractionCollision_Params
{
};

// Function Mordhau.MordhauEquipment.UpdateEquipmentVisualState
struct AMordhauEquipment_UpdateEquipmentVisualState_Params
{
};

// Function Mordhau.MordhauEquipment.UpdateEquipmentState
struct AMordhauEquipment_UpdateEquipmentState_Params
{
};

// Function Mordhau.MordhauEquipment.SwitchMode
struct AMordhauEquipment_SwitchMode_Params
{
};

// Function Mordhau.MordhauEquipment.StopThrownTrail
struct AMordhauEquipment_StopThrownTrail_Params
{
};

// Function Mordhau.MordhauEquipment.StartThrownTrail
struct AMordhauEquipment_StartThrownTrail_Params
{
};

// Function Mordhau.MordhauEquipment.ShouldShine
struct AMordhauEquipment_ShouldShine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.SetPartsUseAuxiliaryMesh
struct AMordhauEquipment_SetPartsUseAuxiliaryMesh_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.SetParts
struct AMordhauEquipment_SetParts_Params
{
	TArray<unsigned char>                              NewPartsId;                                               // (Parm, ZeroConstructor)
	bool                                               bRebuild;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.SetLoaded
struct AMordhauEquipment_SetLoaded_Params
{
	bool                                               bNewLoaded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.SetColors
struct AMordhauEquipment_SetColors_Params
{
	TArray<unsigned char>                              NewColors;                                                // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauEquipment.SetAmmo
struct AMordhauEquipment_SetAmmo_Params
{
	unsigned char                                      NewAmmo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.RestockOtherEquipmentOnCharacter
struct AMordhauEquipment_RestockOtherEquipmentOnCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.ResetMeshRelativeTransform
struct AMordhauEquipment_ResetMeshRelativeTransform_Params
{
};

// Function Mordhau.MordhauEquipment.RequestAttack
struct AMordhauEquipment_RequestAttack_Params
{
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.RebuildIfAllReplicated
struct AMordhauEquipment_RebuildIfAllReplicated_Params
{
};

// Function Mordhau.MordhauEquipment.RebuildEquipment
struct AMordhauEquipment_RebuildEquipment_Params
{
	bool                                               bDoOnlyQuickJob;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.OnRequestModeSwitch
struct AMordhauEquipment_OnRequestModeSwitch_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.OnRequestFire
struct AMordhauEquipment_OnRequestFire_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedSkin
struct AMordhauEquipment_OnRep_ReplicatedSkin_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedPattern
struct AMordhauEquipment_OnRep_ReplicatedPattern_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedPartsId
struct AMordhauEquipment_OnRep_ReplicatedPartsId_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedEmblemColors
struct AMordhauEquipment_OnRep_ReplicatedEmblemColors_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedEmblem
struct AMordhauEquipment_OnRep_ReplicatedEmblem_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedColors
struct AMordhauEquipment_OnRep_ReplicatedColors_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_IsUsingAlternateMode
struct AMordhauEquipment_OnRep_IsUsingAlternateMode_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_IsLoaded
struct AMordhauEquipment_OnRep_IsLoaded_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_Ammo
struct AMordhauEquipment_OnRep_Ammo_Params
{
};

// Function Mordhau.MordhauEquipment.OnPickedUp
struct AMordhauEquipment_OnPickedUp_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.OnPartsChanged
struct AMordhauEquipment_OnPartsChanged_Params
{
};

// Function Mordhau.MordhauEquipment.OnLoadedChanged
struct AMordhauEquipment_OnLoadedChanged_Params
{
};

// Function Mordhau.MordhauEquipment.OnHolsteredOrDropped
struct AMordhauEquipment_OnHolsteredOrDropped_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.OnHolstered
struct AMordhauEquipment_OnHolstered_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.OnEquipped
struct AMordhauEquipment_OnEquipped_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.OnDropped
struct AMordhauEquipment_OnDropped_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.OnAmmoChanged
struct AMordhauEquipment_OnAmmoChanged_Params
{
};

// Function Mordhau.MordhauEquipment.LocalPlayerTick
struct AMordhauEquipment_LocalPlayerTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.LocalPlayerLateTick
struct AMordhauEquipment_LocalPlayerLateTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.LateTick
struct AMordhauEquipment_LateTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.GetRandomCustomization
struct AMordhauEquipment_GetRandomCustomization_Params
{
	bool                                               bOnlyColors;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentCustomization                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauEquipment.GetParentCharacter
struct AMordhauEquipment_GetParentCharacter_Params
{
	class AMordhauCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.GetCurrentMaxAmmo
struct AMordhauEquipment_GetCurrentMaxAmmo_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.GetAmmo
struct AMordhauEquipment_GetAmmo_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.FireProjectile_Internal
struct AMordhauEquipment_FireProjectile_Internal_Params
{
	struct FVector                                     InOrigin;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    InOrientation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedDelay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauProjectile*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.FireProjectile
struct AMordhauEquipment_FireProjectile_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 OwningController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedDelay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.FindCurrentHolsterInfo
struct AMordhauEquipment_FindCurrentHolsterInfo_Params
{
	struct FEquipmentHolsterInfo                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauEquipment.EquipmentCommand
struct AMordhauEquipment_EquipmentCommand_Params
{
	int                                                Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.DestroyPhysicsProxy
struct AMordhauEquipment_DestroyPhysicsProxy_Params
{
};

// Function Mordhau.MordhauEquipment.ComputeAccurateBounds
struct AMordhauEquipment_ComputeAccurateBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.CanPerformAttack
struct AMordhauEquipment_CanPerformAttack_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.BelongsToCharacter
struct AMordhauEquipment_BelongsToCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.AssignCustomizationToProjectile
struct AMordhauEquipment_AssignCustomizationToProjectile_Params
{
	class AMordhauProjectile*                          Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauEquipment.AssignCustomization
struct AMordhauEquipment_AssignCustomization_Params
{
	struct FEquipmentCustomization                     Customization;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      CustomizationEmblem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomizationEmblemColor1;                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomizationEmblemColor2;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.UpdateTrail
struct AMordhauWeapon_UpdateTrail_Params
{
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.RequestBlock
struct AMordhauWeapon_RequestBlock_Params
{
	EBlockType                                         BlockType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFTP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.OnWasBlocked
struct AMordhauWeapon_OnWasBlocked_Params
{
	EBlockedReason                                     Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.OnHit
struct AMordhauWeapon_OnHit_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.OnCosmeticHit
struct AMordhauWeapon_OnCosmeticHit_Params
{
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.OnBlockStarted
struct AMordhauWeapon_OnBlockStarted_Params
{
	EBlockType                                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.OnBlocked
struct AMordhauWeapon_OnBlocked_Params
{
	EBlockedReason                                     Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.OnAttackStopped
struct AMordhauWeapon_OnAttackStopped_Params
{
};

// Function Mordhau.MordhauWeapon.OnAttackStarted
struct AMordhauWeapon_OnAttackStarted_Params
{
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.IncreaseBloodLevel
struct AMordhauWeapon_IncreaseBloodLevel_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWeapon.GetBaseAttackInfo
struct AMordhauWeapon_GetBaseAttackInfo_Params
{
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAttackInfo                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Mordhau.VirtualWeapon.InitializeVirtualWeapon
struct AVirtualWeapon_InitializeVirtualWeapon_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.GameModeMetadata.GetDefaultObject
struct UGameModeMetadata_GetDefaultObject_Params
{
	class UClass*                                      MetadataClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameModeMetadata*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.HeadWearable.GetCoifWearablesNum
struct UHeadWearable_GetCoifWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.HeadWearable.GetCoifWearable
struct UHeadWearable_GetCoifWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.Horse.SpawnTurd
struct AHorse_SpawnTurd_Params
{
};

// Function Mordhau.Horse.ServerRequestRearing
struct AHorse_ServerRequestRearing_Params
{
};

// Function Mordhau.Horse.SecondaryTurnNotAbsolute
struct AHorse_SecondaryTurnNotAbsolute_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.Horse.RequestRearing
struct AHorse_RequestRearing_Params
{
};

// Function Mordhau.Horse.OnRep_ReplicatedRearing
struct AHorse_OnRep_ReplicatedRearing_Params
{
};

// Function Mordhau.Horse.OnBumpCapsuleOverlapped
struct AHorse_OnBumpCapsuleOverlapped_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.Horse.GetIsInRearingMode
struct AHorse_GetIsInRearingMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.Horse.CalculateBumpDamage
struct AHorse_CalculateBumpDamage_Params
{
	struct FVector                                     OurWorldVelocity;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.InteractionComponent.UnHighlight
struct UInteractionComponent_UnHighlight_Params
{
};

// Function Mordhau.InteractionComponent.OnInteractionStart
struct UInteractionComponent_OnInteractionStart_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.InteractionComponent.OnInteractionEnd
struct UInteractionComponent_OnInteractionEnd_Params
{
};

// Function Mordhau.InteractionComponent.OnHighlightStart
struct UInteractionComponent_OnHighlightStart_Params
{
};

// Function Mordhau.InteractionComponent.OnHighlightEnd
struct UInteractionComponent_OnHighlightEnd_Params
{
};

// Function Mordhau.InteractionComponent.InteractionStart
struct UInteractionComponent_InteractionStart_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.InteractionComponent.InteractionEnd
struct UInteractionComponent_InteractionEnd_Params
{
};

// Function Mordhau.InteractionComponent.Highlight
struct UInteractionComponent_Highlight_Params
{
};

// Function Mordhau.InteractionComponent.CanInteract
struct UInteractionComponent_CanInteract_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.LegsWearable.GetFeetWearablesNum
struct ULegsWearable_GetFeetWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.LegsWearable.GetFeetWearable
struct ULegsWearable_GetFeetWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MasterField.UpdateField
struct AMasterField_UpdateField_Params
{
};

// Function Mordhau.MasterField.SetSubFieldsHidden
struct AMasterField_SetSubFieldsHidden_Params
{
	bool                                               bAreHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MasterField.RecomputeCombinedBoundingBox
struct AMasterField_RecomputeCombinedBoundingBox_Params
{
};

// Function Mordhau.MasterField.GetSubFields
struct AMasterField_GetSubFields_Params
{
	TArray<class ASubField*>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MasterField.GetFieldBoundsCenter
struct AMasterField_GetFieldBoundsCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MasterField.DeactivateAndDestroyField
struct AMasterField_DeactivateAndDestroyField_Params
{
};

// Function Mordhau.MasterField.CreateField
struct AMasterField_CreateField_Params
{
};

// Function Mordhau.MasterField.ComputeDistanceIntoField
struct AMasterField_ComputeDistanceIntoField_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MasterField.BeginFieldDeactivation
struct AMasterField_BeginFieldDeactivation_Params
{
};

// Function Mordhau.Mordhau1DVehicle.OnStepChanged
struct AMordhau1DVehicle_OnStepChanged_Params
{
};

// Function Mordhau.MordhauAIController.UpdatePerceptionInfo
struct AMordhauAIController_UpdatePerceptionInfo_Params
{
	class AAdvancedCharacter*                          InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPerceptionInfo                             PerceptionInfo;                                           // (Parm, OutParm)
};

// Function Mordhau.MordhauAIController.StartFacingMovement
struct AMordhauAIController_StartFacingMovement_Params
{
	float                                              LocationUpOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.StartFacingLocation
struct AMordhauAIController_StartFacingLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.StartFacingBone
struct AMordhauAIController_StartFacingBone_Params
{
	class USkeletalMeshComponent*                      SkelMesh;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneToFace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationUpOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DegreeOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.StartFacingActor2D
struct AMordhauAIController_StartFacingActor2D_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationUpOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.StartFacingActor
struct AMordhauAIController_StartFacingActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationUpOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DegreeOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.RequestVoiceCommand
struct AMordhauAIController_RequestVoiceCommand_Params
{
	unsigned char                                      Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.RefreshCharacterProfile
struct AMordhauAIController_RefreshCharacterProfile_Params
{
};

// Function Mordhau.MordhauAIController.PerceivesEnemy
struct AMordhauAIController_PerceivesEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.PerceivesAlly
struct AMordhauAIController_PerceivesAlly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.OnStoppedPerceivingCharacter
struct AMordhauAIController_OnStoppedPerceivingCharacter_Params
{
	class AAdvancedCharacter*                          PerceivedCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPerceptionInfo                             PerceptionInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauAIController.OnStartedPerceivingCharacter
struct AMordhauAIController_OnStartedPerceivingCharacter_Params
{
	class AAdvancedCharacter*                          PerceivedCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPerceptionInfo                             PerceptionInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauAIController.OnPerceptionUpdated
struct AMordhauAIController_OnPerceptionUpdated_Params
{
	TArray<class AActor*>                              InUpdatedActors;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauAIController.OnCharacterDiedOrDestroyed
struct AMordhauAIController_OnCharacterDiedOrDestroyed_Params
{
	class AAdvancedCharacter*                          AdvancedCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.OnAfterUnPossess
struct AMordhauAIController_OnAfterUnPossess_Params
{
};

// Function Mordhau.MordhauAIController.GetTeam
struct AMordhauAIController_GetTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.GetPerceivedEnemies
struct AMordhauAIController_GetPerceivedEnemies_Params
{
	TArray<class AMordhauCharacter*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauAIController.GetPerceivedAllies
struct AMordhauAIController_GetPerceivedAllies_Params
{
	TArray<class AMordhauCharacter*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauAIController.GetMotionBasedRandom
struct AMordhauAIController_GetMotionBasedRandom_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.GetKthClosestOfThree
struct AMordhauAIController_GetKthClosestOfThree_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.GetCurrentlyFacingActor
struct AMordhauAIController_GetCurrentlyFacingActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.GetCurrentFacingMode
struct AMordhauAIController_GetCurrentFacingMode_Params
{
	EAIFacingMode                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.GetClosestEnemy
struct AMordhauAIController_GetClosestEnemy_Params
{
	class AMordhauCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.GetClosestAlly
struct AMordhauAIController_GetClosestAlly_Params
{
	class AMordhauCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.GetAllyClearanceSides
struct AMordhauAIController_GetAllyClearanceSides_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauAIController.DestroyController
struct AMordhauAIController_DestroyController_Params
{
};

// Function Mordhau.MordhauBeaconClient.ServerReserveSlots
struct AMordhauBeaconClient_ServerReserveSlots_Params
{
	TArray<struct FSteamID>                            InSteamIDs;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauBeaconClient.ReserveSlots
struct AMordhauBeaconClient_ReserveSlots_Params
{
	struct FURL                                        ConnectURL;                                               // (Parm, OutParm)
	TArray<struct FSteamID>                            InSteamIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauBeaconClient.ClientNotifyReservationStatus
struct AMordhauBeaconClient_ClientNotifyReservationStatus_Params
{
	int                                                OpenSlots;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EReservationStatus                                 ReservationStatus;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauBeaconClient.ClientNotifyOpenSlots
struct AMordhauBeaconClient_ClientNotifyOpenSlots_Params
{
	int                                                OpenSlots;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCameraComponent.UpdateCamera
struct UMordhauCameraComponent_UpdateCamera_Params
{
};

// Function Mordhau.MordhauCameraComponent.ComputeCameraPOV
struct UMordhauCameraComponent_ComputeCameraPOV_Params
{
	struct FPOV                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauCameraManager.SetViewTargetBP
struct AMordhauCameraManager_SetViewTargetBP_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCameraManager.SetCameraStyleBP
struct AMordhauCameraManager_SetCameraStyleBP_Params
{
	struct FName                                       NewCameraStyle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCameraManager.OnHitFlash
struct AMordhauCameraManager_OnHitFlash_Params
{
	bool                                               bIsDirectional;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCameraManager.LeaveMapView
struct AMordhauCameraManager_LeaveMapView_Params
{
};

// Function Mordhau.MordhauCameraManager.LeaveCustomization
struct AMordhauCameraManager_LeaveCustomization_Params
{
};

// Function Mordhau.MordhauCameraManager.GetViewTargetBP
struct AMordhauCameraManager_GetViewTargetBP_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCameraManager.GetIsInMapView
struct AMordhauCameraManager_GetIsInMapView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCameraManager.GetIsInCustomization
struct AMordhauCameraManager_GetIsInCustomization_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCameraManager.GetCameraStyleBP
struct AMordhauCameraManager_GetCameraStyleBP_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCameraManager.GetCameraCache
struct AMordhauCameraManager_GetCameraCache_Params
{
	struct FMinimalViewInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauCameraManager.EnterMapView
struct AMordhauCameraManager_EnterMapView_Params
{
};

// Function Mordhau.MordhauCameraManager.EnterCustomization
struct AMordhauCameraManager_EnterCustomization_Params
{
	class AActor*                                      CustomizationTarget;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ValidateInteractionTarget
struct AMordhauCharacter_ValidateInteractionTarget_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.UseReleased
struct AMordhauCharacter_UseReleased_Params
{
};

// Function Mordhau.MordhauCharacter.UsePressed
struct AMordhauCharacter_UsePressed_Params
{
};

// Function Mordhau.MordhauCharacter.UpdateWearableInstanceColorsAndPatterns
struct AMordhauCharacter_UpdateWearableInstanceColorsAndPatterns_Params
{
};

// Function Mordhau.MordhauCharacter.UpdateQuiverMesh
struct AMordhauCharacter_UpdateQuiverMesh_Params
{
};

// Function Mordhau.MordhauCharacter.UpdateLOD
struct AMordhauCharacter_UpdateLOD_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.UpdateFPCamera
struct AMordhauCharacter_UpdateFPCamera_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLookUpValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyUpdateRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Offset;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.UpdateAllSkeletalMeshComponentMaterials
struct AMordhauCharacter_UpdateAllSkeletalMeshComponentMaterials_Params
{
};

// Function Mordhau.MordhauCharacter.TryDismember
struct AMordhauCharacter_TryDismember_Params
{
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AMordhauWeapon*                              Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRagdollDismember;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.TryClimbing
struct AMordhauCharacter_TryClimbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SwitchToFists
struct AMordhauCharacter_SwitchToFists_Params
{
};

// Function Mordhau.MordhauCharacter.SwitchModeAndReAttach
struct AMordhauCharacter_SwitchModeAndReAttach_Params
{
	class AMordhauEquipment*                           ToSwitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SwitchEquipmentByIndex
struct AMordhauCharacter_SwitchEquipmentByIndex_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SwitchEquipment
struct AMordhauCharacter_SwitchEquipment_Params
{
	class AMordhauEquipment*                           ToSwitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.StopSupersprint
struct AMordhauCharacter_StopSupersprint_Params
{
};

// Function Mordhau.MordhauCharacter.StopStaminaRegen
struct AMordhauCharacter_StopStaminaRegen_Params
{
	float                                              ExtraTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.StopSprinting
struct AMordhauCharacter_StopSprinting_Params
{
};

// Function Mordhau.MordhauCharacter.StopMontage
struct AMordhauCharacter_StopMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOut;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.StopListenForStrike360
struct AMordhauCharacter_StopListenForStrike360_Params
{
};

// Function Mordhau.MordhauCharacter.StopListenForStab360
struct AMordhauCharacter_StopListenForStab360_Params
{
};

// Function Mordhau.MordhauCharacter.StopCurrentVoiceCommand
struct AMordhauCharacter_StopCurrentVoiceCommand_Params
{
};

// Function Mordhau.MordhauCharacter.StopCrouching
struct AMordhauCharacter_StopCrouching_Params
{
};

// Function Mordhau.MordhauCharacter.StopAttackYell
struct AMordhauCharacter_StopAttackYell_Params
{
};

// Function Mordhau.MordhauCharacter.StopAnim
struct AMordhauCharacter_StopAnim_Params
{
	float                                              FadeOut;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.StartSupersprint
struct AMordhauCharacter_StartSupersprint_Params
{
};

// Function Mordhau.MordhauCharacter.StartSprinting
struct AMordhauCharacter_StartSprinting_Params
{
};

// Function Mordhau.MordhauCharacter.StartCrouching
struct AMordhauCharacter_StartCrouching_Params
{
};

// Function Mordhau.MordhauCharacter.SprintReleased
struct AMordhauCharacter_SprintReleased_Params
{
};

// Function Mordhau.MordhauCharacter.SprintPressed
struct AMordhauCharacter_SprintPressed_Params
{
};

// Function Mordhau.MordhauCharacter.ShowEquipmentIfViewTarget
struct AMordhauCharacter_ShowEquipmentIfViewTarget_Params
{
};

// Function Mordhau.MordhauCharacter.SetQuiver
struct AMordhauCharacter_SetQuiver_Params
{
	class UClass*                                      NewQuiver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetMaxAnimBlendWeight
struct AMordhauCharacter_SetMaxAnimBlendWeight_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetMaterialParamsForMergedSlot
struct AMordhauCharacter_SetMaterialParamsForMergedSlot_Params
{
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	class UMordhauWearable*                            Wearable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetMaterialParamsForLODMasterSlot
struct AMordhauCharacter_SetMaterialParamsForLODMasterSlot_Params
{
	struct FString                                     Slot;                                                     // (Parm, ZeroConstructor)
	class UMordhauWearable*                            Wearable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetFaceCustomizationTranslate
struct AMordhauCharacter_SetFaceCustomizationTranslate_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetFaceCustomizationScale
struct AMordhauCharacter_SetFaceCustomizationScale_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetFaceCustomizationRotate
struct AMordhauCharacter_SetFaceCustomizationRotate_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetCustomizationReplicationActor
struct AMordhauCharacter_SetCustomizationReplicationActor_Params
{
	class ACustomizationReplicationActor*              CRA;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetCurrentlyTracking
struct AMordhauCharacter_SetCurrentlyTracking_Params
{
	class AActor*                                      NewTrackingTarget;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetCameraStyle
struct AMordhauCharacter_SetCameraStyle_Params
{
	unsigned char                                      NewStyle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendCamera;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetAnimRate
struct AMordhauCharacter_SetAnimRate_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.SetAnimPosition
struct AMordhauCharacter_SetAnimPosition_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerSuggestHitDetection
struct AMordhauCharacter_ServerSuggestHitDetection_Params
{
	class AAdvancedCharacter*                          OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // (Parm)
	unsigned char                                      BoneId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerSetInteractionTarget
struct AMordhauCharacter_ServerSetInteractionTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerRequestVoiceCommand
struct AMordhauCharacter_ServerRequestVoiceCommand_Params
{
	unsigned char                                      VoiceRequest;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerRequestPing
struct AMordhauCharacter_ServerRequestPing_Params
{
};

// Function Mordhau.MordhauCharacter.ServerRequestPassiveInteraction
struct AMordhauCharacter_ServerRequestPassiveInteraction_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerRequestDodge
struct AMordhauCharacter_ServerRequestDodge_Params
{
	unsigned char                                      PackedWorldYaw;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerQueueAttack
struct AMordhauCharacter_ServerQueueAttack_Params
{
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MotionID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerDropParry
struct AMordhauCharacter_ServerDropParry_Params
{
	unsigned char                                      MotionID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerAssignNetMotion
struct AMordhauCharacter_ServerAssignNetMotion_Params
{
	struct FNetMotion                                  NewNetMotion;                                             // (ConstParm, Parm, ReferenceParm)
	unsigned char                                      LastAuthObserved;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ServerAssignFireAim
struct AMordhauCharacter_ServerAssignFireAim_Params
{
	struct FVector                                     Orig;                                                     // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ReweightSkinning
struct AMordhauCharacter_ReweightSkinning_Params
{
	int                                                BoneFrom;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoneTo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeChildren;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExceptNearThisPoint;                                      // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NearPointBone;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.RestockDefaultEquipment
struct AMordhauCharacter_RestockDefaultEquipment_Params
{
	int                                                MaxSlotsToRestock;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AMordhauEquipment*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauCharacter.RequestVoiceCommand
struct AMordhauCharacter_RequestVoiceCommand_Params
{
	unsigned char                                      CommandType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowQueue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.RequestUse
struct AMordhauCharacter_RequestUse_Params
{
};

// Function Mordhau.MordhauCharacter.RequestToggleWeaponMode
struct AMordhauCharacter_RequestToggleWeaponMode_Params
{
};

// Function Mordhau.MordhauCharacter.RequestStrike360
struct AMordhauCharacter_RequestStrike360_Params
{
};

// Function Mordhau.MordhauCharacter.RequestStab360
struct AMordhauCharacter_RequestStab360_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRightUpperStrike
struct AMordhauCharacter_RequestRightUpperStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRightStrike
struct AMordhauCharacter_RequestRightStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRightStab
struct AMordhauCharacter_RequestRightStab_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRightLowerStrike
struct AMordhauCharacter_RequestRightLowerStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRangedCancel
struct AMordhauCharacter_RequestRangedCancel_Params
{
};

// Function Mordhau.MordhauCharacter.RequestParry
struct AMordhauCharacter_RequestParry_Params
{
	EBlockType                                         BlockType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFTP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.RequestLeftUpperStrike
struct AMordhauCharacter_RequestLeftUpperStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestLeftStrike
struct AMordhauCharacter_RequestLeftStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestLeftStab
struct AMordhauCharacter_RequestLeftStab_Params
{
};

// Function Mordhau.MordhauCharacter.RequestLeftLowerStrike
struct AMordhauCharacter_RequestLeftLowerStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestKick
struct AMordhauCharacter_RequestKick_Params
{
};

// Function Mordhau.MordhauCharacter.RequestJump
struct AMordhauCharacter_RequestJump_Params
{
};

// Function Mordhau.MordhauCharacter.RequestHolster
struct AMordhauCharacter_RequestHolster_Params
{
	unsigned char                                      Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.RequestFire
struct AMordhauCharacter_RequestFire_Params
{
};

// Function Mordhau.MordhauCharacter.RequestFeint
struct AMordhauCharacter_RequestFeint_Params
{
};

// Function Mordhau.MordhauCharacter.RequestEmote
struct AMordhauCharacter_RequestEmote_Params
{
	unsigned char                                      EmoteId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.RequestDrop
struct AMordhauCharacter_RequestDrop_Params
{
};

// Function Mordhau.MordhauCharacter.RequestCouchedAttack
struct AMordhauCharacter_RequestCouchedAttack_Params
{
};

// Function Mordhau.MordhauCharacter.RequestClimb
struct AMordhauCharacter_RequestClimb_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.RequestBash
struct AMordhauCharacter_RequestBash_Params
{
};

// Function Mordhau.MordhauCharacter.RequestAttack
struct AMordhauCharacter_RequestAttack_Params
{
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ReplicateStamina
struct AMordhauCharacter_ReplicateStamina_Params
{
};

// Function Mordhau.MordhauCharacter.QueueDismember
struct AMordhauCharacter_QueueDismember_Params
{
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDismemberPartial;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBluntForce;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Force;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.PlaySnappyArmorFoley
struct AMordhauCharacter_PlaySnappyArmorFoley_Params
{
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.PlayNonSnappyArmorFoley
struct AMordhauCharacter_PlayNonSnappyArmorFoley_Params
{
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.PlayMouthSound
struct AMordhauCharacter_PlayMouthSound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.PlayHurtYell
struct AMordhauCharacter_PlayHurtYell_Params
{
};

// Function Mordhau.MordhauCharacter.PlayDeathYell
struct AMordhauCharacter_PlayDeathYell_Params
{
	bool                                               bIsLongYell;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.PlayAttackYell
struct AMordhauCharacter_PlayAttackYell_Params
{
};

// Function Mordhau.MordhauCharacter.PlayAnim
struct AMordhauCharacter_PlayAnim_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopExistingMontages;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.PickUpToSlot
struct AMordhauCharacter_PickUpToSlot_Params
{
	class AMordhauEquipment*                           ToEquip;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.PickUp
struct AMordhauCharacter_PickUp_Params
{
	class AMordhauEquipment*                           ToEquip;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreferredSlot;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.PerformVoiceCommand
struct AMordhauCharacter_PerformVoiceCommand_Params
{
	unsigned char                                      PackedVoiceCommand;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.OnRep_RightHandEquipment
struct AMordhauCharacter_OnRep_RightHandEquipment_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedVoiceCommand
struct AMordhauCharacter_OnRep_ReplicatedVoiceCommand_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedStamina
struct AMordhauCharacter_OnRep_ReplicatedStamina_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedNetMotion
struct AMordhauCharacter_OnRep_ReplicatedNetMotion_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedDodge
struct AMordhauCharacter_OnRep_ReplicatedDodge_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedCustomizationReplicationActor
struct AMordhauCharacter_OnRep_ReplicatedCustomizationReplicationActor_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_Quiver
struct AMordhauCharacter_OnRep_Quiver_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_NetBlock
struct AMordhauCharacter_OnRep_NetBlock_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_LeftHandEquipment
struct AMordhauCharacter_OnRep_LeftHandEquipment_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_Equipment
struct AMordhauCharacter_OnRep_Equipment_Params
{
};

// Function Mordhau.MordhauCharacter.OnPostProfileAssigned
struct AMordhauCharacter_OnPostProfileAssigned_Params
{
};

// Function Mordhau.MordhauCharacter.OnPostDismember
struct AMordhauCharacter_OnPostDismember_Params
{
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ASeparatedBodyPart*                          SeparatedPart;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.OnActionFailed
struct AMordhauCharacter_OnActionFailed_Params
{
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.OffsetStamina
struct AMordhauCharacter_OffsetStamina_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.MoveBlockedBySlow
struct AMordhauCharacter_MoveBlockedBySlow_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ListenForStrike360
struct AMordhauCharacter_ListenForStrike360_Params
{
};

// Function Mordhau.MordhauCharacter.ListenForStab360
struct AMordhauCharacter_ListenForStab360_Params
{
};

// Function Mordhau.MordhauCharacter.LeftTeamArea
struct AMordhauCharacter_LeftTeamArea_Params
{
	int                                                OwningTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.JumpReleased
struct AMordhauCharacter_JumpReleased_Params
{
};

// Function Mordhau.MordhauCharacter.JumpPressed
struct AMordhauCharacter_JumpPressed_Params
{
};

// Function Mordhau.MordhauCharacter.IsViewTarget
struct AMordhauCharacter_IsViewTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsRightLeg
struct AMordhauCharacter_IsRightLeg_Params
{
	struct FName                                       bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsRightArm
struct AMordhauCharacter_IsRightArm_Params
{
	struct FName                                       bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsPlayerControlledIncludingVehicle
struct AMordhauCharacter_IsPlayerControlledIncludingVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsLocallyPlayerControlledIncludingVehicle
struct AMordhauCharacter_IsLocallyPlayerControlledIncludingVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsLocallyControlledIncludingVehicle
struct AMordhauCharacter_IsLocallyControlledIncludingVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsLeg
struct AMordhauCharacter_IsLeg_Params
{
	struct FName                                       bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsLeftLeg
struct AMordhauCharacter_IsLeftLeg_Params
{
	struct FName                                       bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsLeftArm
struct AMordhauCharacter_IsLeftArm_Params
{
	struct FName                                       bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsInKnockback
struct AMordhauCharacter_IsInKnockback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsInEnemyTeamArea
struct AMordhauCharacter_IsInEnemyTeamArea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsInAnyTeamArea
struct AMordhauCharacter_IsInAnyTeamArea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsHoldingBlock
struct AMordhauCharacter_IsHoldingBlock_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsHead
struct AMordhauCharacter_IsHead_Params
{
	struct FName                                       bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsBoneDismembered
struct AMordhauCharacter_IsBoneDismembered_Params
{
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsArm
struct AMordhauCharacter_IsArm_Params
{
	struct FName                                       bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.IsAnimActive
struct AMordhauCharacter_IsAnimActive_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.Holster
struct AMordhauCharacter_Holster_Params
{
	class AMordhauEquipment*                           ToHolster;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.HasPerk
struct AMordhauCharacter_HasPerk_Params
{
	unsigned char                                      PerkId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.HasEquipmentHeSpawnedWith
struct AMordhauCharacter_HasEquipmentHeSpawnedWith_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetMovementRestriction
struct AMordhauCharacter_GetMovementRestriction_Params
{
	EMovementRestriction                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetLastVoiceCommand
struct AMordhauCharacter_GetLastVoiceCommand_Params
{
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetLastUsedVehicle
struct AMordhauCharacter_GetLastUsedVehicle_Params
{
	float                                              MaximumTimeDiscrepancy;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauVehicle*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetLastMovementFrontalHitActor
struct AMordhauCharacter_GetLastMovementFrontalHitActor_Params
{
	float                                              MaxAgeSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationTranslate
struct AMordhauCharacter_GetFaceCustomizationTranslate_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationTransform
struct AMordhauCharacter_GetFaceCustomizationTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationScale
struct AMordhauCharacter_GetFaceCustomizationScale_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationRotate
struct AMordhauCharacter_GetFaceCustomizationRotate_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationBoneIdx
struct AMordhauCharacter_GetFaceCustomizationBoneIdx_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetEquipmentIndex
struct AMordhauCharacter_GetEquipmentIndex_Params
{
	class AMordhauEquipment*                           Equip;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetCustomizationReplicationActor
struct AMordhauCharacter_GetCustomizationReplicationActor_Params
{
	class ACustomizationReplicationActor*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetControllerIncludingVehicle
struct AMordhauCharacter_GetControllerIncludingVehicle_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetClothMesh
struct AMordhauCharacter_GetClothMesh_Params
{
	class ULODSkeletalMeshComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetAnimWeight
struct AMordhauCharacter_GetAnimWeight_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.GetAllFaceSelectionChildBonesRecursive
struct AMordhauCharacter_GetAllFaceSelectionChildBonesRecursive_Params
{
	struct FName                                       ParentBone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauCharacter.FreeHandsForEquipment
struct AMordhauCharacter_FreeHandsForEquipment_Params
{
	class AMordhauEquipment*                           EquipmentInstigator;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ForceUpdateMeshVisibility
struct AMordhauCharacter_ForceUpdateMeshVisibility_Params
{
};

// Function Mordhau.MordhauCharacter.FlipAttackSideReleased
struct AMordhauCharacter_FlipAttackSideReleased_Params
{
};

// Function Mordhau.MordhauCharacter.FlipAttackSidePressed
struct AMordhauCharacter_FlipAttackSidePressed_Params
{
};

// Function Mordhau.MordhauCharacter.FireReleased
struct AMordhauCharacter_FireReleased_Params
{
};

// Function Mordhau.MordhauCharacter.FirePressed
struct AMordhauCharacter_FirePressed_Params
{
};

// Function Mordhau.MordhauCharacter.FindEquipmentToRestock
struct AMordhauCharacter_FindEquipmentToRestock_Params
{
	TArray<class UClass*>                              ValidEquipment;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AMordhauEquipment*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.FindBestKiller
struct AMordhauCharacter_FindBestKiller_Params
{
	float                                              CutOffTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.FeintOrBlockReleased
struct AMordhauCharacter_FeintOrBlockReleased_Params
{
};

// Function Mordhau.MordhauCharacter.FeintOrBlockPressed
struct AMordhauCharacter_FeintOrBlockPressed_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot9
struct AMordhauCharacter_EquipSlot9_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot8
struct AMordhauCharacter_EquipSlot8_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot7
struct AMordhauCharacter_EquipSlot7_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot6
struct AMordhauCharacter_EquipSlot6_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot5
struct AMordhauCharacter_EquipSlot5_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot4
struct AMordhauCharacter_EquipSlot4_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot3
struct AMordhauCharacter_EquipSlot3_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot2
struct AMordhauCharacter_EquipSlot2_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot1
struct AMordhauCharacter_EquipSlot1_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot
struct AMordhauCharacter_EquipSlot_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayEquipmentList;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.EnteredTeamArea
struct AMordhauCharacter_EnteredTeamArea_Params
{
	int                                                OwningTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.EnableBlockCollider
struct AMordhauCharacter_EnableBlockCollider_Params
{
};

// Function Mordhau.MordhauCharacter.EmptyHands
struct AMordhauCharacter_EmptyHands_Params
{
};

// Function Mordhau.MordhauCharacter.DropSlot
struct AMordhauCharacter_DropSlot_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.DropEquipment
struct AMordhauCharacter_DropEquipment_Params
{
	class AMordhauEquipment*                           ToDrop;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.DoCameraShakeIfViewTarget
struct AMordhauCharacter_DoCameraShakeIfViewTarget_Params
{
	class UClass*                                      Shake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UserPlaySpaceRot;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bAllowSettingsScale;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.Dismember
struct AMordhauCharacter_Dismember_Params
{
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ASeparatedBodyPart*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.DisableLimb
struct AMordhauCharacter_DisableLimb_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.DisableBlockCollider
struct AMordhauCharacter_DisableBlockCollider_Params
{
};

// Function Mordhau.MordhauCharacter.CycleCamera
struct AMordhauCharacter_CycleCamera_Params
{
};

// Function Mordhau.MordhauCharacter.ComputeFPRotation
struct AMordhauCharacter_ComputeFPRotation_Params
{
	struct FRotator                                    Offset;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InLookUpValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ComputeFPLocation
struct AMordhauCharacter_ComputeFPLocation_Params
{
	struct FRotator                                    Offset;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InLookUpValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ComputeFPCosmeticLocationOffset
struct AMordhauCharacter_ComputeFPCosmeticLocationOffset_Params
{
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutFOVOffset;                                             // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutZoomOffset;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ClientSetNetMotion
struct AMordhauCharacter_ClientSetNetMotion_Params
{
	struct FNetMotion                                  NewMotion;                                                // (Parm)
	float                                              ServerStartTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ClientPong
struct AMordhauCharacter_ClientPong_Params
{
};

// Function Mordhau.MordhauCharacter.CheckCanEquipAlt
struct AMordhauCharacter_CheckCanEquipAlt_Params
{
	class AMordhauEquipment*                           Equip;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.CheckCanEquip
struct AMordhauCharacter_CheckCanEquip_Params
{
	class AMordhauEquipment*                           Equip;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.ChangeMotion
struct AMordhauCharacter_ChangeMotion_Params
{
	class UMordhauMotion*                              NewMotion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipDeltaTimeForward;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.CanPerformAttack
struct AMordhauCharacter_CanPerformAttack_Params
{
	EAttackMove                                        Move;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.CanInitiateMotion
struct AMordhauCharacter_CanInitiateMotion_Params
{
	class UClass*                                      NewMotion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAttemptCancel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.CanEasyParry
struct AMordhauCharacter_CanEasyParry_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.CanDismember
struct AMordhauCharacter_CanDismember_Params
{
	struct FName                                       bone;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.CanAccomodate
struct AMordhauCharacter_CanAccomodate_Params
{
	class UClass*                                      EquipmentToTest;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.CalculateLedgeOffsetAndNormal
struct AMordhauCharacter_CalculateLedgeOffsetAndNormal_Params
{
	class UClimbingMotion*                             ClimbingMotion;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutOffset;                                                // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutNormal;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.BP_PlayCharacterSound
struct AMordhauCharacter_BP_PlayCharacterSound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAttach;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.BoostAnimBlendWeight
struct AMordhauCharacter_BoostAnimBlendWeight_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BoostAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.BlockReleased
struct AMordhauCharacter_BlockReleased_Params
{
};

// Function Mordhau.MordhauCharacter.BlockPressed
struct AMordhauCharacter_BlockPressed_Params
{
};

// Function Mordhau.MordhauCharacter.BakeFaceCustomizationTransforms
struct AMordhauCharacter_BakeFaceCustomizationTransforms_Params
{
	bool                                               bDeferBake;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.AssignProfile
struct AMordhauCharacter_AssignProfile_Params
{
	struct FCharacterProfile                           NewProfile;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauCharacter.AssignNetMotionSimple
struct AMordhauCharacter_AssignNetMotionSimple_Params
{
	unsigned char                                      MotionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Param0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauCharacter.AssignNetBlock
struct AMordhauCharacter_AssignNetBlock_Params
{
	EBlockedReason                                     BlockedReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        BlockedMove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BlockedAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauDialog.Show
struct UMordhauDialog_Show_Params
{
};

// Function Mordhau.MordhauDialog.Hide
struct UMordhauDialog_Hide_Params
{
};

// Function Mordhau.MordhauGameInstance.UpdateParty
struct UMordhauGameInstance_UpdateParty_Params
{
	bool                                               bSendProfile;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.Shutdown
struct UMordhauGameInstance_Shutdown_Params
{
};

// Function Mordhau.MordhauGameInstance.ShowPasswordDialog
struct UMordhauGameInstance_ShowPasswordDialog_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.ShowNetworkErrorDialog
struct UMordhauGameInstance_ShowNetworkErrorDialog_Params
{
};

// Function Mordhau.MordhauGameInstance.ShowJoiningDialog
struct UMordhauGameInstance_ShowJoiningDialog_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.ShowInviteDialog
struct UMordhauGameInstance_ShowInviteDialog_Params
{
};

// Function Mordhau.MordhauGameInstance.SetPartyState
struct UMordhauGameInstance_SetPartyState_Params
{
	EPartyState                                        PartyState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.SetPartyMemberProfile
struct UMordhauGameInstance_SetPartyMemberProfile_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPlayerProfile                              Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.SetPartyMatchmakingLobbyID
struct UMordhauGameInstance_SetPartyMatchmakingLobbyID_Params
{
	struct FSteamID                                    LobbyID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.SetPartyLeader
struct UMordhauGameInstance_SetPartyLeader_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.SetPartyGameServer
struct UMordhauGameInstance_SetPartyGameServer_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.SetNetworkError
struct UMordhauGameInstance_SetNetworkError_Params
{
	struct FText                                       ErrorText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.SetMatchmakingMemberData
struct UMordhauGameInstance_SetMatchmakingMemberData_Params
{
};

// Function Mordhau.MordhauGameInstance.SetMatchmakingGameServer
struct UMordhauGameInstance_SetMatchmakingGameServer_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.SaveConfig
struct UMordhauGameInstance_SaveConfig_Params
{
};

// Function Mordhau.MordhauGameInstance.LogMatchmakingState
struct UMordhauGameInstance_LogMatchmakingState_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauGameInstance.LeaveParty
struct UMordhauGameInstance_LeaveParty_Params
{
};

// Function Mordhau.MordhauGameInstance.LeaveMatchmakingLobby
struct UMordhauGameInstance_LeaveMatchmakingLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.KickPartyMember
struct UMordhauGameInstance_KickPartyMember_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.JoinPartyGameServer
struct UMordhauGameInstance_JoinPartyGameServer_Params
{
};

// Function Mordhau.MordhauGameInstance.JoinMatchmakingLobbyByID
struct UMordhauGameInstance_JoinMatchmakingLobbyByID_Params
{
	struct FSteamID                                    LobbyID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.JoinMatchmakingLobby
struct UMordhauGameInstance_JoinMatchmakingLobby_Params
{
	struct FLobbySearchResult                          SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.IsPartyReadyForMatchmaking
struct UMordhauGameInstance_IsPartyReadyForMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.IsPartyMember
struct UMordhauGameInstance_IsPartyMember_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.Init
struct UMordhauGameInstance_Init_Params
{
};

// Function Mordhau.MordhauGameInstance.GetPartyState
struct UMordhauGameInstance_GetPartyState_Params
{
	EPartyState                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.GetPartySize
struct UMordhauGameInstance_GetPartySize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.GetPartyMMR
struct UMordhauGameInstance_GetPartyMMR_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.GetPartyMemberStatus
struct UMordhauGameInstance_GetPartyMemberStatus_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetPartyMemberServerAddress
struct UMordhauGameInstance_GetPartyMemberServerAddress_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FServerAddress                              ServerAddress;                                            // (Parm, OutParm)
	bool                                               bWasSuccessful;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.GetPartyMembers
struct UMordhauGameInstance_GetPartyMembers_Params
{
	TArray<struct FSteamID>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetPartyMemberProfile
struct UMordhauGameInstance_GetPartyMemberProfile_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPlayerProfile                              Profile;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.GetPartyMatchmakingLobbyID
struct UMordhauGameInstance_GetPartyMatchmakingLobbyID_Params
{
	struct FSteamID                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetPartyLobbyID
struct UMordhauGameInstance_GetPartyLobbyID_Params
{
	struct FSteamID                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetPartyLeader
struct UMordhauGameInstance_GetPartyLeader_Params
{
	struct FSteamID                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetMinMatchmakingMembers
struct UMordhauGameInstance_GetMinMatchmakingMembers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.GetMaxMatchmakingMembers
struct UMordhauGameInstance_GetMaxMatchmakingMembers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.GetMatchmakingServerAddress
struct UMordhauGameInstance_GetMatchmakingServerAddress_Params
{
	struct FServerAddress                              ServerAddress;                                            // (Parm, OutParm)
	bool                                               bWasSuccessful;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.GetMatchmakingMembers
struct UMordhauGameInstance_GetMatchmakingMembers_Params
{
	TArray<struct FSteamID>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetMatchmakingLobbyOwner
struct UMordhauGameInstance_GetMatchmakingLobbyOwner_Params
{
	struct FSteamID                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetMatchmakingLobbyID
struct UMordhauGameInstance_GetMatchmakingLobbyID_Params
{
	struct FSteamID                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetMapInfo
struct UMordhauGameInstance_GetMapInfo_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
	struct FMapInfo                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.GetAuthTicket
struct UMordhauGameInstance_GetAuthTicket_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameInstance.CreateMatchmakingLobby
struct UMordhauGameInstance_CreateMatchmakingLobby_Params
{
	TArray<struct FString>                             InGameModes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ERegion                                            InRegion;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.ClientTravelSession
struct UMordhauGameInstance_ClientTravelSession_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.ClientTravel
struct UMordhauGameInstance_ClientTravel_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
	int                                                PlayerCount;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.ClearPartyMemberProfile
struct UMordhauGameInstance_ClearPartyMemberProfile_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauGameInstance.ClearPartyMatchmakingLobbyID
struct UMordhauGameInstance_ClearPartyMatchmakingLobbyID_Params
{
};

// Function Mordhau.MordhauGameInstance.ClearPartyGameServer
struct UMordhauGameInstance_ClearPartyGameServer_Params
{
};

// Function Mordhau.MordhauGameInstance.ClearMatchmakingGameServer
struct UMordhauGameInstance_ClearMatchmakingGameServer_Params
{
};

// Function Mordhau.MordhauGameInstance.CanLeaveParty
struct UMordhauGameInstance_CanLeaveParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.CanInviteToParty
struct UMordhauGameInstance_CanInviteToParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameInstance.CancelAuthTicket
struct UMordhauGameInstance_CancelAuthTicket_Params
{
};

// Function Mordhau.MordhauGameInstance.BPStopRecordingReplay
struct UMordhauGameInstance_BPStopRecordingReplay_Params
{
};

// Function Mordhau.MordhauGameInstance.BPStopPlayingReplay
struct UMordhauGameInstance_BPStopPlayingReplay_Params
{
};

// Function Mordhau.MordhauGameInstance.BPStartRecordingReplay
struct UMordhauGameInstance_BPStartRecordingReplay_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	struct FString                                     FriendlyName;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             AdditionalOptions;                                        // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauGameInstance.BPPlayReplay
struct UMordhauGameInstance_BPPlayReplay_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	TArray<struct FString>                             AdditionalOptions;                                        // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauGameMode.VoteLevel
struct AMordhauGameMode_VoteLevel_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.SetTeamScore
struct AMordhauGameMode_SetTeamScore_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.RequestedAssignTeam
struct AMordhauGameMode_RequestedAssignTeam_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.RemoveBots
struct AMordhauGameMode_RemoveBots_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.OnTeamScoreChanged
struct AMordhauGameMode_OnTeamScoreChanged_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.OnScoreChanged
struct AMordhauGameMode_OnScoreChanged_Params
{
	class APlayerState*                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.OnMatchStateChanged
struct AMordhauGameMode_OnMatchStateChanged_Params
{
	struct FName                                       OldState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       NewState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.OnKillsChanged
struct AMordhauGameMode_OnKillsChanged_Params
{
	class APlayerState*                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.OnKilled
struct AMordhauGameMode_OnKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 KilledPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       KilledPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.OnDeathsChanged
struct AMordhauGameMode_OnDeathsChanged_Params
{
	class APlayerState*                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.OnAssistsChanged
struct AMordhauGameMode_OnAssistsChanged_Params
{
	class APlayerState*                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.MatchTimeRanOut
struct AMordhauGameMode_MatchTimeRanOut_Params
{
};

// Function Mordhau.MordhauGameMode.IsSpawnpointAllowed
struct AMordhauGameMode_IsSpawnpointAllowed_Params
{
	class APlayerStart*                                PlayerStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.GetSpawnpointPreference
struct AMordhauGameMode_GetSpawnpointPreference_Params
{
	class APlayerStart*                                PlayerStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.GetNextMaps
struct AMordhauGameMode_GetNextMaps_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameMode.GetNextMap
struct AMordhauGameMode_GetNextMap_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameMode.GetMapVoteMaps
struct AMordhauGameMode_GetMapVoteMaps_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameMode.GetMapVoteCounts
struct AMordhauGameMode_GetMapVoteCounts_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameMode.GetDamageFactor
struct AMordhauGameMode_GetDamageFactor_Params
{
	class AActor*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.ControllerCanRestart
struct AMordhauGameMode_ControllerCanRestart_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.ChangeLevel
struct AMordhauGameMode_ChangeLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.CanDealDamage
struct AMordhauGameMode_CanDealDamage_Params
{
	class AActor*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.CanClash
struct AMordhauGameMode_CanClash_Params
{
	class APawn*                                       Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.CanChamber
struct AMordhauGameMode_CanChamber_Params
{
	class APawn*                                       Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.Broadcast
struct AMordhauGameMode_Broadcast_Params
{
	class AActor*                                      Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	struct FName                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.AddTeamScore
struct AMordhauGameMode_AddTeamScore_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameMode.AddBots
struct AMordhauGameMode_AddBots_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.UnbanPlayer
struct AMordhauGameSession_UnbanPlayer_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.TriggerRewardDropForPlayer
struct AMordhauGameSession_TriggerRewardDropForPlayer_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.TriggerRewardDrop
struct AMordhauGameSession_TriggerRewardDrop_Params
{
};

// Function Mordhau.MordhauGameSession.ReportPlayer
struct AMordhauGameSession_ReportPlayer_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ECheatReportType                                   ReportType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECheatReportSource                                 ReportSource;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.RemoveAdmin
struct AMordhauGameSession_RemoveAdmin_Params
{
	class APlayerController*                           AdminPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.KickPlayer
struct AMordhauGameSession_KickPlayer_Params
{
	class APlayerController*                           KickedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KickReason;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.BanPlayerWithDuration
struct AMordhauGameSession_BanPlayerWithDuration_Params
{
	class APlayerController*                           BannedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BanDuration;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BanReason;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.BanPlayer
struct AMordhauGameSession_BanPlayer_Params
{
	class APlayerController*                           BannedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BanReason;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.AllowsJoin
struct AMordhauGameSession_AllowsJoin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.AllowJoin
struct AMordhauGameSession_AllowJoin_Params
{
	bool                                               bInAllowJoin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameSession.AddAdmin
struct AMordhauGameSession_AddAdmin_Params
{
	class APlayerController*                           AdminPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.UpdateCapturePointData
struct AMordhauGameState_UpdateCapturePointData_Params
{
};

// Function Mordhau.MordhauGameState.UnregisterParticleSystemActor
struct AMordhauGameState_UnregisterParticleSystemActor_Params
{
	class AParticleSystemActor*                        ParticleActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.StoreEquipmentMeshInCache
struct AMordhauGameState_StoreEquipmentMeshInCache_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAuxiliaryMesh;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.ShouldTickThisFrame
struct AMordhauGameState_ShouldTickThisFrame_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.ShouldTickAnimationThisFrame
struct AMordhauGameState_ShouldTickAnimationThisFrame_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.ShouldPaintGearWithTeamColors
struct AMordhauGameState_ShouldPaintGearWithTeamColors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.ShouldBlockPawnInput
struct AMordhauGameState_ShouldBlockPawnInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.ReserveCharacterRagdoll
struct AMordhauGameState_ReserveCharacterRagdoll_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.RemoveCharacterFromDistanceArray
struct AMordhauGameState_RemoveCharacterFromDistanceArray_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.RegisterParticleSystemActor
struct AMordhauGameState_RegisterParticleSystemActor_Params
{
	class AParticleSystemActor*                        ParticleActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.LocalPlayerChangedTeam
struct AMordhauGameState_LocalPlayerChangedTeam_Params
{
};

// Function Mordhau.MordhauGameState.IsFriendly
struct AMordhauGameState_IsFriendly_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.GetTeamName
struct AMordhauGameState_GetTeamName_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameState.GetTeamColor
struct AMordhauGameState_GetTeamColor_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.GetPlayerCountsPerTeam
struct AMordhauGameState_GetPlayerCountsPerTeam_Params
{
	bool                                               bOnlyLiving;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyWithValidProfiles;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameState.GetEquipmentMeshFromCache
struct AMordhauGameState_GetEquipmentMeshFromCache_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAuxiliaryMesh;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.GetEquipmentCacheHash
struct AMordhauGameState_GetEquipmentCacheHash_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAuxiliaryMesh;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.GetCurrentFrame
struct AMordhauGameState_GetCurrentFrame_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.GetCharacterByDistanceRank
struct AMordhauGameState_GetCharacterByDistanceRank_Params
{
	int                                                DistanceRank;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AAdvancedCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.GetBindPoseTransform
struct AMordhauGameState_GetBindPoseTransform_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.GetAppropriateMapCameraActor
struct AMordhauGameState_GetAppropriateMapCameraActor_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AMapCameraActor*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.CanPlayerJoinTeam
struct AMordhauGameState_CanPlayerJoinTeam_Params
{
	class AMordhauPlayerState*                         Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameState.CanImmediatelyChangeProfile
struct AMordhauGameState_CanImmediatelyChangeProfile_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowWatermark
struct UMordhauGameUserSettings_ShouldShowWatermark_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowTips
struct UMordhauGameUserSettings_ShouldShowTips_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowTargetInfo
struct UMordhauGameUserSettings_ShouldShowTargetInfo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowStatusBar
struct UMordhauGameUserSettings_ShouldShowStatusBar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowSpawnInfo
struct UMordhauGameUserSettings_ShouldShowSpawnInfo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowScoreFeed
struct UMordhauGameUserSettings_ShouldShowScoreFeed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowObservedDelay
struct UMordhauGameUserSettings_ShouldShowObservedDelay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowMatchmakingOverride
struct UMordhauGameUserSettings_ShouldShowMatchmakingOverride_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowMatchmakingDebug
struct UMordhauGameUserSettings_ShouldShowMatchmakingDebug_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowKillFeed
struct UMordhauGameUserSettings_ShouldShowKillFeed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowKilledBy
struct UMordhauGameUserSettings_ShouldShowKilledBy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowHUD
struct UMordhauGameUserSettings_ShouldShowHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowHitMarker
struct UMordhauGameUserSettings_ShouldShowHitMarker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowEquipment
struct UMordhauGameUserSettings_ShouldShowEquipment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowEmotesMenu
struct UMordhauGameUserSettings_ShouldShowEmotesMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowCrosshair
struct UMordhauGameUserSettings_ShouldShowCrosshair_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowChatBox
struct UMordhauGameUserSettings_ShouldShowChatBox_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowBlood
struct UMordhauGameUserSettings_ShouldShowBlood_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowAnnouncements
struct UMordhauGameUserSettings_ShouldShowAnnouncements_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowAmmo
struct UMordhauGameUserSettings_ShouldShowAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldQuickSpawn
struct UMordhauGameUserSettings_ShouldQuickSpawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.ShouldDrawTracers
struct UMordhauGameUserSettings_ShouldDrawTracers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetVideoVolume
struct UMordhauGameUserSettings_SetVideoVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetTracersStayTime
struct UMordhauGameUserSettings_SetTracersStayTime_Params
{
	float                                              NewStayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetThirdPersonDeathcamera
struct UMordhauGameUserSettings_SetThirdPersonDeathcamera_Params
{
	int                                                NewThirdPersonDeathCamera;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowTips
struct UMordhauGameUserSettings_SetShowTips_Params
{
	int                                                NewShowTips;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowTargetInfo
struct UMordhauGameUserSettings_SetShowTargetInfo_Params
{
	int                                                NewShowTargetInfo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowStatusBar
struct UMordhauGameUserSettings_SetShowStatusBar_Params
{
	int                                                NewShowStatusBar;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowSpawnInfo
struct UMordhauGameUserSettings_SetShowSpawnInfo_Params
{
	int                                                NewShowSpawnInfo;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowScoreFeed
struct UMordhauGameUserSettings_SetShowScoreFeed_Params
{
	int                                                NewShowScoreFeed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowObservedDelay
struct UMordhauGameUserSettings_SetShowObservedDelay_Params
{
	int                                                NewShowObservedDelay;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowMatchmakingOverride
struct UMordhauGameUserSettings_SetShowMatchmakingOverride_Params
{
	int                                                NewShowMatchmakingOverride;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowMatchmakingDebug
struct UMordhauGameUserSettings_SetShowMatchmakingDebug_Params
{
	int                                                NewShowMatchmakingDebug;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowKillFeed
struct UMordhauGameUserSettings_SetShowKillFeed_Params
{
	int                                                NewShowKillFeed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowKilledBy
struct UMordhauGameUserSettings_SetShowKilledBy_Params
{
	int                                                NewShowKilledBy;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowHitMarker
struct UMordhauGameUserSettings_SetShowHitMarker_Params
{
	int                                                NewShowHitMarker;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowEquipment
struct UMordhauGameUserSettings_SetShowEquipment_Params
{
	int                                                NewShowEquipment;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowEmotesMenu
struct UMordhauGameUserSettings_SetShowEmotesMenu_Params
{
	int                                                NewEmotesMenu;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowCrosshair
struct UMordhauGameUserSettings_SetShowCrosshair_Params
{
	int                                                NewShowCrosshair;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowChatBox
struct UMordhauGameUserSettings_SetShowChatBox_Params
{
	int                                                NewShowChatBox;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowAnnouncements
struct UMordhauGameUserSettings_SetShowAnnouncements_Params
{
	int                                                NewShowAnnouncements;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetShowAmmo
struct UMordhauGameUserSettings_SetShowAmmo_Params
{
	int                                                NewShowAmmo;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserServerName
struct UMordhauGameUserSettings_SetServerBrowserServerName_Params
{
	struct FString                                     NewServerName;                                            // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserNotFull
struct UMordhauGameUserSettings_SetServerBrowserNotFull_Params
{
	bool                                               bNewNotFull;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserNoPassword
struct UMordhauGameUserSettings_SetServerBrowserNoPassword_Params
{
	bool                                               bNewNoPassword;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserMaxPing
struct UMordhauGameUserSettings_SetServerBrowserMaxPing_Params
{
	int                                                NewMaxPing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserHasPlayers
struct UMordhauGameUserSettings_SetServerBrowserHasPlayers_Params
{
	bool                                               bNewHasPlayers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserGameMode
struct UMordhauGameUserSettings_SetServerBrowserGameMode_Params
{
	struct FString                                     NewGameMode;                                              // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauGameUserSettings.SetScreenSpaceReflections
struct UMordhauGameUserSettings_SetScreenSpaceReflections_Params
{
	int                                                NewScreenSpaceReflections;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetScreenPercentage
struct UMordhauGameUserSettings_SetScreenPercentage_Params
{
	float                                              NewScreenPercentage;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetRagdollStayTime
struct UMordhauGameUserSettings_SetRagdollStayTime_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetRagdollFidelity
struct UMordhauGameUserSettings_SetRagdollFidelity_Params
{
	int                                                NewFidelity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetQuickSpawn
struct UMordhauGameUserSettings_SetQuickSpawn_Params
{
	int                                                NewQuickSpawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetNoTeamColorsOnGear
struct UMordhauGameUserSettings_SetNoTeamColorsOnGear_Params
{
	int                                                NewNoTeamColorsOnGear;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetMusicVolume
struct UMordhauGameUserSettings_SetMusicVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetMouseSmoothing
struct UMordhauGameUserSettings_SetMouseSmoothing_Params
{
	float                                              NewSmoothing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetMotionBlur
struct UMordhauGameUserSettings_SetMotionBlur_Params
{
	float                                              NewMotionBlur;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetMaxRagdolls
struct UMordhauGameUserSettings_SetMaxRagdolls_Params
{
	int                                                NewMax;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetMatchmakingRegion
struct UMordhauGameUserSettings_SetMatchmakingRegion_Params
{
	ERegion                                            NewRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetMatchmakingGameModes
struct UMordhauGameUserSettings_SetMatchmakingGameModes_Params
{
	TArray<struct FString>                             NewGameModes;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauGameUserSettings.SetMasterVolume
struct UMordhauGameUserSettings_SetMasterVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetLensFlares
struct UMordhauGameUserSettings_SetLensFlares_Params
{
	int                                                NewLensFlares;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetLanguage
struct UMordhauGameUserSettings_SetLanguage_Params
{
	struct FString                                     NewLanguage;                                              // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauGameUserSettings.SetIndirectCapsuleShadows
struct UMordhauGameUserSettings_SetIndirectCapsuleShadows_Params
{
	int                                                NewShadows;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetHideWatermark
struct UMordhauGameUserSettings_SetHideWatermark_Params
{
	int                                                NewHideWatermark;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetHideHUD
struct UMordhauGameUserSettings_SetHideHUD_Params
{
	int                                                NewHideHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetHideDefaultLoadouts
struct UMordhauGameUserSettings_SetHideDefaultLoadouts_Params
{
	int                                                NewHideDefaultLoadouts;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetHeadbob
struct UMordhauGameUserSettings_SetHeadbob_Params
{
	float                                              NewHeadbob;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetGore
struct UMordhauGameUserSettings_SetGore_Params
{
	int                                                NewGore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetGamma
struct UMordhauGameUserSettings_SetGamma_Params
{
	float                                              NewGamma;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetFriendlyMarkers
struct UMordhauGameUserSettings_SetFriendlyMarkers_Params
{
	int                                                NewFriendlyMarkers;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetFieldOfView
struct UMordhauGameUserSettings_SetFieldOfView_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetEffectsVolume
struct UMordhauGameUserSettings_SetEffectsVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetDrawTracers
struct UMordhauGameUserSettings_SetDrawTracers_Params
{
	int                                                NewDrawTracers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetCrosshairType
struct UMordhauGameUserSettings_SetCrosshairType_Params
{
	int                                                NewCrosshairType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetCharacterFidelity
struct UMordhauGameUserSettings_SetCharacterFidelity_Params
{
	int                                                NewFidelity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetCharacterCloth
struct UMordhauGameUserSettings_SetCharacterCloth_Params
{
	int                                                NewCharacterCloth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetCameraDistance
struct UMordhauGameUserSettings_SetCameraDistance_Params
{
	float                                              NewCameraDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetBloom
struct UMordhauGameUserSettings_SetBloom_Params
{
	float                                              NewBloom;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetAntiAliasing
struct UMordhauGameUserSettings_SetAntiAliasing_Params
{
	int                                                NewAntiAliasing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.SetAmbientOcclusion
struct UMordhauGameUserSettings_SetAmbientOcclusion_Params
{
	int                                                NewAmbientOcclusion;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetVideoVolume
struct UMordhauGameUserSettings_GetVideoVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetTracersStayTimeLimits
struct UMordhauGameUserSettings_GetTracersStayTimeLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetTracersStayTime
struct UMordhauGameUserSettings_GetTracersStayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetThirdPersonDeathCamera
struct UMordhauGameUserSettings_GetThirdPersonDeathCamera_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowTips
struct UMordhauGameUserSettings_GetShowTips_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowTargetInfo
struct UMordhauGameUserSettings_GetShowTargetInfo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowStatusBar
struct UMordhauGameUserSettings_GetShowStatusBar_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowSpawnInfo
struct UMordhauGameUserSettings_GetShowSpawnInfo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowScoreFeed
struct UMordhauGameUserSettings_GetShowScoreFeed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowObservedDelay
struct UMordhauGameUserSettings_GetShowObservedDelay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowKillFeed
struct UMordhauGameUserSettings_GetShowKillFeed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowKilledBy
struct UMordhauGameUserSettings_GetShowKilledBy_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowHitMarker
struct UMordhauGameUserSettings_GetShowHitMarker_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowEquipment
struct UMordhauGameUserSettings_GetShowEquipment_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowEmotesMenu
struct UMordhauGameUserSettings_GetShowEmotesMenu_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowCrosshair
struct UMordhauGameUserSettings_GetShowCrosshair_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowChatBox
struct UMordhauGameUserSettings_GetShowChatBox_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowAnnouncements
struct UMordhauGameUserSettings_GetShowAnnouncements_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetShowAmmo
struct UMordhauGameUserSettings_GetShowAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserServerName
struct UMordhauGameUserSettings_GetServerBrowserServerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserNotFull
struct UMordhauGameUserSettings_GetServerBrowserNotFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserNoPassword
struct UMordhauGameUserSettings_GetServerBrowserNoPassword_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserMaxPing
struct UMordhauGameUserSettings_GetServerBrowserMaxPing_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserHasPlayers
struct UMordhauGameUserSettings_GetServerBrowserHasPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserGameMode
struct UMordhauGameUserSettings_GetServerBrowserGameMode_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameUserSettings.GetScreenSpaceReflections
struct UMordhauGameUserSettings_GetScreenSpaceReflections_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetScreenPercentageLimits
struct UMordhauGameUserSettings_GetScreenPercentageLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetScreenPercentage
struct UMordhauGameUserSettings_GetScreenPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetRagdollStayTimeLimit
struct UMordhauGameUserSettings_GetRagdollStayTimeLimit_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetRagdollStayTime
struct UMordhauGameUserSettings_GetRagdollStayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetRagdollFidelity
struct UMordhauGameUserSettings_GetRagdollFidelity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetQuickSpawn
struct UMordhauGameUserSettings_GetQuickSpawn_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetNoTeamColorsOnGear
struct UMordhauGameUserSettings_GetNoTeamColorsOnGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMusicVolume
struct UMordhauGameUserSettings_GetMusicVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMouseSmoothingLimits
struct UMordhauGameUserSettings_GetMouseSmoothingLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMouseSmoothing
struct UMordhauGameUserSettings_GetMouseSmoothing_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMotionBlurLimits
struct UMordhauGameUserSettings_GetMotionBlurLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMotionBlur
struct UMordhauGameUserSettings_GetMotionBlur_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMaxRagdollsLimit
struct UMordhauGameUserSettings_GetMaxRagdollsLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMaxRagdolls
struct UMordhauGameUserSettings_GetMaxRagdolls_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMatchmakingRegion
struct UMordhauGameUserSettings_GetMatchmakingRegion_Params
{
	ERegion                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetMatchmakingGameModes
struct UMordhauGameUserSettings_GetMatchmakingGameModes_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameUserSettings.GetMasterVolume
struct UMordhauGameUserSettings_GetMasterVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetLensFlares
struct UMordhauGameUserSettings_GetLensFlares_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetLanguage
struct UMordhauGameUserSettings_GetLanguage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauGameUserSettings.GetIndirectCapsuleShadows
struct UMordhauGameUserSettings_GetIndirectCapsuleShadows_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetHideWatermark
struct UMordhauGameUserSettings_GetHideWatermark_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetHideHUD
struct UMordhauGameUserSettings_GetHideHUD_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetHideDefaultLoadouts
struct UMordhauGameUserSettings_GetHideDefaultLoadouts_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetHeadbobLimits
struct UMordhauGameUserSettings_GetHeadbobLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetHeadbob
struct UMordhauGameUserSettings_GetHeadbob_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetGore
struct UMordhauGameUserSettings_GetGore_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetGammaLimits
struct UMordhauGameUserSettings_GetGammaLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetGamma
struct UMordhauGameUserSettings_GetGamma_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetFriendlyMarkers
struct UMordhauGameUserSettings_GetFriendlyMarkers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetFrameRateLimits
struct UMordhauGameUserSettings_GetFrameRateLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetFieldOfViewLimits
struct UMordhauGameUserSettings_GetFieldOfViewLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetFieldOfView
struct UMordhauGameUserSettings_GetFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetEffectsVolume
struct UMordhauGameUserSettings_GetEffectsVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetDrawTracers
struct UMordhauGameUserSettings_GetDrawTracers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetCurrentMotionBlur
struct UMordhauGameUserSettings_GetCurrentMotionBlur_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetCurrentGamma
struct UMordhauGameUserSettings_GetCurrentGamma_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetCurrentBloom
struct UMordhauGameUserSettings_GetCurrentBloom_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetCrosshairType
struct UMordhauGameUserSettings_GetCrosshairType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetCharacterFidelity
struct UMordhauGameUserSettings_GetCharacterFidelity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetCharacterCloth
struct UMordhauGameUserSettings_GetCharacterCloth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetCameraDistanceLimits
struct UMordhauGameUserSettings_GetCameraDistanceLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetCameraDistance
struct UMordhauGameUserSettings_GetCameraDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetBloomLimits
struct UMordhauGameUserSettings_GetBloomLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetBloom
struct UMordhauGameUserSettings_GetBloom_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetAvailableLanguages
struct UMordhauGameUserSettings_GetAvailableLanguages_Params
{
	TArray<struct FString>                             AvailableLanguages;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Mordhau.MordhauGameUserSettings.GetAntiAliasing
struct UMordhauGameUserSettings_GetAntiAliasing_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetAmbientOcclusion
struct UMordhauGameUserSettings_GetAmbientOcclusion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauGameUserSettings.GetActualCrosshairType
struct UMordhauGameUserSettings_GetActualCrosshairType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauHUD.OnGameStateReplicated
struct AMordhauHUD_OnGameStateReplicated_Params
{
};

// Function Mordhau.MordhauHUD.EnqueueMordhauDialog
struct AMordhauHUD_EnqueueMordhauDialog_Params
{
	class UMordhauDialog*                              Dialog;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauInput.ShowGamepadTextInput
struct UMordhauInput_ShowGamepadTextInput_Params
{
	EInputTextMode                                     TextMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EInputLineMode                                     LineMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	struct FString                                     ExistingText;                                             // (Parm, ZeroConstructor)
	int                                                MaxLen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.ShowBindingPanel
struct UMordhauInput_ShowBindingPanel_Params
{
};

// Function Mordhau.MordhauInput.SetToggleSprint
struct UMordhauInput_SetToggleSprint_Params
{
	int                                                NewToggleSprint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetMouseYSensitivity
struct UMordhauInput_SetMouseYSensitivity_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetMouseYInverted
struct UMordhauInput_SetMouseYInverted_Params
{
	bool                                               bNewInverted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetMouseXSensitivity
struct UMordhauInput_SetMouseXSensitivity_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetMouseXIsFlipAttackSide
struct UMordhauInput_SetMouseXIsFlipAttackSide_Params
{
	int                                                NewIsFlipAttackSide;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetMouseXInverted
struct UMordhauInput_SetMouseXInverted_Params
{
	bool                                               bNewInverted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetInverseAttackDirectionY
struct UMordhauInput_SetInverseAttackDirectionY_Params
{
	int                                                NewInverseAttackDirectionX;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetInverseAttackDirectionX
struct UMordhauInput_SetInverseAttackDirectionX_Params
{
	int                                                NewInverseAttackDirectionX;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadRightYSensitivity
struct UMordhauInput_SetGamepadRightYSensitivity_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadRightYInverted
struct UMordhauInput_SetGamepadRightYInverted_Params
{
	bool                                               bNewInverted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadRightYDeadzone
struct UMordhauInput_SetGamepadRightYDeadzone_Params
{
	float                                              NewDeadzone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadRightXSensitivity
struct UMordhauInput_SetGamepadRightXSensitivity_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadRightXInverted
struct UMordhauInput_SetGamepadRightXInverted_Params
{
	bool                                               bNewInverted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadRightXDeadzone
struct UMordhauInput_SetGamepadRightXDeadzone_Params
{
	float                                              NewDeadzone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadLeftYSensitivity
struct UMordhauInput_SetGamepadLeftYSensitivity_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadLeftYInverted
struct UMordhauInput_SetGamepadLeftYInverted_Params
{
	bool                                               bNewInverted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadLeftYDeadzone
struct UMordhauInput_SetGamepadLeftYDeadzone_Params
{
	float                                              NewDeadzone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadLeftXSensitivity
struct UMordhauInput_SetGamepadLeftXSensitivity_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadLeftXInverted
struct UMordhauInput_SetGamepadLeftXInverted_Params
{
	bool                                               bNewInverted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetGamepadLeftXDeadzone
struct UMordhauInput_SetGamepadLeftXDeadzone_Params
{
	float                                              NewDeadzone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetControlScheme
struct UMordhauInput_SetControlScheme_Params
{
	int                                                NewControlScheme;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetAngleAttacksWithMovement
struct UMordhauInput_SetAngleAttacksWithMovement_Params
{
	int                                                NewAngleAttacksWithMovement;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetAngleAttackAfterPress
struct UMordhauInput_SetAngleAttackAfterPress_Params
{
	int                                                NewAngleAttackAfterPress;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SetActiveActionSet
struct UMordhauInput_SetActiveActionSet_Params
{
	EActionSet                                         ActionSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInput.SaveSettings
struct UMordhauInput_SaveSettings_Params
{
};

// Function Mordhau.MordhauInput.RestoreDefaultSettings
struct UMordhauInput_RestoreDefaultSettings_Params
{
};

// Function Mordhau.MordhauInput.GetToggleSprint
struct UMordhauInput_GetToggleSprint_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetMouseYSensitivity
struct UMordhauInput_GetMouseYSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetMouseYInverted
struct UMordhauInput_GetMouseYInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetMouseXSensitivity
struct UMordhauInput_GetMouseXSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetMouseXIsFlipAttackSide
struct UMordhauInput_GetMouseXIsFlipAttackSide_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetMouseXInverted
struct UMordhauInput_GetMouseXInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetMouseSensitivityLimits
struct UMordhauInput_GetMouseSensitivityLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetInverseAttackDirectionY
struct UMordhauInput_GetInverseAttackDirectionY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetInverseAttackDirectionX
struct UMordhauInput_GetInverseAttackDirectionX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadSensitivityLimits
struct UMordhauInput_GetGamepadSensitivityLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadRightYSensitivity
struct UMordhauInput_GetGamepadRightYSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadRightYInverted
struct UMordhauInput_GetGamepadRightYInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadRightYDeadzone
struct UMordhauInput_GetGamepadRightYDeadzone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadRightXSensitivity
struct UMordhauInput_GetGamepadRightXSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadRightXInverted
struct UMordhauInput_GetGamepadRightXInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadRightXDeadzone
struct UMordhauInput_GetGamepadRightXDeadzone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadLeftYSensitivity
struct UMordhauInput_GetGamepadLeftYSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadLeftYInverted
struct UMordhauInput_GetGamepadLeftYInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadLeftYDeadzone
struct UMordhauInput_GetGamepadLeftYDeadzone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadLeftXSensitivity
struct UMordhauInput_GetGamepadLeftXSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadLeftXInverted
struct UMordhauInput_GetGamepadLeftXInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadLeftXDeadzone
struct UMordhauInput_GetGamepadLeftXDeadzone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetGamepadDeadzoneLimits
struct UMordhauInput_GetGamepadDeadzoneLimits_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetControlScheme
struct UMordhauInput_GetControlScheme_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetAxisScale
struct UMordhauInput_GetAxisScale_Params
{
	struct FInputAxisKeyMapping                        AxisKeyBinding;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetAxisOppositeDirectionName
struct UMordhauInput_GetAxisOppositeDirectionName_Params
{
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetAxisName
struct UMordhauInput_GetAxisName_Params
{
	struct FInputAxisKeyMapping                        AxisKeyBinding;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetAxisKeyBindings
struct UMordhauInput_GetAxisKeyBindings_Params
{
	TArray<struct FInputAxisKeyMapping>                AxisKeyBindings;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Mordhau.MordhauInput.GetAxisKeyBinding
struct UMordhauInput_GetAxisKeyBinding_Params
{
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FInputAxisKeyMapping                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauInput.GetAxisKey
struct UMordhauInput_GetAxisKey_Params
{
	struct FInputAxisKeyMapping                        AxisKeyBinding;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauInput.GetAngleAttacksWithMovement
struct UMordhauInput_GetAngleAttacksWithMovement_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetAngleAttackAfterPress
struct UMordhauInput_GetAngleAttackAfterPress_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetActionName
struct UMordhauInput_GetActionName_Params
{
	struct FInputActionKeyMapping                      ActionKeyBinding;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInput.GetActionKeyBindings
struct UMordhauInput_GetActionKeyBindings_Params
{
	TArray<struct FInputActionKeyMapping>              ActionKeyBindings;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Mordhau.MordhauInput.GetActionKeyBinding
struct UMordhauInput_GetActionKeyBinding_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FInputActionKeyMapping                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauInput.GetActionKey
struct UMordhauInput_GetActionKey_Params
{
	struct FInputActionKeyMapping                      ActionKeyBinding;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauInput.ClearKeyBindings
struct UMordhauInput_ClearKeyBindings_Params
{
};

// Function Mordhau.MordhauInput.ApplySettings
struct UMordhauInput_ApplySettings_Params
{
};

// Function Mordhau.MordhauInput.AddAxisKeyBinding
struct UMordhauInput_AddAxisKeyBinding_Params
{
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauInput.AddActionKeyBinding
struct UMordhauInput_AddActionKeyBinding_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauInventory.UnlockLevelUnlocks
struct UMordhauInventory_UnlockLevelUnlocks_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauInventory.UnlockItems
struct UMordhauInventory_UnlockItems_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<int>                                        ItemDefIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauInventory.UnlockItem
struct UMordhauInventory_UnlockItem_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.TriggerRewardDrop
struct UMordhauInventory_TriggerRewardDrop_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class AMordhauPlayerState*>                 Players;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauInventory.TriggerItemDrop
struct UMordhauInventory_TriggerItemDrop_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.SetItemQuantity
struct UMordhauInventory_SetItemQuantity_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.SerializeItems
struct UMordhauInventory_SerializeItems_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.ResetInventory
struct UMordhauInventory_ResetInventory_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.RequestUnlockRecipes
struct UMordhauInventory_RequestUnlockRecipes_Params
{
};

// Function Mordhau.MordhauInventory.RefreshItems
struct UMordhauInventory_RefreshItems_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.ParseResponseString
struct UMordhauInventory_ParseResponseString_Params
{
	struct FString                                     ResponseString;                                           // (Parm, ZeroConstructor)
	TArray<struct FItemStack>                          ItemStacks;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.OnWebAPIItemsDropped
struct UMordhauInventory_OnWebAPIItemsDropped_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FItemStack>                          ItemStacks;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauInventory.IsSkinAvailable
struct UMordhauInventory_IsSkinAvailable_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEquipmentSkinEntry                         Skin;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.IsInventoryAvailable
struct UMordhauInventory_IsInventoryAvailable_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.HasSupporterPack
struct UMordhauInventory_HasSupporterPack_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.HasSkin
struct UMordhauInventory_HasSkin_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEquipmentSkinEntry                         Skin;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.HasRewards
struct UMordhauInventory_HasRewards_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.HasItem
struct UMordhauInventory_HasItem_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetXPItemDefID
struct UMordhauInventory_GetXPItemDefID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetXP
struct UMordhauInventory_GetXP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetUnlockRequirements
struct UMordhauInventory_GetUnlockRequirements_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemStack>                          Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Mordhau.MordhauInventory.GetUnlockRecipe
struct UMordhauInventory_GetUnlockRecipe_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FUnlockRecipe                               Recipe;                                                   // (Parm, OutParm)
};

// Function Mordhau.MordhauInventory.GetTutorialPackageItemDefID
struct UMordhauInventory_GetTutorialPackageItemDefID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetStackQuantity
struct UMordhauInventory_GetStackQuantity_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetStackItemDefID
struct UMordhauInventory_GetStackItemDefID_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetStackItem
struct UMordhauInventory_GetStackItem_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMordhauInventoryItem*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetSkinRarity
struct UMordhauInventory_GetSkinRarity_Params
{
	struct FEquipmentSkinEntry                         Skin;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetItemStacks
struct UMordhauInventory_GetItemStacks_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FItemStack>                          ItemStacks;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Mordhau.MordhauInventory.GetItemQuantity
struct UMordhauInventory_GetItemQuantity_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetItem
struct UMordhauInventory_GetItem_Params
{
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauInventoryItem*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetGoldItemDefID
struct UMordhauInventory_GetGoldItemDefID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.GetGold
struct UMordhauInventory_GetGold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.FakeRewardDrop
struct UMordhauInventory_FakeRewardDrop_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Gold;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XP;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.FakeItemDrop
struct UMordhauInventory_FakeItemDrop_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.DeserializeItems
struct UMordhauInventory_DeserializeItems_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSerializedItems                            SerializedItems;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauInventory.ConsumeItemStack
struct UMordhauInventory_ConsumeItemStack_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauInventory.ConsolidateItems
struct UMordhauInventory_ConsolidateItems_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.CollectRewards
struct UMordhauInventory_CollectRewards_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FItemStack>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauInventory.CanUnlockItems
struct UMordhauInventory_CanUnlockItems_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<int>                                        ItemDefIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.CanUnlockItem
struct UMordhauInventory_CanUnlockItem_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.AreUnlockRecipesAvailable
struct UMordhauInventory_AreUnlockRecipesAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauInventory.AddItems
struct UMordhauInventory_AddItems_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ItemDefIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauInventory.AddItem
struct UMordhauInventory_AddItem_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemDefID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauMovementComponent.Knockback
struct UMordhauMovementComponent_Knockback_Params
{
	struct FVector                                     Amount;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauMovementComponent.IsInKnockback
struct UMordhauMovementComponent_IsInKnockback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauMovementComponent.GetSpeedFactor
struct UMordhauMovementComponent_GetSpeedFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauMovementComponent.GetAccelerationFactor
struct UMordhauMovementComponent_GetAccelerationFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.VoteMap
struct AMordhauPlayerController_VoteMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.VoteLevel
struct AMordhauPlayerController_VoteLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.VoteKick
struct AMordhauPlayerController_VoteKick_Params
{
	struct FString                                     PlayerNameOrSteamID;                                      // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.Unban
struct AMordhauPlayerController_Unban_Params
{
	struct FString                                     SteamID;                                                  // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.Turn
struct AMordhauPlayerController_Turn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ToggleStamina
struct AMordhauPlayerController_ToggleStamina_Params
{
};

// Function Mordhau.MordhauPlayerController.ToggleDamage
struct AMordhauPlayerController_ToggleDamage_Params
{
};

// Function Mordhau.MordhauPlayerController.StopServerStatsFile
struct AMordhauPlayerController_StopServerStatsFile_Params
{
};

// Function Mordhau.MordhauPlayerController.StartServerStatsFile
struct AMordhauPlayerController_StartServerStatsFile_Params
{
};

// Function Mordhau.MordhauPlayerController.SpectatorCmd
struct AMordhauPlayerController_SpectatorCmd_Params
{
	struct FString                                     SpecCmd;                                                  // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.Slomo
struct AMordhauPlayerController_Slomo_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ShowTips
struct AMordhauPlayerController_ShowTips_Params
{
};

// Function Mordhau.MordhauPlayerController.ShowEquipment
struct AMordhauPlayerController_ShowEquipment_Params
{
};

// Function Mordhau.MordhauPlayerController.ShowAuthTraces
struct AMordhauPlayerController_ShowAuthTraces_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.SetChoiceMenuConsumesInput
struct AMordhauPlayerController_SetChoiceMenuConsumesInput_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerVoteLevel
struct AMordhauPlayerController_ServerVoteLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ServerUnbanPlayer
struct AMordhauPlayerController_ServerUnbanPlayer_Params
{
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerToggleStamina
struct AMordhauPlayerController_ServerToggleStamina_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerToggleDamage
struct AMordhauPlayerController_ServerToggleDamage_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerStopServerStatsFile
struct AMordhauPlayerController_ServerStopServerStatsFile_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerStartServerStatsFile
struct AMordhauPlayerController_ServerStartServerStatsFile_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerSlomo
struct AMordhauPlayerController_ServerSlomo_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerSetSpawnToken
struct AMordhauPlayerController_ServerSetSpawnToken_Params
{
	int                                                NewToken;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerSetMatchmakingLobbyID
struct AMordhauPlayerController_ServerSetMatchmakingLobbyID_Params
{
	struct FSteamID                                    InMatchmakingLobbyID;                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ServerSetInventoryItems
struct AMordhauPlayerController_ServerSetInventoryItems_Params
{
	struct FSerializedItems                            SerializedItems;                                          // (ConstParm, Parm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ServerSetBadge
struct AMordhauPlayerController_ServerSetBadge_Params
{
	unsigned char                                      NewBadge;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerSetAuthTicket
struct AMordhauPlayerController_ServerSetAuthTicket_Params
{
	struct FString                                     InAuhTicket;                                              // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetTeam
struct AMordhauPlayerController_ServerRequestSetTeam_Params
{
	int                                                NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetSkillsCustomization
struct AMordhauPlayerController_ServerRequestSetSkillsCustomization_Params
{
	struct FSkillsCustomization                        NewCharacterSkills;                                       // (ConstParm, Parm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetGearCustomization
struct AMordhauPlayerController_ServerRequestSetGearCustomization_Params
{
	struct FCharacterGearCustomization                 NewCharacterGear;                                         // (ConstParm, Parm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetFaceCustomization
struct AMordhauPlayerController_ServerRequestSetFaceCustomization_Params
{
	struct FFaceCustomization                          NewCharacterFace;                                         // (ConstParm, Parm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetDefaultProfile
struct AMordhauPlayerController_ServerRequestSetDefaultProfile_Params
{
	int                                                NewDefaultProfile;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetDefaultCharacterTiers
struct AMordhauPlayerController_ServerRequestSetDefaultCharacterTiers_Params
{
	TArray<struct FCharacterGearCustomization>         Tiers;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetDefaultCharacterEquipment
struct AMordhauPlayerController_ServerRequestSetDefaultCharacterEquipment_Params
{
	TArray<struct FEquipmentCustomization>             Equip;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetAppearanceCustomization
struct AMordhauPlayerController_ServerRequestSetAppearanceCustomization_Params
{
	struct FAppearanceCustomization                    NewCharacterAppearance;                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ServerRequestRewards
struct AMordhauPlayerController_ServerRequestRewards_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerRequestAuthTraces
struct AMordhauPlayerController_ServerRequestAuthTraces_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerRemoveBots
struct AMordhauPlayerController_ServerRemoveBots_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerRemoveAdmin
struct AMordhauPlayerController_ServerRemoveAdmin_Params
{
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerKickPlayer
struct AMordhauPlayerController_ServerKickPlayer_Params
{
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KickReason;                                               // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ServerHasPassedMoveCheck
struct AMordhauPlayerController_ServerHasPassedMoveCheck_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerGetServerStats
struct AMordhauPlayerController_ServerGetServerStats_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerGetMapVoteMaps
struct AMordhauPlayerController_ServerGetMapVoteMaps_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerGetMapVoteCounts
struct AMordhauPlayerController_ServerGetMapVoteCounts_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerChangeLevel
struct AMordhauPlayerController_ServerChangeLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ServerBanPlayer
struct AMordhauPlayerController_ServerBanPlayer_Params
{
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BanDuration;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BanReason;                                                // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ServerBanList
struct AMordhauPlayerController_ServerBanList_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerAdminLogin
struct AMordhauPlayerController_ServerAdminLogin_Params
{
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ServerAdminList
struct AMordhauPlayerController_ServerAdminList_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerAddBots
struct AMordhauPlayerController_ServerAddBots_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ServerAddAdmin
struct AMordhauPlayerController_ServerAddAdmin_Params
{
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.SaveCurrentProfilesAsBotProfiles
struct AMordhauPlayerController_SaveCurrentProfilesAsBotProfiles_Params
{
};

// Function Mordhau.MordhauPlayerController.RemoveBotsTeam
struct AMordhauPlayerController_RemoveBotsTeam_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.RemoveBots
struct AMordhauPlayerController_RemoveBots_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.RemoveAdmin
struct AMordhauPlayerController_RemoveAdmin_Params
{
	struct FString                                     PlayerNameOrSteamID;                                      // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.RegisterAnglingYInput
struct AMordhauPlayerController_RegisterAnglingYInput_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.RegisterAnglingXInput
struct AMordhauPlayerController_RegisterAnglingXInput_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.PrepareAndSendCustomizationIfChanged
struct AMordhauPlayerController_PrepareAndSendCustomizationIfChanged_Params
{
};

// Function Mordhau.MordhauPlayerController.PlayerList
struct AMordhauPlayerController_PlayerList_Params
{
};

// Function Mordhau.MordhauPlayerController.OnSpectatorCmd
struct AMordhauPlayerController_OnSpectatorCmd_Params
{
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Param;                                                    // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.OnSpectatorAction
struct AMordhauPlayerController_OnSpectatorAction_Params
{
	unsigned char                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.OnSettingsChanged
struct AMordhauPlayerController_OnSettingsChanged_Params
{
};

// Function Mordhau.MordhauPlayerController.OnRequestVoteKick
struct AMordhauPlayerController_OnRequestVoteKick_Params
{
	class AMordhauPlayerState*                         TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.OnRequestCancelVoteKick
struct AMordhauPlayerController_OnRequestCancelVoteKick_Params
{
};

// Function Mordhau.MordhauPlayerController.OnNewProfileFromClientPreValidation
struct AMordhauPlayerController_OnNewProfileFromClientPreValidation_Params
{
};

// Function Mordhau.MordhauPlayerController.OnNewProfileFromClientPostValidation
struct AMordhauPlayerController_OnNewProfileFromClientPostValidation_Params
{
};

// Function Mordhau.MordhauPlayerController.OnMordhauCharacterSpawned
struct AMordhauPlayerController_OnMordhauCharacterSpawned_Params
{
	class AMordhauCharacter*                           SpawnedCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.OnIsAnythingRestockableChanged
struct AMordhauPlayerController_OnIsAnythingRestockableChanged_Params
{
};

// Function Mordhau.MordhauPlayerController.OnInventoryRewardsDropped
struct AMordhauPlayerController_OnInventoryRewardsDropped_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FItemStack>                          ItemStacks;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.OnInventoryItemsUnlocked
struct AMordhauPlayerController_OnInventoryItemsUnlocked_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FItemStack>                          ItemStacks;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.OnInventoryItemsSerialized
struct AMordhauPlayerController_OnInventoryItemsSerialized_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSerializedItems                            SerializedItems;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.OnHighlightStart
struct AMordhauPlayerController_OnHighlightStart_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.OnHighlightEnd
struct AMordhauPlayerController_OnHighlightEnd_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.OnAmmoChanged
struct AMordhauPlayerController_OnAmmoChanged_Params
{
	class AMordhauEquipment*                           Equipment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoDifference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.OnAfterPossess
struct AMordhauPlayerController_OnAfterPossess_Params
{
	class APawn*                                       APawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.OnAFKTimeExceededMaximum
struct AMordhauPlayerController_OnAFKTimeExceededMaximum_Params
{
};

// Function Mordhau.MordhauPlayerController.OnActionFailed
struct AMordhauPlayerController_OnActionFailed_Params
{
	struct FName                                       Reason;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.LookUp
struct AMordhauPlayerController_LookUp_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.Kick
struct AMordhauPlayerController_Kick_Params
{
	struct FString                                     PlayerNameOrSteamID;                                      // (Parm, ZeroConstructor)
	struct FString                                     KickReason;                                               // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.IsInventoryAvailable
struct AMordhauPlayerController_IsInventoryAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.IsAuthTicketAvailable
struct AMordhauPlayerController_IsAuthTicketAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.IsAdmin
struct AMordhauPlayerController_IsAdmin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.GiveClientScoreBP
struct AMordhauPlayerController_GiveClientScoreBP_Params
{
	EScoreFeedReason                                   Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.GetSteamID
struct AMordhauPlayerController_GetSteamID_Params
{
	struct FSteamID                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauPlayerController.GetSteamAvatar
struct AMordhauPlayerController_GetSteamAvatar_Params
{
	EAvatarSize                                        Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.GetLastControlledCharacter
struct AMordhauPlayerController_GetLastControlledCharacter_Params
{
	class AMordhauCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.GetDefaultTierCustomizationForSlot
struct AMordhauPlayerController_GetDefaultTierCustomizationForSlot_Params
{
	EMainWearableSlot                                  MainSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ArmorTier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<EWearableSlot, struct FWearableCustomization> OutMap;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.GetDefaultEquipmentCustomizationFor
struct AMordhauPlayerController_GetDefaultEquipmentCustomizationFor_Params
{
	class UClass*                                      ForEquipmentClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentCustomization                     OutCustomization;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.GetAnglingVector
struct AMordhauPlayerController_GetAnglingVector_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.GetAnglingAngle
struct AMordhauPlayerController_GetAnglingAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.FlushPendingAnglingInputs
struct AMordhauPlayerController_FlushPendingAnglingInputs_Params
{
};

// Function Mordhau.MordhauPlayerController.EquipmentCommand
struct AMordhauPlayerController_EquipmentCommand_Params
{
	int                                                Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.DisplayMessage
struct AMordhauPlayerController_DisplayMessage_Params
{
	class APlayerState*                                SenderPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
	struct FName                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MsgLifeTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ClientWasKicked_Implementation
struct AMordhauPlayerController_ClientWasKicked_Implementation_Params
{
	struct FText                                       KickReason;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ClientSetServerStats
struct AMordhauPlayerController_ClientSetServerStats_Params
{
	struct FServerStats                                InServerStats;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ClientSetMapVoteMaps
struct AMordhauPlayerController_ClientSetMapVoteMaps_Params
{
	TArray<struct FString>                             InMapVoteMaps;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ClientSetMapVoteCounts
struct AMordhauPlayerController_ClientSetMapVoteCounts_Params
{
	TArray<unsigned char>                              InMapVoteCounts;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ClientSetControlAndPawnRotation
struct AMordhauPlayerController_ClientSetControlAndPawnRotation_Params
{
	class APawn*                                       APawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ClientRequestMatchmakingLobbyID
struct AMordhauPlayerController_ClientRequestMatchmakingLobbyID_Params
{
};

// Function Mordhau.MordhauPlayerController.ClientRequestInventoryItems
struct AMordhauPlayerController_ClientRequestInventoryItems_Params
{
};

// Function Mordhau.MordhauPlayerController.ClientRequestAuthTicket
struct AMordhauPlayerController_ClientRequestAuthTicket_Params
{
};

// Function Mordhau.MordhauPlayerController.ClientReceiveScoreNoState
struct AMordhauPlayerController_ClientReceiveScoreNoState_Params
{
	unsigned char                                      ReasonAndParam;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            ScoreAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ClientReceiveScoreBP
struct AMordhauPlayerController_ClientReceiveScoreBP_Params
{
	EScoreFeedReason                                   Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReasonParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScoreAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauPlayerState*                         AssociatedPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ClientReceiveScore
struct AMordhauPlayerController_ClientReceiveScore_Params
{
	unsigned char                                      ReasonAndParam;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            ScoreAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauPlayerState*                         AssociatedPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ClientReceiveRewards
struct AMordhauPlayerController_ClientReceiveRewards_Params
{
	TArray<struct FItemStack>                          Rewards;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ClientReceiveMessage
struct AMordhauPlayerController_ClientReceiveMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ClientNotifyInventoryIsAvailable
struct AMordhauPlayerController_ClientNotifyInventoryIsAvailable_Params
{
};

// Function Mordhau.MordhauPlayerController.ClientMessageBP
struct AMordhauPlayerController_ClientMessageBP_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ClientJoinMatchmakingLobby
struct AMordhauPlayerController_ClientJoinMatchmakingLobby_Params
{
	struct FSteamID                                    InMatchmakingLobbyID;                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Mordhau.MordhauPlayerController.ClientDrawTracer
struct AMordhauPlayerController_ClientDrawTracer_Params
{
	struct FVector                                     Start;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ChooseExit
struct AMordhauPlayerController_ChooseExit_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose9
struct AMordhauPlayerController_Choose9_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose8
struct AMordhauPlayerController_Choose8_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose7
struct AMordhauPlayerController_Choose7_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose6
struct AMordhauPlayerController_Choose6_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose5
struct AMordhauPlayerController_Choose5_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose4
struct AMordhauPlayerController_Choose4_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose3
struct AMordhauPlayerController_Choose3_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose2
struct AMordhauPlayerController_Choose2_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose1
struct AMordhauPlayerController_Choose1_Params
{
};

// Function Mordhau.MordhauPlayerController.ChoiceMenuOptionSelected
struct AMordhauPlayerController_ChoiceMenuOptionSelected_Params
{
	int                                                Choice;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ChoiceMenu
struct AMordhauPlayerController_ChoiceMenu_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.ChangeMap
struct AMordhauPlayerController_ChangeMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.ChangeLevel
struct AMordhauPlayerController_ChangeLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.CancelVoteKick
struct AMordhauPlayerController_CancelVoteKick_Params
{
};

// Function Mordhau.MordhauPlayerController.CanAskForSpawn
struct AMordhauPlayerController_CanAskForSpawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.BanList
struct AMordhauPlayerController_BanList_Params
{
};

// Function Mordhau.MordhauPlayerController.Ban
struct AMordhauPlayerController_Ban_Params
{
	struct FString                                     PlayerNameOrSteamID;                                      // (Parm, ZeroConstructor)
	int                                                BanDuration;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BanReason;                                                // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.AskForSpawn
struct AMordhauPlayerController_AskForSpawn_Params
{
};

// Function Mordhau.MordhauPlayerController.AdminLogin
struct AMordhauPlayerController_AdminLogin_Params
{
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerController.AdminList
struct AMordhauPlayerController_AdminList_Params
{
};

// Function Mordhau.MordhauPlayerController.AddBotsTeam
struct AMordhauPlayerController_AddBotsTeam_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.AddBots
struct AMordhauPlayerController_AddBots_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerController.AddAdmin
struct AMordhauPlayerController_AddAdmin_Params
{
	struct FString                                     PlayerNameOrSteamID;                                      // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerStart.IsAllowedSpawnFor
struct AMordhauPlayerStart_IsAllowedSpawnFor_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerStart.GetSpawnPreferenceFor
struct AMordhauPlayerStart_GetSpawnPreferenceFor_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerState.SetPlayerName
struct AMordhauPlayerState_SetPlayerName_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerState.OnRep_ReplicatedTeam
struct AMordhauPlayerState_OnRep_ReplicatedTeam_Params
{
};

// Function Mordhau.MordhauPlayerState.OnRep_ReplicatedKills
struct AMordhauPlayerState_OnRep_ReplicatedKills_Params
{
};

// Function Mordhau.MordhauPlayerState.OnRep_ReplicatedDeathsAndFlags
struct AMordhauPlayerState_OnRep_ReplicatedDeathsAndFlags_Params
{
};

// Function Mordhau.MordhauPlayerState.OnRep_ReplicatedAssists
struct AMordhauPlayerState_OnRep_ReplicatedAssists_Params
{
};

// Function Mordhau.MordhauPlayerState.GetSteamID
struct AMordhauPlayerState_GetSteamID_Params
{
	struct FSteamID                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauPlayerState.GetRank
struct AMordhauPlayerState_GetRank_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerState.GetLastPossessedMordhauCharacter
struct AMordhauPlayerState_GetLastPossessedMordhauCharacter_Params
{
	class AMordhauCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerState.BanPlayer
struct AMordhauPlayerState_BanPlayer_Params
{
	int                                                BanDuration;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BanReason;                                                // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauPlayerState.AddScore
struct AMordhauPlayerState_AddScore_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerState.AddKills
struct AMordhauPlayerState_AddKills_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerState.AddDeaths
struct AMordhauPlayerState_AddDeaths_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauPlayerState.AddAssists
struct AMordhauPlayerState_AddAssists_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.WillSticky
struct AMordhauProjectile_WillSticky_Params
{
	unsigned char                                      Surface;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.WillPassThrough
struct AMordhauProjectile_WillPassThrough_Params
{
	unsigned char                                      Surface;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.UsesProjectileBlending
struct AMordhauProjectile_UsesProjectileBlending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.UpdateProjectileState
struct AMordhauProjectile_UpdateProjectileState_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.TerminateProjectile
struct AMordhauProjectile_TerminateProjectile_Params
{
};

// Function Mordhau.MordhauProjectile.SweepProjectile
struct AMordhauProjectile_SweepProjectile_Params
{
};

// Function Mordhau.MordhauProjectile.StopTrail
struct AMordhauProjectile_StopTrail_Params
{
};

// Function Mordhau.MordhauProjectile.StartTrail
struct AMordhauProjectile_StartTrail_Params
{
};

// Function Mordhau.MordhauProjectile.SpawnParticles
struct AMordhauProjectile_SpawnParticles_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UParticleSystem*                             System;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.SpawnDecal
struct AMordhauProjectile_SpawnDecal_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FDecalInfo                                  DecalInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauProjectile.SetCurrentTrailParticles
struct AMordhauProjectile_SetCurrentTrailParticles_Params
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.RestockCharacter
struct AMordhauProjectile_RestockCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.ProcessProjectileHit
struct AMordhauProjectile_ProcessProjectileHit_Params
{
	bool                                               bIsBlocking;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.OnRep_ReplicatedProjectileInfo
struct AMordhauProjectile_OnRep_ReplicatedProjectileInfo_Params
{
};

// Function Mordhau.MordhauProjectile.OnProjectileHitCosmetic
struct AMordhauProjectile_OnProjectileHitCosmetic_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.OnProjectileHit
struct AMordhauProjectile_OnProjectileHit_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, IsPlainOldData)
	float                                              BounceForce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Surface;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasHitWorld;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasStopped;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.OnProjectileFired
struct AMordhauProjectile_OnProjectileFired_Params
{
};

// Function Mordhau.MordhauProjectile.OnProjectileDamagedCharacter
struct AMordhauProjectile_OnProjectileDamagedCharacter_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWillKill;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.InitializeProjectile
struct AMordhauProjectile_InitializeProjectile_Params
{
	class AController*                                 InOwningController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIsLocallyPredicted;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InCreator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.GetProjectileOwningController
struct AMordhauProjectile_GetProjectileOwningController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.GetProjectileCreator
struct AMordhauProjectile_GetProjectileCreator_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.GetPercentageOfMaxVelocityClamped
struct AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.GetCurrentTransformWithOffsets
struct AMordhauProjectile_GetCurrentTransformWithOffsets_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.GetCurrentTrailParticles
struct AMordhauProjectile_GetCurrentTrailParticles_Params
{
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.GetBlendedTransform
struct AMordhauProjectile_GetBlendedTransform_Params
{
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.Fire
struct AMordhauProjectile_Fire_Params
{
};

// Function Mordhau.MordhauProjectile.CarryOverTrail
struct AMordhauProjectile_CarryOverTrail_Params
{
	class AMordhauProjectile*                          NewProjectile;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.BounceComponent
struct AMordhauProjectile_BounceComponent_Params
{
	class USkeletalMeshComponent*                      ComponentToBounce;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NewVelocity;                                              // (Parm, IsPlainOldData)
	struct FVector                                     NewAngularVelocity;                                       // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauProjectile.AttachProjectile
struct AMordhauProjectile_AttachProjectile_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.OnFindServerSessionsComplete
struct UFindMordhauServerSessions_OnFindServerSessionsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.IsVacSecured
struct UFindMordhauServerSessions_IsVacSecured_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.IsRanked
struct UFindMordhauServerSessions_IsRanked_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.IsPasswordProtected
struct UFindMordhauServerSessions_IsPasswordProtected_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.IsOfficial
struct UFindMordhauServerSessions_IsOfficial_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.IsModded
struct UFindMordhauServerSessions_IsModded_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.IsMatchmaking
struct UFindMordhauServerSessions_IsMatchmaking_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.IsDevBuild
struct UFindMordhauServerSessions_IsDevBuild_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.GetServerName
struct UFindMordhauServerSessions_GetServerName_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.FindMordhauServerSessions.GetServerList
struct UFindMordhauServerSessions_GetServerList_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	EServerList                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.GetRegion
struct UFindMordhauServerSessions_GetRegion_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	ERegion                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.GetPing
struct UFindMordhauServerSessions_GetPing_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.GetMaxPlayers
struct UFindMordhauServerSessions_GetMaxPlayers_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.GetMapName
struct UFindMordhauServerSessions_GetMapName_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.FindMordhauServerSessions.GetLobbyID
struct UFindMordhauServerSessions_GetLobbyID_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.FindMordhauServerSessions.GetGameMode
struct UFindMordhauServerSessions_GetGameMode_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.FindMordhauServerSessions.GetCurrentPlayers
struct UFindMordhauServerSessions_GetCurrentPlayers_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.FindMordhauServerSessions
struct UFindMordhauServerSessions_FindMordhauServerSessions_Params
{
	EServerList                                        ServerList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFindServerSessionsFilter                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFindMordhauServerSessions*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessions.AllowsJoin
struct UFindMordhauServerSessions_AllowsJoin_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauServerSessionByAddress.FindMordhauServerSessionByAddress
struct UFindMordhauServerSessionByAddress_FindMordhauServerSessionByAddress_Params
{
	struct FServerAddress                              Address;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFindMordhauServerSessionByAddress*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauLobbySessions.OnFindLobbySessionsComplete
struct UFindMordhauLobbySessions_OnFindLobbySessionsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.FindMordhauLobbySessions.GetServerAddress
struct UFindMordhauLobbySessions_GetServerAddress_Params
{
	struct FLobbySearchResult                          Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSuccessful;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FServerAddress                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.FindMordhauLobbySessions.GetOwner
struct UFindMordhauLobbySessions_GetOwner_Params
{
	struct FLobbySearchResult                          Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.FindMordhauLobbySessions.GetMMR
struct UFindMordhauLobbySessions_GetMMR_Params
{
	struct FLobbySearchResult                          Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauLobbySessions.GetMaxPlayers
struct UFindMordhauLobbySessions_GetMaxPlayers_Params
{
	struct FLobbySearchResult                          Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauLobbySessions.GetLobbyID
struct UFindMordhauLobbySessions_GetLobbyID_Params
{
	struct FLobbySearchResult                          Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.FindMordhauLobbySessions.GetCurrentPlayers
struct UFindMordhauLobbySessions_GetCurrentPlayers_Params
{
	struct FLobbySearchResult                          Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.FindMordhauLobbySessions.FindMordhauLobbySessions
struct UFindMordhauLobbySessions_FindMordhauLobbySessions_Params
{
	struct FFindLobbySessionsFilter                    Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFindMordhauLobbySessions*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.JoinMordhauServerSession.JoinMordhauServerSession
struct UJoinMordhauServerSession_JoinMordhauServerSession_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UJoinMordhauServerSession*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.CancelFindMordhauSessions.CancelFindMordhauSessions
struct UCancelFindMordhauSessions_CancelFindMordhauSessions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.UpdateMordhauSession.UpdateMordhauSession
struct UUpdateMordhauSession_UpdateMordhauSession_Params
{
	struct FServerSearchResult                         Session;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UUpdateMordhauSession*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.DestroyMordhauServerSession.DestroyMordhauServerSession
struct UDestroyMordhauServerSession_DestroyMordhauServerSession_Params
{
	class UDestroyMordhauServerSession*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.CreateMatchmakingSession.CreateMatchmakingSession
struct UCreateMatchmakingSession_CreateMatchmakingSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             InGameModes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ERegion                                            InRegion;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCreateMatchmakingSession*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.JoinMatchmakingSession.JoinMatchmakingSessionByID
struct UJoinMatchmakingSession_JoinMatchmakingSessionByID_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    LobbyID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UJoinMatchmakingSession*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.JoinMatchmakingSession.JoinMatchmakingSession
struct UJoinMatchmakingSession_JoinMatchmakingSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLobbySearchResult                          SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UJoinMatchmakingSession*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.DestroyMatchmakingSession.DestroyMatchmakingSession
struct UDestroyMatchmakingSession_DestroyMatchmakingSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDestroyMatchmakingSession*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.ReserveMordhauServerSessionSlots.ReserveMordhauServerSessionSlots
struct UReserveMordhauServerSessionSlots_ReserveMordhauServerSessionSlots_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FServerSearchResult                         SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FSteamID>                            PartyMembers;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UReserveMordhauServerSessionSlots*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.SpawnEquipment
struct UMordhauSingleton_SpawnEquipment_Params
{
	class UWorld*                                      WorldRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentCustomization                     Customization;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      Emblem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EmblemColor1;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EmblemColor2;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceInstantMeshUpdate;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMipStreaming;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.SaveToConfig
struct UMordhauSingleton_SaveToConfig_Params
{
};

// Function Mordhau.MordhauSingleton.LoadQueueFinishedLoadingChunk
struct UMordhauSingleton_LoadQueueFinishedLoadingChunk_Params
{
};

// Function Mordhau.MordhauSingleton.LoadFromConfig
struct UMordhauSingleton_LoadFromConfig_Params
{
};

// Function Mordhau.MordhauSingleton.GetVoicesNum
struct UMordhauSingleton_GetVoicesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetVoice
struct UMordhauSingleton_GetVoice_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetUpperChestWearablesNum
struct UMordhauSingleton_GetUpperChestWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetUpperChestWearable
struct UMordhauSingleton_GetUpperChestWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetTableColorObject
struct UMordhauSingleton_GetTableColorObject_Params
{
	unsigned char                                      Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauColor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetTableColor
struct UMordhauSingleton_GetTableColor_Params
{
	unsigned char                                      Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetSkinColorObject
struct UMordhauSingleton_GetSkinColorObject_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauColor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetSkinColor
struct UMordhauSingleton_GetSkinColor_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetMetalTintsColorObject
struct UMordhauSingleton_GetMetalTintsColorObject_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauColor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetMetalTintsColor
struct UMordhauSingleton_GetMetalTintsColor_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetLegsWearablesNum
struct UMordhauSingleton_GetLegsWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetLegsWearable
struct UMordhauSingleton_GetLegsWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetIsLoadingAssets
struct UMordhauSingleton_GetIsLoadingAssets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetHeadWearablesNum
struct UMordhauSingleton_GetHeadWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetHeadWearable
struct UMordhauSingleton_GetHeadWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetHairColorObject
struct UMordhauSingleton_GetHairColorObject_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauColor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetHairColor
struct UMordhauSingleton_GetHairColor_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetEyeColorObject
struct UMordhauSingleton_GetEyeColorObject_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauColor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetEyeColor
struct UMordhauSingleton_GetEyeColor_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetEquipmentNum
struct UMordhauSingleton_GetEquipmentNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetEquipmentID
struct UMordhauSingleton_GetEquipmentID_Params
{
	class UClass*                                      EquipmentType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetEquipment
struct UMordhauSingleton_GetEquipment_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetEmblemColorObject
struct UMordhauSingleton_GetEmblemColorObject_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauColor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.GetEmblemColor
struct UMordhauSingleton_GetEmblemColor_Params
{
	unsigned char                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauSingleton.ApplyProfileTo
struct UMordhauSingleton_ApplyProfileTo_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class AMordhauCharacter*                           Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddEquipment;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauSpectator.TertiarySpectatorAction
struct AMordhauSpectator_TertiarySpectatorAction_Params
{
};

// Function Mordhau.MordhauSpectator.SwitchToFreeCam
struct AMordhauSpectator_SwitchToFreeCam_Params
{
};

// Function Mordhau.MordhauSpectator.SecondarySpectatorAction
struct AMordhauSpectator_SecondarySpectatorAction_Params
{
};

// Function Mordhau.MordhauSpectator.PrimarySpectatorAction
struct AMordhauSpectator_PrimarySpectatorAction_Params
{
};

// Function Mordhau.MordhauSpectator.IsWatchingOwnDeath
struct AMordhauSpectator_IsWatchingOwnDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauStats.UpdateUserAvgRate
struct UMordhauStats_UpdateUserAvgRate_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatAvgRate                                Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CountThisSession;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SessionLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.UpdateAvgRate
struct UMordhauStats_UpdateAvgRate_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatAvgRate                                Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CountThisSession;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SessionLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.UnlockUserAchievement
struct UMordhauStats_UnlockUserAchievement_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAchievement                                Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauStats.UnlockAchievement
struct UMordhauStats_UnlockAchievement_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAchievement                                Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauStats.StoreUserStats
struct UMordhauStats_StoreUserStats_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauStats.StoreStats
struct UMordhauStats_StoreStats_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.SetUserIntValue
struct UMordhauStats_SetUserIntValue_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatInt                                    Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.SetUserFloatValue
struct UMordhauStats_SetUserFloatValue_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatFloat                                  Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.SetIntValue
struct UMordhauStats_SetIntValue_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatInt                                    Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.SetFloatValue
struct UMordhauStats_SetFloatValue_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatFloat                                  Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.ResetAllStats
struct UMordhauStats_ResetAllStats_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAchievementsToo;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.RequestUserStats
struct UMordhauStats_RequestUserStats_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauStats.RequestStats
struct UMordhauStats_RequestStats_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.LockUserAchievement
struct UMordhauStats_LockUserAchievement_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAchievement                                Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauStats.LockAchievement
struct UMordhauStats_LockAchievement_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAchievement                                Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauStats.IsUserAchievementUnlocked
struct UMordhauStats_IsUserAchievementUnlocked_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAchievement                                Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsUnlocked;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.IsAchievementUnlocked
struct UMordhauStats_IsAchievementUnlocked_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAchievement                                Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsUnlocked;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.IncrementIntStatValueChecked
struct UMordhauStats_IncrementIntStatValueChecked_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatInt                                    Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Mordhau.MordhauStats.GetUserIntValue
struct UMordhauStats_GetUserIntValue_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatInt                                    Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetUserFloatValue
struct UMordhauStats_GetUserFloatValue_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatFloat                                  Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetUnlockIntValue
struct UMordhauStats_GetUnlockIntValue_Params
{
	struct FProgressAchievementInt                     Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetUnlockFloatValue
struct UMordhauStats_GetUnlockFloatValue_Params
{
	struct FProgressAchievementFloat                   Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetMaxIntValue
struct UMordhauStats_GetMaxIntValue_Params
{
	struct FStatInt                                    Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetMaxFloatValue
struct UMordhauStats_GetMaxFloatValue_Params
{
	struct FStatFloat                                  Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetIntValue
struct UMordhauStats_GetIntValue_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatInt                                    Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetIntStatValueByName
struct UMordhauStats_GetIntStatValueByName_Params
{
	struct FString                                     StatName;                                                 // (Parm, ZeroConstructor)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetIntStat
struct UMordhauStats_GetIntStat_Params
{
	struct FProgressAchievementInt                     Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FStatInt                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauStats.GetFloatValue
struct UMordhauStats_GetFloatValue_Params
{
	ECallResult                                        CallResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FStatFloat                                  Stat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauStats.GetFloatStat
struct UMordhauStats_GetFloatStat_Params
{
	struct FProgressAchievementFloat                   Achievement;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FStatFloat                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.VSmoothDamp
struct UMordhauUtilityLibrary_VSmoothDamp_Params
{
	struct FVector                                     Current;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CurrentVelocity;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              SmoothTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.ValidateCharacterProfile
struct UMordhauUtilityLibrary_ValidateCharacterProfile_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.UnpossessCharacterAndHandleSpectating
struct UMordhauUtilityLibrary_UnpossessCharacterAndHandleSpectating_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.TryExecuteHeavydutyOperation
struct UMordhauUtilityLibrary_TryExecuteHeavydutyOperation_Params
{
	class UWorld*                                      WorldObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.TermAllChildBodiesOf
struct UMordhauUtilityLibrary_TermAllChildBodiesOf_Params
{
	class USkeletalMeshComponent*                      USMC;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.StripProfile
struct UMordhauUtilityLibrary_StripProfile_Params
{
	struct FCharacterProfile                           InProfile;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bStripEquipment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStripPerks;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStripNonTier0Armor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterProfile                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.SteamIDToString
struct UMordhauUtilityLibrary_SteamIDToString_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.SpawnBloodDecalAtLocation
struct UMordhauUtilityLibrary_SpawnBloodDecalAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // (Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SortPlayers
struct UMordhauUtilityLibrary_SortPlayers_Params
{
	TArray<class AMordhauPlayerState*>                 Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AMordhauPlayerState*>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.SortForServerBrowser
struct UMordhauUtilityLibrary_SortForServerBrowser_Params
{
	TArray<struct FServerSearchResult>                 Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FServerSearchResult>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.SortForMatchmaking
struct UMordhauUtilityLibrary_SortForMatchmaking_Params
{
	TArray<struct FServerSearchResult>                 Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FServerSearchResult>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.Snap180AngleToSteps
struct UMordhauUtilityLibrary_Snap180AngleToSteps_Params
{
	float                                              Angle180;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SLessThan
struct UMordhauUtilityLibrary_SLessThan_Params
{
	struct FString                                     StringA;                                                  // (Parm, ZeroConstructor)
	struct FString                                     StringB;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SGreaterThan
struct UMordhauUtilityLibrary_SGreaterThan_Params
{
	struct FString                                     StringA;                                                  // (Parm, ZeroConstructor)
	struct FString                                     StringB;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetSoundMixVolume
struct UMordhauUtilityLibrary_SetSoundMixVolume_Params
{
	ESoundMix                                          SoundMix;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetPawnFromRep
struct UMordhauUtilityLibrary_SetPawnFromRep_Params
{
	class AController*                                 Contr;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetNavAreaClass
struct UMordhauUtilityLibrary_SetNavAreaClass_Params
{
	class UShapeComponent*                             ShapeComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      AreaClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetMousePosition
struct UMordhauUtilityLibrary_SetMousePosition_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetLocalSpaceKinematics
struct UMordhauUtilityLibrary_SetLocalSpaceKinematics_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetForceMipStreaming
struct UMordhauUtilityLibrary_SetForceMipStreaming_Params
{
	class USkeletalMeshComponent*                      SMC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetDecalFadeScreenSize
struct UMordhauUtilityLibrary_SetDecalFadeScreenSize_Params
{
	class UDecalComponent*                             Decal;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NewFadeScreenSize;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Vector2D
struct UMordhauUtilityLibrary_SetCustomConfigVar_Vector2D_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FVector2D                                   Value;                                                    // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Vector
struct UMordhauUtilityLibrary_SetCustomConfigVar_Vector_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_String
struct UMordhauUtilityLibrary_SetCustomConfigVar_String_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Rotator
struct UMordhauUtilityLibrary_SetCustomConfigVar_Rotator_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FRotator                                    Value;                                                    // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Int
struct UMordhauUtilityLibrary_SetCustomConfigVar_Int_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Float
struct UMordhauUtilityLibrary_SetCustomConfigVar_Float_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Color
struct UMordhauUtilityLibrary_SetCustomConfigVar_Color_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FLinearColor                                Value;                                                    // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Bool
struct UMordhauUtilityLibrary_SetCustomConfigVar_Bool_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SetCanEverAffectNavigation
struct UMordhauUtilityLibrary_SetCanEverAffectNavigation_Params
{
	class UActorComponent*                             ActorComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bRelevant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.SendClientAdjustment
struct UMordhauUtilityLibrary_SendClientAdjustment_Params
{
	class UCharacterMovementComponent*                 CMC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.ResetServerPredictionData
struct UMordhauUtilityLibrary_ResetServerPredictionData_Params
{
	class UCharacterMovementComponent*                 CMC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.ResetClientPredictionData
struct UMordhauUtilityLibrary_ResetClientPredictionData_Params
{
	class UCharacterMovementComponent*                 CMC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.ReserveCharacterRagdoll
struct UMordhauUtilityLibrary_ReserveCharacterRagdoll_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.RandomRangeExclude
struct UMordhauUtilityLibrary_RandomRangeExclude_Params
{
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Exclude;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.PlaneTrace
struct UMordhauUtilityLibrary_PlaneTrace_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Left;                                                     // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Right;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Back;                                                     // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     TraceAmount;                                              // (ConstParm, Parm, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bConnectLeftRight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConnectForwardBack;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConnectOffset;                                            // (ConstParm, Parm, IsPlainOldData)
	struct FHitResult                                  LeftHit;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FHitResult                                  RightHit;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FHitResult                                  ForwardHit;                                               // (Parm, OutParm, IsPlainOldData)
	struct FHitResult                                  BackHit;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutRight;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutForward;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.OpenURL
struct UMordhauUtilityLibrary_OpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Mordhau.MordhauUtilityLibrary.NotEqual_SteamID
struct UMordhauUtilityLibrary_NotEqual_SteamID_Params
{
	struct FSteamID                                    A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.MordhauApplyRadialDamageWithFalloff
struct UMordhauUtilityLibrary_MordhauApplyRadialDamageWithFalloff_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseStructureDamage;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumStructureDamage;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              BaseKnockback;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumKnockback;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreFriendly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.MarkRenderStateDirty
struct UMordhauUtilityLibrary_MarkRenderStateDirty_Params
{
	class UMeshComponent*                              MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.MakeEmptyProfile
struct UMordhauUtilityLibrary_MakeEmptyProfile_Params
{
	class UClass*                                      CharacterClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeVoice;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterProfile                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.LineTraceMultiForObjectsReturnFace
struct UMordhauUtilityLibrary_LineTraceMultiForObjectsReturnFace_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.LerpPOV
struct UMordhauUtilityLibrary_LerpPOV_Params
{
	struct FPOV                                        A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPOV                                        B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPOV                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.IsValid_SteamID
struct UMordhauUtilityLibrary_IsValid_SteamID_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsTestingBranch
struct UMordhauUtilityLibrary_IsTestingBranch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsSteamFriend
struct UMordhauUtilityLibrary_IsSteamFriend_Params
{
	class AMordhauPlayerState*                         Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsStandalone
struct UMordhauUtilityLibrary_IsStandalone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsServer
struct UMordhauUtilityLibrary_IsServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsReleaseBranch
struct UMordhauUtilityLibrary_IsReleaseBranch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsPlayInEditor
struct UMordhauUtilityLibrary_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsPartyMember
struct UMordhauUtilityLibrary_IsPartyMember_Params
{
	class AMordhauPlayerState*                         Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsOfficialServer
struct UMordhauUtilityLibrary_IsOfficialServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsListenServer
struct UMordhauUtilityLibrary_IsListenServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsFriendlyToLocalPlayer
struct UMordhauUtilityLibrary_IsFriendlyToLocalPlayer_Params
{
	class UWorld*                                      WorldReference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsEditor
struct UMordhauUtilityLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsDLCInstalled
struct UMordhauUtilityLibrary_IsDLCInstalled_Params
{
	int                                                appid;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsDevelopmentBuild
struct UMordhauUtilityLibrary_IsDevelopmentBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsDevelopmentBranch
struct UMordhauUtilityLibrary_IsDevelopmentBranch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsDemoPlayback
struct UMordhauUtilityLibrary_IsDemoPlayback_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsDedicatedServer
struct UMordhauUtilityLibrary_IsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.IsClient
struct UMordhauUtilityLibrary_IsClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.HasBeenReallyRecentlyRendered
struct UMordhauUtilityLibrary_HasBeenReallyRecentlyRendered_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.HasActorBegunPlay
struct UMordhauUtilityLibrary_HasActorBegunPlay_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GrowBoxToIncludePoint
struct UMordhauUtilityLibrary_GrowBoxToIncludePoint_Params
{
	struct FBox                                        Box;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetXPFromRank
struct UMordhauUtilityLibrary_GetXPFromRank_Params
{
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetWorldOf
struct UMordhauUtilityLibrary_GetWorldOf_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetWearableNames
struct UMordhauUtilityLibrary_GetWearableNames_Params
{
	struct FCharacterGearCustomization                 CharacterGearCustomization;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EWearableSlot                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetWearableClasses
struct UMordhauUtilityLibrary_GetWearableClasses_Params
{
	struct FCharacterGearCustomization                 CharacterGearCustomization;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EWearableSlot                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetWearableClass
struct UMordhauUtilityLibrary_GetWearableClass_Params
{
	struct FCharacterGearCustomization                 CharacterGearCustomization;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EWearableSlot                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetViewTargetCharacter
struct UMordhauUtilityLibrary_GetViewTargetCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyLiving;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetVersionString
struct UMordhauUtilityLibrary_GetVersionString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetVersionName
struct UMordhauUtilityLibrary_GetVersionName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetTotalDemoTime
struct UMordhauUtilityLibrary_GetTotalDemoTime_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetSyncGroupPositionBetweenMarkers
struct UMordhauUtilityLibrary_GetSyncGroupPositionBetweenMarkers_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SyncGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetSupportedScreenResolutions
struct UMordhauUtilityLibrary_GetSupportedScreenResolutions_Params
{
	TArray<struct FString>                             Resolutions;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetSteamName
struct UMordhauUtilityLibrary_GetSteamName_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetSteamIDFromPlayer
struct UMordhauUtilityLibrary_GetSteamIDFromPlayer_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetSteamID
struct UMordhauUtilityLibrary_GetSteamID_Params
{
	struct FSteamID                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetSteamAvatar
struct UMordhauUtilityLibrary_GetSteamAvatar_Params
{
	struct FSteamID                                    SteamID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	EAvatarSize                                        Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetSoundMixInfo
struct UMordhauUtilityLibrary_GetSoundMixInfo_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FSoundMixInfo                               SoundMixInfo;                                             // (Parm, OutParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetServerSteamID
struct UMordhauUtilityLibrary_GetServerSteamID_Params
{
	struct FSteamID                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetSculptableBoneAtLine
struct UMordhauUtilityLibrary_GetSculptableBoneAtLine_Params
{
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SearchRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AMordhauCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRole
struct UMordhauUtilityLibrary_GetRole_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRegionName
struct UMordhauUtilityLibrary_GetRegionName_Params
{
	ERegion                                            Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetRegion
struct UMordhauUtilityLibrary_GetRegion_Params
{
	struct FString                                     RegionName;                                               // (Parm, ZeroConstructor)
	ERegion                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRankFromXP
struct UMordhauUtilityLibrary_GetRankFromXP_Params
{
	int                                                XP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomWeapon
struct UMordhauUtilityLibrary_GetRandomWeapon_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomUpperChestWearable
struct UMordhauUtilityLibrary_GetRandomUpperChestWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUpperChestWearable*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomSkin
struct UMordhauUtilityLibrary_GetRandomSkin_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentSkinEntry                         Skin;                                                     // (Parm, OutParm)
	class AMordhauEquipment*                           Equipment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomShouldersWearable
struct UMordhauUtilityLibrary_GetRandomShouldersWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUpperChestWearable*                         UpperChestWearable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauWearable*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomRangedWeapon
struct UMordhauUtilityLibrary_GetRandomRangedWeapon_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomMeleeWeapon
struct UMordhauUtilityLibrary_GetRandomMeleeWeapon_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomLowerChestWearable
struct UMordhauUtilityLibrary_GetRandomLowerChestWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUpperChestWearable*                         UpperChestWearable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauWearable*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomLegsWearable
struct UMordhauUtilityLibrary_GetRandomLegsWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ULegsWearable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomHeadWearable
struct UMordhauUtilityLibrary_GetRandomHeadWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UHeadWearable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomHandsWearable
struct UMordhauUtilityLibrary_GetRandomHandsWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UArmsWearable*                               ArmsWearable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauWearable*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomFeetWearable
struct UMordhauUtilityLibrary_GetRandomFeetWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULegsWearable*                               LegsWearable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauWearable*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomFaceCustomizationVector
struct UMordhauUtilityLibrary_GetRandomFaceCustomizationVector_Params
{
	float                                              RandomExponent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomEquipment
struct UMordhauUtilityLibrary_GetRandomEquipment_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomCoifWearable
struct UMordhauUtilityLibrary_GetRandomCoifWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UHeadWearable*                               HeadWearable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauWearable*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomArmsWearable
struct UMordhauUtilityLibrary_GetRandomArmsWearable_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUpperChestWearable*                         UpperChestWearable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSkillsCustomization                        SkillsCustomization;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EItemRarity                                        MaxRarity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UArmsWearable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetPing
struct UMordhauUtilityLibrary_GetPing_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMedian;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetPhysicsBodyWorldTransform
struct UMordhauUtilityLibrary_GetPhysicsBodyWorldTransform_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetPhysicsBodyBounds
struct UMordhauUtilityLibrary_GetPhysicsBodyBounds_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetPerksCost
struct UMordhauUtilityLibrary_GetPerksCost_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetPerks
struct UMordhauUtilityLibrary_GetPerks_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UPerk*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetPerforceRevision
struct UMordhauUtilityLibrary_GetPerforceRevision_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetPacketsLost
struct UMordhauUtilityLibrary_GetPacketsLost_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetNotifyServerReceivedClientData
struct UMordhauUtilityLibrary_GetNotifyServerReceivedClientData_Params
{
	class UCharacterMovementComponent*                 CMC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetNormalizedTime
struct UMordhauUtilityLibrary_GetNormalizedTime_Params
{
	float                                              Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMousePosition
struct UMordhauUtilityLibrary_GetMousePosition_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauWebAPI
struct UMordhauUtilityLibrary_GetMordhauWebAPI_Params
{
	class UMordhauWebAPI*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauStats
struct UMordhauUtilityLibrary_GetMordhauStats_Params
{
	class UMordhauStats*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauSingleton
struct UMordhauUtilityLibrary_GetMordhauSingleton_Params
{
	class UMordhauSingleton*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauInventory
struct UMordhauUtilityLibrary_GetMordhauInventory_Params
{
	class UMordhauInventory*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauInput
struct UMordhauUtilityLibrary_GetMordhauInput_Params
{
	class UMordhauInput*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauHUD
struct UMordhauUtilityLibrary_GetMordhauHUD_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauHUD*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauGameUserSettings
struct UMordhauUtilityLibrary_GetMordhauGameUserSettings_Params
{
	class UMordhauGameUserSettings*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauGameSession
struct UMordhauUtilityLibrary_GetMordhauGameSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauGameSession*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMaxIndexWithDraw
struct UMordhauUtilityLibrary_GetMaxIndexWithDraw_Params
{
	TArray<int>                                        inArray;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bFoundDraw;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetMapName
struct UMordhauUtilityLibrary_GetMapName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetMapInfo
struct UMordhauUtilityLibrary_GetMapInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapPath;                                                  // (Parm, ZeroConstructor)
	struct FMapInfo                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetLastReceiveTime
struct UMordhauUtilityLibrary_GetLastReceiveTime_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetIsPeasant
struct UMordhauUtilityLibrary_GetIsPeasant_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetImportedBounds
struct UMordhauUtilityLibrary_GetImportedBounds_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBoxSphereBounds                            ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetFaceIndex
struct UMordhauUtilityLibrary_GetFaceIndex_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetErrorText
struct UMordhauUtilityLibrary_GetErrorText_Params
{
	struct FString                                     ErrorString;                                              // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetEnumValue
struct UMordhauUtilityLibrary_GetEnumValue_Params
{
	struct FString                                     EnumName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     EnumKey;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetEnumKey
struct UMordhauUtilityLibrary_GetEnumKey_Params
{
	struct FString                                     EnumName;                                                 // (Parm, ZeroConstructor)
	int                                                EnumValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultWearable
struct UMordhauUtilityLibrary_GetDefaultWearable_Params
{
	class UClass*                                      FromClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauWearable*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultObject
struct UMordhauUtilityLibrary_GetDefaultObject_Params
{
	class UClass*                                      FromClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultActor
struct UMordhauUtilityLibrary_GetDefaultActor_Params
{
	class UClass*                                      FromClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Vector2D
struct UMordhauUtilityLibrary_GetCustomConfigVar_Vector2D_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Vector
struct UMordhauUtilityLibrary_GetCustomConfigVar_Vector_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_String
struct UMordhauUtilityLibrary_GetCustomConfigVar_String_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Rotator
struct UMordhauUtilityLibrary_GetCustomConfigVar_Rotator_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Int
struct UMordhauUtilityLibrary_GetCustomConfigVar_Int_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Float
struct UMordhauUtilityLibrary_GetCustomConfigVar_Float_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Color
struct UMordhauUtilityLibrary_GetCustomConfigVar_Color_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Bool
struct UMordhauUtilityLibrary_GetCustomConfigVar_Bool_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCurrentFrameBP
struct UMordhauUtilityLibrary_GetCurrentFrameBP_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCurrentFrame
struct UMordhauUtilityLibrary_GetCurrentFrame_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCurrentDemoTime
struct UMordhauUtilityLibrary_GetCurrentDemoTime_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetConsoleVariableString
struct UMordhauUtilityLibrary_GetConsoleVariableString_Params
{
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.GetConsoleVariableInt
struct UMordhauUtilityLibrary_GetConsoleVariableInt_Params
{
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetConsoleVariableFloat
struct UMordhauUtilityLibrary_GetConsoleVariableFloat_Params
{
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetComponentsBoundingBoxInActorSpace
struct UMordhauUtilityLibrary_GetComponentsBoundingBoxInActorSpace_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetCentroid
struct UMordhauUtilityLibrary_GetCentroid_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetBuildVersion
struct UMordhauUtilityLibrary_GetBuildVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetBoxCenter
struct UMordhauUtilityLibrary_GetBoxCenter_Params
{
	struct FBox                                        Box;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetBoundingBoxOfBoneInfluence
struct UMordhauUtilityLibrary_GetBoundingBoxOfBoneInfluence_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               Bones;                                                    // (Parm, ZeroConstructor)
	float                                              WeightThreshold;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetAttachParentActor
struct UMordhauUtilityLibrary_GetAttachParentActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetArchetypeObject
struct UMordhauUtilityLibrary_GetArchetypeObject_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UArchetype*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.GetAllWearableClassesForSlotExhaustive
struct UMordhauUtilityLibrary_GetAllWearableClassesForSlotExhaustive_Params
{
	EWearableSlot                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.FSmoothDamp
struct UMordhauUtilityLibrary_FSmoothDamp_Params
{
	float                                              Current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVelocity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SmoothTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.FormatText
struct UMordhauUtilityLibrary_FormatText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.ForceValidCharacterProfile
struct UMordhauUtilityLibrary_ForceValidCharacterProfile_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCharacterProfile                           ForceValidatedProfile;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.ForceReplicationUpdate
struct UMordhauUtilityLibrary_ForceReplicationUpdate_Params
{
	class UCharacterMovementComponent*                 CMC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.FlushPlayerControllerPressedKeys
struct UMordhauUtilityLibrary_FlushPlayerControllerPressedKeys_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.FlashWindow
struct UMordhauUtilityLibrary_FlashWindow_Params
{
};

// Function Mordhau.MordhauUtilityLibrary.FInterpToSeparate
struct UMordhauUtilityLibrary_FInterpToSeparate_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IncreaseSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DecreaseSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.FInterpConstantToSeparate
struct UMordhauUtilityLibrary_FInterpConstantToSeparate_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IncreaseSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DecreaseSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.FindTeleportSpot
struct UMordhauUtilityLibrary_FindTeleportSpot_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.FindSteamID
struct UMordhauUtilityLibrary_FindSteamID_Params
{
	struct FString                                     PlayerNameOrSteamID;                                      // (Parm, ZeroConstructor)
	struct FSteamID                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.FindPlayerState
struct UMordhauUtilityLibrary_FindPlayerState_Params
{
	struct FString                                     PlayerNameOrSteamID;                                      // (Parm, ZeroConstructor)
	class AMordhauPlayerState*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.FindCircleIntersectionPoints
struct UMordhauUtilityLibrary_FindCircleIntersectionPoints_Params
{
	struct FVector2D                                   CenterA;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RadiusA;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   CenterB;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RadiusB;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   PointA;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   PointB;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.FindBetween
struct UMordhauUtilityLibrary_FindBetween_Params
{
	struct FVector                                     A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.Equal_SteamID
struct UMordhauUtilityLibrary_Equal_SteamID_Params
{
	struct FSteamID                                    A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSteamID                                    B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.DrawText
struct UMordhauUtilityLibrary_DrawText_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	float                                              Kerning;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // (Parm, IsPlainOldData)
	struct FVector2D                                   ShadowOffset;                                             // (Parm, IsPlainOldData)
	bool                                               bCentreX;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCentreY;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutlined;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (Parm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.ConsumeBudget
struct UMordhauUtilityLibrary_ConsumeBudget_Params
{
	class AAdvancedCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EBudgetType                                        BudgetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipInvisible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceCutoff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.ComputePointsLeft
struct UMordhauUtilityLibrary_ComputePointsLeft_Params
{
	struct FCharacterProfile                           Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.CompareGearCustomization
struct UMordhauUtilityLibrary_CompareGearCustomization_Params
{
	struct FCharacterGearCustomization                 First;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCharacterGearCustomization                 Second;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.CompareFaceCustomization
struct UMordhauUtilityLibrary_CompareFaceCustomization_Params
{
	struct FFaceCustomization                          First;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFaceCustomization                          Second;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.CompareEquipmentCustomization
struct UMordhauUtilityLibrary_CompareEquipmentCustomization_Params
{
	struct FEquipmentCustomization                     First;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEquipmentCustomization                     Second;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.CompareAppearanceCustomization
struct UMordhauUtilityLibrary_CompareAppearanceCustomization_Params
{
	struct FAppearanceCustomization                    First;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAppearanceCustomization                    Second;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.ClosestPointOnLine
struct UMordhauUtilityLibrary_ClosestPointOnLine_Params
{
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.Capitalize
struct UMordhauUtilityLibrary_Capitalize_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mordhau.MordhauUtilityLibrary.CalculateGCD
struct UMordhauUtilityLibrary_CalculateGCD_Params
{
	int                                                ValueA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ValueB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.CalculateAngle2D
struct UMordhauUtilityLibrary_CalculateAngle2D_Params
{
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.AreProfilesEqual
struct UMordhauUtilityLibrary_AreProfilesEqual_Params
{
	struct FCharacterProfile                           First;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCharacterProfile                           Second;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauUtilityLibrary.AreActorsFromSameLevel
struct UMordhauUtilityLibrary_AreActorsFromSameLevel_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauWebAPI.RankBackendServers
struct UMordhauWebAPI_RankBackendServers_Params
{
	int                                                InPingedServerCount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.MordhauWebAPI.ProcessRequestQueue
struct UMordhauWebAPI_ProcessRequestQueue_Params
{
};

// Function Mordhau.MordhauWebAPI.IsAvailable
struct UMordhauWebAPI_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauWebAPI.GetAuthStatus
struct UMordhauWebAPI_GetAuthStatus_Params
{
	EAuthStatus                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauWebAPI.Authenticate
struct UMordhauWebAPI_Authenticate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.MordhauWidgetComponent.SetPlayerStateAlwaysSee
struct UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.OneDimensionalMovementComponent.SetMovementLine
struct UOneDimensionalMovementComponent_SetMovementLine_Params
{
	struct FVector                                     NewLineStart;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     NewLineEnd;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Mordhau.ParticleSystemActor.SparseTick
struct AParticleSystemActor_SparseTick_Params
{
};

// Function Mordhau.PushableActor.SetProgress
struct APushableActor_SetProgress_Params
{
	float                                              NewProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.PushableActor.OnRep_ReplicatedProgress
struct APushableActor_OnRep_ReplicatedProgress_Params
{
};

// Function Mordhau.PushableActor.OnProgressUpdated
struct APushableActor_OnProgressUpdated_Params
{
	float                                              OldProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.Quiver.FindAppropriateQuiverMesh
struct UQuiver_FindAppropriateQuiverMesh_Params
{
	unsigned char                                      Ammo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxAmmo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.SeparatedBodyPart.OnCosmeticHit
struct ASeparatedBodyPart_OnCosmeticHit_Params
{
	EMordhauDamageType                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.SeparatedBodyPart.IsPartiallyDismembered
struct ASeparatedBodyPart_IsPartiallyDismembered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.SeparatedBodyPart.IsDismembered
struct ASeparatedBodyPart_IsDismembered_Params
{
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.SeparatedBodyPart.InitializeDismemberment
struct ASeparatedBodyPart_InitializeDismemberment_Params
{
	class AMordhauCharacter*                           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SourceBoneTransform;                                      // (Parm, IsPlainOldData)
	bool                                               bIsPartial;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBluntForce;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.SubField.SetSubFieldHidden
struct ASubField_SetSubFieldHidden_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mordhau.SubField.GetMaster
struct ASubField_GetMaster_Params
{
	class AMasterField*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.SubField.DeactivateSubField
struct ASubField_DeactivateSubField_Params
{
};

// Function Mordhau.SubField.BeginSubFieldDeactivation
struct ASubField_BeginSubFieldDeactivation_Params
{
};

// Function Mordhau.ThudderComponent.DoTick
struct UThudderComponent_DoTick_Params
{
};

// Function Mordhau.UpperChestWearable.GetShouldersWearablesNum
struct UUpperChestWearable_GetShouldersWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.UpperChestWearable.GetShouldersWearable
struct UUpperChestWearable_GetShouldersWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.UpperChestWearable.GetLowerChestWearablesNum
struct UUpperChestWearable_GetLowerChestWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.UpperChestWearable.GetLowerChestWearable
struct UUpperChestWearable_GetLowerChestWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.UpperChestWearable.GetArmsWearablesNum
struct UUpperChestWearable_GetArmsWearablesNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mordhau.UpperChestWearable.GetArmsWearable
struct UUpperChestWearable_GetArmsWearable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
