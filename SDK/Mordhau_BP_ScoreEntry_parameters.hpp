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

// Function BP_ScoreEntry.BP_ScoreEntry_C.UpdatePointsText
struct UBP_ScoreEntry_C_UpdatePointsText_Params
{
};

// Function BP_ScoreEntry.BP_ScoreEntry_C.Initialize
struct UBP_ScoreEntry_C_Initialize_Params
{
	float                                              StartingPoints;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InPlayerName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       InLabel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_ScoreFeed_C*                             InScoreFeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ScoreEntry.BP_ScoreEntry_C.AddPoints
struct UBP_ScoreEntry_C_AddPoints_Params
{
	float                                              InPoints;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreEntry.BP_ScoreEntry_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBP_ScoreEntry_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BP_ScoreEntry.BP_ScoreEntry_C.ExecuteUbergraph_BP_ScoreEntry
struct UBP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
