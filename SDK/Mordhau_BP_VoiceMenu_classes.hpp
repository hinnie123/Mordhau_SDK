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

// WidgetBlueprintGeneratedClass BP_VoiceMenu.BP_VoiceMenu_C
// 0x0018 (0x02B8 - 0x02A0)
class UBP_VoiceMenu_C : public UBP_ChoiceMenu_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	TArray<unsigned char>                              ChoicesToCommandIDs;                                      // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_VoiceMenu.BP_VoiceMenu_C");
		return ptr;
	}


	void DoVoiceCommand(int Index);
	void OptionChosen(int* Choice);
	void Show();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_BP_VoiceMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
