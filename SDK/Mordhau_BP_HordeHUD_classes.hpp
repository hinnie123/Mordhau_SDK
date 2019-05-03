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

// BlueprintGeneratedClass BP_HordeHUD.BP_HordeHUD_C
// 0x0017 (0x05A8 - 0x0591)
class ABP_HordeHUD_C : public ABP_MordhauHUD_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (Transient, DuplicateTransient)
	class UBP_HordeHUDWidget_C*                        HordeHUDWidget;                                           // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeHUD.BP_HordeHUD_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UseMinimalHUD();
	void UseFullHUD();
	void OnGameStateReplicated();
	void HideMainMenu();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates>* Armory_State);
	void ExecuteUbergraph_BP_HordeHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
