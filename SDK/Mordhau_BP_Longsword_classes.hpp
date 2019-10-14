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

// BlueprintGeneratedClass BP_Longsword.BP_Longsword_C
// 0x0008 (0x1AF0 - 0x1AE8)
class ABP_Longsword_C : public ABP_TwoHandedSword_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1AE8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Longsword.BP_Longsword_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoadedChanged();
	void ExecuteUbergraph_BP_Longsword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
