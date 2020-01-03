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

// BlueprintGeneratedClass BP_ItemDeliverySpot.BP_ItemDeliverySpot_C
// 0x0091 (0x0511 - 0x0480)
class ABP_ItemDeliverySpot_C : public AMordhauActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Area;                                                     // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      Deliverables;                                             // 0x04A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      RequiredDeliveries;                                       // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04A2(0x0006) MISSED OFFSET
	class ABP_CapturePoint_C*                          CapturePoint;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_ItemDeliverySpawn_C*>             DeliverySpawns;                                           // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              DeliveryProgressSpots;                                    // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class USoundCue*>                           DeliveryProgressSound;                                    // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UParticleSystem*>                     DeliveryProgressParticles;                                // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VisualStage;                                              // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxVisualStage;                                           // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DeliverySpotDeliverIcon;                                  // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreAwardPerDelivery;                                    // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FlipProgressBar;                                          // 0x0504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	float                                              ObjectiveWeight;                                          // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OriginalFlipProgressBar;                                  // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemDeliverySpot.BP_ItemDeliverySpot_C");
		return ptr;
	}


	void GetObjectiveProgress(float* Progress);
	void UpdateFlipProgressBarState();
	void UpdateFloater();
	void AnyObjectiveProgressChanged();
	void IsCapturePointDone(bool* IsDone);
	void ActivateSpawns();
	void DisableSpawns();
	void UpdateDeliverySpotVisuals();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* CapturePoint);
	void Disable(bool SlowDisable);
	void Activate();
	void OnRep_Deliverables();
	void UserConstructionScript();
	void BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnUpdateUIWidgets();
	void OnDeliverablesChanged();
	void ProgressVisualStage();
	void OnAnyObjectiveProgressChanged();
	void ExecuteUbergraph_BP_ItemDeliverySpot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
