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

// BlueprintGeneratedClass BP_FrontlinePushable.BP_FrontlinePushable_C
// 0x0024 (0x0528 - 0x0504)
class ABP_FrontlinePushable_C : public ABP_SplinePushableActor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             AreaDecal;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_CapturePoint_C*                          CapturePoint;                                             // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlinePushable.BP_FrontlinePushable_C");
		return ptr;
	}


	void GetObjectiveProgress(float* Progress);
	void UpdateUIWidgets();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* CapturePoint);
	void UserConstructionScript();
	void OnProgressUpdated(float* OldProgress);
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnEnemyLostPrerequisites();
	void OnEnemyGainedPrerequisites();
	void OnUpdateUIWidgets();
	void PushableArrivedAtDestination();
	void ExecuteUbergraph_BP_FrontlinePushable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
