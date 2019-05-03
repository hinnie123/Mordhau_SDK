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
