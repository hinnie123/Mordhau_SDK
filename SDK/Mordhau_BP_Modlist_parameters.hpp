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

// Function BP_Modlist.BP_ModList_C.Get_TextVersion_Text_1
struct UBP_ModList_C_Get_TextVersion_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Modlist.BP_ModList_C.GetThumbnailBrowserVisibility
struct UBP_ModList_C_GetThumbnailBrowserVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Modlist.BP_ModList_C.Remove Entry from list
struct UBP_ModList_C_Remove_Entry_from_list_Params
{
	class UBP_ModListEntry_C*                          Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BP_Modlist.BP_ModList_C.GetVisibility_1
struct UBP_ModList_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Modlist.BP_ModList_C.Get_TextName_Text_1
struct UBP_ModList_C_Get_TextName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Modlist.BP_ModList_C.Get_TextDescription_Text_1
struct UBP_ModList_C_Get_TextDescription_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Modlist.BP_ModList_C.Get_TextAuthor_Text_1
struct UBP_ModList_C_Get_TextAuthor_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Modlist.BP_ModList_C.Add Entry to list
struct UBP_ModList_C_Add_Entry_to_list_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Author;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModioMod                                   Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Modlist.BP_ModList_C.Update
struct UBP_ModList_C_Update_Params
{
	TArray<struct FModioMod>                           InMods;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Modlist.BP_ModList_C.OnFailure_66960CA44E2A5898746E16AC0A23D1BB
struct UBP_ModList_C_OnFailure_66960CA44E2A5898746E16AC0A23D1BB_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Modlist.BP_ModList_C.OnSuccess_66960CA44E2A5898746E16AC0A23D1BB
struct UBP_ModList_C_OnSuccess_66960CA44E2A5898746E16AC0A23D1BB_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Modlist.BP_ModList_C.OnFailure_0FEFD19F4D6B02436E9DC88E6220CCE0
struct UBP_ModList_C_OnFailure_0FEFD19F4D6B02436E9DC88E6220CCE0_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModioMod>                           Mods;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Modlist.BP_ModList_C.OnSuccess_0FEFD19F4D6B02436E9DC88E6220CCE0
struct UBP_ModList_C_OnSuccess_0FEFD19F4D6B02436E9DC88E6220CCE0_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModioMod>                           Mods;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Modlist.BP_ModList_C.ContextButtonClicked
struct UBP_ModList_C_ContextButtonClicked_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Modlist.BP_ModList_C.EntryClicked
struct UBP_ModList_C_EntryClicked_Params
{
};

// Function BP_Modlist.BP_ModList_C.EntryHovered
struct UBP_ModList_C_EntryHovered_Params
{
	class UBP_ModListEntry_C*                          Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Modlist.BP_ModList_C.PopulateMods
struct UBP_ModList_C_PopulateMods_Params
{
};

// Function BP_Modlist.BP_ModList_C.OnShown
struct UBP_ModList_C_OnShown_Params
{
};

// Function BP_Modlist.BP_ModList_C.Tick
struct UBP_ModList_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Modlist.BP_ModList_C.ExecuteUbergraph_BP_ModList
struct UBP_ModList_C_ExecuteUbergraph_BP_ModList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
