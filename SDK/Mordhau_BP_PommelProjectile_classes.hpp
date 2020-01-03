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

// BlueprintGeneratedClass BP_PommelProjectile.BP_PommelProjectile_C
// 0x000C (0x08D0 - 0x08C4)
class ABP_PommelProjectile_C : public ABP_MordhauProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PommelProjectile.BP_PommelProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnProjectileFired();
	void ExecuteUbergraph_BP_PommelProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
