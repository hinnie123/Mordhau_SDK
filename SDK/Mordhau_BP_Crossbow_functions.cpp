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

// Function BP_Crossbow.BP_Crossbow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Crossbow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crossbow.BP_Crossbow_C.UserConstructionScript");

	ABP_Crossbow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crossbow.BP_Crossbow_C.OnLoadedChanged
// (Event, Public, BlueprintEvent)

void ABP_Crossbow_C::OnLoadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crossbow.BP_Crossbow_C.OnLoadedChanged");

	ABP_Crossbow_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crossbow.BP_Crossbow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Crossbow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crossbow.BP_Crossbow_C.ReceiveBeginPlay");

	ABP_Crossbow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crossbow.BP_Crossbow_C.ExecuteUbergraph_BP_Crossbow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crossbow_C::ExecuteUbergraph_BP_Crossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crossbow.BP_Crossbow_C.ExecuteUbergraph_BP_Crossbow");

	ABP_Crossbow_C_ExecuteUbergraph_BP_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
