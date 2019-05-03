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

// Function BP_Scoreboard.BP_Scoreboard_C.GetMaxPlayers
struct UBP_Scoreboard_C_GetMaxPlayers_Params
{
	int                                                DivideBy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Text;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetServerName
struct UBP_Scoreboard_C_GetServerName_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetMapName
struct UBP_Scoreboard_C_GetMapName_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamObjectiveValue
struct UBP_Scoreboard_C_GetTeamObjectiveValue_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2ObjectiveValue
struct UBP_Scoreboard_C_GetTeam2ObjectiveValue_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1ObjectiveValue
struct UBP_Scoreboard_C_GetTeam1ObjectiveValue_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetObjectiveName
struct UBP_Scoreboard_C_GetObjectiveName_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetGameModeName
struct UBP_Scoreboard_C_GetGameModeName_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Players
struct UBP_Scoreboard_C_GetTeam2Players_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Players
struct UBP_Scoreboard_C_GetTeam1Players_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamPlayers
struct UBP_Scoreboard_C_GetTeamPlayers_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Name
struct UBP_Scoreboard_C_GetTeam2Name_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamName
struct UBP_Scoreboard_C_GetTeamName_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Name
struct UBP_Scoreboard_C_GetTeam1Name_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetScoreboardTime
struct UBP_Scoreboard_C_GetScoreboardTime_Params
{
	struct FText                                       Time;                                                     // (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.Hide
struct UBP_Scoreboard_C_Hide_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.Show
struct UBP_Scoreboard_C_Show_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.Refresh
struct UBP_Scoreboard_C_Refresh_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.Construct
struct UBP_Scoreboard_C_Construct_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard
struct UBP_Scoreboard_C_ExecuteUbergraph_BP_Scoreboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
