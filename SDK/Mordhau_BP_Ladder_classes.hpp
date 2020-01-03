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

// BlueprintGeneratedClass BP_Ladder.BP_Ladder_C
// 0x00BC (0x053C - 0x0480)
class ABP_Ladder_C : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DroppedMesh;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LadderMesh;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LadderExit;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LadderEnd;                                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LadderStart;                                              // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_LadderMover_C*>                   Movers;                                                   // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	unsigned char                                      LadderState;                                              // 0x04C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              LadderStateChangeTime;                                    // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FTransform                                  DroppedMeshTransform;                                     // 0x04D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanDropAndRaise;                                          // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartAsRaised;                                            // 0x0501(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0502(0x0006) MISSED OFFSET
	class UCurveFloat*                                 RaiseCurve;                                               // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DropCurve;                                                // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RaiseDuration;                                            // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropDuration;                                             // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              FallIgnoreActors;                                         // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AController*                                 InteractInstigator;                                       // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DropDamage;                                               // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ladder.BP_Ladder_C");
		return ptr;
	}


	void UpdateInteractionText();
	void OnRep_LadderState();
	bool CanHeldInteract(class AMordhauCharacter** Character);
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void OnHeldInteractionStart(class AMordhauCharacter** Character);
	void ReceiveBeginPlay();
	void OnHighlightMaintained(class AMordhauCharacter** Character);
	void BeginAnimatingLadder(bool DoEffects);
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveTick(float* DeltaSeconds);
	void ToggleLadderState(class AController* Instigator);
	void ExecuteUbergraph_BP_Ladder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
