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

// Function BP_RankIcon.BP_RankIcon_C.GetRankIndexFromMMR
struct UBP_RankIcon_C_GetRankIndexFromMMR_Params
{
	int                                                MMR;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RankIcon.BP_RankIcon_C.Update Widget with Rank Index
struct UBP_RankIcon_C_Update_Widget_with_Rank_Index_Params
{
	int                                                Rank_Index_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Image_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_RankIcon.BP_RankIcon_C.UpdateRankIndexFromMMR
struct UBP_RankIcon_C_UpdateRankIndexFromMMR_Params
{
	int                                                MMR;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RankIcon.BP_RankIcon_C.GetRankDivisionColorFromIndex
struct UBP_RankIcon_C_GetRankDivisionColorFromIndex_Params
{
	int                                                Rank_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Text_Color;                                               // (Parm, OutParm)
};

// Function BP_RankIcon.BP_RankIcon_C.Update Widget with MMR
struct UBP_RankIcon_C_Update_Widget_with_MMR_Params
{
	int                                                Rank_MMR;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Image_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_RankIcon.BP_RankIcon_C.Construct
struct UBP_RankIcon_C_Construct_Params
{
};

// Function BP_RankIcon.BP_RankIcon_C.ExecuteUbergraph_BP_RankIcon
struct UBP_RankIcon_C_ExecuteUbergraph_BP_RankIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
