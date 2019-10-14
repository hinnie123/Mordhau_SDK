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
// 0x000A (0x0BCA - 0x0BC0)
class ABP_FrontlinePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BC0(0x0008) (Transient, DuplicateTransient)
	bool                                               DeclinedObjectiveParticipation;                           // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OfferedParticipation;                                     // 0x0BC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlinePlayerController.BP_FrontlinePlayerController_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Show_Team_Select_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnAfterPossess(class APawn** APawn);
	void NotifyOfferedParticipation();
	void DeclineParticipation();
	void ExecuteUbergraph_BP_FrontlinePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
