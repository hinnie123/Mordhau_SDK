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

// BlueprintGeneratedClass BP_CapturePoint.BP_CapturePoint_C
// 0x00F7 (0x0537 - 0x0440)
class ABP_CapturePoint_C : public AControlPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CaptureAreaCollision;                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CapPointWidget_C*                        TopBar_Cap_Point_Widget;                                  // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CapPointTeamBaseWidget_C*                TopBar_Cap_Point_TeamBase_Widget;                         // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TScriptInterface<class UBP_FrontlineObjective_C>> Objectives;                                               // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_FrontlineDestroyable_C*>          Destroyables;                                             // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_ItemDeliverySpot_C*>              DeliverySpots;                                            // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_FrontlinePushable_C*>             Pushables;                                                // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_FrontlineInteractable_C*>         Interactables;                                            // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_FrontlineKillObjectiveWrapper_C*> Kill;                                                     // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              ObjectiveProgress;                                        // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class UBP_CapPointWidget_C*                        SpawnPointWidget;                                         // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_FloatingCapPointWidget_C*                FloaterWidget;                                            // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ShowAnnouncements;                                        // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       ObjectiveAttack;                                          // 0x04F8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ObjectiveDefend;                                          // 0x0510(0x0018) (Edit, BlueprintVisible)
	float                                              ObjectiveWinDelay;                                        // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPushPoint;                                              // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	float                                              ObjectiveBiasFactor;                                      // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ObjectivesCompleted;                                      // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashShouldOnlyPulse;                                     // 0x0535(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideOnSpawnScreen;                                        // 0x0536(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CapturePoint.BP_CapturePoint_C");
		return ptr;
	}


	void OnObjectivesCompleted();
	void ShowPushDefenderAnnouncement();
	void ShowPushAttackerAnnouncement();
	void ObjectivesChanged();
	void Set_Cap_Point_Widget_Colors(const struct FLinearColor& Fill_Color, const struct FLinearColor& Progress_Bar_Color);
	void GetTeamRelevance(unsigned char Team, int* Relevance);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnCapturingTeamChanged();
	void OnOwningTeamChanged();
	void EnemyGainedPrerequisites();
	void EnemyLostPrerequisites();
	void UpdateUIWidgets();
	void OnStartedFlashing();
	void OnStoppedFlashing();
	void TriggerWinDelayed();
	void Pulse();
	void ExecuteUbergraph_BP_CapturePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
