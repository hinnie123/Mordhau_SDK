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
// 0x0118 (0x0320 - 0x0208)
class UBP_MatchmakingScreen_C : public UBP_MenuContentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UBP_GameModeEntry_C*                         BP_BattleRoyaleGameModeEntry;                             // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_GameModeEntry_C*                         BP_DuelGameModeEntry;                                     // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_GameModeEntry_C*                         BP_FrontlineGameModeEntry;                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_GameModeEntry_C*                         BP_HordeGameModeEntry;                                    // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_RankIcon_C*                              BP_RankIcon;                                              // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ButtonText;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_ReusableNavTabButton_C*                  CasualTab;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  CurrentRankMMRText;                                       // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  CurrentRankText;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMultiLineEditableTextBox*                   DebugTextBox;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_1;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_3;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMultiLineEditableTextBox*                   MultiLineEditableTextBox_1;                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_ReusableNavTabButton_C*                  RankedTab;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UComboBoxText*                               RegionComboBox;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     SearchButton;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_MainMenu_C*                              MainMenu;                                                 // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsSearching;                                              // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class UBP_MordhauGameInstance_C*                   GameInstance;                                             // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                SearchTimer;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SessionIdx;                                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	TArray<struct FLobbySearchResult>                  ServerlessLobbies;                                        // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PartySize;                                                // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxResults;                                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPartyState                                        PartyState;                                               // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPartyReady;                                             // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02DA(0x0002) MISSED OFFSET
	int                                                JoinFailures;                                             // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSteamID>                            BlacklistedLobbies;                                       // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ServerIdx;                                                // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJoining;                                                // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EServerRegion                                      LobbyRegion;                                              // 0x02F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02F6(0x0002) MISSED OFFSET
	struct FString                                     GameMode;                                                 // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsRankedTab;                                              // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	int                                                MaxMMRDiff;                                               // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxWaitCycles;                                            // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WaitCycles;                                               // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDateTime                                   SearchStartTime;                                          // 0x0318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MatchmakingScreen.BP_MatchmakingScreen_C");
		return ptr;
	}


	struct FText Get_CurrentRankMMRText_Text_1();
	struct FSlateColor Get_CurrentRankText_ColorAndOpacity_1();
	struct FText Get_CurrentRankText_Text_1();
	void SetMatchmakingGameModes(TArray<struct FString>* Input);
	void GetMatchmakingGameModes(TArray<struct FString>* Return_Value);
	bool Get_CasualTab_bIsEnabled_1();
	void IsLobbyBlacklisted(const struct FSteamID& LobbyId, bool* bIsBlacklisted);
	void IsServerValidForPlayer(const struct FServerSearchResult& SearchResult, bool* bIsValid);
	ESlateVisibility Get_DebugTextBox_Visibility_1();
	void IsPlayerPartyLeader(bool* IsLeader);
	void DebugSearch();
	void DebugServer(const struct FServerSearchResult& SearchResult, const struct FSteamID& LobbyId, bool HasAuthority);
	void AddDebugMessage(const struct FString& Message);
	void HasPlayerSearchAuthority(bool* HasAuthority);
	void IsServerValidForLobby(const struct FServerSearchResult& SearchResult, const struct FSteamID& LobbyId, const struct FLobbySearchResult& Lobby, bool* bIsValid);
	void GetSelectedGameModes(TArray<struct FString>* GameModes);
	void CanPlayerSearch(bool* bCanSearch);
	void OnFailure_5219C1A144240B4C4D9516969EF8AFE6();
	void OnSuccess_5219C1A144240B4C4D9516969EF8AFE6();
	void OnFailure_CF3BF4B34350ABBA5B709CAB8DD08EF3();
	void OnSuccess_CF3BF4B34350ABBA5B709CAB8DD08EF3();
	void OnFailure_C3D009A2448FDD3AF4DBAAA793208209();
	void OnSuccess_C3D009A2448FDD3AF4DBAAA793208209();
	void OnFailure_CF3BF4B34350ABBA5B709CAB90B242B4();
	void OnSuccess_CF3BF4B34350ABBA5B709CAB90B242B4();
	void OnFailure_C3D009A2448FDD3AF4DBAAA78E424E4E();
	void OnSuccess_C3D009A2448FDD3AF4DBAAA78E424E4E();
	void OnFailure_183A0328473B20ED0AAA0C9F5B8DCA57(TArray<struct FServerSearchResult> Results);
	void OnSuccess_183A0328473B20ED0AAA0C9F5B8DCA57(TArray<struct FServerSearchResult> Results);
	void OnFailure_001AECF4410F30DE4CB7928257A42023();
	void OnSuccess_001AECF4410F30DE4CB7928257A42023();
	void OnFailure_92F8AFB047349681EC3D84AEDCCAF39C(const struct FServerSearchResult& Result);
	void OnSuccess_92F8AFB047349681EC3D84AEDCCAF39C(const struct FServerSearchResult& Result);
	void OnFailure_4A04F7DD47F85B488D7272BBFC905448();
	void OnSuccess_4A04F7DD47F85B488D7272BBFC905448();
	void OnFailure_172C61C348390EAFE87BFF990AF8D445(TArray<struct FServerSearchResult> Results);
	void OnSuccess_172C61C348390EAFE87BFF990AF8D445(TArray<struct FServerSearchResult> Results);
	void OnFailure_2B3FD13E440DB5A2FE18339FEEDFA46A();
	void OnFull_2B3FD13E440DB5A2FE18339FEEDFA46A();
	void OnSuccess_2B3FD13E440DB5A2FE18339FEEDFA46A();
	void OnFailure_8E0D6DDA4E196C4EC73D18BF6DB3F22B(const struct FServerSearchResult& Result);
	void OnSuccess_8E0D6DDA4E196C4EC73D18BF6DB3F22B(const struct FServerSearchResult& Result);
	void OnFailure_07D688D243F2FD3D918664AF5494E771();
	void OnSuccess_07D688D243F2FD3D918664AF5494E771();
	void OnFailure_F7EDF144456F81F8DC282793736D2392();
	void OnSuccess_F7EDF144456F81F8DC282793736D2392();
	void OnFailure_D428F41A4B3A761D986543A992C0DDFC();
	void OnSuccess_D428F41A4B3A761D986543A992C0DDFC();
	void OnFailure_35E6694F4C39238BC2FAE4B9E22CCA8B(TArray<struct FLobbySearchResult> Results);
	void OnSuccess_35E6694F4C39238BC2FAE4B9E22CCA8B(TArray<struct FLobbySearchResult> Results);
	void OnFailure_8FD543D642D088A55649C69635DD3B45();
	void OnSuccess_8FD543D642D088A55649C69635DD3B45();
	void OnFailure_9F48DDC7411FE9CC9B9100BF7E576B5D();
	void OnSuccess_9F48DDC7411FE9CC9B9100BF7E576B5D();
	void OnFailure_3A8881084972C05913F558B81B7162B6();
	void OnSuccess_3A8881084972C05913F558B81B7162B6();
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
	void SwitchToRankedTab();
	void BndEvt__CasualTab_K2Node_ComponentBoundEvent_2_ButtonSelected__DelegateSignature();
	void BndEvt__RankedTab_K2Node_ComponentBoundEvent_3_ButtonSelected__DelegateSignature();
	void OnOkClicked();
	void ExecuteUbergraph_BP_MatchmakingScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
