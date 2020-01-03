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

// Function BP_Bow.BP_Bow_C.OnRep_FireArrows
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Bow_C::OnRep_FireArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.OnRep_FireArrows");

	ABP_Bow_C_OnRep_FireArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow.BP_Bow_C.ClearFireEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Bow_C::ClearFireEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.ClearFireEffects");

	ABP_Bow_C_ClearFireEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow.BP_Bow_C.GetUsesFireArrows
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UsesFireArrows                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Bow_C::GetUsesFireArrows(bool* UsesFireArrows)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.GetUsesFireArrows");

	ABP_Bow_C_GetUsesFireArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsesFireArrows != nullptr)
		*UsesFireArrows = params.UsesFireArrows;
}


// Function BP_Bow.BP_Bow_C.SetUseFireArrows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseFire                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bow_C::SetUseFireArrows(bool UseFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.SetUseFireArrows");

	ABP_Bow_C_SetUseFireArrows_Params params;
	params.UseFire = UseFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow.BP_Bow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.UserConstructionScript");

	ABP_Bow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow.BP_Bow_C.OnLoadedChanged
// (Event, Public, BlueprintEvent)

void ABP_Bow_C::OnLoadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.OnLoadedChanged");

	ABP_Bow_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow.BP_Bow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Bow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.ReceiveBeginPlay");

	ABP_Bow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow.BP_Bow_C.UpdateEquipmentVisualState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bow_C::UpdateEquipmentVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.UpdateEquipmentVisualState");

	ABP_Bow_C_UpdateEquipmentVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow.BP_Bow_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Bow_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.ReceiveDestroyed");

	ABP_Bow_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow.BP_Bow_C.ExecuteUbergraph_BP_Bow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bow_C::ExecuteUbergraph_BP_Bow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.ExecuteUbergraph_BP_Bow");

	ABP_Bow_C_ExecuteUbergraph_BP_Bow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
