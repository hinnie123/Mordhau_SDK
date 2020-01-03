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

// Function BP_Ladder.BP_Ladder_C.UpdateInteractionText
struct ABP_Ladder_C_UpdateInteractionText_Params
{
};

// Function BP_Ladder.BP_Ladder_C.OnRep_LadderState
struct ABP_Ladder_C_OnRep_LadderState_Params
{
};

// Function BP_Ladder.BP_Ladder_C.CanHeldInteract
struct ABP_Ladder_C_CanHeldInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.CanInteract
struct ABP_Ladder_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.UserConstructionScript
struct ABP_Ladder_C_UserConstructionScript_Params
{
};

// Function BP_Ladder.BP_Ladder_C.OnHeldInteractionStart
struct ABP_Ladder_C_OnHeldInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.ReceiveBeginPlay
struct ABP_Ladder_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ladder.BP_Ladder_C.OnHighlightMaintained
struct ABP_Ladder_C_OnHighlightMaintained_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.BeginAnimatingLadder
struct ABP_Ladder_C_BeginAnimatingLadder_Params
{
	bool                                               DoEffects;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.OnInteractionStart
struct ABP_Ladder_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.ReceiveAnyDamage
struct ABP_Ladder_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.ReceiveTick
struct ABP_Ladder_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.ToggleLadderState
struct ABP_Ladder_C_ToggleLadderState_Params
{
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ladder.BP_Ladder_C.ExecuteUbergraph_BP_Ladder
struct ABP_Ladder_C_ExecuteUbergraph_BP_Ladder_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
