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

// Function BP_LegsPickup.BP_LegsPickup_C.IsAnUpgrade
struct ABP_LegsPickup_C_IsAnUpgrade_Params
{
	class ABP_BattleRoyaleCharacter_C**                Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LegsPickup.BP_LegsPickup_C.CanInteract
struct ABP_LegsPickup_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LegsPickup.BP_LegsPickup_C.UserConstructionScript
struct ABP_LegsPickup_C_UserConstructionScript_Params
{
};

// Function BP_LegsPickup.BP_LegsPickup_C.AssignToCharacter
struct ABP_LegsPickup_C_AssignToCharacter_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACustomizationReplicationActor**             CustomizatonReplicationActor;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LegsPickup.BP_LegsPickup_C.ExecuteUbergraph_BP_LegsPickup
struct ABP_LegsPickup_C_ExecuteUbergraph_BP_LegsPickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
