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

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UpdateValue
struct ABP_LocalCooldownInteractable_C_UpdateValue_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.CanInteract
struct ABP_LocalCooldownInteractable_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UserConstructionScript
struct ABP_LocalCooldownInteractable_C_UserConstructionScript_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.OnInteractionStart
struct ABP_LocalCooldownInteractable_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.AvailableInteractionStart
struct ABP_LocalCooldownInteractable_C_AvailableInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.NotAvailableInteractionStart
struct ABP_LocalCooldownInteractable_C_NotAvailableInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Depleted
struct ABP_LocalCooldownInteractable_C_Depleted_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Refilled
struct ABP_LocalCooldownInteractable_C_Refilled_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Deplete
struct ABP_LocalCooldownInteractable_C_Deplete_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.PopCooldown
struct ABP_LocalCooldownInteractable_C_PopCooldown_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.ExecuteUbergraph_BP_LocalCooldownInteractable
struct ABP_LocalCooldownInteractable_C_ExecuteUbergraph_BP_LocalCooldownInteractable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
