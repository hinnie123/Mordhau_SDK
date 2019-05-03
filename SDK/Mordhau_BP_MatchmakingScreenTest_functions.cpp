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

// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsLobbyBlacklisted
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                LobbyID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsBlacklisted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::IsLobbyBlacklisted(const struct FSteamID& LobbyID, bool* bIsBlacklisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsLobbyBlacklisted");

	UBP_MatchmakingScreenTest_C_IsLobbyBlacklisted_Params params;
	params.LobbyID = LobbyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsBlacklisted != nullptr)
		*bIsBlacklisted = params.bIsBlacklisted;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsServerValidForPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     SearchResult                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::IsServerValidForPlayer(const struct FServerSearchResult& SearchResult, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsServerValidForPlayer");

	UBP_MatchmakingScreenTest_C_IsServerValidForPlayer_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.Get_DebugTextBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_MatchmakingScreenTest_C::Get_DebugTextBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.Get_DebugTextBox_Visibility_1");

	UBP_MatchmakingScreenTest_C_Get_DebugTextBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsPlayerPartyLeader
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLeader                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::IsPlayerPartyLeader(bool* IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsPlayerPartyLeader");

	UBP_MatchmakingScreenTest_C_IsPlayerPartyLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLeader != nullptr)
		*IsLeader = params.IsLeader;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.DebugSearch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::DebugSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.DebugSearch");

	UBP_MatchmakingScreenTest_C_DebugSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.DebugServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     SearchResult                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSteamID                LobbyID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           HasAuthority                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::DebugServer(const struct FServerSearchResult& SearchResult, const struct FSteamID& LobbyID, bool HasAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.DebugServer");

	UBP_MatchmakingScreenTest_C_DebugServer_Params params;
	params.SearchResult = SearchResult;
	params.LobbyID = LobbyID;
	params.HasAuthority = HasAuthority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.AddDebugMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MatchmakingScreenTest_C::AddDebugMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.AddDebugMessage");

	UBP_MatchmakingScreenTest_C_AddDebugMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.HasPlayerSearchAuthority
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAuthority                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::HasPlayerSearchAuthority(bool* HasAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.HasPlayerSearchAuthority");

	UBP_MatchmakingScreenTest_C_HasPlayerSearchAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAuthority != nullptr)
		*HasAuthority = params.HasAuthority;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsServerValidForLobby
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     SearchResult                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSteamID                LobbyID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLobbySearchResult      Lobby                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::IsServerValidForLobby(const struct FServerSearchResult& SearchResult, const struct FSteamID& LobbyID, const struct FLobbySearchResult& Lobby, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.IsServerValidForLobby");

	UBP_MatchmakingScreenTest_C_IsServerValidForLobby_Params params;
	params.SearchResult = SearchResult;
	params.LobbyID = LobbyID;
	params.Lobby = Lobby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.GetSelectedGameModes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         GameModes                      (Parm, OutParm, ZeroConstructor)

void UBP_MatchmakingScreenTest_C::GetSelectedGameModes(TArray<struct FString>* GameModes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.GetSelectedGameModes");

	UBP_MatchmakingScreenTest_C_GetSelectedGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameModes != nullptr)
		*GameModes = params.GameModes;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.CanPlayerSearch
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanSearch                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::CanPlayerSearch(bool* bCanSearch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.CanPlayerSearch");

	UBP_MatchmakingScreenTest_C_CanPlayerSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanSearch != nullptr)
		*bCanSearch = params.bCanSearch;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D9516967E308B6E
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_5219C1A144240B4C4D9516967E308B6E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D9516967E308B6E");

	UBP_MatchmakingScreenTest_C_OnFailure_5219C1A144240B4C4D9516967E308B6E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D9516967E308B6E
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_5219C1A144240B4C4D9516967E308B6E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D9516967E308B6E");

	UBP_MatchmakingScreenTest_C_OnSuccess_5219C1A144240B4C4D9516967E308B6E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282BF0DA889
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_001AECF4410F30DE4CB79282BF0DA889()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282BF0DA889");

	UBP_MatchmakingScreenTest_C_OnFailure_001AECF4410F30DE4CB79282BF0DA889_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282BF0DA889
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_001AECF4410F30DE4CB79282BF0DA889()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282BF0DA889");

	UBP_MatchmakingScreenTest_C_OnSuccess_001AECF4410F30DE4CB79282BF0DA889_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D95169668B1D8E7
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_5219C1A144240B4C4D95169668B1D8E7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D95169668B1D8E7");

	UBP_MatchmakingScreenTest_C_OnFailure_5219C1A144240B4C4D95169668B1D8E7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D95169668B1D8E7
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_5219C1A144240B4C4D95169668B1D8E7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D95169668B1D8E7");

	UBP_MatchmakingScreenTest_C_OnSuccess_5219C1A144240B4C4D95169668B1D8E7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_183A0328473B20ED0AAA0C9FD89E5524
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnFailure_183A0328473B20ED0AAA0C9FD89E5524(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_183A0328473B20ED0AAA0C9FD89E5524");

	UBP_MatchmakingScreenTest_C_OnFailure_183A0328473B20ED0AAA0C9FD89E5524_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_183A0328473B20ED0AAA0C9FD89E5524
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnSuccess_183A0328473B20ED0AAA0C9FD89E5524(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_183A0328473B20ED0AAA0C9FD89E5524");

	UBP_MatchmakingScreenTest_C_OnSuccess_183A0328473B20ED0AAA0C9FD89E5524_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_92F8AFB047349681EC3D84AE3C02D714
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnFailure_92F8AFB047349681EC3D84AE3C02D714(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_92F8AFB047349681EC3D84AE3C02D714");

	UBP_MatchmakingScreenTest_C_OnFailure_92F8AFB047349681EC3D84AE3C02D714_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_92F8AFB047349681EC3D84AE3C02D714
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnSuccess_92F8AFB047349681EC3D84AE3C02D714(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_92F8AFB047349681EC3D84AE3C02D714");

	UBP_MatchmakingScreenTest_C_OnSuccess_92F8AFB047349681EC3D84AE3C02D714_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282B76C04AB
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_001AECF4410F30DE4CB79282B76C04AB()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282B76C04AB");

	UBP_MatchmakingScreenTest_C_OnFailure_001AECF4410F30DE4CB79282B76C04AB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282B76C04AB
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_001AECF4410F30DE4CB79282B76C04AB()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282B76C04AB");

	UBP_MatchmakingScreenTest_C_OnSuccess_001AECF4410F30DE4CB79282B76C04AB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282BD7DF700
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_001AECF4410F30DE4CB79282BD7DF700()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_001AECF4410F30DE4CB79282BD7DF700");

	UBP_MatchmakingScreenTest_C_OnFailure_001AECF4410F30DE4CB79282BD7DF700_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282BD7DF700
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_001AECF4410F30DE4CB79282BD7DF700()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_001AECF4410F30DE4CB79282BD7DF700");

	UBP_MatchmakingScreenTest_C_OnSuccess_001AECF4410F30DE4CB79282BD7DF700_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D9516966AC1876E
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_5219C1A144240B4C4D9516966AC1876E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_5219C1A144240B4C4D9516966AC1876E");

	UBP_MatchmakingScreenTest_C_OnFailure_5219C1A144240B4C4D9516966AC1876E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D9516966AC1876E
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_5219C1A144240B4C4D9516966AC1876E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_5219C1A144240B4C4D9516966AC1876E");

	UBP_MatchmakingScreenTest_C_OnSuccess_5219C1A144240B4C4D9516966AC1876E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_36C033B34169C06C39A46EBC27AA1E84
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLobbySearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnFailure_36C033B34169C06C39A46EBC27AA1E84(TArray<struct FLobbySearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_36C033B34169C06C39A46EBC27AA1E84");

	UBP_MatchmakingScreenTest_C_OnFailure_36C033B34169C06C39A46EBC27AA1E84_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_36C033B34169C06C39A46EBC27AA1E84
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLobbySearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnSuccess_36C033B34169C06C39A46EBC27AA1E84(TArray<struct FLobbySearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_36C033B34169C06C39A46EBC27AA1E84");

	UBP_MatchmakingScreenTest_C_OnSuccess_36C033B34169C06C39A46EBC27AA1E84_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_E1B7DB544D09C468395A298548F2604D
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_E1B7DB544D09C468395A298548F2604D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_E1B7DB544D09C468395A298548F2604D");

	UBP_MatchmakingScreenTest_C_OnFailure_E1B7DB544D09C468395A298548F2604D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_E1B7DB544D09C468395A298548F2604D
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_E1B7DB544D09C468395A298548F2604D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_E1B7DB544D09C468395A298548F2604D");

	UBP_MatchmakingScreenTest_C_OnSuccess_E1B7DB544D09C468395A298548F2604D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_75685C274259E866CB9F2EB0C8C6505F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnFailure_75685C274259E866CB9F2EB0C8C6505F(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_75685C274259E866CB9F2EB0C8C6505F");

	UBP_MatchmakingScreenTest_C_OnFailure_75685C274259E866CB9F2EB0C8C6505F_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_75685C274259E866CB9F2EB0C8C6505F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnSuccess_75685C274259E866CB9F2EB0C8C6505F(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_75685C274259E866CB9F2EB0C8C6505F");

	UBP_MatchmakingScreenTest_C_OnSuccess_75685C274259E866CB9F2EB0C8C6505F_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_CADA336048BEBC13E2D0F988661A425A
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_CADA336048BEBC13E2D0F988661A425A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_CADA336048BEBC13E2D0F988661A425A");

	UBP_MatchmakingScreenTest_C_OnFailure_CADA336048BEBC13E2D0F988661A425A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_CADA336048BEBC13E2D0F988661A425A
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_CADA336048BEBC13E2D0F988661A425A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_CADA336048BEBC13E2D0F988661A425A");

	UBP_MatchmakingScreenTest_C_OnSuccess_CADA336048BEBC13E2D0F988661A425A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_535108584BA7A7DFB6114997CC75E028
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_535108584BA7A7DFB6114997CC75E028()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_535108584BA7A7DFB6114997CC75E028");

	UBP_MatchmakingScreenTest_C_OnFailure_535108584BA7A7DFB6114997CC75E028_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_535108584BA7A7DFB6114997CC75E028
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_535108584BA7A7DFB6114997CC75E028()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_535108584BA7A7DFB6114997CC75E028");

	UBP_MatchmakingScreenTest_C_OnSuccess_535108584BA7A7DFB6114997CC75E028_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_41F9B43B446F2EB73CA65FA60E9E1F12
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_41F9B43B446F2EB73CA65FA60E9E1F12()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_41F9B43B446F2EB73CA65FA60E9E1F12");

	UBP_MatchmakingScreenTest_C_OnFailure_41F9B43B446F2EB73CA65FA60E9E1F12_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_41F9B43B446F2EB73CA65FA60E9E1F12
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_41F9B43B446F2EB73CA65FA60E9E1F12()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_41F9B43B446F2EB73CA65FA60E9E1F12");

	UBP_MatchmakingScreenTest_C_OnSuccess_41F9B43B446F2EB73CA65FA60E9E1F12_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_4A04F7DD47F85B488D7272BBFC905448
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_4A04F7DD47F85B488D7272BBFC905448()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_4A04F7DD47F85B488D7272BBFC905448");

	UBP_MatchmakingScreenTest_C_OnFailure_4A04F7DD47F85B488D7272BBFC905448_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_4A04F7DD47F85B488D7272BBFC905448
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_4A04F7DD47F85B488D7272BBFC905448()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_4A04F7DD47F85B488D7272BBFC905448");

	UBP_MatchmakingScreenTest_C_OnSuccess_4A04F7DD47F85B488D7272BBFC905448_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_950216D646440111EC1B9FB75DF1BA1F
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_950216D646440111EC1B9FB75DF1BA1F()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_950216D646440111EC1B9FB75DF1BA1F");

	UBP_MatchmakingScreenTest_C_OnFailure_950216D646440111EC1B9FB75DF1BA1F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_950216D646440111EC1B9FB75DF1BA1F
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_950216D646440111EC1B9FB75DF1BA1F()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_950216D646440111EC1B9FB75DF1BA1F");

	UBP_MatchmakingScreenTest_C_OnSuccess_950216D646440111EC1B9FB75DF1BA1F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_B2E0FB85491E9BC9A0E0159E3B42B46A
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_B2E0FB85491E9BC9A0E0159E3B42B46A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_B2E0FB85491E9BC9A0E0159E3B42B46A");

	UBP_MatchmakingScreenTest_C_OnFailure_B2E0FB85491E9BC9A0E0159E3B42B46A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_B2E0FB85491E9BC9A0E0159E3B42B46A
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_B2E0FB85491E9BC9A0E0159E3B42B46A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_B2E0FB85491E9BC9A0E0159E3B42B46A");

	UBP_MatchmakingScreenTest_C_OnSuccess_B2E0FB85491E9BC9A0E0159E3B42B46A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_32FB6D604A1AED3993672C868973F387
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_32FB6D604A1AED3993672C868973F387()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_32FB6D604A1AED3993672C868973F387");

	UBP_MatchmakingScreenTest_C_OnFailure_32FB6D604A1AED3993672C868973F387_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_32FB6D604A1AED3993672C868973F387
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_32FB6D604A1AED3993672C868973F387()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_32FB6D604A1AED3993672C868973F387");

	UBP_MatchmakingScreenTest_C_OnSuccess_32FB6D604A1AED3993672C868973F387_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_A0E667AD49FCDEC6F12F1CAFB29B3105
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnFailure_A0E667AD49FCDEC6F12F1CAFB29B3105(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_A0E667AD49FCDEC6F12F1CAFB29B3105");

	UBP_MatchmakingScreenTest_C_OnFailure_A0E667AD49FCDEC6F12F1CAFB29B3105_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_A0E667AD49FCDEC6F12F1CAFB29B3105
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnSuccess_A0E667AD49FCDEC6F12F1CAFB29B3105(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_A0E667AD49FCDEC6F12F1CAFB29B3105");

	UBP_MatchmakingScreenTest_C_OnSuccess_A0E667AD49FCDEC6F12F1CAFB29B3105_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_2F562B9848CBDAA052591FAB6339CF1F
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnFailure_2F562B9848CBDAA052591FAB6339CF1F()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnFailure_2F562B9848CBDAA052591FAB6339CF1F");

	UBP_MatchmakingScreenTest_C_OnFailure_2F562B9848CBDAA052591FAB6339CF1F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_2F562B9848CBDAA052591FAB6339CF1F
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::OnSuccess_2F562B9848CBDAA052591FAB6339CF1F()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSuccess_2F562B9848CBDAA052591FAB6339CF1F");

	UBP_MatchmakingScreenTest_C_OnSuccess_2F562B9848CBDAA052591FAB6339CF1F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchmakingScreenTest_C::BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchmakingScreenTest_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.UpdateWidgets
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::UpdateWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.UpdateWidgets");

	UBP_MatchmakingScreenTest_C_UpdateWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.Construct");

	UBP_MatchmakingScreenTest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.StartSearch
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::StartSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.StartSearch");

	UBP_MatchmakingScreenTest_C_StartSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.CancelSearch
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::CancelSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.CancelSearch");

	UBP_MatchmakingScreenTest_C_CancelSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.StartSearchTimer
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::StartSearchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.StartSearchTimer");

	UBP_MatchmakingScreenTest_C_StartSearchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.FindMatchmakingSessions
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::FindMatchmakingSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.FindMatchmakingSessions");

	UBP_MatchmakingScreenTest_C_FindMatchmakingSessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	UBP_MatchmakingScreenTest_C_BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.UpdatePartyValues
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingScreenTest_C::UpdatePartyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.UpdatePartyValues");

	UBP_MatchmakingScreenTest_C_UpdatePartyValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::OnSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnSelectionChanged");

	UBP_MatchmakingScreenTest_C_OnSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnPartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamID>        PartyMembers                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchmakingScreenTest_C::OnPartyUpdated(TArray<struct FSteamID> PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.OnPartyUpdated");

	UBP_MatchmakingScreenTest_C_OnPartyUpdated_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.ExecuteUbergraph_BP_MatchmakingScreenTest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingScreenTest_C::ExecuteUbergraph_BP_MatchmakingScreenTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C.ExecuteUbergraph_BP_MatchmakingScreenTest");

	UBP_MatchmakingScreenTest_C_ExecuteUbergraph_BP_MatchmakingScreenTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
