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

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetToolTipText_1
struct UBP_ChatBoxEntry_C_GetToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.UpdateEntryMessage
struct UBP_ChatBoxEntry_C_UpdateEntryMessage_Params
{
	struct FText                                       New_Message;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Text_Color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetVisibility_1
struct UBP_ChatBoxEntry_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Get_ALL_Text_1
struct UBP_ChatBoxEntry_C_Get_ALL_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry
struct UBP_ChatBoxEntry_C_SetupEntry_Params
{
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                NameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UBP_ChatBoxEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked
struct UBP_ChatBoxEntry_C_ContextButtonClicked_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked2
struct UBP_ChatBoxEntry_C_ContextButtonClicked2_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked3
struct UBP_ChatBoxEntry_C_ContextButtonClicked3_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ExecuteUbergraph_BP_ChatBoxEntry
struct UBP_ChatBoxEntry_C_ExecuteUbergraph_BP_ChatBoxEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
