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

// BlueprintGeneratedClass BP_FrontlineObjective.BP_FrontlineObjective_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FrontlineObjective_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineObjective.BP_FrontlineObjective_C");
		return ptr;
	}


	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnUpdateUIWidgets();
	void OnEnemyLostPrerequisites();
	void OnEnemyGainedPrerequisites();
	void GetObjectiveProgress(float* Progress);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
