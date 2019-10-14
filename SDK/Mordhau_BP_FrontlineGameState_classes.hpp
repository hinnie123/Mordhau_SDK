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
// 0x004E (0x0760 - 0x0712)
class ABP_FrontlineGameState_C : public ABP_MordhauGameState_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0712(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (Transient, DuplicateTransient)
	float                                              TicketDrainInterval;                                      // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	TArray<int>                                        LivingPlayersPerTeam;                                     // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TicketDrainCounter;                                       // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TicketDrainAmount;                                        // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Team1StartingTickets;                                     // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Team2StartingTickets;                                     // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPushMode;                                               // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	float                                              StageEndTime;                                             // 0x074C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      AttackingTeam;                                            // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      DefendingTeam;                                            // 0x0751(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0752(0x0002) MISSED OFFSET
	float                                              InitialStageTime;                                         // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllObjectivesCompletedTime;                               // 0x0758(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushWinDelay;                                             // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	void TriggerWinDelayed();
	void ExecuteUbergraph_BP_FrontlineGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
