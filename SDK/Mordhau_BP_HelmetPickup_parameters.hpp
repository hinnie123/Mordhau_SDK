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

// Function BP_HelmetPickup.BP_HelmetPickup_C.IsAnUpgrade
struct ABP_HelmetPickup_C_IsAnUpgrade_Params
{
	class ABP_BattleRoyaleCharacter_C**                Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HelmetPickup.BP_HelmetPickup_C.CanInteract
struct ABP_HelmetPickup_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HelmetPickup.BP_HelmetPickup_C.UserConstructionScript
struct ABP_HelmetPickup_C_UserConstructionScript_Params
{
};

// Function BP_HelmetPickup.BP_HelmetPickup_C.AssignToCharacter
struct ABP_HelmetPickup_C_AssignToCharacter_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACustomizationReplicationActor**             CustomizatonReplicationActor;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HelmetPickup.BP_HelmetPickup_C.ExecuteUbergraph_BP_HelmetPickup
struct ABP_HelmetPickup_C_ExecuteUbergraph_BP_HelmetPickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
