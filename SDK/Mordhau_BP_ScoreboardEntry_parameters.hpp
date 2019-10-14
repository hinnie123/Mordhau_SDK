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

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.UpdateValues
struct UBP_ScoreboardEntry_C_UpdateValues_Params
{
	class AMordhauPlayerState*                         Mordhau_PlayerState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.WasUpdated
struct UBP_ScoreboardEntry_C_WasUpdated_Params
{
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_3
struct UBP_ScoreboardEntry_C_GetVisibility_3_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_2
struct UBP_ScoreboardEntry_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_1
struct UBP_ScoreboardEntry_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetColorAndOpacity_1
struct UBP_ScoreboardEntry_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.Get_Prefix_Text_1
struct UBP_ScoreboardEntry_C_Get_Prefix_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetNameColorAndOpacity
struct UBP_ScoreboardEntry_C_GetNameColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetBackgroundColorAndOpacity
struct UBP_ScoreboardEntry_C_GetBackgroundColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.Construct
struct UBP_ScoreboardEntry_C_Construct_Params
{
};

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.ExecuteUbergraph_BP_ScoreboardEntry
struct UBP_ScoreboardEntry_C_ExecuteUbergraph_BP_ScoreboardEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
