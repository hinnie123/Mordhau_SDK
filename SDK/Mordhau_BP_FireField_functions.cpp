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

// Function BP_FireField.BP_FireField_C.GetAgent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Agent                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FireField_C::GetAgent(class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.GetAgent");

	ABP_FireField_C_GetAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Agent != nullptr)
		*Agent = params.Agent;
}


// Function BP_FireField.BP_FireField_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FireField_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.UserConstructionScript");

	ABP_FireField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireField.BP_FireField_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireField_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.ReceiveTick");

	ABP_FireField_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireField.BP_FireField_C.BeginFieldDeactivation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FireField_C::BeginFieldDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.BeginFieldDeactivation");

	ABP_FireField_C_BeginFieldDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireField.BP_FireField_C.ExecuteUbergraph_BP_FireField
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireField_C::ExecuteUbergraph_BP_FireField(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.ExecuteUbergraph_BP_FireField");

	ABP_FireField_C_ExecuteUbergraph_BP_FireField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
