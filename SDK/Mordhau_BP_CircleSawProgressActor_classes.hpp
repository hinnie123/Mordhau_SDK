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

// BlueprintGeneratedClass BP_CircleSawProgressActor.BP_CircleSawProgressActor_C
// 0x0030 (0x0420 - 0x03F0)
class ABP_CircleSawProgressActor_C : public ABP_SceneProgressActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               KillBox;                                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BlockingBox;                                              // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SawbladeSpark;                                          // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SC_CircleSaw;                                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Sawblade;                                                 // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CircleSawProgressActor.BP_CircleSawProgressActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__KillBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_CircleSawProgressActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
