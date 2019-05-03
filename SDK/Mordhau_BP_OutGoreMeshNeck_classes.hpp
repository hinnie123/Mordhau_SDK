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

// BlueprintGeneratedClass BP_OutGoreMeshNeck.BP_OutGoreMeshNeck_C
// 0x0008 (0x0350 - 0x0348)
class ABP_OutGoreMeshNeck_C : public ABP_BaseGoreMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OutGoreMeshNeck.BP_OutGoreMeshNeck_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void ExecuteUbergraph_BP_OutGoreMeshNeck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
