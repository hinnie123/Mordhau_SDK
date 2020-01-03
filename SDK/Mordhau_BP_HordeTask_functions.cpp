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

// Function BP_HordeTask.BP_HordeTask_C.GetLocationTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_HordeEnemy_C*        Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Target                         (Parm, OutParm, IsPlainOldData)

void ABP_HordeTask_C::GetLocationTarget(class ABP_HordeEnemy_C* Character, struct FVector* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeTask.BP_HordeTask_C.GetLocationTarget");

	ABP_HordeTask_C_GetLocationTarget_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BP_HordeTask.BP_HordeTask_C.IsTaskValidFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_HordeEnemy_C*        Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordeTask_C::IsTaskValidFor(class ABP_HordeEnemy_C* Character, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeTask.BP_HordeTask_C.IsTaskValidFor");

	ABP_HordeTask_C_IsTaskValidFor_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_HordeTask.BP_HordeTask_C.TaskTriggered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HordeEnemy_C*        Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeTask_C::TaskTriggered(class ABP_HordeEnemy_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeTask.BP_HordeTask_C.TaskTriggered");

	ABP_HordeTask_C_TaskTriggered_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeTask.BP_HordeTask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeTask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeTask.BP_HordeTask_C.UserConstructionScript");

	ABP_HordeTask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
