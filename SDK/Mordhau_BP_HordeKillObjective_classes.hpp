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

// BlueprintGeneratedClass BP_HordeKillObjective.BP_HordeKillObjective_C
// 0x00F8 (0x1D78 - 0x1C80)
class ABP_HordeKillObjective_C : public ABP_MordhauCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C80(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x1C88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              EquipmentToSpawn;                                         // 0x1C90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentPatrolIdx;                                         // 0x1CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1CA4(0x0004) MISSED OFFSET
	TArray<class ABP_FrontlinePatrolPoint_C*>          PatrolPoints;                                             // 0x1CA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UClass*                                      BehaviorProfile;                                          // 0x1CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_FrontlinePatrolPoint_C*                  HomePoint;                                                // 0x1CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              EngagementDistance2DFromHomePoint;                        // 0x1CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DefenseUpgrades;                                          // 0x1CCC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      OffenseUpgrades;                                          // 0x1CCD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x1CCE(0x0002) MISSED OFFSET
	TMap<int, class UClass*>                           WaveToEquipmentMap;                                       // 0x1CD0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FCharacterProfile>                DefenseLevelToProfileMap;                                 // 0x1D20(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AMordhauEquipment*                           LastSpawnedEquipment;                                     // 0x1D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeKillObjective.BP_HordeKillObjective_C");
		return ptr;
	}


	void OnWaveProgressed(int NewWave);
	void OnRep_OffenseUpgrades();
	void OnRep_DefenseUpgrades();
	void SpawnOurEquipment();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnHealthChanged();
	void ExecuteUbergraph_BP_HordeKillObjective(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
