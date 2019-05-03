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

// Function BP_AmmoBox.BP_AmmoBox_C.UpdateWidgetVisibilityOverride
struct ABP_AmmoBox_C_UpdateWidgetVisibilityOverride_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.CanInteract
struct ABP_AmmoBox_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AmmoBox.BP_AmmoBox_C.Restock
struct ABP_AmmoBox_C_Restock_Params
{
	class AMordhauCharacter*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmmoBox.BP_AmmoBox_C.UserConstructionScript
struct ABP_AmmoBox_C_UserConstructionScript_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.AvailableInteractionStart
struct ABP_AmmoBox_C_AvailableInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmmoBox.BP_AmmoBox_C.Deplete
struct ABP_AmmoBox_C_Deplete_Params
{
	class APlayerState**                               PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmmoBox.BP_AmmoBox_C.Refill
struct ABP_AmmoBox_C_Refill_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox
struct ABP_AmmoBox_C_ExecuteUbergraph_BP_AmmoBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
