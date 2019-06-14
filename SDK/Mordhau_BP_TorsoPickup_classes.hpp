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

// BlueprintGeneratedClass BP_TorsoPickup.BP_TorsoPickup_C
// 0x0008 (0x0500 - 0x04F8)
class ABP_TorsoPickup_C : public ABP_WearablePickup_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TorsoPickup.BP_TorsoPickup_C");
		return ptr;
	}


	void IsAnUpgrade(class ABP_BattleRoyaleCharacter_C** Char, bool* Value);
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void AssignToCharacter(class AMordhauCharacter** Character, class ACustomizationReplicationActor** CustomizatonReplicationActor);
	void ExecuteUbergraph_BP_TorsoPickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
