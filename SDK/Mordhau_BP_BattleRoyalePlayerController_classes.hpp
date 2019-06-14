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

// BlueprintGeneratedClass BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C
// 0x0009 (0x0B99 - 0x0B90)
class ABP_BattleRoyalePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B90(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      PlacementPosition;                                        // 0x0B98(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C");
		return ptr;
	}


	void OnRep_PlacementPosition();
	void UserConstructionScript();
	void OnNewProfileFromClientPreValidation();
	void ShowBREndScreenDelayed();
	void ExecuteUbergraph_BP_BattleRoyalePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
