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

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanInteract
struct ABP_DeliverableEquipment_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanHeldInteract
struct ABP_DeliverableEquipment_C_CanHeldInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Break
struct ABP_DeliverableEquipment_C_Break_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnRep_Broke
struct ABP_DeliverableEquipment_C_OnRep_Broke_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Consume
struct ABP_DeliverableEquipment_C_Consume_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.UserConstructionScript
struct ABP_DeliverableEquipment_C_UserConstructionScript_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnThud
struct ABP_DeliverableEquipment_C_OnThud_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.FireProjectile
struct ABP_DeliverableEquipment_C_FireProjectile_Params
{
	struct FVector*                                    Origin;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                OwningController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ExpectedDelay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnPickedUp
struct ABP_DeliverableEquipment_C_OnPickedUp_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnBroken
struct ABP_DeliverableEquipment_C_OnBroken_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnHeldInteractionStart
struct ABP_DeliverableEquipment_C_OnHeldInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.ExecuteUbergraph_BP_DeliverableEquipment
struct ABP_DeliverableEquipment_C_ExecuteUbergraph_BP_DeliverableEquipment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
