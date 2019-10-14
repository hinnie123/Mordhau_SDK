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

// BlueprintGeneratedClass BP_SpawnProtectionBox.BP_SpawnProtectionBox_C
// 0x0015 (0x033D - 0x0328)
class ABP_SpawnProtectionBox_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AllowedTeam;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsesNavmesh;                                              // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnProtectionBox.BP_SpawnProtectionBox_C");
		return ptr;
	}


	void Disable();
	void Enable();
	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_BP_SpawnProtectionBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
