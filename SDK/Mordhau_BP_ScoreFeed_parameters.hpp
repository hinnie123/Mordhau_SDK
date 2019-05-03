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

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddStructureDamage
struct UBP_ScoreFeed_C_AddStructureDamage_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleDamage
struct UBP_ScoreFeed_C_AddVehicleDamage_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleTeamDamage
struct UBP_ScoreFeed_C_AddVehicleTeamDamage_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddRepair
struct UBP_ScoreFeed_C_AddRepair_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddObjective
struct UBP_ScoreFeed_C_AddObjective_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddWaveCleared
struct UBP_ScoreFeed_C_AddWaveCleared_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeal
struct UBP_ScoreFeed_C_AddHeal_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralized
struct UBP_ScoreFeed_C_AddNeutralized_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralizing
struct UBP_ScoreFeed_C_AddNeutralizing_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddCaptured
struct UBP_ScoreFeed_C_AddCaptured_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddCapturing
struct UBP_ScoreFeed_C_AddCapturing_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeadshot
struct UBP_ScoreFeed_C_AddHeadshot_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateCurrentPointsText
struct UBP_ScoreFeed_C_UpdateCurrentPointsText_Params
{
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateComboVisibility
struct UBP_ScoreFeed_C_UpdateComboVisibility_Params
{
	bool                                               ShouldHide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.RemoveFromFeed
struct UBP_ScoreFeed_C_RemoveFromFeed_Params
{
	class UBP_ScoreEntry_C*                            ToRemove;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamDamage
struct UBP_ScoreFeed_C_AddTeamDamage_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddDamage
struct UBP_ScoreFeed_C_AddDamage_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitZone;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.CollectPoints
struct UBP_ScoreFeed_C_CollectPoints_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddSuicide
struct UBP_ScoreFeed_C_AddSuicide_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamKill
struct UBP_ScoreFeed_C_AddTeamKill_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddAssist
struct UBP_ScoreFeed_C_AddAssist_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddKill
struct UBP_ScoreFeed_C_AddKill_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.AddEntry
struct UBP_ScoreFeed_C_AddEntry_Params
{
	float                                              Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CanGroup;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBP_ScoreFeed_C_BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.Construct
struct UBP_ScoreFeed_C_Construct_Params
{
};

// Function BP_ScoreFeed.BP_ScoreFeed_C.ExecuteUbergraph_BP_ScoreFeed
struct UBP_ScoreFeed_C_ExecuteUbergraph_BP_ScoreFeed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
