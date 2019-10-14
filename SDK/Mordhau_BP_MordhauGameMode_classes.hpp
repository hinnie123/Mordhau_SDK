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

// BlueprintGeneratedClass BP_MordhauGameMode.BP_MordhauGameMode_C
// 0x001C (0x052C - 0x0510)
class ABP_MordhauGameMode_C : public AMordhauGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxRemoveCount;                                           // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckTeam;                                               // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	int                                                RemoveCount;                                              // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauGameMode.BP_MordhauGameMode_C");
		return ptr;
	}


	void UnpossessAndDestroyPawn(class AController* Controller, bool RestartPlayer);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnKilled(class AController** Killer, class AController** KilledPlayer, class APawn** KilledPawn, EMordhauDamageType* Type, unsigned char* SubType, class AActor** DamageSource, class AActor** DamageAgent);
	void AddBots(int* Amount, int* Team);
	void RemoveBots(int* Amount, int* Team);
	void OnMatchStateChanged(struct FName* OldState, struct FName* NewState);
	void K2_OnLogout(class AController** ExitingController);
	void ExecuteUbergraph_BP_MordhauGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
