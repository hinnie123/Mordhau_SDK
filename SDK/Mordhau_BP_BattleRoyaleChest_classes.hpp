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

// BlueprintGeneratedClass BP_BattleRoyaleChest.BP_BattleRoyaleChest_C
// 0x00E4 (0x05B4 - 0x04D0)
class ABP_BattleRoyaleChest_C : public ABP_BattleRoyaleBaseItemSpawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpawnPoint3;                                              // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpawnPoint2;                                              // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpawnPoint1;                                              // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             DestroyedParticles;                                       // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UClass*, float>                         SecondItemList;                                           // 0x0500(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UClass*, float>                         ThirdItemList;                                            // 0x0550(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ChestDestroyed;                                           // 0x05A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class USkeletalMesh*                               DestroyedRagdollMesh;                                     // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnTime;                                              // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyaleChest.BP_BattleRoyaleChest_C");
		return ptr;
	}


	void BreakChest(class AMordhauPlayerController* DestroyerPlayerController);
	void OnChestDestroyed();
	void OnRep_Destroyed();
	void SpawnContents(class AMordhauPlayerController* CustomizeFor);
	void UserConstructionScript();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void RespawnChest();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ExecuteUbergraph_BP_BattleRoyaleChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
