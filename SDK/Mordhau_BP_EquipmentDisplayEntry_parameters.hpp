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

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_SlotNumber_Text
struct UBP_EquipmentDisplayEntry_C_Get_SlotNumber_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetColorAndOpacity_1
struct UBP_EquipmentDisplayEntry_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetEntryTypeAndName
struct UBP_EquipmentDisplayEntry_C_GetEntryTypeAndName_Params
{
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_EquipmentName_Text
struct UBP_EquipmentDisplayEntry_C_Get_EquipmentName_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Tick
struct UBP_EquipmentDisplayEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.ExecuteUbergraph_BP_EquipmentDisplayEntry
struct UBP_EquipmentDisplayEntry_C_ExecuteUbergraph_BP_EquipmentDisplayEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
