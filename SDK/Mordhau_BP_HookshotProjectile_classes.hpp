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

// BlueprintGeneratedClass BP_HookshotProjectile.BP_HookshotProjectile_C
// 0x0014 (0x08D8 - 0x08C4)
class ABP_HookshotProjectile_C : public ABP_MordhauProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C8(0x0008) (Transient, DuplicateTransient)
	class AAdvancedCharacter*                          Pulling;                                                  // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HookshotProjectile.BP_HookshotProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnProjectileDamagedCharacter(class AAdvancedCharacter** Character, bool* bWillKill, struct FVector* WorldLocation, struct FName* bone);
	void ExecuteUbergraph_BP_HookshotProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
