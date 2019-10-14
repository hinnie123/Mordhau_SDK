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

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleTeamKill
struct ABP_MordhauPlayerController_C_HandleTeamKill_Params
{
	class AMordhauPlayerState*                         KilledBy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRep_ReplicatedAmmoBoxCooldown
struct ABP_MordhauPlayerController_C_OnRep_ReplicatedAmmoBoxCooldown_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceables
struct ABP_MordhauPlayerController_C_WipePlaceables_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RemoveFromPlaceableArray
struct ABP_MordhauPlayerController_C_RemoveFromPlaceableArray_Params
{
	struct FName                                       NameKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PlaceInPlaceableArray
struct ABP_MordhauPlayerController_C_PlaceInPlaceableArray_Params
{
	struct FName                                       NameKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ToPlace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxOfSame;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      RemovedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFireOverlay
struct ABP_MordhauPlayerController_C_ChangeFireOverlay_Params
{
	float                                              NewOnFireValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewNearFireValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeSmokeOverlay
struct ABP_MordhauPlayerController_C_ChangeSmokeOverlay_Params
{
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateViewTargetEffects
struct ABP_MordhauPlayerController_C_UpdateViewTargetEffects_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFadeToBlackCounter
struct ABP_MordhauPlayerController_C_ChangeFadeToBlackCounter_Params
{
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UserConstructionScript
struct ABP_MordhauPlayerController_C_UserConstructionScript_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Main Menu_K2Node_InputActionEvent_14
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Main_Menu_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Chat_K2Node_InputActionEvent_13
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Chat_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_12
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_11
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_10
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_9
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Team_Select_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_8
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Chat_K2Node_InputActionEvent_7
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Team_Chat_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_6
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_5
struct ABP_MordhauPlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Mute Target_K2Node_InputActionEvent_4
struct ABP_MordhauPlayerController_C_InpActEvt_Mute_Target_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote Yes_K2Node_InputActionEvent_3
struct ABP_MordhauPlayerController_C_InpActEvt_Vote_Yes_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote No_K2Node_InputActionEvent_2
struct ABP_MordhauPlayerController_C_InpActEvt_Vote_No_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Toggle UI Markers_K2Node_InputActionEvent_1
struct ABP_MordhauPlayerController_C_InpActEvt_Toggle_UI_Markers_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveBeginPlay
struct ABP_MordhauPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveTick
struct ABP_MordhauPlayerController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RequestChatMessage
struct ABP_MordhauPlayerController_C_RequestChatMessage_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightStart
struct ABP_MordhauPlayerController_C_OnHighlightStart_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightEnd
struct ABP_MordhauPlayerController_C_OnHighlightEnd_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorAction
struct ABP_MordhauPlayerController_C_OnSpectatorAction_Params
{
	unsigned char*                                     Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayMessage
struct ABP_MordhauPlayerController_C_DisplayMessage_Params
{
	class APlayerState**                               SenderPlayerState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    S;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName*                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MsgLifeTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowEquipment
struct ABP_MordhauPlayerController_C_ShowEquipment_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowTips
struct ABP_MordhauPlayerController_C_ShowTips_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChoiceMenuOptionSelected
struct ABP_MordhauPlayerController_C_ChoiceMenuOptionSelected_Params
{
	int*                                               Choice;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ClientReceiveScoreBP
struct ABP_MordhauPlayerController_C_ClientReceiveScoreBP_Params
{
	EScoreFeedReason*                                  Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     ReasonParam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScoreAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauPlayerState**                        AssociatedPlayer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAfterPossess
struct ABP_MordhauPlayerController_C_OnAfterPossess_Params
{
	class APawn**                                      APawn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnActionFailed
struct ABP_MordhauPlayerController_C_OnActionFailed_Params
{
	struct FName*                                      Reason;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveDestroyed
struct ABP_MordhauPlayerController_C_ReceiveDestroyed_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnMordhauCharacterSpawned
struct ABP_MordhauPlayerController_C_OnMordhauCharacterSpawned_Params
{
	class AMordhauCharacter**                          SpawnedCharacter;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorCmd
struct ABP_MordhauPlayerController_C_OnSpectatorCmd_Params
{
	struct FString*                                    Cmd;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnIsAnythingRestockableChanged
struct ABP_MordhauPlayerController_C_OnIsAnythingRestockableChanged_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAFKTimeExceededMaximum
struct ABP_MordhauPlayerController_C_OnAFKTimeExceededMaximum_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PerformAFKKick
struct ABP_MordhauPlayerController_C_PerformAFKKick_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAmmoChanged
struct ABP_MordhauPlayerController_C_OnAmmoChanged_Params
{
	class AMordhauEquipment**                          Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmmoDifference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestVoteKick
struct ABP_MordhauPlayerController_C_OnRequestVoteKick_Params
{
	class AMordhauPlayerState**                        TargetPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestVoteKick
struct ABP_MordhauPlayerController_C_ServerRequestVoteKick_Params
{
	class AMordhauPlayerState*                         Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestCancelVoteKick
struct ABP_MordhauPlayerController_C_OnRequestCancelVoteKick_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestCancelVoteKick
struct ABP_MordhauPlayerController_C_ServerRequestCancelVoteKick_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerVoteKickVote
struct ABP_MordhauPlayerController_C_ServerVoteKickVote_Params
{
	bool                                               VotedYes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleTeamSelect
struct ABP_MordhauPlayerController_C_HandleTeamSelect_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ForgivePlayer
struct ABP_MordhauPlayerController_C_ForgivePlayer_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveOfferToForgive
struct ABP_MordhauPlayerController_C_ReceiveOfferToForgive_Params
{
	class AMordhauPlayerState*                         Candidate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ExecuteUbergraph_BP_MordhauPlayerController
struct ABP_MordhauPlayerController_C_ExecuteUbergraph_BP_MordhauPlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
