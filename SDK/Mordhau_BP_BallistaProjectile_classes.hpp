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

// BlueprintGeneratedClass BP_BallistaProjectile.BP_BallistaProjectile_C
// 0x0015 (0x08D9 - 0x08C4)
class ABP_BallistaProjectile_C : public ABP_MordhauProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C8(0x0008) (Transient, DuplicateTransient)
	class UPhysicsHandleComponent*                     PhysicsHandle;                                            // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DoNotAttachToPawns;                                       // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BallistaProjectile.BP_BallistaProjectile_C");
		return ptr;
	}


	bool AttachProjectile(struct FHitResult* Hit);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnUsedToKillOther(class AAdvancedCharacter** Character, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source);
	void OnPostDismemberedOther(struct FName* bone, class ASeparatedBodyPart** Part);
	void OnProjectileHit(struct FVector* HitLocation, struct FVector* HitNormal, float* BounceForce, unsigned char* Surface, bool* bHasHitWorld, bool* bHasStopped);
	void ExecuteUbergraph_BP_BallistaProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
