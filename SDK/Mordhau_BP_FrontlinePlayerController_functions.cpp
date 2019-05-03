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


// Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.ExecuteUbergraph_BP_FrontlinePlayerController
// ()
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
