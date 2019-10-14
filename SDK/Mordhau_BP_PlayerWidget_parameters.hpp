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

// Function BP_PlayerWidget.BP_PlayerWidget_C.Update
struct UBP_PlayerWidget_C_Update_Params
{
	struct FSteamID                                    SteamID_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Player_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Casual_Rank;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Banner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank_MMR;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showCompRank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
