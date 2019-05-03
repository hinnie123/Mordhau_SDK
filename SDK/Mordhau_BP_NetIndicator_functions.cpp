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

// Function BP_NetIndicator.BP_NetIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_NetIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetIndicator.BP_NetIndicator_C.Construct");

	UBP_NetIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetIndicator.BP_NetIndicator_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UBP_NetIndicator_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetIndicator.BP_NetIndicator_C.Refresh");

	UBP_NetIndicator_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetIndicator.BP_NetIndicator_C.ExecuteUbergraph_BP_NetIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_NetIndicator_C::ExecuteUbergraph_BP_NetIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetIndicator.BP_NetIndicator_C.ExecuteUbergraph_BP_NetIndicator");

	UBP_NetIndicator_C_ExecuteUbergraph_BP_NetIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
