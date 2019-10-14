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

// BlueprintGeneratedClass BP_HordePurchasable.BP_HordePurchasable_C
// 0x005C (0x04DC - 0x0480)
class ABP_HordePurchasable_C : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULODSkeletalMeshComponent*                   LODSkeletalMesh;                                          // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Cost;                                                     // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailable;                                              // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class UClass*                                      PurchasableClass;                                         // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Initialized;                                              // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UMordhauWidgetComponent*                     Widget;                                                   // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsAmmoRestock;                                            // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // 0x04B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x04BA(0x0006) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x04C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AmmoRestockAmount;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePurchasable.BP_HordePurchasable_C");
		return ptr;
	}


	void UpdateVisuals();
	void InitializeDisplay();
	void SpawnItem(class ABP_BattleRoyaleCharacter_C* ForCharacter);
	void SetAvailability(bool NewAvailable);
	bool CanInteract(class AMordhauCharacter** Character);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnInteractionStart(class AMordhauCharacter** Character);
	void ExecuteUbergraph_BP_HordePurchasable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
