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

// Function BP_ProgressDriver.BP_ProgressDriver_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ProgressDriver_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProgressDriver.BP_ProgressDriver_C.CanInteract");

	ABP_ProgressDriver_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ProgressDriver.BP_ProgressDriver_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProgressDriver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProgressDriver.BP_ProgressDriver_C.UserConstructionScript");

	ABP_ProgressDriver_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProgressDriver.BP_ProgressDriver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProgressDriver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProgressDriver.BP_ProgressDriver_C.ReceiveBeginPlay");

	ABP_ProgressDriver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProgressDriver.BP_ProgressDriver_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProgressDriver_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProgressDriver.BP_ProgressDriver_C.ReceiveTick");

	ABP_ProgressDriver_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProgressDriver.BP_ProgressDriver_C.OnValueToggled
// (BlueprintCallable, BlueprintEvent)

void ABP_ProgressDriver_C::OnValueToggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProgressDriver.BP_ProgressDriver_C.OnValueToggled");

	ABP_ProgressDriver_C_OnValueToggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProgressDriver.BP_ProgressDriver_C.ExecuteUbergraph_BP_ProgressDriver
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProgressDriver_C::ExecuteUbergraph_BP_ProgressDriver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProgressDriver.BP_ProgressDriver_C.ExecuteUbergraph_BP_ProgressDriver");

	ABP_ProgressDriver_C_ExecuteUbergraph_BP_ProgressDriver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
