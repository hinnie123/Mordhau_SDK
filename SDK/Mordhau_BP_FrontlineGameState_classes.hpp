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

// BlueprintGeneratedClass BP_FrontlineGameState.BP_FrontlineGameState_C
// 0x0037 (0x06E8 - 0x06B1)
class ABP_FrontlineGameState_C : public ABP_MordhauGameState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B8(0x0008) (Transient, DuplicateTransient)
	float                                              TicketDrainInterval;                                      // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	TArray<int>                                        LivingPlayersPerTeam;                                     // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TicketDrainCounter;                                       // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TicketDrainAmount;                                        // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Team1StartingTickets;                                     // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Team2StartingTickets;                                     // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineGameState.BP_FrontlineGameState_C");
		return ptr;
	}


	void DrainTickets(class ABP_MordhauGameMode_C* GameMode);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void HandleMatchEndInfo();
	void LocalPlayerChangedTeam();
	void ExecuteUbergraph_BP_FrontlineGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
