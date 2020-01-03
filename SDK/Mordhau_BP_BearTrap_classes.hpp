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

// BlueprintGeneratedClass BP_BearTrap.BP_BearTrap_C
// 0x0070 (0x0D30 - 0x0CC0)
class ABP_BearTrap_C : public AMordhauEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AController*                                 PlanterController;                                        // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeTime;                                                 // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0CDC(0x0004) MISSED OFFSET
	TArray<float>                                      DamageByArmorTier;                                        // 0x0CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DamageToHorse;                                            // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0CF4(0x0004) MISSED OFFSET
	class USoundCue*                                   TrapTriggerSound;                                         // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMordhauCharacter*                           PlanterCharacter;                                         // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrapsPerPlayer;                                        // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0D0C(0x0004) MISSED OFFSET
	struct FName                                       PlaceableLimitName;                                       // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ReactivateAmount;                                         // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReactivateDelay;                                          // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerState*                                PlanterState;                                             // 0x0D20(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMordhauWidgetComponent*                     TrapWidget;                                               // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BearTrap.BP_BearTrap_C");
		return ptr;
	}


	void OnRep_PlanterState();
	bool CanHeldInteract(class AMordhauCharacter** Character);
	bool ShouldShine();
	bool CanInteract(class AMordhauCharacter** Character);
	void DealDamage(class AAdvancedCharacter* Character);
	void ValidatePlantSpot(const struct FVector& CameraLocation1P, const struct FRotator& CameraRotattion1P, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent);
	bool OnRequestFire(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void OnLoadedChanged();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void FireProjectile(struct FVector* Origin, struct FRotator* Orientation, class AController** OwningController, float* ExpectedDelay);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnUsedToKillOther(class AAdvancedCharacter** Character, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source);
	void OnPostDismemberedOther(struct FName* bone, class ASeparatedBodyPart** Part);
	void OnAmmoChanged();
	void PlanterDied(class AAdvancedCharacter* Character);
	void PlanterDestroyed(class AAdvancedCharacter* Character);
	void OnInteractionStart(class AMordhauCharacter** Character);
	void OnHeldInteractionStart(class AMordhauCharacter** Character);
	void ExecuteUbergraph_BP_BearTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
