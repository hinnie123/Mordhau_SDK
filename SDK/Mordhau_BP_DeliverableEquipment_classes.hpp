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

// BlueprintGeneratedClass BP_DeliverableEquipment.BP_DeliverableEquipment_C
// 0x0022 (0x0CE2 - 0x0CC0)
class ABP_DeliverableEquipment_C : public AMordhauEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               DeliverableCollision;                                     // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Consumed;                                                 // 0x0CD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MustThrow;                                                // 0x0CD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestroysOnDelivery;                                       // 0x0CD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0CD3(0x0005) MISSED OFFSET
	class AMordhauPlayerController*                    LastEquippedByPlayerController;                           // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Broke;                                                    // 0x0CE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UsableByTeam;                                             // 0x0CE1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeliverableEquipment.BP_DeliverableEquipment_C");
		return ptr;
	}


	bool CanInteract(class AMordhauCharacter** Character);
	bool CanHeldInteract(class AMordhauCharacter** Character);
	void Break();
	void OnRep_Broke();
	void Consume();
	void UserConstructionScript();
	void OnThud();
	void FireProjectile(struct FVector* Origin, struct FRotator* Orientation, class AController** OwningController, float* ExpectedDelay);
	void OnPickedUp(class AMordhauCharacter** Character);
	void OnBroken();
	void OnHeldInteractionStart(class AMordhauCharacter** Character);
	void ExecuteUbergraph_BP_DeliverableEquipment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
