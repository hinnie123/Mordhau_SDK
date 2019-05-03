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

// BlueprintGeneratedClass BTService_DMPerceptionUpdate.BTService_DMPerceptionUpdate_C
// 0x0058 (0x00F0 - 0x0098)
class UBTService_DMPerceptionUpdate_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      bPerceivesEnemy;                                          // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ClosestEnemyDistance;                                     // 0x00C8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_DMPerceptionUpdate.BTService_DMPerceptionUpdate_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_BTService_DMPerceptionUpdate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
