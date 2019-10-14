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

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankMMRText_Text_1
struct UBP_MatchmakingScreen_C_Get_CurrentRankMMRText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankText_ColorAndOpacity_1
struct UBP_MatchmakingScreen_C_Get_CurrentRankText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankText_Text_1
struct UBP_MatchmakingScreen_C_Get_CurrentRankText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SetMatchmakingGameModes
struct UBP_MatchmakingScreen_C_SetMatchmakingGameModes_Params
{
	TArray<struct FString>                             Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetMatchmakingGameModes
struct UBP_MatchmakingScreen_C_GetMatchmakingGameModes_Params
{
	TArray<struct FString>                             Return_Value;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CasualTab_bIsEnabled_1
struct UBP_MatchmakingScreen_C_Get_CasualTab_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsLobbyBlacklisted
struct UBP_MatchmakingScreen_C_IsLobbyBlacklisted_Params
{
	struct FSteamID                                    LobbyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
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
	struct FSteamID                                    LobbyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
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
	struct FSteamID                                    LobbyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
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

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_5219C1A144240B4C4D9516969EF8AFE6
struct UBP_MatchmakingScreen_C_OnFailure_5219C1A144240B4C4D9516969EF8AFE6_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_5219C1A144240B4C4D9516969EF8AFE6
struct UBP_MatchmakingScreen_C_OnSuccess_5219C1A144240B4C4D9516969EF8AFE6_Params
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

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C3D009A2448FDD3AF4DBAAA793208209
struct UBP_MatchmakingScreen_C_OnFailure_C3D009A2448FDD3AF4DBAAA793208209_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C3D009A2448FDD3AF4DBAAA793208209
struct UBP_MatchmakingScreen_C_OnSuccess_C3D009A2448FDD3AF4DBAAA793208209_Params
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

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E
struct UBP_MatchmakingScreen_C_OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E
struct UBP_MatchmakingScreen_C_OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_183A0328473B20ED0AAA0C9F5B8DCA57
struct UBP_MatchmakingScreen_C_OnFailure_183A0328473B20ED0AAA0C9F5B8DCA57_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_183A0328473B20ED0AAA0C9F5B8DCA57
struct UBP_MatchmakingScreen_C_OnSuccess_183A0328473B20ED0AAA0C9F5B8DCA57_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_001AECF4410F30DE4CB7928257A42023
struct UBP_MatchmakingScreen_C_OnFailure_001AECF4410F30DE4CB7928257A42023_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_001AECF4410F30DE4CB7928257A42023
struct UBP_MatchmakingScreen_C_OnSuccess_001AECF4410F30DE4CB7928257A42023_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_92F8AFB047349681EC3D84AEDCCAF39C
struct UBP_MatchmakingScreen_C_OnFailure_92F8AFB047349681EC3D84AEDCCAF39C_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_92F8AFB047349681EC3D84AEDCCAF39C
struct UBP_MatchmakingScreen_C_OnSuccess_92F8AFB047349681EC3D84AEDCCAF39C_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_4A04F7DD47F85B488D7272BBFC905448
struct UBP_MatchmakingScreen_C_OnFailure_4A04F7DD47F85B488D7272BBFC905448_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_4A04F7DD47F85B488D7272BBFC905448
struct UBP_MatchmakingScreen_C_OnSuccess_4A04F7DD47F85B488D7272BBFC905448_Params
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

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_F7EDF144456F81F8DC282793736D2392
struct UBP_MatchmakingScreen_C_OnFailure_F7EDF144456F81F8DC282793736D2392_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_F7EDF144456F81F8DC282793736D2392
struct UBP_MatchmakingScreen_C_OnSuccess_F7EDF144456F81F8DC282793736D2392_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_D428F41A4B3A761D986543A992C0DDFC
struct UBP_MatchmakingScreen_C_OnFailure_D428F41A4B3A761D986543A992C0DDFC_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_D428F41A4B3A761D986543A992C0DDFC
struct UBP_MatchmakingScreen_C_OnSuccess_D428F41A4B3A761D986543A992C0DDFC_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_35E6694F4C39238BC2FAE4B9E22CCA8B
struct UBP_MatchmakingScreen_C_OnFailure_35E6694F4C39238BC2FAE4B9E22CCA8B_Params
{
	TArray<struct FLobbySearchResult>                  Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_35E6694F4C39238BC2FAE4B9E22CCA8B
struct UBP_MatchmakingScreen_C_OnSuccess_35E6694F4C39238BC2FAE4B9E22CCA8B_Params
{
	TArray<struct FLobbySearchResult>                  Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8FD543D642D088A55649C69635DD3B45
struct UBP_MatchmakingScreen_C_OnFailure_8FD543D642D088A55649C69635DD3B45_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8FD543D642D088A55649C69635DD3B45
struct UBP_MatchmakingScreen_C_OnSuccess_8FD543D642D088A55649C69635DD3B45_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_9F48DDC7411FE9CC9B9100BF7E576B5D
struct UBP_MatchmakingScreen_C_OnFailure_9F48DDC7411FE9CC9B9100BF7E576B5D_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_9F48DDC7411FE9CC9B9100BF7E576B5D
struct UBP_MatchmakingScreen_C_OnSuccess_9F48DDC7411FE9CC9B9100BF7E576B5D_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_3A8881084972C05913F558B81B7162B6
struct UBP_MatchmakingScreen_C_OnFailure_3A8881084972C05913F558B81B7162B6_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_3A8881084972C05913F558B81B7162B6
struct UBP_MatchmakingScreen_C_OnSuccess_3A8881084972C05913F558B81B7162B6_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdateWidgets
struct UBP_MatchmakingScreen_C_UpdateWidgets_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Construct
struct UBP_MatchmakingScreen_C_Construct_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearch
struct UBP_MatchmakingScreen_C_StartSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CancelSearch
struct UBP_MatchmakingScreen_C_CancelSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearchTimer
struct UBP_MatchmakingScreen_C_StartSearchTimer_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.FindMatchmakingSessions
struct UBP_MatchmakingScreen_C_FindMatchmakingSessions_Params
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

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SwitchToRankedTab
struct UBP_MatchmakingScreen_C_SwitchToRankedTab_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__CasualTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__CasualTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RankedTab_K2Node_ComponentBoundEvent_3_ButtonSelected__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__RankedTab_K2Node_ComponentBoundEvent_3_ButtonSelected__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnOkClicked
struct UBP_MatchmakingScreen_C_OnOkClicked_Params
{
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
