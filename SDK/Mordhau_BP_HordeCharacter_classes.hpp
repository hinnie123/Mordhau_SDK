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

// BlueprintGeneratedClass BP_HordeCharacter.BP_HordeCharacter_C
// 0x0009 (0x1C31 - 0x1C28)
class ABP_HordeCharacter_C : public ABP_BattleRoyaleCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C28(0x0008) (Transient, DuplicateTransient)
	bool                                               AlreadyGaveDefaults;                                      // 0x1C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeCharacter.BP_HordeCharacter_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnArmorReplicated(EWearableSlot* Slot);
	void OnKilled(class AController** EventInstigator);
	void ExecuteUbergraph_BP_HordeCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
