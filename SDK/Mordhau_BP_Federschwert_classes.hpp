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

// BlueprintGeneratedClass BP_Federschwert.BP_Federschwert_C
// 0x0008 (0x1AA0 - 0x1A98)
class ABP_Federschwert_C : public ABP_TwoHandedSword_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1A98(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Federschwert.BP_Federschwert_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoadedChanged();
	void ExecuteUbergraph_BP_Federschwert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
