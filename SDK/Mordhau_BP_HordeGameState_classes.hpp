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
// 0x002C (0x06DD - 0x06B1)
class ABP_HordeGameState_C : public ABP_MordhauGameState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B8(0x0008) (Transient, DuplicateTransient)
	struct FSTRUCT_HordeMatchInfo                      ReplicatedHordeMatchInfo;                                 // 0x06C0(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class AActor*>                              Purchasables;                                             // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                PurchasableIndex;                                         // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      LastReplicatedEnemiesRemaining;                           // 0x06DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
