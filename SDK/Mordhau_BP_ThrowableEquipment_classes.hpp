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

// BlueprintGeneratedClass BP_ThrowableEquipment.BP_ThrowableEquipment_C
// 0x0008 (0x0CC8 - 0x0CC0)
class ABP_ThrowableEquipment_C : public AMordhauEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ThrowableEquipment.BP_ThrowableEquipment_C");
		return ptr;
	}


	void UserConstructionScript();
	void AssignCustomizationToProjectile(class AMordhauProjectile** Projectile);
	void ExecuteUbergraph_BP_ThrowableEquipment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
