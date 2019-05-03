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

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UpdateValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LocalCooldownInteractable_C::UpdateValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UpdateValue");

	ABP_LocalCooldownInteractable_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LocalCooldownInteractable_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.CanInteract");

	ABP_LocalCooldownInteractable_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LocalCooldownInteractable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UserConstructionScript");

	ABP_LocalCooldownInteractable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalCooldownInteractable_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.OnInteractionStart");

	ABP_LocalCooldownInteractable_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.AvailableInteractionStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalCooldownInteractable_C::AvailableInteractionStart(class AMordhauCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.AvailableInteractionStart");

	ABP_LocalCooldownInteractable_C_AvailableInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.NotAvailableInteractionStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalCooldownInteractable_C::NotAvailableInteractionStart(class AMordhauCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.NotAvailableInteractionStart");

	ABP_LocalCooldownInteractable_C_NotAvailableInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Depleted
// (BlueprintCallable, BlueprintEvent)

void ABP_LocalCooldownInteractable_C::Depleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Depleted");

	ABP_LocalCooldownInteractable_C_Depleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Refilled
// (BlueprintCallable, BlueprintEvent)

void ABP_LocalCooldownInteractable_C::Refilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Refilled");

	ABP_LocalCooldownInteractable_C_Refilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Deplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalCooldownInteractable_C::Deplete(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Deplete");

	ABP_LocalCooldownInteractable_C_Deplete_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.PopCooldown
// (BlueprintCallable, BlueprintEvent)

void ABP_LocalCooldownInteractable_C::PopCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.PopCooldown");

	ABP_LocalCooldownInteractable_C_PopCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.ExecuteUbergraph_BP_LocalCooldownInteractable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalCooldownInteractable_C::ExecuteUbergraph_BP_LocalCooldownInteractable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.ExecuteUbergraph_BP_LocalCooldownInteractable");

	ABP_LocalCooldownInteractable_C_ExecuteUbergraph_BP_LocalCooldownInteractable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
