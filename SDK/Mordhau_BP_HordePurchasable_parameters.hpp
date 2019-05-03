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

// Function BP_HordePurchasable.BP_HordePurchasable_C.UpdateVisuals
struct ABP_HordePurchasable_C_UpdateVisuals_Params
{
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.InitializeDisplay
struct ABP_HordePurchasable_C_InitializeDisplay_Params
{
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.SpawnItem
struct ABP_HordePurchasable_C_SpawnItem_Params
{
	class ABP_BattleRoyaleCharacter_C*                 ForCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.SetAvailability
struct ABP_HordePurchasable_C_SetAvailability_Params
{
	bool                                               NewAvailable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.CanInteract
struct ABP_HordePurchasable_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.UserConstructionScript
struct ABP_HordePurchasable_C_UserConstructionScript_Params
{
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.ReceiveBeginPlay
struct ABP_HordePurchasable_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.OnInteractionStart
struct ABP_HordePurchasable_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.ExecuteUbergraph_BP_HordePurchasable
struct ABP_HordePurchasable_C_ExecuteUbergraph_BP_HordePurchasable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
