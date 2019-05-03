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

// Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EnvironmentMovableLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.UserConstructionScript");

	ABP_EnvironmentMovableLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnvironmentMovableLight_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ReceiveTick");

	ABP_EnvironmentMovableLight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ExecuteUbergraph_BP_EnvironmentMovableLight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnvironmentMovableLight_C::ExecuteUbergraph_BP_EnvironmentMovableLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ExecuteUbergraph_BP_EnvironmentMovableLight");

	ABP_EnvironmentMovableLight_C_ExecuteUbergraph_BP_EnvironmentMovableLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
