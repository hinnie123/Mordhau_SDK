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

// BlueprintGeneratedClass BP_SubField.BP_SubField_C
// 0x0020 (0x0360 - 0x0340)
class ABP_SubField_C : public ASubField
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubField.BP_SubField_C");
		return ptr;
	}


	void UserConstructionScript();
	void BeginSubFieldDeactivation();
	void SetSubFieldHidden(bool* bValue);
	void DeactivateSubField();
	void ExecuteUbergraph_BP_SubField(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
