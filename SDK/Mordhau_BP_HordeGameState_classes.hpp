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

// BlueprintGeneratedClass BP_HordeGameState.BP_HordeGameState_C
// 0x002B (0x073D - 0x0712)
class ABP_HordeGameState_C : public ABP_MordhauGameState_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0712(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (Transient, DuplicateTransient)
	struct FSTRUCT_HordeMatchInfo                      ReplicatedHordeMatchInfo;                                 // 0x0720(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class AActor*>                              Purchasables;                                             // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                PurchasableIndex;                                         // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      LastReplicatedEnemiesRemaining;                           // 0x073C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeGameState.BP_HordeGameState_C");
		return ptr;
	}


	void ShouldHideSpawnInfoText(bool* Hide);
	void OnRep_ReplicatedHordeMatchInfo();
	void UpdateNextPurchasableVisuals();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void HandleMatchEndInfo();
	void ExecuteUbergraph_BP_HordeGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
