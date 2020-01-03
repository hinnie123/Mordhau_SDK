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

// BlueprintGeneratedClass BP_CatapultProjectileFire.BP_CatapultProjectileFire_C
// 0x0008 (0x08D8 - 0x08D0)
class ABP_CatapultProjectileFire_C : public ABP_CatapultProjectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CatapultProjectileFire.BP_CatapultProjectileFire_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnProjectileHit(struct FVector* HitLocation, struct FVector* HitNormal, float* BounceForce, unsigned char* Surface, bool* bHasHitWorld, bool* bHasStopped);
	void ExecuteUbergraph_BP_CatapultProjectileFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
