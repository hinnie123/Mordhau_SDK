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

// Function BP_CustomizationTab.BP_CustomizationTab_C.CreateSimpleItemEntries
struct UBP_CustomizationTab_C_CreateSimpleItemEntries_Params
{
	TArray<class UClass*>                              Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_CustomizationItemEntry_C*                SelectedEntry;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.ClearCustomizationItemEntries
struct UBP_CustomizationTab_C_ClearCustomizationItemEntries_Params
{
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.GetCustomizationPlatform
struct UBP_CustomizationTab_C_GetCustomizationPlatform_Params
{
	class ABP_MordhauCustomizationPlatform_C*          Platform;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.OnCharacterDollUpdated
struct UBP_CustomizationTab_C_OnCharacterDollUpdated_Params
{
	class AMordhauCharacter*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.OnProfileChanged
struct UBP_CustomizationTab_C_OnProfileChanged_Params
{
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.CompareItemEntries
struct UBP_CustomizationTab_C_CompareItemEntries_Params
{
	class UBP_CustomizationItemEntry_C*                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CustomizationItemEntry_C*                B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AIsLess;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.SortItemEntries
struct UBP_CustomizationTab_C_SortItemEntries_Params
{
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.SetActive
struct UBP_CustomizationTab_C_SetActive_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
