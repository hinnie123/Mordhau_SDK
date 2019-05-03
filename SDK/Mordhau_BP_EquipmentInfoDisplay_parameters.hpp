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

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetVisibility_1
struct UBP_EquipmentInfoDisplay_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_1
struct UBP_EquipmentInfoDisplay_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.Construct
struct UBP_EquipmentInfoDisplay_C_Construct_Params
{
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.OnRestockedAmmo
struct UBP_EquipmentInfoDisplay_C_OnRestockedAmmo_Params
{
	class AMordhauEquipment*                           Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.ExecuteUbergraph_BP_EquipmentInfoDisplay
struct UBP_EquipmentInfoDisplay_C_ExecuteUbergraph_BP_EquipmentInfoDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
