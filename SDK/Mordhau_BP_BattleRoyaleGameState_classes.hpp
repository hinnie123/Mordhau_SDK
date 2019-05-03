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

// BlueprintGeneratedClass BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C
// 0x0015 (0x06C6 - 0x06B1)
class ABP_BattleRoyaleGameState_C : public ABP_MordhauGameState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B8(0x0008) (Transient, DuplicateTransient)
	float                                              RoundStartDuration;                                       // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Countdown;                                                // 0x06C4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PreviousCountdown;                                        // 0x06C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyaleGameState.BP_BattleRoyaleGameState_C");
		return ptr;
	}


	void IsInGetReady(bool* Result);
	void OnRep_Countdown();
	bool ShouldBlockPawnInput();
	void ShouldHideSpawnInfoText(bool* Hide);
	void UserConstructionScript();
	void HandleMatchEndInfo();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_BattleRoyaleGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
