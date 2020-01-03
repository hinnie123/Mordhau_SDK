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

// BlueprintGeneratedClass BP_FireArrowPit.BP_FireArrowPit_C
// 0x0028 (0x0560 - 0x0538)
class ABP_FireArrowPit_C : public ABP_DestroyableActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Area;                                                     // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Fire_Torch;                                             // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              OverlappingInternal;                                      // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireArrowPit.BP_FireArrowPit_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GiveBuffs();
	void ExecuteUbergraph_BP_FireArrowPit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
