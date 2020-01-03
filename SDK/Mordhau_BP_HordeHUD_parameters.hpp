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

// Function BP_HordeHUD.BP_HordeHUD_C.ShowSkillTree
struct ABP_HordeHUD_C_ShowSkillTree_Params
{
};

// Function BP_HordeHUD.BP_HordeHUD_C.CreateSkillTree
struct ABP_HordeHUD_C_CreateSkillTree_Params
{
};

// Function BP_HordeHUD.BP_HordeHUD_C.UserConstructionScript
struct ABP_HordeHUD_C_UserConstructionScript_Params
{
};

// Function BP_HordeHUD.BP_HordeHUD_C.ReceiveBeginPlay
struct ABP_HordeHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeHUD.BP_HordeHUD_C.UseMinimalHUD
struct ABP_HordeHUD_C_UseMinimalHUD_Params
{
};

// Function BP_HordeHUD.BP_HordeHUD_C.UseFullHUD
struct ABP_HordeHUD_C_UseFullHUD_Params
{
};

// Function BP_HordeHUD.BP_HordeHUD_C.OnGameStateReplicated
struct ABP_HordeHUD_C_OnGameStateReplicated_Params
{
};

// Function BP_HordeHUD.BP_HordeHUD_C.HideMainMenu
struct ABP_HordeHUD_C_HideMainMenu_Params
{
};

// Function BP_HordeHUD.BP_HordeHUD_C.ShowMainMenu
struct ABP_HordeHUD_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates>*                       Armory_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeHUD.BP_HordeHUD_C.ExecuteUbergraph_BP_HordeHUD
struct ABP_HordeHUD_C_ExecuteUbergraph_BP_HordeHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
