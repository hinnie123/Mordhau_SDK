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

// Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment
struct ABP_HordePlayerController_C_CustomizeEquipment_Params
{
	class AMordhauEquipment*                           Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger
struct ABP_HordePlayerController_C_OnRep_PurchaseTrigger_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.UserConstructionScript
struct ABP_HordePlayerController_C_UserConstructionScript_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess
struct ABP_HordePlayerController_C_OnAfterPossess_Params
{
	class APawn**                                      APawn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController
struct ABP_HordePlayerController_C_ExecuteUbergraph_BP_HordePlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
