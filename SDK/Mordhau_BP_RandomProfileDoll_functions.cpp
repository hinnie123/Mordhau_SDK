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

// Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RandomProfileDoll_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.UserConstructionScript");

	ABP_RandomProfileDoll_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.Reroll
// (BlueprintCallable, BlueprintEvent)

void ABP_RandomProfileDoll_C::Reroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.Reroll");

	ABP_RandomProfileDoll_C_Reroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RandomProfileDoll_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.ReceiveTick");

	ABP_RandomProfileDoll_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.ExecuteUbergraph_BP_RandomProfileDoll
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RandomProfileDoll_C::ExecuteUbergraph_BP_RandomProfileDoll(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.ExecuteUbergraph_BP_RandomProfileDoll");

	ABP_RandomProfileDoll_C_ExecuteUbergraph_BP_RandomProfileDoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
