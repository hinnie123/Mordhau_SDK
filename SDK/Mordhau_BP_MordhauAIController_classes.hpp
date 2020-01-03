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

// BlueprintGeneratedClass BP_MordhauAIController.BP_MordhauAIController_C
// 0x0030 (0x06A8 - 0x0678)
class ABP_MordhauAIController_C : public AMordhauAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (Transient, DuplicateTransient)
	struct FName                                       PerceivesEnemyKey;                                        // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PerceivesAllyKey;                                         // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MoveDestinationKey;                                       // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TargetLocationKey;                                        // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBehaviorTree*                               BehaviorTree;                                             // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauAIController.BP_MordhauAIController_C");
		return ptr;
	}


	void GetTeamFilterClass(class UClass** FilterClass);
	void UserConstructionScript();
	void OnPossess(class APawn** PossessedPawn);
	void OnAfterUnPossess();
	void ReceiveBeginPlay();
	void OnStartedPerceivingCharacter(class AAdvancedCharacter** PerceivedCharacter, struct FPerceptionInfo* PerceptionInfo);
	void OnStoppedPerceivingCharacter(class AAdvancedCharacter** PerceivedCharacter, struct FPerceptionInfo* PerceptionInfo);
	void ExecuteUbergraph_BP_MordhauAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
