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

// BlueprintGeneratedClass BP_MordhauShield.BP_MordhauShield_C
// 0x0018 (0x1B58 - 0x1B40)
class ABP_MordhauShield_C : public AMordhauShield
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B40(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               BlockColliderBP;                                          // 0x1B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ProjectileBlock;                                          // 0x1B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauShield.BP_MordhauShield_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MordhauShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
