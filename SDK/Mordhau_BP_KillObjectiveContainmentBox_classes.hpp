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

// BlueprintGeneratedClass BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C
// 0x0018 (0x0340 - 0x0328)
class ABP_KillObjectiveContainmentBox_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_FrontlineKillObjective_C*                KillObjectiveToContain;                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_BP_KillObjectiveContainmentBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
