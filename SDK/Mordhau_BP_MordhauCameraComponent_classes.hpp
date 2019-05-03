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

// BlueprintGeneratedClass BP_MordhauCameraComponent.BP_MordhauCameraComponent_C
// 0x0000 (0x09A0 - 0x09A0)
class UBP_MordhauCameraComponent_C : public UMordhauCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauCameraComponent.BP_MordhauCameraComponent_C");
		return ptr;
	}


	struct FPOV ComputeCameraPOV();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
