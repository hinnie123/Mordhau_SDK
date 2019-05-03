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

// Function BP_SmokeField.BP_SmokeField_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmokeField_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmokeField.BP_SmokeField_C.UserConstructionScript");

	ABP_SmokeField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmokeField.BP_SmokeField_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmokeField_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmokeField.BP_SmokeField_C.ReceiveTick");

	ABP_SmokeField_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmokeField.BP_SmokeField_C.BeginFieldDeactivation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmokeField_C::BeginFieldDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmokeField.BP_SmokeField_C.BeginFieldDeactivation");

	ABP_SmokeField_C_BeginFieldDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmokeField.BP_SmokeField_C.ExecuteUbergraph_BP_SmokeField
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmokeField_C::ExecuteUbergraph_BP_SmokeField(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmokeField.BP_SmokeField_C.ExecuteUbergraph_BP_SmokeField");

	ABP_SmokeField_C_ExecuteUbergraph_BP_SmokeField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
