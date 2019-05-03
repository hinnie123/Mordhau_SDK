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

// WidgetBlueprintGeneratedClass BP_CustomizationColorPicker.BP_CustomizationColorPicker_C
// 0x0040 (0x0248 - 0x0208)
class UBP_CustomizationColorPicker_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UBP_ColorPicker_C*                           BP_MordhauColorPicker;                                    // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClosed;                                                 // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CustomizationColorPicker.BP_CustomizationColorPicker_C");
		return ptr;
	}


	void SetColorsAndIndex(int Index, TArray<class UClass*>* Colors);
	void BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_2611_OnColorHovered__DelegateSignature(int Index);
	void BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4366_OnColorClicked__DelegateSignature(int Index);
	void BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4374_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex);
	void ExecuteUbergraph_BP_CustomizationColorPicker(int EntryPoint);
	void OnClosed__DelegateSignature(int Index);
	void OnHovered__DelegateSignature(int Index);
	void OnClicked__DelegateSignature(int ColorIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
