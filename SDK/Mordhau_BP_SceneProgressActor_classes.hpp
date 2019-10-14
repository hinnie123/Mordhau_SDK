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

// BlueprintGeneratedClass BP_SceneProgressActor.BP_SceneProgressActor_C
// 0x0078 (0x03F0 - 0x0378)
class ABP_SceneProgressActor_C : public ABP_BaseProgressActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Holder;                                                   // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	struct FTransform                                  TargetTransform;                                          // 0x0390(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  StartTransform;                                           // 0x03C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SceneProgressActor.BP_SceneProgressActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ProgressUpdated(float* Progress);
	void ExecuteUbergraph_BP_SceneProgressActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
