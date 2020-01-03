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

// BlueprintGeneratedClass BP_Catapult.BP_Catapult_C
// 0x00D0 (0x0E70 - 0x0DA0)
class ABP_Catapult_C : public AMordhauWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DA0(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           NavObstacle2;                                             // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           NavObstacle1;                                             // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Projectile;                                               // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           BackCapsule;                                              // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      State;                                                    // 0x0DD8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ReplicatedArm;                                            // 0x0DD9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0DDA(0x0002) MISSED OFFSET
	float                                              ArmTarget;                                                // 0x0DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StageRemainingTime;                                       // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StageTotalTime;                                           // 0x0DE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmFrom;                                                  // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DEC(0x0004) MISSED OFFSET
	class AController*                                 FiredController;                                          // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadedArmMin;                                             // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastMouseWheelUpTime;                                     // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastMouseWheelDownTime;                                   // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0E04(0x0004) MISSED OFFSET
	class UAudioComponent*                             LastArmPullSound;                                         // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LastArmTarget;                                            // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E14(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FireProjectileClass;                                      // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fire;                                                     // 0x0E28(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0E29(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    FireEffectParticleComponent;                              // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FireEffectAudioComponent;                                 // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTransform                                  FireProjectileTransform;                                  // 0x0E40(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Catapult.BP_Catapult_C");
		return ptr;
	}


	void ClearFireEffects();
	void OnRep_Fire();
	struct FPOV PostProcessCameraPOV(struct FPOV* InPOV);
	void AdjustArm(int Delta);
	void OnRep_State();
	void UserConstructionScript();
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void UpdateFPCameraFor(class AMordhauCharacter** Character, float* DeltaSeconds, bool* bRotationOnly);
	void FireCatapult();
	void ReceiveUnpossessed(class AController** OldController);
	void BPLODTick(float* DeltaTime);
	void RaiseArm();
	void LowerArm();
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent);
	void InpAxisEvt_Move_Right_K2Node_InputAxisEvent_21(float AxisValue);
	void InpAxisEvt_Look_Up_K2Node_InputAxisEvent_36(float AxisValue);
	void InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_7(float AxisValue);
	void ReceiveBeginPlay();
	void OnStartedDriving(class AMordhauCharacter** Character);
	void OnStoppedDriving(class AMordhauCharacter** Character);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Catapult(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
