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

// Function BP_AmmoBox.BP_AmmoBox_C.UpdateWidgetVisibilityOverride
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmmoBox_C::UpdateWidgetVisibilityOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.UpdateWidgetVisibilityOverride");

	ABP_AmmoBox_C_UpdateWidgetVisibilityOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AmmoBox_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.CanInteract");

	ABP_AmmoBox_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AmmoBox.BP_AmmoBox_C.Restock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoBox_C::Restock(class AMordhauCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.Restock");

	ABP_AmmoBox_C_Restock_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmmoBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.UserConstructionScript");

	ABP_AmmoBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.AvailableInteractionStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoBox_C::AvailableInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.AvailableInteractionStart");

	ABP_AmmoBox_C_AvailableInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.Deplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoBox_C::Deplete(class APlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.Deplete");

	ABP_AmmoBox_C_Deplete_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.Refill
// (BlueprintCallable, BlueprintEvent)

void ABP_AmmoBox_C::Refill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.Refill");

	ABP_AmmoBox_C_Refill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoBox_C::ExecuteUbergraph_BP_AmmoBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox");

	ABP_AmmoBox_C_ExecuteUbergraph_BP_AmmoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
