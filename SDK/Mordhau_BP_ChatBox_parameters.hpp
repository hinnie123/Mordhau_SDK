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

// Function BP_ChatBox.BP_ChatBox_C.Repopulate Muted Player List
struct UBP_ChatBox_C_Repopulate_Muted_Player_List_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.RemovePlayerFromMutedMap
struct UBP_ChatBox_C_RemovePlayerFromMutedMap_Params
{
	struct FString                                     SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SteamID_Index;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.IsPlayerMuted
struct UBP_ChatBox_C_IsPlayerMuted_Params
{
	struct FString                                     SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<E_ChatMuteTypes>                       Mute_Type;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isMuted;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.AddPlayerToMutedMap
struct UBP_ChatBox_C_AddPlayerToMutedMap_Params
{
	struct FString                                     SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<E_ChatMuteTypes>                       Mute_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Player_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ChatBox.BP_ChatBox_C.Get Keys From Value
struct UBP_ChatBox_C_Get_Keys_From_Value_Params
{
	TMap<class UBP_ChatBoxEntry_C*, struct FString>    PreviousMessagesMap;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Value__SteamID_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<class UBP_ChatBoxEntry_C*>                  Keys;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ChatBox.BP_ChatBox_C.UnMutePlayer
struct UBP_ChatBox_C_UnMutePlayer_Params
{
	struct FString                                     SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ChatBox.BP_ChatBox_C.MutePlayer
struct UBP_ChatBox_C_MutePlayer_Params
{
	TEnumAsByte<E_ChatMuteTypes>                       MuteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ChatBox.BP_ChatBox_C.GetVisibility_1
struct UBP_ChatBox_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.ResetThreshold
struct UBP_ChatBox_C_ResetThreshold_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.GetText_1
struct UBP_ChatBox_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBox.BP_ChatBox_C.AddViewModeEntry
struct UBP_ChatBox_C_AddViewModeEntry_Params
{
	class UBP_ChatBoxEntry_C*                          Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.AddEntriesEntry
struct UBP_ChatBox_C_AddEntriesEntry_Params
{
	class UBP_ChatBoxEntry_C*                          Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.GetEntriesVisibility
struct UBP_ChatBox_C_GetEntriesVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.GetChatBoxVisibility
struct UBP_ChatBox_C_GetChatBoxVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.OnEscape
struct UBP_ChatBox_C_OnEscape_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.OnMessageReceived
struct UBP_ChatBox_C_OnMessageReceived_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ChatBox.BP_ChatBox_C.OnEnter
struct UBP_ChatBox_C_OnEnter_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.GoToChatMode
struct UBP_ChatBox_C_GoToChatMode_Params
{
	bool                                               Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.GetViewModeVisibility
struct UBP_ChatBox_C_GetViewModeVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.GetInputContainerVisibility
struct UBP_ChatBox_C_GetInputContainerVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.OnPreviewKeyDown
struct UBP_ChatBox_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBox.BP_ChatBox_C.AddEntry
struct UBP_ChatBox_C_AddEntry_Params
{
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                NameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FText                                       Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ChatBox.BP_ChatBox_C.Tick
struct UBP_ChatBox_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChatBox.BP_ChatBox_C.Construct
struct UBP_ChatBox_C_Construct_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UBP_ChatBox_C_BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChatBox.BP_ChatBox_C.GoToViewMode
struct UBP_ChatBox_C_GoToViewMode_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.GoToViewModeCallback
struct UBP_ChatBox_C_GoToViewModeCallback_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.OnMouseLeave
struct UBP_ChatBox_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChatBox.BP_ChatBox_C.OnMouseEnter
struct UBP_ChatBox_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChatBox.BP_ChatBox_C.ExecuteUbergraph_BP_ChatBox
struct UBP_ChatBox_C_ExecuteUbergraph_BP_ChatBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
