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

// Function BP_WearablePickup.BP_WearablePickup_C.EquipIfUpgrade
struct ABP_WearablePickup_C_EquipIfUpgrade_Params
{
	class AMordhauCharacter*                           Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearablePickup.BP_WearablePickup_C.Equip
struct ABP_WearablePickup_C_Equip_Params
{
	class AMordhauCharacter*                           Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearablePickup.BP_WearablePickup_C.IsAnUpgrade
struct ABP_WearablePickup_C_IsAnUpgrade_Params
{
	class ABP_BattleRoyaleCharacter_C*                 Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearablePickup.BP_WearablePickup_C.AssignToCharacter
struct ABP_WearablePickup_C_AssignToCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACustomizationReplicationActor*              CustomizatonReplicationActor;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearablePickup.BP_WearablePickup_C.UserConstructionScript
struct ABP_WearablePickup_C_UserConstructionScript_Params
{
};

// Function BP_WearablePickup.BP_WearablePickup_C.OnInteractionStart
struct ABP_WearablePickup_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearablePickup.BP_WearablePickup_C.ReceiveBeginPlay
struct ABP_WearablePickup_C_ReceiveBeginPlay_Params
{
};

// Function BP_WearablePickup.BP_WearablePickup_C.ExecuteUbergraph_BP_WearablePickup
struct ABP_WearablePickup_C_ExecuteUbergraph_BP_WearablePickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
