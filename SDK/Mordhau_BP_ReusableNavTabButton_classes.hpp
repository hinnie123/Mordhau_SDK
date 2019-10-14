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

// WidgetBlueprintGeneratedClass BP_ReusableNavTabButton.BP_ReusableNavTabButton_C
// 0x0579 (0x0781 - 0x0208)
class UBP_ReusableNavTabButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button;                                                   // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ButtonLabel;                                              // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_7;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       LabelText;                                                // 0x0228(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                LabelSelectedColor;                                       // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LabelDeselectedColor;                                     // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FButtonStyle                                SelectedButtonStyle;                                      // 0x0260(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                DeselectedButtonStyle;                                    // 0x04D8(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isSelected;                                               // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ButtonSelected;                                           // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector2D                                   ButtonSize;                                               // 0x0768(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FScriptMulticastDelegate                    ButtonDeselected;                                         // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               hasBeenVisited;                                           // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ReusableNavTabButton.BP_ReusableNavTabButton_C");
		return ptr;
	}


	void Deselect();
	void Select();
	void Construct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_BP_ReusableNavTabButton(int EntryPoint);
	void ButtonDeselected__DelegateSignature();
	void ButtonSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
