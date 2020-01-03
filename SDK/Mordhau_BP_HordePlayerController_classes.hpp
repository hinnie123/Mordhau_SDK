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

// BlueprintGeneratedClass BP_HordePlayerController.BP_HordePlayerController_C
// 0x0109 (0x0CC9 - 0x0BC0)
class ABP_HordePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BC0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      PurchaseTrigger;                                          // 0x0BC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BC9(0x0007) MISSED OFFSET
	class UClass*                                      LastHeadArmor;                                            // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LastChestArmor;                                           // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LastLegArmor;                                             // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              LastEquipment;                                            // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              LastEquipmentAmmo;                                        // 0x0BF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              ReplicatedSkills;                                         // 0x0C08(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_HordeSkill>, TEnumAsByte<E_HordeSkill>> SkillPrerequisites;                                       // 0x0C18(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_HordeSkill>, struct FSTRUCT_HordeSkillInfo> SkillInfo;                                                // 0x0C68(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AvoidScattershotRecursion;                                // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      BackstabCounter;                                          // 0x0CB9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CriticalCounter;                                          // 0x0CBA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0CBB(0x0001) MISSED OFFSET
	float                                              NextSpecialTime;                                          // 0x0CBC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_HordeSkill>                          SpecialSkill;                                             // 0x0CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CC1(0x0003) MISSED OFFSET
	float                                              SpecialTriggeredTime;                                     // 0x0CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewHorde;                                                 // 0x0CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePlayerController.BP_HordePlayerController_C");
		return ptr;
	}


	void GetScaledSkillLevelParams(TEnumAsByte<E_HordeSkill> Skill, int Bias, float* PercentA, float* PercentB, int* IntegerA, float* TimeA);
	void OnRep_NextSpecialTime();
	void OnRep_CriticalCounter();
	void OnRep_BackstabCounter();
	void GetDiscountedPrice(int BasePrice, int* DiscountedPrice);
	void AssignFireArrowValues(class AActor* Arrow);
	void TryScatterShot(class AMordhauProjectile* SourceProjectile);
	void TryFletcherRestock();
	void GetSkillLevelFloat(TEnumAsByte<E_HordeSkill> Skill, float* SkillLevel);
	void SkillsUpdated();
	void HasPrerequisite(TEnumAsByte<E_HordeSkill> Skill, bool* Result);
	void GetSkillLevel(TEnumAsByte<E_HordeSkill> Skill, unsigned char* Level);
	void UpgradeSkill(TEnumAsByte<E_HordeSkill> Skill, bool* Success);
	void OnRep_ReplicatedSkills();
	void CustomizeEquipment(class AMordhauEquipment* Equipment);
	void OnRep_PurchaseTrigger();
	void UserConstructionScript();
	void InpActEvt_Battlecry_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnAfterPossess(class APawn** APawn);
	void OnBuilt(class AActor** Structure);
	void RequestUpgradeSkill(TEnumAsByte<E_HordeSkill> Skill);
	void ExecuteUbergraph_BP_HordePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
