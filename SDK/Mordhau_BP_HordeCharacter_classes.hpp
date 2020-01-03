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

// BlueprintGeneratedClass BP_HordeCharacter.BP_HordeCharacter_C
// 0x0045 (0x1CE6 - 0x1CA1)
class ABP_HordeCharacter_C : public ABP_BattleRoyaleCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1CA1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1CA8(0x0008) (Transient, DuplicateTransient)
	bool                                               AlreadyGaveDefaults;                                      // 0x1CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1CB1(0x0007) MISSED OFFSET
	TArray<unsigned char>                              ReplicatedSkills;                                         // 0x1CB8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               LastAttackBypassesParry;                                  // 0x1CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsImmortal;                                               // 0x1CC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x1CCA(0x0006) MISSED OFFSET
	TArray<class AMordhauAIController*>                VanishedFor;                                              // 0x1CD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Special;                                                  // 0x1CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      DivineFavorCounter;                                       // 0x1CE4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewHorde;                                                 // 0x1CE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeCharacter.BP_HordeCharacter_C");
		return ptr;
	}


	void OnRep_DivineFavorCounter();
	void AwardHealthOnKillToTeammates();
	void OnKilledEnemy(class ABP_HordeEnemy_C* Enemy);
	void SpecialCooldown(float Duration);
	void DoSpecialAbility(bool* Success);
	void Stage2Vanish();
	void BeginVanish();
	void Stage2Immortality();
	void BeginImmortality();
	void Stage2DivineFavor();
	void BeginDivineFavor();
	void Stage2Taunt();
	void BeginTaunt();
	void Stage2Shockwave();
	void Stage2Hookshot();
	void BeginShockwave();
	void BeginHookshot();
	float ModifyDamage(float* DamageAmount, EMordhauDamageType* DamageType, struct FHitResult* HitInfo, class AActor** Source, class AActor** Agent, class AController** EventInstigator);
	void ApplySkillsToEquipment(class AMordhauEquipment* Equip);
	void ModifyOutgoingDamage(class AActor* Receiver, EMordhauDamageType DamageType, class AActor* Agent, float InDamage, struct FHitResult* HitInfo, float* OutDamage);
	void GetSkillFloat(TEnumAsByte<E_HordeSkill> Skill, float* Value);
	void RoundEnded();
	void ApplySkills();
	void GetSkill(TEnumAsByte<E_HordeSkill> Skill, unsigned char* Level);
	void OnRep_ReplicatedSkills();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent);
	void OnArmorReplicated(EWearableSlot* Slot);
	void OnKilled(class AController** EventInstigator);
	void OnPickedUp(class AMordhauEquipment** Eq);
	void OnBlockedMelee(struct FHitResult* HitResult, class AMordhauCharacter** Attacker);
	void OnAttackStarted();
	void TriggerImmortality();
	void Unvanish();
	void ReceiveDestroyed();
	void RegenerationTick();
	void MaintenanceTick();
	void RequestVolley(const struct FRotator& Aim, const struct FVector& Location);
	void ExecuteUbergraph_BP_HordeCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
