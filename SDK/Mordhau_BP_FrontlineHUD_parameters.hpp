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

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowObjectives
struct ABP_FrontlineHUD_C_ShowObjectives_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.UserConstructionScript
struct ABP_FrontlineHUD_C_UserConstructionScript_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ReceiveBeginPlay
struct ABP_FrontlineHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseMinimalHUD
struct ABP_FrontlineHUD_C_UseMinimalHUD_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseFullHUD
struct ABP_FrontlineHUD_C_UseFullHUD_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.OnGameStateReplicated
struct ABP_FrontlineHUD_C_OnGameStateReplicated_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.HideMainMenu
struct ABP_FrontlineHUD_C_HideMainMenu_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowMainMenu
struct ABP_FrontlineHUD_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates>*                       Armory_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ExecuteUbergraph_BP_FrontlineHUD
struct ABP_FrontlineHUD_C_ExecuteUbergraph_BP_FrontlineHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
