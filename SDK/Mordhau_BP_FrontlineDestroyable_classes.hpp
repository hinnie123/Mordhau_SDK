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

// BlueprintGeneratedClass BP_FrontlineDestroyable.BP_FrontlineDestroyable_C
// 0x0040 (0x0570 - 0x0530)
class ABP_FrontlineDestroyable_C : public ABP_DestroyableActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_CapturePoint_C*                          CapturePoint;                                             // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AMordhauPlayerController*                    LastDamagedByPlayerController;                            // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreAwardedPerDestroy;                                   // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	class UParticleSystem*                             FinalMeshChangeParticle;                                  // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoreDamageMultiplier;                                    // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamagePerHit;                                          // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CapturePointObjectivesCompleted;                          // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0569(0x0003) MISSED OFFSET
	float                                              ObjectiveWeight;                                          // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineDestroyable.BP_FrontlineDestroyable_C");
		return ptr;
	}


	void GetObjectiveProgress(float* Progress);
	void UpdateUIWidgets();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* InCapturePoint);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnReplicatedHealthChanged();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnUpdateUIWidgets();
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnAnyObjectiveProgressChanged();
	void ExecuteUbergraph_BP_FrontlineDestroyable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
