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

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsLobbyBlacklisted
struct UBP_MatchmakingScreen_C_IsLobbyBlacklisted_Params
{
	struct FSteamID                                    LobbyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsBlacklisted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsServerValidForPlayer
struct UBP_MatchmakingScreen_C_IsServerValidForPlayer_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_DebugTextBox_Visibility_1
struct UBP_MatchmakingScreen_C_Get_DebugTextBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsPlayerPartyLeader
struct UBP_MatchmakingScreen_C_IsPlayerPartyLeader_Params
{
	bool                                               IsLeader;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.DebugSearch
struct UBP_MatchmakingScreen_C_DebugSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.DebugServer
struct UBP_MatchmakingScreen_C_DebugServer_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSteamID                                    LobbyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               HasAuthority;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.AddDebugMessage
struct UBP_MatchmakingScreen_C_AddDebugMessage_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.HasPlayerSearchAuthority
struct UBP_MatchmakingScreen_C_HasPlayerSearchAuthority_Params
{
	bool                                               HasAuthority;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsServerValidForLobby
struct UBP_MatchmakingScreen_C_IsServerValidForLobby_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSteamID                                    LobbyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLobbySearchResult                          Lobby;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSelectedGameModes
struct UBP_MatchmakingScreen_C_GetSelectedGameModes_Params
{
	TArray<struct FString>                             GameModes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CanPlayerSearch
struct UBP_MatchmakingScreen_C_CanPlayerSearch_Params
{
	bool                                               bCanSearch;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E
struct UBP_MatchmakingScreen_C_OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E
struct UBP_MatchmakingScreen_C_OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_CF3BF4B34350ABBA5B709CAB90B242B4
struct UBP_MatchmakingScreen_C_OnFailure_CF3BF4B34350ABBA5B709CAB90B242B4_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_CF3BF4B34350ABBA5B709CAB90B242B4
struct UBP_MatchmakingScreen_C_OnSuccess_CF3BF4B34350ABBA5B709CAB90B242B4_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C3D009A2448FDD3AF4DBAAA793208209
struct UBP_MatchmakingScreen_C_OnFailure_C3D009A2448FDD3AF4DBAAA793208209_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C3D009A2448FDD3AF4DBAAA793208209
struct UBP_MatchmakingScreen_C_OnSuccess_C3D009A2448FDD3AF4DBAAA793208209_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_CF3BF4B34350ABBA5B709CAB8DD08EF3
struct UBP_MatchmakingScreen_C_OnFailure_CF3BF4B34350ABBA5B709CAB8DD08EF3_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_CF3BF4B34350ABBA5B709CAB8DD08EF3
struct UBP_MatchmakingScreen_C_OnSuccess_CF3BF4B34350ABBA5B709CAB8DD08EF3_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_172C61C348390EAFE87BFF990AF8D445
struct UBP_MatchmakingScreen_C_OnFailure_172C61C348390EAFE87BFF990AF8D445_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_172C61C348390EAFE87BFF990AF8D445
struct UBP_MatchmakingScreen_C_OnSuccess_172C61C348390EAFE87BFF990AF8D445_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_4A04F7DD47F85B488D7272BBFC905448
struct UBP_MatchmakingScreen_C_OnFailure_4A04F7DD47F85B488D7272BBFC905448_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_4A04F7DD47F85B488D7272BBFC905448
struct UBP_MatchmakingScreen_C_OnSuccess_4A04F7DD47F85B488D7272BBFC905448_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_2B3FD13E440DB5A2FE18339FEEDFA46A
struct UBP_MatchmakingScreen_C_OnFailure_2B3FD13E440DB5A2FE18339FEEDFA46A_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFull_2B3FD13E440DB5A2FE18339FEEDFA46A
struct UBP_MatchmakingScreen_C_OnFull_2B3FD13E440DB5A2FE18339FEEDFA46A_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_2B3FD13E440DB5A2FE18339FEEDFA46A
struct UBP_MatchmakingScreen_C_OnSuccess_2B3FD13E440DB5A2FE18339FEEDFA46A_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E0D6DDA4E196C4EC73D18BF6DB3F22B
struct UBP_MatchmakingScreen_C_OnFailure_8E0D6DDA4E196C4EC73D18BF6DB3F22B_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E0D6DDA4E196C4EC73D18BF6DB3F22B
struct UBP_MatchmakingScreen_C_OnSuccess_8E0D6DDA4E196C4EC73D18BF6DB3F22B_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_07D688D243F2FD3D918664AF5494E771
struct UBP_MatchmakingScreen_C_OnFailure_07D688D243F2FD3D918664AF5494E771_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_07D688D243F2FD3D918664AF5494E771
struct UBP_MatchmakingScreen_C_OnSuccess_07D688D243F2FD3D918664AF5494E771_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdatePartyValues
struct UBP_MatchmakingScreen_C_UpdatePartyValues_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.FindMatchmakingSessions
struct UBP_MatchmakingScreen_C_FindMatchmakingSessions_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearchTimer
struct UBP_MatchmakingScreen_C_StartSearchTimer_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CancelSearch
struct UBP_MatchmakingScreen_C_CancelSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearch
struct UBP_MatchmakingScreen_C_StartSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Construct
struct UBP_MatchmakingScreen_C_Construct_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdateWidgets
struct UBP_MatchmakingScreen_C_UpdateWidgets_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSelectionChanged
struct UBP_MatchmakingScreen_C_OnSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnPartyUpdated
struct UBP_MatchmakingScreen_C_OnPartyUpdated_Params
{
	TArray<struct FSteamID>                            PartyMembers;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.ExecuteUbergraph_BP_MatchmakingScreen
struct UBP_MatchmakingScreen_C_ExecuteUbergraph_BP_MatchmakingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
