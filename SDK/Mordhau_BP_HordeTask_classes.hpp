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

// BlueprintGeneratedClass BP_HordeTask.BP_HordeTask_C
// 0x0008 (0x0330 - 0x0328)
class ABP_HordeTask_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeTask.BP_HordeTask_C");
		return ptr;
	}


	void GetLocationTarget(class ABP_HordeEnemy_C* Character, struct FVector* Target);
	void IsTaskValidFor(class ABP_HordeEnemy_C* Character, bool* IsValid);
	void TaskTriggered(class ABP_HordeEnemy_C* Character);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
