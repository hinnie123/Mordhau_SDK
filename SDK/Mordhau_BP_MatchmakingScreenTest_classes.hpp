#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C
// 0x00AD (0x02B5 - 0x0208)
class UBP_MatchmakingScreenTest_C : public UBP_MenuContentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UBP_GameModeEntry_C*                         BP_BattleRoyaleGameModeEntry;                             // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_GameModeEntry_C*                         BP_FrontlineGameModeEntry;                                // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_GameModeEntry_C*                         BP_HordeGameModeEntry;                                    // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ButtonText;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMultiLineEditableTextBox*                   DebugTextBox;                                             // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      DownArrow;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UComboBoxText*                               RegionComboBox;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     SearchButton;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_MainMenu_C*                              MainMenu;                                                 // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsSearching;                                              // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UBP_MordhauGameInstance_C*                   GameInstance;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                SearchTimer;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SessionIdx;                                               // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	TArray<struct FLobbySearchResult>                  ServerlessLobbies;                                        // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PartySize;                                                // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPing;                                                  // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxResults;                                               // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPartyState                                        PartyState;                                               // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPartyReady;                                             // 0x0295(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0296(0x0002) MISSED OFFSET
	int                                                JoinFailures;                                             // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	TArray<struct FSteamID>                            BlacklistedLobbies;                                       // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ServerIdx;                                                // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJoining;                                                // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MatchmakingScreenTest.BP_MatchmakingScreenTest_C");
		return ptr;
	}


	void IsLobbyBlacklisted(const struct FSteamID& LobbyID, bool* bIsBlacklisted);
	void IsServerValidForPlayer(const struct FServerSearchResult& SearchResult, bool* bIsValid);
	ESlateVisibility Get_DebugTextBox_Visibility_1();
	void IsPlayerPartyLeader(bool* IsLeader);
	void DebugSearch();
	void DebugServer(const struct FServerSearchResult& SearchResult, const struct FSteamID& LobbyID, bool HasAuthority);
	void AddDebugMessage(const struct FString& Message);
	void HasPlayerSearchAuthority(bool* HasAuthority);
	void IsServerValidForLobby(const struct FServerSearchResult& SearchResult, const struct FSteamID& LobbyID, const struct FLobbySearchResult& Lobby, bool* bIsValid);
	void GetSelectedGameModes(TArray<struct FString>* GameModes);
	void CanPlayerSearch(bool* bCanSearch);
	void OnFailure_5219C1A144240B4C4D9516967E308B6E();
	void OnSuccess_5219C1A144240B4C4D9516967E308B6E();
	void OnFailure_001AECF4410F30DE4CB79282BF0DA889();
	void OnSuccess_001AECF4410F30DE4CB79282BF0DA889();
	void OnFailure_5219C1A144240B4C4D95169668B1D8E7();
	void OnSuccess_5219C1A144240B4C4D95169668B1D8E7();
	void OnFailure_183A0328473B20ED0AAA0C9FD89E5524(TArray<struct FServerSearchResult> Results);
	void OnSuccess_183A0328473B20ED0AAA0C9FD89E5524(TArray<struct FServerSearchResult> Results);
	void OnFailure_92F8AFB047349681EC3D84AE3C02D714(const struct FServerSearchResult& Result);
	void OnSuccess_92F8AFB047349681EC3D84AE3C02D714(const struct FServerSearchResult& Result);
	void OnFailure_001AECF4410F30DE4CB79282B76C04AB();
	void OnSuccess_001AECF4410F30DE4CB79282B76C04AB();
	void OnFailure_001AECF4410F30DE4CB79282BD7DF700();
	void OnSuccess_001AECF4410F30DE4CB79282BD7DF700();
	void OnFailure_5219C1A144240B4C4D9516966AC1876E();
	void OnSuccess_5219C1A144240B4C4D9516966AC1876E();
	void OnFailure_36C033B34169C06C39A46EBC27AA1E84(TArray<struct FLobbySearchResult> Results);
	void OnSuccess_36C033B34169C06C39A46EBC27AA1E84(TArray<struct FLobbySearchResult> Results);
	void OnFailure_E1B7DB544D09C468395A298548F2604D();
	void OnSuccess_E1B7DB544D09C468395A298548F2604D();
	void OnFailure_75685C274259E866CB9F2EB0C8C6505F(TArray<struct FServerSearchResult> Results);
	void OnSuccess_75685C274259E866CB9F2EB0C8C6505F(TArray<struct FServerSearchResult> Results);
	void OnFailure_CADA336048BEBC13E2D0F988661A425A();
	void OnSuccess_CADA336048BEBC13E2D0F988661A425A();
	void OnFailure_535108584BA7A7DFB6114997CC75E028();
	void OnSuccess_535108584BA7A7DFB6114997CC75E028();
	void OnFailure_41F9B43B446F2EB73CA65FA60E9E1F12();
	void OnSuccess_41F9B43B446F2EB73CA65FA60E9E1F12();
	void OnFailure_4A04F7DD47F85B488D7272BBFC905448();
	void OnSuccess_4A04F7DD47F85B488D7272BBFC905448();
	void OnFailure_950216D646440111EC1B9FB75DF1BA1F();
	void OnSuccess_950216D646440111EC1B9FB75DF1BA1F();
	void OnFailure_B2E0FB85491E9BC9A0E0159E3B42B46A();
	void OnSuccess_B2E0FB85491E9BC9A0E0159E3B42B46A();
	void OnFailure_32FB6D604A1AED3993672C868973F387();
	void OnSuccess_32FB6D604A1AED3993672C868973F387();
	void OnFailure_A0E667AD49FCDEC6F12F1CAFB29B3105(const struct FServerSearchResult& Result);
	void OnSuccess_A0E667AD49FCDEC6F12F1CAFB29B3105(const struct FServerSearchResult& Result);
	void OnFailure_2F562B9848CBDAA052591FAB6339CF1F();
	void OnSuccess_2F562B9848CBDAA052591FAB6339CF1F();
	void BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UpdateWidgets();
	void Construct();
	void StartSearch();
	void CancelSearch();
	void StartSearchTimer();
	void FindMatchmakingSessions();
	void BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void UpdatePartyValues();
	void OnSelectionChanged(bool bIsSelected);
	void OnPartyUpdated(TArray<struct FSteamID> PartyMembers);
	void ExecuteUbergraph_BP_MatchmakingScreenTest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
