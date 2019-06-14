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

// BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C
// 0x0010 (0x04D8 - 0x04C8)
class ABP_AmmoBox_C : public ABP_LocalInteractableChest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C");
		return ptr;
	}


	void UpdateWidgetVisibilityOverride();
	bool CanInteract(class AMordhauCharacter** Character);
	void Restock(class AMordhauCharacter* Character);
	void UserConstructionScript();
	void AvailableInteractionStart(class AMordhauCharacter** Character);
	void Deplete(class APlayerState** PlayerState);
	void Refill();
	void ExecuteUbergraph_BP_AmmoBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
