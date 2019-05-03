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

// WidgetBlueprintGeneratedClass BP_CustomizationTab.BP_CustomizationTab_C
// 0x00E4 (0x02EC - 0x0208)
class UBP_CustomizationTab_C : public UUserWidget
{
public:
	TArray<class UBP_CustomizationItemEntry_C*>        CustomizationItemEntries;                                 // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ItemChoosingOriginalId;                                   // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	struct FCharacterProfile                           ItemChoosingOriginalProfile;                              // 0x0220(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SelectionEntriesTitle;                                    // 0x02C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCharacterProfileBPWrapper*                  ProfileWrapper;                                           // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_ProfileCustomization_C*                  ProfileCustomization;                                     // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                SelectedId;                                               // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CustomizationTab.BP_CustomizationTab_C");
		return ptr;
	}


	void CreateSimpleItemEntries(int Selected, TArray<class UClass*>* Items, class UBP_CustomizationItemEntry_C** SelectedEntry);
	void ClearCustomizationItemEntries();
	void GetCustomizationPlatform(class ABP_MordhauCustomizationPlatform_C** Platform);
	void OnCharacterDollUpdated(class AMordhauCharacter* Character);
	void OnProfileChanged();
	void CompareItemEntries(class UBP_CustomizationItemEntry_C* A, class UBP_CustomizationItemEntry_C* B, bool* AIsLess);
	void SortItemEntries();
	void SetActive();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
