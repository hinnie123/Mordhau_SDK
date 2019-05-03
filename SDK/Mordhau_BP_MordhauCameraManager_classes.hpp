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

// BlueprintGeneratedClass BP_MordhauCameraManager.BP_MordhauCameraManager_C
// 0x0008 (0x2BB8 - 0x2BB0)
class ABP_MordhauCameraManager_C : public AMordhauCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2BB0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauCameraManager.BP_MordhauCameraManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHitFlash(bool* bIsDirectional, class AActor** Source);
	void ExecuteUbergraph_BP_MordhauCameraManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
