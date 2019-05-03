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

// BlueprintGeneratedClass BP_WearablePickup.BP_WearablePickup_C
// 0x0088 (0x04E8 - 0x0460)
class ABP_WearablePickup_C : public ASkeletalMeshMordhauActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	TMap<EWearableSlot, struct FWearableCustomization> Wearables;                                                // 0x0468(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Tier;                                                     // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class USoundCue*                                   EquipSound;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMainWearableSlot                                  MainSlot;                                                 // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x04D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WearablePickup.BP_WearablePickup_C");
		return ptr;
	}


	void EquipIfUpgrade(class AMordhauCharacter* Char);
	void Equip(class AMordhauCharacter* Char);
	void IsAnUpgrade(class ABP_BattleRoyaleCharacter_C* Char, bool* Value);
	void AssignToCharacter(class AMordhauCharacter* Character, class ACustomizationReplicationActor* CustomizatonReplicationActor);
	void UserConstructionScript();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WearablePickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
