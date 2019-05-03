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

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.AddRagdollImpulse
struct ABP_MordhauCharacter_C_AddRagdollImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.TryClimbing
struct ABP_MordhauCharacter_C_TryClimbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.CalculateLedgeOffsetAndNormal
struct ABP_MordhauCharacter_C_CalculateLedgeOffsetAndNormal_Params
{
	class UClimbingMotion**                            ClimbingMotion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutOffset;                                                // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutNormal;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.AttemptClimb
struct ABP_MordhauCharacter_C_AttemptClimb_Params
{
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.FindClimbSpot
struct ABP_MordhauCharacter_C_FindClimbSpot_Params
{
	float                                              UpwardsCast;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetSpot;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.UserConstructionScript
struct ABP_MordhauCharacter_C_UserConstructionScript_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReceiveBeginPlay
struct ABP_MordhauCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.BPLODTick
struct ABP_MordhauCharacter_C_BPLODTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnDied
struct ABP_MordhauCharacter_C_OnDied_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnCosmeticHit
struct ABP_MordhauCharacter_C_OnCosmeticHit_Params
{
	EMordhauDamageType*                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostDismember
struct ABP_MordhauCharacter_C_OnPostDismember_Params
{
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASeparatedBodyPart**                         SeparatedPart;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature
struct ABP_MordhauCharacter_C_BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReplicatedTripWithKnockback
struct ABP_MordhauCharacter_C_ReplicatedTripWithKnockback_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostProfileAssigned
struct ABP_MordhauCharacter_C_OnPostProfileAssigned_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ApplyRagdollForce
struct ABP_MordhauCharacter_C_ApplyRagdollForce_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ServerSetClimbLocation
struct ABP_MordhauCharacter_C_ServerSetClimbLocation_Params
{
	struct FVector_NetQuantize                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ExecuteUbergraph_BP_MordhauCharacter
struct ABP_MordhauCharacter_C_ExecuteUbergraph_BP_MordhauCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
