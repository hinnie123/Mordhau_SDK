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

// BlueprintGeneratedClass BP_Bow.BP_Bow_C
// 0x0008 (0x0CA0 - 0x0C98)
class ABP_Bow_C : public ABP_MissileEquipment_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C98(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bow.BP_Bow_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoadedChanged();
	void ReceiveBeginPlay();
	void UpdateEquipmentVisualState();
	void ExecuteUbergraph_BP_Bow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
