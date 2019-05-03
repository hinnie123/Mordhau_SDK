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

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.IsInGetReady
struct ABP_BattleRoyaleGameState_C_IsInGetReady_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.OnRep_Countdown
struct ABP_BattleRoyaleGameState_C_OnRep_Countdown_Params
{
};

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ShouldBlockPawnInput
struct ABP_BattleRoyaleGameState_C_ShouldBlockPawnInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ShouldHideSpawnInfoText
struct ABP_BattleRoyaleGameState_C_ShouldHideSpawnInfoText_Params
{
	bool                                               Hide;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.UserConstructionScript
struct ABP_BattleRoyaleGameState_C_UserConstructionScript_Params
{
};

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.HandleMatchEndInfo
struct ABP_BattleRoyaleGameState_C_HandleMatchEndInfo_Params
{
};

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ReceiveTick
struct ABP_BattleRoyaleGameState_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C.ExecuteUbergraph_BP_BattleRoyaleGameState
struct ABP_BattleRoyaleGameState_C_ExecuteUbergraph_BP_BattleRoyaleGameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
