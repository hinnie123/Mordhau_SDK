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

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper
struct ABP_MordhauHUD_C_CreateContextPopupWrapper_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.HideVoteKickMenu
struct ABP_MordhauHUD_C_HideVoteKickMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoteKickMenu
struct ABP_MordhauHUD_C_ShowVoteKickMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoteKickMenu
struct ABP_MordhauHUD_C_CreateVoteKickMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMatchResult
struct ABP_MordhauHUD_C_ShowMatchResult_Params
{
	bool                                               IsVictory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       MainText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Subtext;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowPostMatchScreen
struct ABP_MordhauHUD_C_ShowPostMatchScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreatePostMatchScreen
struct ABP_MordhauHUD_C_CreatePostMatchScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowKilledBy
struct ABP_MordhauHUD_C_ShowKilledBy_Params
{
	class AMordhauPlayerState*                         Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKilledByPanelWidget
struct ABP_MordhauHUD_C_CreateKilledByPanelWidget_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowObjectiveWidget
struct ABP_MordhauHUD_C_ShowObjectiveWidget_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateObjectiveWidget
struct ABP_MordhauHUD_C_CreateObjectiveWidget_Params
{
	class UBP_Objectives_C*                            Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.HideSpawnScreen
struct ABP_MordhauHUD_C_HideSpawnScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowSpawnScreen
struct ABP_MordhauHUD_C_ShowSpawnScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnScreen
struct ABP_MordhauHUD_C_CreateSpawnScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoiceMenu
struct ABP_MordhauHUD_C_ShowVoiceMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoiceMenu
struct ABP_MordhauHUD_C_CreateVoiceMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentInfoDisplay
struct ABP_MordhauHUD_C_CreateEquipmentInfoDisplay_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateScoreFeed
struct ABP_MordhauHUD_C_CreateScoreFeed_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTips
struct ABP_MordhauHUD_C_ShowTips_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTips
struct ABP_MordhauHUD_C_CreateTips_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEquipment
struct ABP_MordhauHUD_C_ShowEquipment_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentDisplay
struct ABP_MordhauHUD_C_CreateEquipmentDisplay_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateNetIndicator
struct ABP_MordhauHUD_C_CreateNetIndicator_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnInfo
struct ABP_MordhauHUD_C_CreateSpawnInfo_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMainMenu
struct ABP_MordhauHUD_C_CreateMainMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.IsMainMenuVisible
struct ABP_MordhauHUD_C_IsMainMenuVisible_Params
{
	bool                                               bIsVisible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.HideMainMenu
struct ABP_MordhauHUD_C_HideMainMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ProcessQueuedDialogs
struct ABP_MordhauHUD_C_ProcessQueuedDialogs_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueDialog
struct ABP_MordhauHUD_C_EnqueueDialog_Params
{
	class UMordhauDialog*                              Dialog;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateWatermark
struct ABP_MordhauHUD_C_CreateWatermark_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowAnnouncement
struct ABP_MordhauHUD_C_ShowAnnouncement_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Subtext;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateAnnouncement
struct ABP_MordhauHUD_C_CreateAnnouncement_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEmoteMenu
struct ABP_MordhauHUD_C_ShowEmoteMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEmoteMenu
struct ABP_MordhauHUD_C_CreateEmoteMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTeamSelect
struct ABP_MordhauHUD_C_ShowTeamSelect_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTeamSelect
struct ABP_MordhauHUD_C_CreateTeamSelect_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowProfileSelect
struct ABP_MordhauHUD_C_ShowProfileSelect_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateProfileSelect
struct ABP_MordhauHUD_C_CreateProfileSelect_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateChatBox
struct ABP_MordhauHUD_C_CreateChatBox_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateStatusBar
struct ABP_MordhauHUD_C_CreateStatusBar_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateCrosshair
struct ABP_MordhauHUD_C_CreateCrosshair_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKillFeed
struct ABP_MordhauHUD_C_CreateKillFeed_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTargetInfo
struct ABP_MordhauHUD_C_CreateTargetInfo_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.UseFullHUD
struct ABP_MordhauHUD_C_UseFullHUD_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.UseMinimalHUD
struct ABP_MordhauHUD_C_UseMinimalHUD_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMainMenu
struct ABP_MordhauHUD_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates>                        Armory_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToKillFeed
struct ABP_MordhauHUD_C_SendMessageToKillFeed_Params
{
	class APlayerState*                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KilledBy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToChatbox
struct ABP_MordhauHUD_C_SendMessageToChatbox_Params
{
	struct FText                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowChatBox
struct ABP_MordhauHUD_C_ShowChatBox_Params
{
	bool                                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.HideScoreboard
struct ABP_MordhauHUD_C_HideScoreboard_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowScoreboard
struct ABP_MordhauHUD_C_ShowScoreboard_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.UserConstructionScript
struct ABP_MordhauHUD_C_UserConstructionScript_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveBeginPlay
struct ABP_MordhauHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveTick
struct ABP_MordhauHUD_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.Spawn CustomizationPlatform
struct ABP_MordhauHUD_C_Spawn_CustomizationPlatform_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueMordhauDialog
struct ABP_MordhauHUD_C_EnqueueMordhauDialog_Params
{
	class UMordhauDialog**                             Dialog;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ExecuteUbergraph_BP_MordhauHUD
struct ABP_MordhauHUD_C_ExecuteUbergraph_BP_MordhauHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
