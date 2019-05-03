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

// WidgetBlueprintGeneratedClass BP_CustomizationItemEntry.BP_CustomizationItemEntry_C
// 0x0048 (0x0250 - 0x0208)
class UBP_CustomizationItemEntry_C : public UUserWidget
{
public:
	struct FText                                       Name;                                                     // 0x0208(0x0018) (Edit, BlueprintVisible)
	int                                                ID;                                                       // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHover;                                                  // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClick;                                                  // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Selected;                                                 // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	int                                                SortBias;                                                 // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CustomizationItemEntry.BP_CustomizationItemEntry_C");
		return ptr;
	}


	void Initialize();
	void OnClick__DelegateSignature(int ID);
	void OnHover__DelegateSignature(int ID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
