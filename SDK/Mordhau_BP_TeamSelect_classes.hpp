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

// WidgetBlueprintGeneratedClass BP_TeamSelect.BP_TeamSelect_C
// 0x0000 (0x0208 - 0x0208)
class UBP_TeamSelect_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_TeamSelect.BP_TeamSelect_C");
		return ptr;
	}


	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void Hide();
	void GetMapName(struct FString* NewParam);
	void GetGameModeName(struct FText* Text);
	void Show();
	void SelectTeam(int Team);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
