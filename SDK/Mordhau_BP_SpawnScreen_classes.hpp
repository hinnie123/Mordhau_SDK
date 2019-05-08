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

// WidgetBlueprintGeneratedClass BP_SpawnScreen.BP_SpawnScreen_C
// 0x0028 (0x0230 - 0x0208)
class UBP_SpawnScreen_C : public UUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UBP_SpawnScreenPoint_C*>              SpawnScreenPoint;                                         // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBP_SpawnScreenIcon_C*>               SpawnScreenIcons;                                         // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpawnScreen.BP_SpawnScreen_C");
		return ptr;
	}


	void SetColor(class UImage* Image, TArray<struct FLinearColor> Team_Color_Array, unsigned char Team, class APlayerState* PlayerState);
	void UpdateSpawnScreenIcons();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void UpdateSpawnPointWidgets();
	void Hide();
	void Show();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
