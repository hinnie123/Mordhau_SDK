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

// WidgetBlueprintGeneratedClass BP_MatchmakingScreen.BP_MatchmakingScreen_C
// 0x00C0 (0x02C8 - 0x0208)
class UBP_MatchmakingScreen_C : public UBP_MenuContentWidget_C
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
	ERegion                                            LobbyRegion;                                              // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	struct FString                                     GameMode;                                                 // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MatchmakingScreen.BP_MatchmakingScreen_C");
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
	void OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E();
	void OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E();
	void OnFailure_CF3BF4B34350ABBA5B709CAB90B242B4();
	void OnSuccess_CF3BF4B34350ABBA5B709CAB90B242B4();
	void OnFailure_C3D009A2448FDD3AF4DBAAA793208209();
	void OnSuccess_C3D009A2448FDD3AF4DBAAA793208209();
	void OnFailure_CF3BF4B34350ABBA5B709CAB8DD08EF3();
	void OnSuccess_CF3BF4B34350ABBA5B709CAB8DD08EF3();
	void OnFailure_172C61C348390EAFE87BFF990AF8D445(TArray<struct FServerSearchResult> Results);
	void OnSuccess_172C61C348390EAFE87BFF990AF8D445(TArray<struct FServerSearchResult> Results);
	void OnFailure_4A04F7DD47F85B488D7272BBFC905448();
	void OnSuccess_4A04F7DD47F85B488D7272BBFC905448();
	void OnFailure_2B3FD13E440DB5A2FE18339FEEDFA46A();
	void OnFull_2B3FD13E440DB5A2FE18339FEEDFA46A();
	void OnSuccess_2B3FD13E440DB5A2FE18339FEEDFA46A();
	void OnFailure_8E0D6DDA4E196C4EC73D18BF6DB3F22B(const struct FServerSearchResult& Result);
	void OnSuccess_8E0D6DDA4E196C4EC73D18BF6DB3F22B(const struct FServerSearchResult& Result);
	void OnFailure_07D688D243F2FD3D918664AF5494E771();
	void OnSuccess_07D688D243F2FD3D918664AF5494E771();
	void BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void UpdatePartyValues();
	void FindMatchmakingSessions();
	void StartSearchTimer();
	void CancelSearch();
	void StartSearch();
	void Construct();
	void UpdateWidgets();
	void BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnSelectionChanged(bool bIsSelected);
	void OnPartyUpdated(TArray<struct FSteamID> PartyMembers);
	void ExecuteUbergraph_BP_MatchmakingScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
