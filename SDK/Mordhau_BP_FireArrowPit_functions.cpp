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

// Function BP_FireArrowPit.BP_FireArrowPit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FireArrowPit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireArrowPit.BP_FireArrowPit_C.UserConstructionScript");

	ABP_FireArrowPit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireArrowPit.BP_FireArrowPit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FireArrowPit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireArrowPit.BP_FireArrowPit_C.ReceiveBeginPlay");

	ABP_FireArrowPit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireArrowPit.BP_FireArrowPit_C.GiveBuffs
// (BlueprintCallable, BlueprintEvent)

void ABP_FireArrowPit_C::GiveBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireArrowPit.BP_FireArrowPit_C.GiveBuffs");

	ABP_FireArrowPit_C_GiveBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireArrowPit.BP_FireArrowPit_C.ExecuteUbergraph_BP_FireArrowPit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireArrowPit_C::ExecuteUbergraph_BP_FireArrowPit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireArrowPit.BP_FireArrowPit_C.ExecuteUbergraph_BP_FireArrowPit");

	ABP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
