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

// BlueprintGeneratedClass BP_FrontlinePlayerController.BP_FrontlinePlayerController_C
// 0x0008 (0x0B40 - 0x0B38)
class ABP_FrontlinePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B38(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlinePlayerController.BP_FrontlinePlayerController_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnAfterPossess(class APawn** APawn);
	void ExecuteUbergraph_BP_FrontlinePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
