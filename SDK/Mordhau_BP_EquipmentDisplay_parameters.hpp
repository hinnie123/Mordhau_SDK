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

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Show
struct UBP_EquipmentDisplay_C_Show_Params
{
};

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Hide
struct UBP_EquipmentDisplay_C_Hide_Params
{
};

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Tick
struct UBP_EquipmentDisplay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.ExecuteUbergraph_BP_EquipmentDisplay
struct UBP_EquipmentDisplay_C_ExecuteUbergraph_BP_EquipmentDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
