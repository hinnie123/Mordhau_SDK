// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.UserConstructionScript");

	ABP_FrontlinePlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_FrontlinePlayerController_C::InpActEvt_Show_Team_Select_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_1");

	ABP_FrontlinePlayerController_C_InpActEvt_Show_Team_Select_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.OnAfterPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  APawn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlinePlayerController_C::OnAfterPossess(class APawn** APawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.OnAfterPossess");

	ABP_FrontlinePlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.NotifyOfferedParticipation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePlayerController_C::NotifyOfferedParticipation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.NotifyOfferedParticipation");

	ABP_FrontlinePlayerController_C_NotifyOfferedParticipation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.DeclineParticipation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePlayerController_C::DeclineParticipation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.DeclineParticipation");

	ABP_FrontlinePlayerController_C_DeclineParticipation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.ExecuteUbergraph_BP_FrontlinePlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlinePlayerController_C::ExecuteUbergraph_BP_FrontlinePlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.ExecuteUbergraph_BP_FrontlinePlayerController");

	ABP_FrontlinePlayerController_C_ExecuteUbergraph_BP_FrontlinePlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
