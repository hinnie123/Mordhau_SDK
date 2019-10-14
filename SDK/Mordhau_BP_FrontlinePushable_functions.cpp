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

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.GetObjectiveProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlinePushable_C::GetObjectiveProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.GetObjectiveProgress");

	ABP_FrontlinePushable_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.UpdateUIWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::UpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.UpdateUIWidgets");

	ABP_FrontlinePushable_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::EnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyLostPrerequisites");

	ABP_FrontlinePushable_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::EnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyGainedPrerequisites");

	ABP_FrontlinePushable_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      CapturePoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlinePushable_C::Initialize(class ABP_CapturePoint_C* CapturePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.Initialize");

	ABP_FrontlinePushable_C_Initialize_Params params;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.UserConstructionScript");

	ABP_FrontlinePushable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnProgressUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         OldProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlinePushable_C::OnProgressUpdated(float* OldProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnProgressUpdated");

	ABP_FrontlinePushable_C_OnProgressUpdated_Params params;
	params.OldProgress = OldProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlinePushable_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnInitialize");

	ABP_FrontlinePushable_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::OnEnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyLostPrerequisites");

	ABP_FrontlinePushable_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::OnEnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyGainedPrerequisites");

	ABP_FrontlinePushable_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnUpdateUIWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::OnUpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnUpdateUIWidgets");

	ABP_FrontlinePushable_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.PushableArrivedAtDestination
// (BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::PushableArrivedAtDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.PushableArrivedAtDestination");

	ABP_FrontlinePushable_C_PushableArrivedAtDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnAnyObjectiveProgressChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlinePushable_C::OnAnyObjectiveProgressChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnAnyObjectiveProgressChanged");

	ABP_FrontlinePushable_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlinePushable.BP_FrontlinePushable_C.ExecuteUbergraph_BP_FrontlinePushable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlinePushable_C::ExecuteUbergraph_BP_FrontlinePushable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.ExecuteUbergraph_BP_FrontlinePushable");

	ABP_FrontlinePushable_C_ExecuteUbergraph_BP_FrontlinePushable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
