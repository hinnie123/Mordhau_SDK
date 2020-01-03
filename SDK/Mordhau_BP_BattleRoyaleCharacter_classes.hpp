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
// 0x0021 (0x1CA1 - 0x1C80)
class ABP_BattleRoyaleCharacter_C : public ABP_MordhauCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C80(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      HeadArmor;                                                // 0x1C88(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChestArmor;                                               // 0x1C90(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LegArmor;                                                 // 0x1C98(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropArmorOnDeath;                                         // 0x1CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
