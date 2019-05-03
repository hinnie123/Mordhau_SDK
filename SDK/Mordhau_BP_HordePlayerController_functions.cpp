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

// Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::CustomizeEquipment(class AMordhauEquipment* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment");

	ABP_HordePlayerController_C_CustomizeEquipment_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_PurchaseTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger");

	ABP_HordePlayerController_C_OnRep_PurchaseTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.UserConstructionScript");

	ABP_HordePlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  APawn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::OnAfterPossess(class APawn** APawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess");

	ABP_HordePlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::ExecuteUbergraph_BP_HordePlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController");

	ABP_HordePlayerController_C_ExecuteUbergraph_BP_HordePlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
