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

// Function BP_EmoteMenu.BP_EmoteMenu_C.DoEmote
struct UBP_EmoteMenu_C_DoEmote_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.OptionChosen
struct UBP_EmoteMenu_C_OptionChosen_Params
{
	int*                                               Choice;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.Show
struct UBP_EmoteMenu_C_Show_Params
{
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.Tick
struct UBP_EmoteMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.ExecuteUbergraph_BP_EmoteMenu
struct UBP_EmoteMenu_C_ExecuteUbergraph_BP_EmoteMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
