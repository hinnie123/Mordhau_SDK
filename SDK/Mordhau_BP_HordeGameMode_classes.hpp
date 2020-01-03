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

// BlueprintGeneratedClass BP_HordeGameMode.BP_HordeGameMode_C
// 0x0140 (0x066C - 0x052C)
class ABP_HordeGameMode_C : public ABP_MordhauGameMode_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (Transient, DuplicateTransient)
	TArray<class ABP_HordeAIController_C*>             AIControllers;                                            // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_HordeSpawn_C*>                    HordeSpawns;                                              // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Wave;                                                     // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasStarted;                                               // 0x055C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	float                                              WaveStartTime;                                            // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaveEnemySpawnOffset;                                     // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaveHasSpawned;                                           // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	TArray<struct FSTRUCT_HordeWaveInfo>               Waves;                                                    // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AAdvancedCharacter*>                  SpawnedEnemies;                                           // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                EnemiesRemaining;                                         // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	TMap<struct FName, struct FSTRUCT_HordeEnemyInfo>  EnemyDatabase;                                            // 0x0598(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FArrayOfActor>           EnemyVariantCustomizationActor;                           // 0x05E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DeadWaveCompletionMultiplier;                             // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamKillCoinPunishment;                                   // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ReceivedDamageByPlayerNum;                                // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_HordeGameConfiguration_C*                HordeGameConfiguration;                                   // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_HordeKillObjective_C*                    KillObjectiveCached;                                      // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_HordeTask_C*>                     HordeTasks;                                               // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                TotalAwardedGoldPerPlayer;                                // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeGameMode.BP_HordeGameMode_C");
		return ptr;
	}


	void TriggerDefeat();
	void SpawnEquipmentFor(class AMordhauCharacter* Char, TArray<class UClass*>* EquipList);
	void PrepareAIControllers();
	void SetupCustomizationReplicationActors();
	void ProgressWave();
	void StartHordeMatch();
	void SpawnWave();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnKilled(class AController** Killer, class AController** KilledPlayer, class APawn** KilledPawn, EMordhauDamageType* Type, unsigned char* SubType, class AActor** DamageSource, class AActor** DamageAgent);
	void K2_PostLogin(class APlayerController** NewPlayer);
	void ExecuteUbergraph_BP_HordeGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
