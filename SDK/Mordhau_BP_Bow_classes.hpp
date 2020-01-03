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

// BlueprintGeneratedClass BP_Bow.BP_Bow_C
// 0x0081 (0x0D49 - 0x0CC8)
class ABP_Bow_C : public ABP_MissileEquipment_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC8(0x0008) (Transient, DuplicateTransient)
	bool                                               FireArrows;                                               // 0x0CD0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CD1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    FireEffectParticleComponent;                              // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FireEffectAudioComponent;                                 // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      FireArrowProjectile;                                      // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OriginalProjectileClass;                                  // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FireArrowsParticleSystem;                                 // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  FireArrowsTransform;                                      // 0x0D00(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FireArrowsSound;                                          // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FireArrowsFireSound;                                      // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   OriginalFireSound;                                        // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InternalUsingFireArrows;                                  // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bow.BP_Bow_C");
		return ptr;
	}


	void OnRep_FireArrows();
	void ClearFireEffects();
	void GetUsesFireArrows(bool* UsesFireArrows);
	void SetUseFireArrows(bool UseFire);
	void UserConstructionScript();
	void OnLoadedChanged();
	void ReceiveBeginPlay();
	void UpdateEquipmentVisualState();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Bow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
