// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankMMRText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_MatchmakingScreen_C::Get_CurrentRankMMRText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankMMRText_Text_1");

	UBP_MatchmakingScreen_C_Get_CurrentRankMMRText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankText_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_MatchmakingScreen_C::Get_CurrentRankText_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankText_ColorAndOpacity_1");

	UBP_MatchmakingScreen_C_Get_CurrentRankText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_MatchmakingScreen_C::Get_CurrentRankText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CurrentRankText_Text_1");

	UBP_MatchmakingScreen_C_Get_CurrentRankText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SetMatchmakingGameModes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Input                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreen_C::SetMatchmakingGameModes(TArray<struct FString>* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SetMatchmakingGameModes");

	UBP_MatchmakingScreen_C_SetMatchmakingGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetMatchmakingGameModes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Return_Value                   (Parm, OutParm, ZeroConstructor)

void UBP_MatchmakingScreen_C::GetMatchmakingGameModes(TArray<struct FString>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetMatchmakingGameModes");

	UBP_MatchmakingScreen_C_GetMatchmakingGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CasualTab_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MatchmakingScreen_C::Get_CasualTab_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_CasualTab_bIsEnabled_1");

	UBP_MatchmakingScreen_C_Get_CasualTab_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsLobbyBlacklisted
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                LobbyId                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsBlacklisted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::IsLobbyBlacklisted(const struct FSteamID& LobbyId, bool* bIsBlacklisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsLobbyBlacklisted");

	UBP_MatchmakingScreen_C_IsLobbyBlacklisted_Params params;
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsBlacklisted != nullptr)
		*bIsBlacklisted = params.bIsBlacklisted;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsServerValidForPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     SearchResult                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::IsServerValidForPlayer(const struct FServerSearchResult& SearchResult, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsServerValidForPlayer");

	UBP_MatchmakingScreen_C_IsServerValidForPlayer_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_DebugTextBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_MatchmakingScreen_C::Get_DebugTextBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_DebugTextBox_Visibility_1");

	UBP_MatchmakingScreen_C_Get_DebugTextBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsPlayerPartyLeader
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLeader                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::IsPlayerPartyLeader(bool* IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsPlayerPartyLeader");

	UBP_MatchmakingScreen_C_IsPlayerPartyLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLeader != nullptr)
		*IsLeader = params.IsLeader;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.DebugSearch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::DebugSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.DebugSearch");

	UBP_MatchmakingScreen_C_DebugSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.DebugServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     SearchResult                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSteamID                LobbyId                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           HasAuthority                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::DebugServer(const struct FServerSearchResult& SearchResult, const struct FSteamID& LobbyId, bool HasAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.DebugServer");

	UBP_MatchmakingScreen_C_DebugServer_Params params;
	params.SearchResult = SearchResult;
	params.LobbyId = LobbyId;
	params.HasAuthority = HasAuthority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.AddDebugMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MatchmakingScreen_C::AddDebugMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.AddDebugMessage");

	UBP_MatchmakingScreen_C_AddDebugMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.HasPlayerSearchAuthority
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAuthority                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::HasPlayerSearchAuthority(bool* HasAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.HasPlayerSearchAuthority");

	UBP_MatchmakingScreen_C_HasPlayerSearchAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAuthority != nullptr)
		*HasAuthority = params.HasAuthority;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsServerValidForLobby
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     SearchResult                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSteamID                LobbyId                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLobbySearchResult      Lobby                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::IsServerValidForLobby(const struct FServerSearchResult& SearchResult, const struct FSteamID& LobbyId, const struct FLobbySearchResult& Lobby, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsServerValidForLobby");

	UBP_MatchmakingScreen_C_IsServerValidForLobby_Params params;
	params.SearchResult = SearchResult;
	params.LobbyId = LobbyId;
	params.Lobby = Lobby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSelectedGameModes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         GameModes                      (Parm, OutParm, ZeroConstructor)

void UBP_MatchmakingScreen_C::GetSelectedGameModes(TArray<struct FString>* GameModes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSelectedGameModes");

	UBP_MatchmakingScreen_C_GetSelectedGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameModes != nullptr)
		*GameModes = params.GameModes;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CanPlayerSearch
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanSearch                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::CanPlayerSearch(bool* bCanSearch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CanPlayerSearch");

	UBP_MatchmakingScreen_C_CanPlayerSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanSearch != nullptr)
		*bCanSearch = params.bCanSearch;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_5219C1A144240B4C4D9516969EF8AFE6
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_5219C1A144240B4C4D9516969EF8AFE6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_5219C1A144240B4C4D9516969EF8AFE6");

	UBP_MatchmakingScreen_C_OnFailure_5219C1A144240B4C4D9516969EF8AFE6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_5219C1A144240B4C4D9516969EF8AFE6
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_5219C1A144240B4C4D9516969EF8AFE6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_5219C1A144240B4C4D9516969EF8AFE6");

	UBP_MatchmakingScreen_C_OnSuccess_5219C1A144240B4C4D9516969EF8AFE6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_CF3BF4B34350ABBA5B709CAB8DD08EF3
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_CF3BF4B34350ABBA5B709CAB8DD08EF3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_CF3BF4B34350ABBA5B709CAB8DD08EF3");

	UBP_MatchmakingScreen_C_OnFailure_CF3BF4B34350ABBA5B709CAB8DD08EF3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_CF3BF4B34350ABBA5B709CAB8DD08EF3
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_CF3BF4B34350ABBA5B709CAB8DD08EF3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_CF3BF4B34350ABBA5B709CAB8DD08EF3");

	UBP_MatchmakingScreen_C_OnSuccess_CF3BF4B34350ABBA5B709CAB8DD08EF3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C3D009A2448FDD3AF4DBAAA793208209
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_C3D009A2448FDD3AF4DBAAA793208209()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C3D009A2448FDD3AF4DBAAA793208209");

	UBP_MatchmakingScreen_C_OnFailure_C3D009A2448FDD3AF4DBAAA793208209_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C3D009A2448FDD3AF4DBAAA793208209
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_C3D009A2448FDD3AF4DBAAA793208209()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C3D009A2448FDD3AF4DBAAA793208209");

	UBP_MatchmakingScreen_C_OnSuccess_C3D009A2448FDD3AF4DBAAA793208209_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_CF3BF4B34350ABBA5B709CAB90B242B4
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_CF3BF4B34350ABBA5B709CAB90B242B4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_CF3BF4B34350ABBA5B709CAB90B242B4");

	UBP_MatchmakingScreen_C_OnFailure_CF3BF4B34350ABBA5B709CAB90B242B4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_CF3BF4B34350ABBA5B709CAB90B242B4
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_CF3BF4B34350ABBA5B709CAB90B242B4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_CF3BF4B34350ABBA5B709CAB90B242B4");

	UBP_MatchmakingScreen_C_OnSuccess_CF3BF4B34350ABBA5B709CAB90B242B4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E");

	UBP_MatchmakingScreen_C_OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E");

	UBP_MatchmakingScreen_C_OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_183A0328473B20ED0AAA0C9F5B8DCA57
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreen_C::OnFailure_183A0328473B20ED0AAA0C9F5B8DCA57(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_183A0328473B20ED0AAA0C9F5B8DCA57");

	UBP_MatchmakingScreen_C_OnFailure_183A0328473B20ED0AAA0C9F5B8DCA57_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_183A0328473B20ED0AAA0C9F5B8DCA57
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreen_C::OnSuccess_183A0328473B20ED0AAA0C9F5B8DCA57(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_183A0328473B20ED0AAA0C9F5B8DCA57");

	UBP_MatchmakingScreen_C_OnSuccess_183A0328473B20ED0AAA0C9F5B8DCA57_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_001AECF4410F30DE4CB7928257A42023
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_001AECF4410F30DE4CB7928257A42023()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_001AECF4410F30DE4CB7928257A42023");

	UBP_MatchmakingScreen_C_OnFailure_001AECF4410F30DE4CB7928257A42023_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_001AECF4410F30DE4CB7928257A42023
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_001AECF4410F30DE4CB7928257A42023()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_001AECF4410F30DE4CB7928257A42023");

	UBP_MatchmakingScreen_C_OnSuccess_001AECF4410F30DE4CB7928257A42023_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_92F8AFB047349681EC3D84AEDCCAF39C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchmakingScreen_C::OnFailure_92F8AFB047349681EC3D84AEDCCAF39C(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_92F8AFB047349681EC3D84AEDCCAF39C");

	UBP_MatchmakingScreen_C_OnFailure_92F8AFB047349681EC3D84AEDCCAF39C_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_92F8AFB047349681EC3D84AEDCCAF39C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchmakingScreen_C::OnSuccess_92F8AFB047349681EC3D84AEDCCAF39C(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_92F8AFB047349681EC3D84AEDCCAF39C");

	UBP_MatchmakingScreen_C_OnSuccess_92F8AFB047349681EC3D84AEDCCAF39C_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_4A04F7DD47F85B488D7272BBFC905448
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_4A04F7DD47F85B488D7272BBFC905448()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_4A04F7DD47F85B488D7272BBFC905448");

	UBP_MatchmakingScreen_C_OnFailure_4A04F7DD47F85B488D7272BBFC905448_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_4A04F7DD47F85B488D7272BBFC905448
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_4A04F7DD47F85B488D7272BBFC905448()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_4A04F7DD47F85B488D7272BBFC905448");

	UBP_MatchmakingScreen_C_OnSuccess_4A04F7DD47F85B488D7272BBFC905448_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_172C61C348390EAFE87BFF990AF8D445
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreen_C::OnFailure_172C61C348390EAFE87BFF990AF8D445(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_172C61C348390EAFE87BFF990AF8D445");

	UBP_MatchmakingScreen_C_OnFailure_172C61C348390EAFE87BFF990AF8D445_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_172C61C348390EAFE87BFF990AF8D445
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreen_C::OnSuccess_172C61C348390EAFE87BFF990AF8D445(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_172C61C348390EAFE87BFF990AF8D445");

	UBP_MatchmakingScreen_C_OnSuccess_172C61C348390EAFE87BFF990AF8D445_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_2B3FD13E440DB5A2FE18339FEEDFA46A
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_2B3FD13E440DB5A2FE18339FEEDFA46A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_2B3FD13E440DB5A2FE18339FEEDFA46A");

	UBP_MatchmakingScreen_C_OnFailure_2B3FD13E440DB5A2FE18339FEEDFA46A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFull_2B3FD13E440DB5A2FE18339FEEDFA46A
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFull_2B3FD13E440DB5A2FE18339FEEDFA46A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFull_2B3FD13E440DB5A2FE18339FEEDFA46A");

	UBP_MatchmakingScreen_C_OnFull_2B3FD13E440DB5A2FE18339FEEDFA46A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_2B3FD13E440DB5A2FE18339FEEDFA46A
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_2B3FD13E440DB5A2FE18339FEEDFA46A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_2B3FD13E440DB5A2FE18339FEEDFA46A");

	UBP_MatchmakingScreen_C_OnSuccess_2B3FD13E440DB5A2FE18339FEEDFA46A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E0D6DDA4E196C4EC73D18BF6DB3F22B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchmakingScreen_C::OnFailure_8E0D6DDA4E196C4EC73D18BF6DB3F22B(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E0D6DDA4E196C4EC73D18BF6DB3F22B");

	UBP_MatchmakingScreen_C_OnFailure_8E0D6DDA4E196C4EC73D18BF6DB3F22B_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E0D6DDA4E196C4EC73D18BF6DB3F22B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchmakingScreen_C::OnSuccess_8E0D6DDA4E196C4EC73D18BF6DB3F22B(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E0D6DDA4E196C4EC73D18BF6DB3F22B");

	UBP_MatchmakingScreen_C_OnSuccess_8E0D6DDA4E196C4EC73D18BF6DB3F22B_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_07D688D243F2FD3D918664AF5494E771
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_07D688D243F2FD3D918664AF5494E771()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_07D688D243F2FD3D918664AF5494E771");

	UBP_MatchmakingScreen_C_OnFailure_07D688D243F2FD3D918664AF5494E771_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_07D688D243F2FD3D918664AF5494E771
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_07D688D243F2FD3D918664AF5494E771()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_07D688D243F2FD3D918664AF5494E771");

	UBP_MatchmakingScreen_C_OnSuccess_07D688D243F2FD3D918664AF5494E771_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_F7EDF144456F81F8DC282793736D2392
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_F7EDF144456F81F8DC282793736D2392()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_F7EDF144456F81F8DC282793736D2392");

	UBP_MatchmakingScreen_C_OnFailure_F7EDF144456F81F8DC282793736D2392_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_F7EDF144456F81F8DC282793736D2392
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_F7EDF144456F81F8DC282793736D2392()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_F7EDF144456F81F8DC282793736D2392");

	UBP_MatchmakingScreen_C_OnSuccess_F7EDF144456F81F8DC282793736D2392_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_D428F41A4B3A761D986543A992C0DDFC
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_D428F41A4B3A761D986543A992C0DDFC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_D428F41A4B3A761D986543A992C0DDFC");

	UBP_MatchmakingScreen_C_OnFailure_D428F41A4B3A761D986543A992C0DDFC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_D428F41A4B3A761D986543A992C0DDFC
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_D428F41A4B3A761D986543A992C0DDFC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_D428F41A4B3A761D986543A992C0DDFC");

	UBP_MatchmakingScreen_C_OnSuccess_D428F41A4B3A761D986543A992C0DDFC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_35E6694F4C39238BC2FAE4B9E22CCA8B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLobbySearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreen_C::OnFailure_35E6694F4C39238BC2FAE4B9E22CCA8B(TArray<struct FLobbySearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_35E6694F4C39238BC2FAE4B9E22CCA8B");

	UBP_MatchmakingScreen_C_OnFailure_35E6694F4C39238BC2FAE4B9E22CCA8B_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_35E6694F4C39238BC2FAE4B9E22CCA8B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLobbySearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreen_C::OnSuccess_35E6694F4C39238BC2FAE4B9E22CCA8B(TArray<struct FLobbySearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_35E6694F4C39238BC2FAE4B9E22CCA8B");

	UBP_MatchmakingScreen_C_OnSuccess_35E6694F4C39238BC2FAE4B9E22CCA8B_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8FD543D642D088A55649C69635DD3B45
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_8FD543D642D088A55649C69635DD3B45()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8FD543D642D088A55649C69635DD3B45");

	UBP_MatchmakingScreen_C_OnFailure_8FD543D642D088A55649C69635DD3B45_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8FD543D642D088A55649C69635DD3B45
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_8FD543D642D088A55649C69635DD3B45()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8FD543D642D088A55649C69635DD3B45");

	UBP_MatchmakingScreen_C_OnSuccess_8FD543D642D088A55649C69635DD3B45_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_9F48DDC7411FE9CC9B9100BF7E576B5D
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_9F48DDC7411FE9CC9B9100BF7E576B5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_9F48DDC7411FE9CC9B9100BF7E576B5D");

	UBP_MatchmakingScreen_C_OnFailure_9F48DDC7411FE9CC9B9100BF7E576B5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_9F48DDC7411FE9CC9B9100BF7E576B5D
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_9F48DDC7411FE9CC9B9100BF7E576B5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_9F48DDC7411FE9CC9B9100BF7E576B5D");

	UBP_MatchmakingScreen_C_OnSuccess_9F48DDC7411FE9CC9B9100BF7E576B5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_3A8881084972C05913F558B81B7162B6
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnFailure_3A8881084972C05913F558B81B7162B6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_3A8881084972C05913F558B81B7162B6");

	UBP_MatchmakingScreen_C_OnFailure_3A8881084972C05913F558B81B7162B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_3A8881084972C05913F558B81B7162B6
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnSuccess_3A8881084972C05913F558B81B7162B6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_3A8881084972C05913F558B81B7162B6");

	UBP_MatchmakingScreen_C_OnSuccess_3A8881084972C05913F558B81B7162B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchmakingScreen_C::BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdateWidgets
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::UpdateWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdateWidgets");

	UBP_MatchmakingScreen_C_UpdateWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MatchmakingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Construct");

	UBP_MatchmakingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearch
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::StartSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearch");

	UBP_MatchmakingScreen_C_StartSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CancelSearch
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::CancelSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CancelSearch");

	UBP_MatchmakingScreen_C_CancelSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearchTimer
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::StartSearchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearchTimer");

	UBP_MatchmakingScreen_C_StartSearchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.FindMatchmakingSessions
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::FindMatchmakingSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.FindMatchmakingSessions");

	UBP_MatchmakingScreen_C_FindMatchmakingSessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdatePartyValues
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::UpdatePartyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdatePartyValues");

	UBP_MatchmakingScreen_C_UpdatePartyValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::OnSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSelectionChanged");

	UBP_MatchmakingScreen_C_OnSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnPartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamID>        PartyMembers                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreen_C::OnPartyUpdated(TArray<struct FSteamID> PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnPartyUpdated");

	UBP_MatchmakingScreen_C_OnPartyUpdated_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SwitchToRankedTab
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::SwitchToRankedTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SwitchToRankedTab");

	UBP_MatchmakingScreen_C_SwitchToRankedTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__CasualTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature
// (BlueprintEvent)

void UBP_MatchmakingScreen_C::BndEvt__CasualTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__CasualTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__CasualTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RankedTab_K2Node_ComponentBoundEvent_3_ButtonSelected__DelegateSignature
// (BlueprintEvent)

void UBP_MatchmakingScreen_C::BndEvt__RankedTab_K2Node_ComponentBoundEvent_3_ButtonSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RankedTab_K2Node_ComponentBoundEvent_3_ButtonSelected__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__RankedTab_K2Node_ComponentBoundEvent_3_ButtonSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnOkClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreen_C::OnOkClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnOkClicked");

	UBP_MatchmakingScreen_C_OnOkClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.ExecuteUbergraph_BP_MatchmakingScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreen_C::ExecuteUbergraph_BP_MatchmakingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.ExecuteUbergraph_BP_MatchmakingScreen");

	UBP_MatchmakingScreen_C_ExecuteUbergraph_BP_MatchmakingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
