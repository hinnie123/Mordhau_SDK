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

// BlueprintGeneratedClass BP_TurdHordeBotProjectile.BP_TurdHordeBotProjectile_C
// 0x000C (0x08D0 - 0x08C4)
class ABP_TurdHordeBotProjectile_C : public ABP_TurdProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TurdHordeBotProjectile.BP_TurdHordeBotProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnProjectileHit(struct FVector* HitLocation, struct FVector* HitNormal, float* BounceForce, unsigned char* Surface, bool* bHasHitWorld, bool* bHasStopped);
	void ExecuteUbergraph_BP_TurdHordeBotProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
