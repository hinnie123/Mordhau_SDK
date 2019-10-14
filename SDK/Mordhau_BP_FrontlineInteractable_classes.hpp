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

// BlueprintGeneratedClass BP_FrontlineInteractable.BP_FrontlineInteractable_C
// 0x0038 (0x04B8 - 0x0480)
class ABP_FrontlineInteractable_C : public AMordhauActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      Interactions;                                             // 0x0498(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      RequiredInteractions;                                     // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x049A(0x0006) MISSED OFFSET
	class ABP_CapturePoint_C*                          CapturePoint;                                             // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  ObjectiveIcon;                                            // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreAwardPerInteract;                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ObjectiveWeight;                                          // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineInteractable.BP_FrontlineInteractable_C");
		return ptr;
	}


	void GetObjectiveProgress(float* Progress);
	void UpdateUIWidgets();
	bool CanHeldInteract(class AMordhauCharacter** Character);
	bool CanInteract(class AMordhauCharacter** Character);
	void IncrementInteractions(class AMordhauPlayerController* Interactor);
	void OnRep_Interactions();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* CapturePoint);
	void Disable();
	void Activate();
	void UserConstructionScript();
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnUpdateUIWidgets();
	void OnInteractionsChanged();
	void ProgressVisualStage();
	void OnHeldInteractionStart(class AMordhauCharacter** Character);
	void OnAnyObjectiveProgressChanged();
	void ExecuteUbergraph_BP_FrontlineInteractable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
