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

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Disable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpawn_C::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Disable");

	ABP_ItemDeliverySpawn_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpawn_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Activate");

	ABP_ItemDeliverySpawn_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ItemDeliverySpawn_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.CanInteract");

	ABP_ItemDeliverySpawn_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.UserConstructionScript");

	ABP_ItemDeliverySpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemDeliverySpawn_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.OnInteractionStart");

	ABP_ItemDeliverySpawn_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.ExecuteUbergraph_BP_ItemDeliverySpawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemDeliverySpawn_C::ExecuteUbergraph_BP_ItemDeliverySpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.ExecuteUbergraph_BP_ItemDeliverySpawn");

	ABP_ItemDeliverySpawn_C_ExecuteUbergraph_BP_ItemDeliverySpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
