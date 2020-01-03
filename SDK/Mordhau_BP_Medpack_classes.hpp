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

// BlueprintGeneratedClass BP_Medpack.BP_Medpack_C
// 0x0030 (0x0CF0 - 0x0CC0)
class ABP_Medpack_C : public ABP_2HThrowableBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC0(0x0008) (Transient, DuplicateTransient)
	int                                                HealsLeft;                                                // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HealthPerHeal;                                            // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealTimeToHold;                                           // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OriginalMaxHoldTime;                                      // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 ThrowerController;                                        // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HealScoreModifier;                                        // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0CE4(0x0004) MISSED OFFSET
	class USkeletalMesh*                               OpenBagSkeletalMesh;                                      // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Medpack.BP_Medpack_C");
		return ptr;
	}


	void ApplyHeal(class AMordhauCharacter* Character);
	bool CanHeldInteract(class AMordhauCharacter** Character);
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void FireProjectile(struct FVector* Origin, struct FRotator* Orientation, class AController** OwningController, float* ExpectedDelay);
	void OnLoadedChanged();
	void OnHeldInteractionStart(class AMordhauCharacter** Character);
	void ExecuteUbergraph_BP_Medpack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
