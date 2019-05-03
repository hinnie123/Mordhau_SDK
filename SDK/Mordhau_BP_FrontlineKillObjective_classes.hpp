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
// 0x010C (0x1C8C - 0x1B80)
class ABP_FrontlineKillObjective_C : public ABP_MordhauCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B80(0x0008) (Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                            // 0x1B88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCharacterProfile                           ProfileToAssign;                                          // 0x1B90(0x00A0) (Edit, BlueprintVisible)
	float                                              OriginalReceivedDamageModifier;                           // 0x1C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1C34(0x0004) MISSED OFFSET
	class ABP_CapturePoint_C*                          Point;                                                    // 0x1C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              EquipmentToSpawn;                                         // 0x1C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentPatrolIdx;                                         // 0x1C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1C54(0x0004) MISSED OFFSET
	TArray<class ABP_FrontlinePatrolPoint_C*>          PatrolPoints;                                             // 0x1C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UClass*                                      BehaviorProfile;                                          // 0x1C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScorePerDamageMultiplier;                                 // 0x1C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AwardedKillPoints;                                        // 0x1C74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1C75(0x0003) MISSED OFFSET
	int                                                ScorePerKill;                                             // 0x1C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1C7C(0x0004) MISSED OFFSET
	class ABP_FrontlinePatrolPoint_C*                  HomePoint;                                                // 0x1C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              EngagementDistance2DFromHomePoint;                        // 0x1C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
