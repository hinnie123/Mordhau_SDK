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

// Function BP_SceneProgressActor.BP_SceneProgressActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SceneProgressActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneProgressActor.BP_SceneProgressActor_C.UserConstructionScript");

	ABP_SceneProgressActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneProgressActor.BP_SceneProgressActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SceneProgressActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneProgressActor.BP_SceneProgressActor_C.ReceiveBeginPlay");

	ABP_SceneProgressActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneProgressActor.BP_SceneProgressActor_C.ProgressUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SceneProgressActor_C::ProgressUpdated(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneProgressActor.BP_SceneProgressActor_C.ProgressUpdated");

	ABP_SceneProgressActor_C_ProgressUpdated_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneProgressActor.BP_SceneProgressActor_C.ExecuteUbergraph_BP_SceneProgressActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SceneProgressActor_C::ExecuteUbergraph_BP_SceneProgressActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneProgressActor.BP_SceneProgressActor_C.ExecuteUbergraph_BP_SceneProgressActor");

	ABP_SceneProgressActor_C_ExecuteUbergraph_BP_SceneProgressActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
