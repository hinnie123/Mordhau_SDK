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

// WidgetBlueprintGeneratedClass BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C
// 0x0008 (0x0238 - 0x0230)
class UBP_FrontlineSpawnScreen_C : public UBP_SpawnScreen_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C");
		return ptr;
	}


	void ShowFrontlineSpawnScreen();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Show();
	void Hide();
	void ExecuteUbergraph_BP_FrontlineSpawnScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
