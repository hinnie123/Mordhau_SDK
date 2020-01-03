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

// BlueprintGeneratedClass BP_PaviseShield.BP_PaviseShield_C
// 0x0038 (0x1B90 - 0x1B58)
class ABP_PaviseShield_C : public ABP_MordhauShield_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B58(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               MovementBlocker;                                          // 0x1B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AController*                                 PlanterController;                                        // 0x1B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ReceivedDamage;                                           // 0x1B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageToDestroy;                                          // 0x1B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParryMaskUnplanted;                                       // 0x1B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ParryMaskPlanted;                                         // 0x1B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMordhauCharacter*                           PlanterCharacter;                                         // 0x1B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DestroySound;                                             // 0x1B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PaviseShield.BP_PaviseShield_C");
		return ptr;
	}


	bool CanHeldInteract(class AMordhauCharacter** Character);
	void HandleTakeDamage(float Damage);
	bool CanInteract(class AMordhauCharacter** Character);
	bool OnRequestFire(class AMordhauCharacter** Character);
	bool ShouldShine();
	void ValidatePlantSpot(const struct FVector& PlantLocation, const struct FRotator& CameraRotation1P, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent);
	void UserConstructionScript();
	void FireProjectile(struct FVector* Origin, struct FRotator* Orientation, class AController** OwningController, float* ExpectedDelay);
	void OnLoadedChanged();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void BndEvt__MovementBlocker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void PlanterDestroyed(class AAdvancedCharacter* Character);
	void PlanterDied(class AAdvancedCharacter* Character);
	void OnAmmoChanged();
	void OnHeldInteractionStart(class AMordhauCharacter** Character);
	void ExecuteUbergraph_BP_PaviseShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
