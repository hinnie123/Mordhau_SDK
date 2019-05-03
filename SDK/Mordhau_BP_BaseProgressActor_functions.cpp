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

// Function BP_BaseProgressActor.BP_BaseProgressActor_C.ProgressUpdatedInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseProgressActor_C::ProgressUpdatedInternal(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.ProgressUpdatedInternal");

	ABP_BaseProgressActor_C_ProgressUpdatedInternal_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseProgressActor.BP_BaseProgressActor_C.ProgressUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseProgressActor_C::ProgressUpdated(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.ProgressUpdated");

	ABP_BaseProgressActor_C_ProgressUpdated_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseProgressActor.BP_BaseProgressActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseProgressActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.UserConstructionScript");

	ABP_BaseProgressActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseProgressActor.BP_BaseProgressActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseProgressActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.ReceiveBeginPlay");

	ABP_BaseProgressActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseProgressActor.BP_BaseProgressActor_C.ExecuteUbergraph_BP_BaseProgressActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseProgressActor_C::ExecuteUbergraph_BP_BaseProgressActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.ExecuteUbergraph_BP_BaseProgressActor");

	ABP_BaseProgressActor_C_ExecuteUbergraph_BP_BaseProgressActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
