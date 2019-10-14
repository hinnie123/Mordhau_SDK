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

// BlueprintGeneratedClass BP_HelmetPickup.BP_HelmetPickup_C
// 0x0008 (0x0510 - 0x0508)
class ABP_HelmetPickup_C : public ABP_WearablePickup_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HelmetPickup.BP_HelmetPickup_C");
		return ptr;
	}


	void IsAnUpgrade(class ABP_BattleRoyaleCharacter_C** Char, bool* Value);
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void AssignToCharacter(class AMordhauCharacter** Character, class ACustomizationReplicationActor** CustomizatonReplicationActor);
	void ExecuteUbergraph_BP_HelmetPickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
