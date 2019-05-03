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

// BlueprintGeneratedClass BP_LegsPickup.BP_LegsPickup_C
// 0x0008 (0x04F0 - 0x04E8)
class ABP_LegsPickup_C : public ABP_WearablePickup_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LegsPickup.BP_LegsPickup_C");
		return ptr;
	}


	void IsAnUpgrade(class ABP_BattleRoyaleCharacter_C** Char, bool* Value);
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void AssignToCharacter(class AMordhauCharacter** Character, class ACustomizationReplicationActor** CustomizatonReplicationActor);
	void ExecuteUbergraph_BP_LegsPickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
