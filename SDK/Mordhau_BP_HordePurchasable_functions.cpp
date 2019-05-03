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

// Function BP_HordePurchasable.BP_HordePurchasable_C.UpdateVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordePurchasable_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.UpdateVisuals");

	ABP_HordePurchasable_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePurchasable.BP_HordePurchasable_C.InitializeDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordePurchasable_C::InitializeDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.InitializeDisplay");

	ABP_HordePurchasable_C_InitializeDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePurchasable.BP_HordePurchasable_C.SpawnItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BattleRoyaleCharacter_C* ForCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePurchasable_C::SpawnItem(class ABP_BattleRoyaleCharacter_C* ForCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.SpawnItem");

	ABP_HordePurchasable_C_SpawnItem_Params params;
	params.ForCharacter = ForCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePurchasable.BP_HordePurchasable_C.SetAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewAvailable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePurchasable_C::SetAvailability(bool NewAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.SetAvailability");

	ABP_HordePurchasable_C_SetAvailability_Params params;
	params.NewAvailable = NewAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePurchasable.BP_HordePurchasable_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HordePurchasable_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.CanInteract");

	ABP_HordePurchasable_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordePurchasable.BP_HordePurchasable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordePurchasable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.UserConstructionScript");

	ABP_HordePurchasable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePurchasable.BP_HordePurchasable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordePurchasable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.ReceiveBeginPlay");

	ABP_HordePurchasable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePurchasable.BP_HordePurchasable_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePurchasable_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.OnInteractionStart");

	ABP_HordePurchasable_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePurchasable.BP_HordePurchasable_C.ExecuteUbergraph_BP_HordePurchasable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePurchasable_C::ExecuteUbergraph_BP_HordePurchasable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.ExecuteUbergraph_BP_HordePurchasable");

	ABP_HordePurchasable_C_ExecuteUbergraph_BP_HordePurchasable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
