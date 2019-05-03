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

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsLobbyBlacklisted
struct UBP_MatchmakingScreenTest_C_IsLobbyBlacklisted_Params
{
	struct FSteamID                                    LobbyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsBlacklisted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsServerValidForPlayer
struct UBP_MatchmakingScreenTest_C_IsServerValidForPlayer_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.Get_DebugTextBox_Visibility_1
struct UBP_MatchmakingScreenTest_C_Get_DebugTextBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsPlayerPartyLeader
struct UBP_MatchmakingScreenTest_C_IsPlayerPartyLeader_Params
{
	bool                                               IsLeader;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.DebugSearch
struct UBP_MatchmakingScreenTest_C_DebugSearch_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.DebugServer
struct UBP_MatchmakingScreenTest_C_DebugServer_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSteamID                                    LobbyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               HasAuthority;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.AddDebugMessage
struct UBP_MatchmakingScreenTest_C_AddDebugMessage_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.HasPlayerSearchAuthority
struct UBP_MatchmakingScreenTest_C_HasPlayerSearchAuthority_Params
{
	bool                                               HasAuthority;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsServerValidForLobby
struct UBP_MatchmakingScreenTest_C_IsServerValidForLobby_Params
{
	struct FServerSearchResult                         SearchResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSteamID                                    LobbyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLobbySearchResult                          Lobby;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.GetSelectedGameModes
struct UBP_MatchmakingScreenTest_C_GetSelectedGameModes_Params
{
	TArray<struct FString>                             GameModes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.CanPlayerSearch
struct UBP_MatchmakingScreenTest_C_CanPlayerSearch_Params
{
	bool                                               bCanSearch;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D9516967E308B6E
struct UBP_MatchmakingScreenTest_C_OnFailure_5219C1A144240B4C4D9516967E308B6E_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D9516967E308B6E
struct UBP_MatchmakingScreenTest_C_OnSuccess_5219C1A144240B4C4D9516967E308B6E_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282BF0DA889
struct UBP_MatchmakingScreenTest_C_OnFailure_001AECF4410F30DE4CB79282BF0DA889_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282BF0DA889
struct UBP_MatchmakingScreenTest_C_OnSuccess_001AECF4410F30DE4CB79282BF0DA889_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D95169668B1D8E7
struct UBP_MatchmakingScreenTest_C_OnFailure_5219C1A144240B4C4D95169668B1D8E7_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D95169668B1D8E7
struct UBP_MatchmakingScreenTest_C_OnSuccess_5219C1A144240B4C4D95169668B1D8E7_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_183A0328473B20ED0AAA0C9FD89E5524
struct UBP_MatchmakingScreenTest_C_OnFailure_183A0328473B20ED0AAA0C9FD89E5524_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_183A0328473B20ED0AAA0C9FD89E5524
struct UBP_MatchmakingScreenTest_C_OnSuccess_183A0328473B20ED0AAA0C9FD89E5524_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_92F8AFB047349681EC3D84AE3C02D714
struct UBP_MatchmakingScreenTest_C_OnFailure_92F8AFB047349681EC3D84AE3C02D714_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_92F8AFB047349681EC3D84AE3C02D714
struct UBP_MatchmakingScreenTest_C_OnSuccess_92F8AFB047349681EC3D84AE3C02D714_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282B76C04AB
struct UBP_MatchmakingScreenTest_C_OnFailure_001AECF4410F30DE4CB79282B76C04AB_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282B76C04AB
struct UBP_MatchmakingScreenTest_C_OnSuccess_001AECF4410F30DE4CB79282B76C04AB_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282BD7DF700
struct UBP_MatchmakingScreenTest_C_OnFailure_001AECF4410F30DE4CB79282BD7DF700_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282BD7DF700
struct UBP_MatchmakingScreenTest_C_OnSuccess_001AECF4410F30DE4CB79282BD7DF700_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D9516966AC1876E
struct UBP_MatchmakingScreenTest_C_OnFailure_5219C1A144240B4C4D9516966AC1876E_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D9516966AC1876E
struct UBP_MatchmakingScreenTest_C_OnSuccess_5219C1A144240B4C4D9516966AC1876E_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_36C033B34169C06C39A46EBC27AA1E84
struct UBP_MatchmakingScreenTest_C_OnFailure_36C033B34169C06C39A46EBC27AA1E84_Params
{
	TArray<struct FLobbySearchResult>                  Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_36C033B34169C06C39A46EBC27AA1E84
struct UBP_MatchmakingScreenTest_C_OnSuccess_36C033B34169C06C39A46EBC27AA1E84_Params
{
	TArray<struct FLobbySearchResult>                  Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_E1B7DB544D09C468395A298548F2604D
struct UBP_MatchmakingScreenTest_C_OnFailure_E1B7DB544D09C468395A298548F2604D_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_E1B7DB544D09C468395A298548F2604D
struct UBP_MatchmakingScreenTest_C_OnSuccess_E1B7DB544D09C468395A298548F2604D_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_75685C274259E866CB9F2EB0C8C6505F
struct UBP_MatchmakingScreenTest_C_OnFailure_75685C274259E866CB9F2EB0C8C6505F_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_75685C274259E866CB9F2EB0C8C6505F
struct UBP_MatchmakingScreenTest_C_OnSuccess_75685C274259E866CB9F2EB0C8C6505F_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_CADA336048BEBC13E2D0F988661A425A
struct UBP_MatchmakingScreenTest_C_OnFailure_CADA336048BEBC13E2D0F988661A425A_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_CADA336048BEBC13E2D0F988661A425A
struct UBP_MatchmakingScreenTest_C_OnSuccess_CADA336048BEBC13E2D0F988661A425A_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_535108584BA7A7DFB6114997CC75E028
struct UBP_MatchmakingScreenTest_C_OnFailure_535108584BA7A7DFB6114997CC75E028_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_535108584BA7A7DFB6114997CC75E028
struct UBP_MatchmakingScreenTest_C_OnSuccess_535108584BA7A7DFB6114997CC75E028_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_41F9B43B446F2EB73CA65FA60E9E1F12
struct UBP_MatchmakingScreenTest_C_OnFailure_41F9B43B446F2EB73CA65FA60E9E1F12_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_41F9B43B446F2EB73CA65FA60E9E1F12
struct UBP_MatchmakingScreenTest_C_OnSuccess_41F9B43B446F2EB73CA65FA60E9E1F12_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_4A04F7DD47F85B488D7272BBFC905448
struct UBP_MatchmakingScreenTest_C_OnFailure_4A04F7DD47F85B488D7272BBFC905448_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_4A04F7DD47F85B488D7272BBFC905448
struct UBP_MatchmakingScreenTest_C_OnSuccess_4A04F7DD47F85B488D7272BBFC905448_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_950216D646440111EC1B9FB75DF1BA1F
struct UBP_MatchmakingScreenTest_C_OnFailure_950216D646440111EC1B9FB75DF1BA1F_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_950216D646440111EC1B9FB75DF1BA1F
struct UBP_MatchmakingScreenTest_C_OnSuccess_950216D646440111EC1B9FB75DF1BA1F_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_B2E0FB85491E9BC9A0E0159E3B42B46A
struct UBP_MatchmakingScreenTest_C_OnFailure_B2E0FB85491E9BC9A0E0159E3B42B46A_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_B2E0FB85491E9BC9A0E0159E3B42B46A
struct UBP_MatchmakingScreenTest_C_OnSuccess_B2E0FB85491E9BC9A0E0159E3B42B46A_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_32FB6D604A1AED3993672C868973F387
struct UBP_MatchmakingScreenTest_C_OnFailure_32FB6D604A1AED3993672C868973F387_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_32FB6D604A1AED3993672C868973F387
struct UBP_MatchmakingScreenTest_C_OnSuccess_32FB6D604A1AED3993672C868973F387_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_A0E667AD49FCDEC6F12F1CAFB29B3105
struct UBP_MatchmakingScreenTest_C_OnFailure_A0E667AD49FCDEC6F12F1CAFB29B3105_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_A0E667AD49FCDEC6F12F1CAFB29B3105
struct UBP_MatchmakingScreenTest_C_OnSuccess_A0E667AD49FCDEC6F12F1CAFB29B3105_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_2F562B9848CBDAA052591FAB6339CF1F
struct UBP_MatchmakingScreenTest_C_OnFailure_2F562B9848CBDAA052591FAB6339CF1F_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_2F562B9848CBDAA052591FAB6339CF1F
struct UBP_MatchmakingScreenTest_C_OnSuccess_2F562B9848CBDAA052591FAB6339CF1F_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchmakingScreenTest_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.UpdateWidgets
struct UBP_MatchmakingScreenTest_C_UpdateWidgets_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.Construct
struct UBP_MatchmakingScreenTest_C_Construct_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.StartSearch
struct UBP_MatchmakingScreenTest_C_StartSearch_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.CancelSearch
struct UBP_MatchmakingScreenTest_C_CancelSearch_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.StartSearchTimer
struct UBP_MatchmakingScreenTest_C_StartSearchTimer_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.FindMatchmakingSessions
struct UBP_MatchmakingScreenTest_C_FindMatchmakingSessions_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
struct UBP_MatchmakingScreenTest_C_BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.UpdatePartyValues
struct UBP_MatchmakingScreenTest_C_UpdatePartyValues_Params
{
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSelectionChanged
struct UBP_MatchmakingScreenTest_C_OnSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnPartyUpdated
struct UBP_MatchmakingScreenTest_C_OnPartyUpdated_Params
{
	TArray<struct FSteamID>                            PartyMembers;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.ExecuteUbergraph_BP_MatchmakingScreenTest
struct UBP_MatchmakingScreenTest_C_ExecuteUbergraph_BP_MatchmakingScreenTest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
