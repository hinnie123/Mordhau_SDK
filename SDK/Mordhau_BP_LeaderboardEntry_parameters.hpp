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

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMRText_ColorAndOpacity_1
struct UBP_LeaderboardEntry_C_Get_MMRText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.GetToolTipText_1
struct UBP_LeaderboardEntry_C_GetToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Update
struct UBP_LeaderboardEntry_C_Update_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RankPos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MMR;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMR_Text_1
struct UBP_LeaderboardEntry_C_Get_MMR_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_Rank_Text_1
struct UBP_LeaderboardEntry_C_Get_Rank_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBP_LeaderboardEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ContextButtonClicked
struct UBP_LeaderboardEntry_C_ContextButtonClicked_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ExecuteUbergraph_BP_LeaderboardEntry
struct UBP_LeaderboardEntry_C_ExecuteUbergraph_BP_LeaderboardEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
