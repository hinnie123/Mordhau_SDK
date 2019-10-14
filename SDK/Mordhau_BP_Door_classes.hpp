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

// BlueprintGeneratedClass BP_Door.BP_Door_C
// 0x0084 (0x05B4 - 0x0530)
class ABP_Door_C : public ABP_DestroyableActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      DoorState;                                                // 0x0540(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	float                                              SmoothedDoorRotation;                                     // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothedDoorRotationTarget;                               // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothedDoorRotationSpeed;                                // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorYawOpenForward;                                       // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoorYawOpenBackward;                                      // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoorYawClosed;                                            // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoorOpenSpeed;                                            // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoorCloseSpeed;                                           // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoorOpenSpeedFast;                                        // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastCompletedDoorState;                                   // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      StartingState;                                            // 0x0569(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeKickedOpen;                                          // 0x056A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x056B(0x0001) MISSED OFFSET
	float                                              FastOpenStart;                                            // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectsThatPreventMovement;                               // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   UseSound;                                                 // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   CloseSound;                                               // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasBegunPlay;                                             // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	class USoundCue*                                   FastOpenStopSound;                                        // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanOpenForwards;                                          // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanOpenBackwards;                                         // 0x05A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x05A2(0x0006) MISSED OFFSET
	class AMordhauCharacter*                           Kicker;                                                   // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LastAIInteractTime;                                       // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Door.BP_Door_C");
		return ptr;
	}


	void GetDoorToActorAngle(class AActor* Actor, float* AngleDegrees);
	void GetDoorForwardVector(struct FVector* Out);
	void OnRep_DoorState();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ExecuteUbergraph_BP_Door(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
