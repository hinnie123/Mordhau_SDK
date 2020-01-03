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

// BlueprintGeneratedClass BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C
// 0x001C (0x0344 - 0x0328)
class ABP_FrontlineKillObjectiveWrapper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_FrontlineKillObjective_C*                KillObjective;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              Weight;                                                   // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C");
		return ptr;
	}


	void GetObjectiveProgress(float* Progress);
	void UserConstructionScript();
	void OnAnyObjectiveProgressChanged();
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnUpdateUIWidgets();
	void ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
