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

// BlueprintGeneratedClass BTService_HordePerceptionUpdate.BTService_HordePerceptionUpdate_C
// 0x0068 (0x0100 - 0x0098)
class UBTService_HordePerceptionUpdate_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      bPerceivesEnemy;                                          // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ClosestEnemyDistance;                                     // 0x00C8(0x0028) (Edit, BlueprintVisible)
	class AMordhauCharacter*                           TargetEnemy;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMordhauCharacter*                           KillObj;                                                  // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_HordePerceptionUpdate.BTService_HordePerceptionUpdate_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_BTService_HordePerceptionUpdate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
