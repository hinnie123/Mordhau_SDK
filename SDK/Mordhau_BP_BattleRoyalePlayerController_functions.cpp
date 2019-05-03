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

// Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.OnRep_PlacementPosition
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyalePlayerController_C::OnRep_PlacementPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.OnRep_PlacementPosition");

	ABP_BattleRoyalePlayerController_C_OnRep_PlacementPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyalePlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.UserConstructionScript");

	ABP_BattleRoyalePlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.OnNewProfileFromClientPreValidation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyalePlayerController_C::OnNewProfileFromClientPreValidation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.OnNewProfileFromClientPreValidation");

	ABP_BattleRoyalePlayerController_C_OnNewProfileFromClientPreValidation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.ShowBREndScreenDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyalePlayerController_C::ShowBREndScreenDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.ShowBREndScreenDelayed");

	ABP_BattleRoyalePlayerController_C_ShowBREndScreenDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.ExecuteUbergraph_BP_BattleRoyalePlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyalePlayerController_C::ExecuteUbergraph_BP_BattleRoyalePlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C.ExecuteUbergraph_BP_BattleRoyalePlayerController");

	ABP_BattleRoyalePlayerController_C_ExecuteUbergraph_BP_BattleRoyalePlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
