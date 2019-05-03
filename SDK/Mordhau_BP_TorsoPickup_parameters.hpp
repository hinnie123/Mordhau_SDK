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

// Function BP_TorsoPickup.BP_TorsoPickup_C.IsAnUpgrade
struct ABP_TorsoPickup_C_IsAnUpgrade_Params
{
	class ABP_BattleRoyaleCharacter_C**                Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TorsoPickup.BP_TorsoPickup_C.CanInteract
struct ABP_TorsoPickup_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TorsoPickup.BP_TorsoPickup_C.UserConstructionScript
struct ABP_TorsoPickup_C_UserConstructionScript_Params
{
};

// Function BP_TorsoPickup.BP_TorsoPickup_C.AssignToCharacter
struct ABP_TorsoPickup_C_AssignToCharacter_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACustomizationReplicationActor**             CustomizatonReplicationActor;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TorsoPickup.BP_TorsoPickup_C.ExecuteUbergraph_BP_TorsoPickup
struct ABP_TorsoPickup_C_ExecuteUbergraph_BP_TorsoPickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
