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

// BlueprintGeneratedClass BP_ProgressDriver.BP_ProgressDriver_C
// 0x007B (0x050C - 0x0491)
class ABP_ProgressDriver_C : public ABP_SwitchInteractable_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SmoothedValue;                                            // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    AnimatedMaterial;                                         // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RaiseSpeed;                                               // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowerSpeed;                                               // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             CurrentMovementSound;                                     // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class ABP_BaseProgressActor_C*>             TargetProgressActors;                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               CanInterruptRaising;                                      // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanInterruptLowering;                                     // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x04E2(0x0006) MISSED OFFSET
	TArray<class ABP_SlaveProgressDriver_C*>           SlaveCranks;                                              // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                AnimatedMaterialIndex;                                    // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostCurveSmoothedValue;                                   // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreventInteractRaised;                                    // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreventInteractLowered;                                   // 0x0509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoInteractRaised;                                       // 0x050A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoInteractLowered;                                      // 0x050B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProgressDriver.BP_ProgressDriver_C");
		return ptr;
	}


	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnValueToggled();
	void ExecuteUbergraph_BP_ProgressDriver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
