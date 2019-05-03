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

// Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnRep_Value
// (BlueprintCallable, BlueprintEvent)

void ABP_SwitchInteractable_C::OnRep_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnRep_Value");

	ABP_SwitchInteractable_C_OnRep_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwitchInteractable.BP_SwitchInteractable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SwitchInteractable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.UserConstructionScript");

	ABP_SwitchInteractable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwitchInteractable.BP_SwitchInteractable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SwitchInteractable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.ReceiveBeginPlay");

	ABP_SwitchInteractable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SwitchInteractable_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnInteractionStart");

	ABP_SwitchInteractable_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwitchInteractable.BP_SwitchInteractable_C.PreventInteraction
// (BlueprintCallable, BlueprintEvent)

void ABP_SwitchInteractable_C::PreventInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.PreventInteraction");

	ABP_SwitchInteractable_C_PreventInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnValueToggled
// (BlueprintCallable, BlueprintEvent)

void ABP_SwitchInteractable_C::OnValueToggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnValueToggled");

	ABP_SwitchInteractable_C_OnValueToggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwitchInteractable.BP_SwitchInteractable_C.ToggleValue
// (BlueprintCallable, BlueprintEvent)

void ABP_SwitchInteractable_C::ToggleValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.ToggleValue");

	ABP_SwitchInteractable_C_ToggleValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwitchInteractable.BP_SwitchInteractable_C.ExecuteUbergraph_BP_SwitchInteractable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SwitchInteractable_C::ExecuteUbergraph_BP_SwitchInteractable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.ExecuteUbergraph_BP_SwitchInteractable");

	ABP_SwitchInteractable_C_ExecuteUbergraph_BP_SwitchInteractable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
