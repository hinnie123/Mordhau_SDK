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

// Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LocalInteractableChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.UserConstructionScript");

	ABP_LocalInteractableChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.Refilled
// (BlueprintCallable, BlueprintEvent)

void ABP_LocalInteractableChest_C::Refilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.Refilled");

	ABP_LocalInteractableChest_C_Refilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.Depleted
// (BlueprintCallable, BlueprintEvent)

void ABP_LocalInteractableChest_C::Depleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.Depleted");

	ABP_LocalInteractableChest_C_Depleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.ExecuteUbergraph_BP_LocalInteractableChest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalInteractableChest_C::ExecuteUbergraph_BP_LocalInteractableChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.ExecuteUbergraph_BP_LocalInteractableChest");

	ABP_LocalInteractableChest_C_ExecuteUbergraph_BP_LocalInteractableChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
