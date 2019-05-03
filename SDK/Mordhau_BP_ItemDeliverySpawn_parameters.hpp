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

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Disable
struct ABP_ItemDeliverySpawn_C_Disable_Params
{
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Activate
struct ABP_ItemDeliverySpawn_C_Activate_Params
{
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.CanInteract
struct ABP_ItemDeliverySpawn_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.UserConstructionScript
struct ABP_ItemDeliverySpawn_C_UserConstructionScript_Params
{
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.OnInteractionStart
struct ABP_ItemDeliverySpawn_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.ExecuteUbergraph_BP_ItemDeliverySpawn
struct ABP_ItemDeliverySpawn_C_ExecuteUbergraph_BP_ItemDeliverySpawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
