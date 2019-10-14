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

// BlueprintGeneratedClass BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C
// 0x0024 (0x1C28 - 0x1C04)
class ABP_BattleRoyaleCharacter_C : public ABP_MordhauCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1C04(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C08(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      HeadArmor;                                                // 0x1C10(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChestArmor;                                               // 0x1C18(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LegArmor;                                                 // 0x1C20(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyaleCharacter.BP_BattleRoyaleCharacter_C");
		return ptr;
	}


	void OnArmorReplicated(EWearableSlot Slot);
	void PlayWearablePickupSound(class UClass* Wearable);
	void OnRep_LegArmor();
	void OnRep_ChestArmor();
	void OnRep_HeadArmor();
	void SpawnArmorPiece(class UClass* WearablePickupClass);
	void UserConstructionScript();
	void OnKilled(class AController** EventInstigator);
	void ExecuteUbergraph_BP_BattleRoyaleCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
