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

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ShowBattleRoyaleEndScreen
struct ABP_BattleRoyaleHUD_C_ShowBattleRoyaleEndScreen_Params
{
};

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UserConstructionScript
struct ABP_BattleRoyaleHUD_C_UserConstructionScript_Params
{
};

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ReceiveBeginPlay
struct ABP_BattleRoyaleHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UseMinimalHUD
struct ABP_BattleRoyaleHUD_C_UseMinimalHUD_Params
{
};

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UseFullHUD
struct ABP_BattleRoyaleHUD_C_UseFullHUD_Params
{
};

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.OnGameStateReplicated
struct ABP_BattleRoyaleHUD_C_OnGameStateReplicated_Params
{
};

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.HideMainMenu
struct ABP_BattleRoyaleHUD_C_HideMainMenu_Params
{
};

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ShowMainMenu
struct ABP_BattleRoyaleHUD_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates>*                       Armory_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ExecuteUbergraph_BP_BattleRoyaleHUD
struct ABP_BattleRoyaleHUD_C_ExecuteUbergraph_BP_BattleRoyaleHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
