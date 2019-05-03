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

// BlueprintGeneratedClass BP_MordhauCharacter.BP_MordhauCharacter_C
// 0x0020 (0x1B80 - 0x1B60)
class ABP_MordhauCharacter_C : public AMordhauCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B60(0x0008) (Transient, DuplicateTransient)
	class UThudderComponent*                           Thudder;                                                  // 0x1B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CharacterCameraComponent_C*              Camera;                                                   // 0x1B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BlockColliderBP;                                          // 0x1B78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauCharacter.BP_MordhauCharacter_C");
		return ptr;
	}


	void AddRagdollImpulse(const struct FVector& Impulse, const struct FVector& Location, const struct FName& bone);
	bool TryClimbing();
	void CalculateLedgeOffsetAndNormal(class UClimbingMotion** ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal);
	void AttemptClimb(bool* Succeeded);
	void FindClimbSpot(float UpwardsCast, bool* Succeeded, struct FVector* TargetSpot);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPLODTick(float* DeltaTime);
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent);
	void OnPostDismember(struct FName* bone, class ASeparatedBodyPart** SeparatedPart, class AActor** Agent);
	void BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature();
	void ReplicatedTripWithKnockback();
	void OnPostProfileAssigned();
	void ApplyRagdollForce(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void ServerSetClimbLocation(const struct FVector_NetQuantize& NewParam);
	void ExecuteUbergraph_BP_MordhauCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
