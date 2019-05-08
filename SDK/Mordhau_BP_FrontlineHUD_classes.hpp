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

// BlueprintGeneratedClass BP_FrontlineHUD.BP_FrontlineHUD_C
// 0x0017 (0x0570 - 0x0559)
class ABP_FrontlineHUD_C : public ABP_MordhauHUD_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	class UBP_FrontlineHUDWidget_C*                    FrontlineHUDWidget;                                       // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineHUD.BP_FrontlineHUD_C");
		return ptr;
	}


	void ShowObjectives();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UseMinimalHUD();
	void UseFullHUD();
	void OnGameStateReplicated();
	void HideMainMenu();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates>* Armory_State);
	void ExecuteUbergraph_BP_FrontlineHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
