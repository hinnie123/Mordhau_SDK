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

// BlueprintGeneratedClass BP_MordhauHUD.BP_MordhauHUD_C
// 0x0129 (0x0559 - 0x0430)
class ABP_MordhauHUD_C : public AMordhauHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         Widgets;                                                  // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBP_HUDWidget_C*                             HUD;                                                      // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_Scoreboard_C*                            Scoreboard;                                               // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_ChatBox_C*                               ChatBox;                                                  // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_KillFeed_C*                              KillFeed;                                                 // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_StatusBar_C*                             StatusBar;                                                // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_MainMenu_C*                              MainMenu;                                                 // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsHUDMinimal;                                             // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UBP_Crosshair_C*                             Crosshair;                                                // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_TargetInfo_C*                            TargetInfo;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_ProfileSelect_C*                         ProfileSelect;                                            // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_TeamSelect_C*                            TeamSelect;                                               // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_EmoteMenu_C*                             EmoteMenu;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_Announcement_C*                          Announcement;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_Watermark_C*                             Watermark;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bShowWatermark;                                           // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	TArray<class UMordhauDialog*>                      QueuedDialogs;                                            // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMordhauDialog*                              CurrentDialog;                                            // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_EquipmentDisplay_C*                      EquipmentDisplay;                                         // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_SpawnInfo_C*                             SpawnInfo;                                                // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_NetIndicator_C*                          NetIndicator;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_Tips_C*                                  Tips;                                                     // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_ScoreFeed_C*                             ScoreFeed;                                                // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_EquipmentInfoDisplay_C*                  EquipmentInfoDisplay;                                     // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_MordhauCustomizationPlatform_C*          CustomizationPlatform;                                    // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_VoiceMenu_C*                             VoiceMenu;                                                // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_SpawnScreen_C*                           SpawnScreen;                                              // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_Objectives_C*                            Objectives;                                               // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_CapPointInfoPanelWidget_C*               CapPointInfoPanel;                                        // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_KilledByPanel_C*                         KilledByPanel;                                            // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      SpawnScreenWidgetClass;                                   // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_PostMatchScreen_C*                       PostMatchScreen;                                          // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_VoteKickMenu_C*                          VoteKickMenu;                                             // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               LoadedSingleton;                                          // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauHUD.BP_MordhauHUD_C");
		return ptr;
	}


	void HideVoteKickMenu();
	void ShowVoteKickMenu();
	void CreateVoteKickMenu();
	void ShowMatchResult(bool IsVictory, const struct FText& MainText, const struct FText& Subtext);
	void ShowPostMatchScreen();
	void CreatePostMatchScreen();
	void ShowKilledBy(class AMordhauPlayerState* Killer);
	void CreateKilledByPanelWidget();
	void ShowObjectiveWidget();
	void CreateObjectiveWidget(class UBP_Objectives_C** Widget);
	void HideSpawnScreen();
	void ShowSpawnScreen();
	void CreateSpawnScreen();
	void ShowVoiceMenu();
	void CreateVoiceMenu();
	void CreateEquipmentInfoDisplay();
	void CreateScoreFeed();
	void ShowTips();
	void CreateTips();
	void ShowEquipment();
	void CreateEquipmentDisplay();
	void CreateNetIndicator();
	void CreateSpawnInfo();
	void CreateMainMenu();
	void IsMainMenuVisible(bool* bIsVisible);
	void HideMainMenu();
	void ProcessQueuedDialogs();
	void EnqueueDialog(class UMordhauDialog* Dialog);
	void CreateWatermark();
	void ShowAnnouncement(const struct FText& Text, const struct FText& Subtext, float Duration);
	void CreateAnnouncement();
	void ShowEmoteMenu();
	void CreateEmoteMenu();
	void ShowTeamSelect();
	void CreateTeamSelect();
	void ShowProfileSelect();
	void CreateProfileSelect();
	void CreateChatBox();
	void CreateStatusBar();
	void CreateCrosshair();
	void CreateKillFeed();
	void CreateTargetInfo();
	void UseFullHUD();
	void UseMinimalHUD();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates> Armory_State);
	void SendMessageToKillFeed(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim);
	void SendMessageToChatbox(const struct FText& CharacterName, const struct FText& Message);
	void ShowChatBox(bool Team);
	void HideScoreboard();
	void ShowScoreboard();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Spawn_CustomizationPlatform();
	void EnqueueMordhauDialog(class UMordhauDialog** Dialog);
	void ExecuteUbergraph_BP_MordhauHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
