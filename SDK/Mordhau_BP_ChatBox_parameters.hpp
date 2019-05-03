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
	struct FText                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                NameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FText                                       Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
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
