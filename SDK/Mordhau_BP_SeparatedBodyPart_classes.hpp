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

// BlueprintGeneratedClass BP_SeparatedBodyPart.BP_SeparatedBodyPart_C
// 0x0010 (0x0450 - 0x0440)
class ABP_SeparatedBodyPart_C : public ASeparatedBodyPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	class UThudderComponent*                           Thudder;                                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SeparatedBodyPart.BP_SeparatedBodyPart_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent);
	void BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature();
	void InitializeDismemberment(class AMordhauCharacter** Source, struct FName* bone, struct FTransform* SourceBoneTransform, bool* bIsPartial, bool* bIsBluntForce);
	void ExecuteUbergraph_BP_SeparatedBodyPart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
