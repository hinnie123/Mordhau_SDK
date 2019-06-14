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

// BlueprintGeneratedClass BP_MordhauPlayerController.BP_MordhauPlayerController_C
// 0x0148 (0x0B90 - 0x0A48)
class ABP_MordhauPlayerController_C : public AMordhauPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A48(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BloodOverlayMI;                                           // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_MordhauHUD_C*                            HUD;                                                      // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeToBlackCounter;                                       // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A6C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FadeToBlackCurve;                                         // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           OutlineMI;                                                // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DeathMI;                                                  // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WantsFadeToBlack;                                         // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	float                                              BloodOverlayTarget;                                       // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LastAnnouncement;                                         // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LowStaminaVignetteExtra;                                  // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaOverlayTarget;                                     // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseVignetteAmount;                                       // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaOverlay;                                           // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LowStaminaOverlayCurve;                                   // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowStaminaGrainExtra;                                     // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SaturationTarget;                                         // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Saturation;                                               // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               QueueShowTeamSelect;                                      // 0x0AC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AC5(0x0003) MISSED OFFSET
	TArray<class UBP_ChoiceMenu_C*>                    ChoiceMenuStack;                                          // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SmokeOverlay;                                             // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SmokeOverlayMI;                                           // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmokeOverlayTarget;                                       // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    OnFireOverlayMI;                                          // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnFireTarget;                                             // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearFireTarget;                                           // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnFire;                                                   // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearFire;                                                 // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FArrayOfActor>           PlaceableArrays;                                          // 0x0B08(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SpawnedWithToolbox;                                       // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0B59(0x0007) MISSED OFFSET
	class AMordhauPlayerState*                         QueuedKiller;                                             // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              QueuedKillerTime;                                         // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0B6C(0x0004) MISSED OFFSET
	TArray<class ABP_AmmoBox_C*>                       Ammoboxes;                                                // 0x0B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	unsigned char                                      ReplicatedAmmoBoxCooldown;                                // 0x0B80(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AmmoBoxesOnCooldown;                                      // 0x0B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0B82(0x0002) MISSED OFFSET
	float                                              NextAmmoBoxAvailableTime;                                 // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableTeamSelection;                                     // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0B89(0x0003) MISSED OFFSET
	float                                              LastVoteKickStartTime;                                    // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauPlayerController.BP_MordhauPlayerController_C");
		return ptr;
	}


	void OnRep_ReplicatedAmmoBoxCooldown();
	void WipePlaceables(const struct FName& Key);
	void RemoveFromPlaceableArray(const struct FName& NameKey, class AActor* Object);
	void PlaceInPlaceableArray(const struct FName& NameKey, class AActor* ToPlace, int MaxOfSame, class AActor** RemovedActor);
	void ChangeFireOverlay(float NewOnFireValue, float NewNearFireValue);
	void ChangeSmokeOverlay(float NewValue);
	void UpdateViewTargetEffects();
	void ChangeFadeToBlackCounter(float NewValue);
	void UserConstructionScript();
	void InpActEvt_Show_Main_Menu_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Show_Chat_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Show_Team_Select_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Show_Team_Chat_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Battlecry_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Mute_Target_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Vote_Yes_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Vote_No_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Toggle_UI_Markers_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void RequestChatMessage(const struct FString& Message, bool Team);
	void OnHighlightStart(class AActor** Actor);
	void OnHighlightEnd(class AActor** Actor);
	void OnSpectatorAction(unsigned char* Action);
	void DisplayMessage(class APlayerState** SenderPlayerState, struct FString* S, struct FName* Type, float* MsgLifeTime);
	void ShowEquipment();
	void ShowTips();
	void ChoiceMenuOptionSelected(int* Choice);
	void ClientReceiveScoreBP(EScoreFeedReason* Reason, unsigned char* ReasonParam, float* ScoreAmount, class AMordhauPlayerState** AssociatedPlayer);
	void OnAfterPossess(class APawn** APawn);
	void OnActionFailed(struct FName* Reason);
	void ReceiveDestroyed();
	void OnMordhauCharacterSpawned(class AMordhauCharacter** SpawnedCharacter);
	void OnSpectatorCmd(struct FString* Cmd, struct FString* Param);
	void OnIsAnythingRestockableChanged();
	void OnAFKTimeExceededMaximum();
	void PerformAFKKick();
	void OnAmmoChanged(class AMordhauEquipment** Equipment, int* AmmoDifference);
	void OnRequestVoteKick(class AMordhauPlayerState** TargetPlayer);
	void ServerRequestVoteKick(class AMordhauPlayerState* Player);
	void OnRequestCancelVoteKick();
	void ServerRequestCancelVoteKick();
	void ServerVoteKickVote(bool VotedYes);
	void ExecuteUbergraph_BP_MordhauPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
