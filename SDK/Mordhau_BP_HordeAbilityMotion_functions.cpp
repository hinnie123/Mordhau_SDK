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

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnBegin
// (Event, Public, BlueprintEvent)

void UBP_HordeAbilityMotion_C::OnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnBegin");

	UBP_HordeAbilityMotion_C_OnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnLeave
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HordeAbilityMotion_C::OnLeave(bool* Interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnLeave");

	UBP_HordeAbilityMotion_C_OnLeave_Params params;
	params.Interrupted = Interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HordeAbilityMotion_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnTick");

	UBP_HordeAbilityMotion_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.ExecuteUbergraph_BP_HordeAbilityMotion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HordeAbilityMotion_C::ExecuteUbergraph_BP_HordeAbilityMotion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.ExecuteUbergraph_BP_HordeAbilityMotion");

	UBP_HordeAbilityMotion_C_ExecuteUbergraph_BP_HordeAbilityMotion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
