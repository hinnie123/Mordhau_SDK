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

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontlineObjective_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnInitialize");

	UBP_FrontlineObjective_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnUpdateUIWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FrontlineObjective_C::OnUpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnUpdateUIWidgets");

	UBP_FrontlineObjective_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FrontlineObjective_C::OnEnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyLostPrerequisites");

	UBP_FrontlineObjective_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FrontlineObjective_C::OnEnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyGainedPrerequisites");

	UBP_FrontlineObjective_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.GetObjectiveProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FrontlineObjective_C::GetObjectiveProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.GetObjectiveProgress");

	UBP_FrontlineObjective_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
