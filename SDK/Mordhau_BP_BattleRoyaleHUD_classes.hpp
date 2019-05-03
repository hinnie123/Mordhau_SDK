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

// BlueprintGeneratedClass BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C
// 0x001F (0x05B0 - 0x0591)
class ABP_BattleRoyaleHUD_C : public ABP_MordhauHUD_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (Transient, DuplicateTransient)
	class UBP_BattleRoyaleHUDWidget_C*                 BattleRoyaleHUDWidget;                                    // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_BattleRoyaleEndScreen_C*                 BattleRoyaleEndScreen;                                    // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C");
		return ptr;
	}


	void ShowBattleRoyaleEndScreen();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UseMinimalHUD();
	void UseFullHUD();
	void OnGameStateReplicated();
	void HideMainMenu();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates>* Armory_State);
	void ExecuteUbergraph_BP_BattleRoyaleHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
