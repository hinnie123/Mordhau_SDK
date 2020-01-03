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

// BlueprintGeneratedClass BP_CoatOfPlatesChestLeather.BP_CoatOfPlatesChestLeather_C
// 0x0000 (0x0210 - 0x0210)
class UBP_CoatOfPlatesChestLeather_C : public UBP_Tier1UpperChestWearable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CoatOfPlatesChestLeather.BP_CoatOfPlatesChestLeather_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
