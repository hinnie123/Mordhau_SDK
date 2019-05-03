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

// WidgetBlueprintGeneratedClass BP_MenuContentWidget.BP_MenuContentWidget_C
// 0x0000 (0x0208 - 0x0208)
class UBP_MenuContentWidget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MenuContentWidget.BP_MenuContentWidget_C");
		return ptr;
	}


	void OnHidden();
	void OnShown();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
