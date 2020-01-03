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

// Function BP_VolleyArea.BP_VolleyArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VolleyArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolleyArea.BP_VolleyArea_C.UserConstructionScript");

	ABP_VolleyArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolleyArea.BP_VolleyArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VolleyArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolleyArea.BP_VolleyArea_C.ReceiveBeginPlay");

	ABP_VolleyArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolleyArea.BP_VolleyArea_C.DamageTick
// (BlueprintCallable, BlueprintEvent)

void ABP_VolleyArea_C::DamageTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolleyArea.BP_VolleyArea_C.DamageTick");

	ABP_VolleyArea_C_DamageTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolleyArea.BP_VolleyArea_C.ExecuteUbergraph_BP_VolleyArea
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VolleyArea_C::ExecuteUbergraph_BP_VolleyArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolleyArea.BP_VolleyArea_C.ExecuteUbergraph_BP_VolleyArea");

	ABP_VolleyArea_C_ExecuteUbergraph_BP_VolleyArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
