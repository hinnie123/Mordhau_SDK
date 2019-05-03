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

// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.UpdateProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SlaveProgressDriver_C::UpdateProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.UpdateProgress");

	ABP_SlaveProgressDriver_C_UpdateProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SlaveProgressDriver_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.CanInteract");

	ABP_SlaveProgressDriver_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SlaveProgressDriver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.UserConstructionScript");

	ABP_SlaveProgressDriver_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SlaveProgressDriver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.ReceiveBeginPlay");

	ABP_SlaveProgressDriver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SlaveProgressDriver_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.OnInteractionStart");

	ABP_SlaveProgressDriver_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.ExecuteUbergraph_BP_SlaveProgressDriver
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SlaveProgressDriver_C::ExecuteUbergraph_BP_SlaveProgressDriver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaveProgressDriver.BP_SlaveProgressDriver_C.ExecuteUbergraph_BP_SlaveProgressDriver");

	ABP_SlaveProgressDriver_C_ExecuteUbergraph_BP_SlaveProgressDriver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
