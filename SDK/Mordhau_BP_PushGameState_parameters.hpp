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

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTimeInProgress
struct ABP_PushGameState_C_GetScoreboardTimeInProgress_Params
{
	struct FTimespan                                   Time;                                                     // (Parm, OutParm)
};

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardObjectiveName
struct ABP_PushGameState_C_GetScoreboardObjectiveName_Params
{
	struct FText                                       NewParam;                                                 // (Parm, OutParm)
};

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTeamObjectiveValue
struct ABP_PushGameState_C_GetScoreboardTeamObjectiveValue_Params
{
	int*                                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PushGameState.BP_PushGameState_C.UserConstructionScript
struct ABP_PushGameState_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
