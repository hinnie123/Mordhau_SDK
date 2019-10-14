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

// WidgetBlueprintGeneratedClass BP_ModListEntry.BP_ModListEntry_C
// 0x0340 (0x0548 - 0x0208)
class UBP_ModListEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button;                                                   // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_24;                                             // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       Name;                                                     // 0x0230(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       Description;                                              // 0x0268(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Author;                                                   // 0x0280(0x0018) (Edit, BlueprintVisible)
	struct FModioMod                                   Mod;                                                      // 0x0298(0x02B0) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ModListEntry.BP_ModListEntry_C");
		return ptr;
	}


	void BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__sliderEntry_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_ModListEntry(int EntryPoint);
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature(class UBP_ModListEntry_C* Ref);
	void OnValueChanged__DelegateSignature(float Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
