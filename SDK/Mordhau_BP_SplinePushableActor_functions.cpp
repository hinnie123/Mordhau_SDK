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

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SplinePushableActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.UserConstructionScript");

	ABP_SplinePushableActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinePushableActor.BP_SplinePushableActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SplinePushableActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.ReceiveBeginPlay");

	ABP_SplinePushableActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinePushableActor.BP_SplinePushableActor_C.OnProgressUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         OldProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplinePushableActor_C::OnProgressUpdated(float* OldProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.OnProgressUpdated");

	ABP_SplinePushableActor_C_OnProgressUpdated_Params params;
	params.OldProgress = OldProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinePushableActor.BP_SplinePushableActor_C.ExecuteUbergraph_BP_SplinePushableActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplinePushableActor_C::ExecuteUbergraph_BP_SplinePushableActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.ExecuteUbergraph_BP_SplinePushableActor");

	ABP_SplinePushableActor_C_ExecuteUbergraph_BP_SplinePushableActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
