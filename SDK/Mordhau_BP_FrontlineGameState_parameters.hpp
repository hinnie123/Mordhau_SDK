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

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.DrainTickets
struct ABP_FrontlineGameState_C_DrainTickets_Params
{
	class ABP_MordhauGameMode_C*                       GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.UserConstructionScript
struct ABP_FrontlineGameState_C_UserConstructionScript_Params
{
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveBeginPlay
struct ABP_FrontlineGameState_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveTick
struct ABP_FrontlineGameState_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.HandleMatchEndInfo
struct ABP_FrontlineGameState_C_HandleMatchEndInfo_Params
{
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.LocalPlayerChangedTeam
struct ABP_FrontlineGameState_C_LocalPlayerChangedTeam_Params
{
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ExecuteUbergraph_BP_FrontlineGameState
struct ABP_FrontlineGameState_C_ExecuteUbergraph_BP_FrontlineGameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
