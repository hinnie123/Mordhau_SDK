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

// BlueprintGeneratedClass BP_FrontlineKillObjective.BP_FrontlineKillObjective_C
// 0x010C (0x1CFC - 0x1BF0)
class ABP_FrontlineKillObjective_C : public ABP_MordhauCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1BF0(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x1BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCharacterProfile                           ProfileToAssign;                                          // 0x1C00(0x00A0) (Edit, BlueprintVisible)
	float                                              OriginalReceivedDamageModifier;                           // 0x1CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1CA4(0x0004) MISSED OFFSET
	class ABP_CapturePoint_C*                          Point;                                                    // 0x1CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              EquipmentToSpawn;                                         // 0x1CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentPatrolIdx;                                         // 0x1CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1CC4(0x0004) MISSED OFFSET
	TArray<class ABP_FrontlinePatrolPoint_C*>          PatrolPoints;                                             // 0x1CC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UClass*                                      BehaviorProfile;                                          // 0x1CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScorePerDamageMultiplier;                                 // 0x1CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AwardedKillPoints;                                        // 0x1CE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1CE5(0x0003) MISSED OFFSET
	int                                                ScorePerKill;                                             // 0x1CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1CEC(0x0004) MISSED OFFSET
	class ABP_FrontlinePatrolPoint_C*                  HomePoint;                                                // 0x1CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              EngagementDistance2DFromHomePoint;                        // 0x1CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineKillObjective.BP_FrontlineKillObjective_C");
		return ptr;
	}


	void GetObjectiveProgress(float* Progress);
	void UpdateUIWidgets();
	void SpawnOurEquipment();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnUpdateUIWidgets();
	void OnHealthChanged();
	void ExecuteUbergraph_BP_FrontlineKillObjective(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
