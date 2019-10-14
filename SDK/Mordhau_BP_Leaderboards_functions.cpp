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

// Function BP_Leaderboards.BP_Leaderboards_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Leaderboards_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.Update");

	UBP_Leaderboards_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Leaderboards.BP_Leaderboards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Leaderboards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.Construct");

	UBP_Leaderboards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Leaderboards.BP_Leaderboards_C.ExecuteUbergraph_BP_Leaderboards
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Leaderboards_C::ExecuteUbergraph_BP_Leaderboards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.ExecuteUbergraph_BP_Leaderboards");

	UBP_Leaderboards_C_ExecuteUbergraph_BP_Leaderboards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
