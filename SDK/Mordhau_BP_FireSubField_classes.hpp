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

// BlueprintGeneratedClass BP_FireSubField.BP_FireSubField_C
// 0x0011 (0x0371 - 0x0360)
class ABP_FireSubField_C : public ABP_SubField_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               FadedOutDecal;                                            // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireSubField.BP_FireSubField_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BeginSubFieldDeactivation();
	void DeactivateSubField();
	void ExecuteUbergraph_BP_FireSubField(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
