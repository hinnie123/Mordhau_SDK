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

// Function BP_TeamSelect.BP_TeamSelect_C.OnKeyDown
struct UBP_TeamSelect_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_TeamSelect.BP_TeamSelect_C.Hide
struct UBP_TeamSelect_C_Hide_Params
{
};

// Function BP_TeamSelect.BP_TeamSelect_C.GetMapName
struct UBP_TeamSelect_C_GetMapName_Params
{
	struct FString                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TeamSelect.BP_TeamSelect_C.GetGameModeName
struct UBP_TeamSelect_C_GetGameModeName_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_TeamSelect.BP_TeamSelect_C.Show
struct UBP_TeamSelect_C_Show_Params
{
};

// Function BP_TeamSelect.BP_TeamSelect_C.SelectTeam
struct UBP_TeamSelect_C_SelectTeam_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
