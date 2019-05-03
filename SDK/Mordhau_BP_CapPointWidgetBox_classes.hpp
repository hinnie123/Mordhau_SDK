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

// WidgetBlueprintGeneratedClass BP_CapPointWidgetBox.BP_CapPointWidgetBox_C
// 0x0008 (0x0210 - 0x0208)
class UBP_CapPointWidgetBox_C : public UUserWidget
{
public:
	class UVerticalBox*                                VerticalBox_1;                                            // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CapPointWidgetBox.BP_CapPointWidgetBox_C");
		return ptr;
	}


	void Initialize(bool is_Base_Point, TArray<class AControlPoint*>* Points);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
