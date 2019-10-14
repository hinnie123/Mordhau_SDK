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

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.GetObjectiveProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ItemDeliverySpot_C::GetObjectiveProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.GetObjectiveProgress");

	ABP_ItemDeliverySpot_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFlipProgressBarState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::UpdateFlipProgressBarState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFlipProgressBarState");

	ABP_ItemDeliverySpot_C_UpdateFlipProgressBarState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFloater
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::UpdateFloater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFloater");

	ABP_ItemDeliverySpot_C_UpdateFloater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.AnyObjectiveProgressChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::AnyObjectiveProgressChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.AnyObjectiveProgressChanged");

	ABP_ItemDeliverySpot_C_AnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCapturePointDone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDone                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ItemDeliverySpot_C::IsCapturePointDone(bool* IsDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCapturePointDone");

	ABP_ItemDeliverySpot_C_IsCapturePointDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDone != nullptr)
		*IsDone = params.IsDone;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ActivateSpawns
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::ActivateSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ActivateSpawns");

	ABP_ItemDeliverySpot_C_ActivateSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.DisableSpawns
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::DisableSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.DisableSpawns");

	ABP_ItemDeliverySpot_C_DisableSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateDeliverySpotVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::UpdateDeliverySpotVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateDeliverySpotVisuals");

	ABP_ItemDeliverySpot_C_UpdateDeliverySpotVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::EnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyLostPrerequisites");

	ABP_ItemDeliverySpot_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::EnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyGainedPrerequisites");

	ABP_ItemDeliverySpot_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      CapturePoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemDeliverySpot_C::Initialize(class ABP_CapturePoint_C* CapturePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Initialize");

	ABP_ItemDeliverySpot_C_Initialize_Params params;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Disable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SlowDisable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemDeliverySpot_C::Disable(bool SlowDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Disable");

	ABP_ItemDeliverySpot_C_Disable_Params params;
	params.SlowDisable = SlowDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Activate");

	ABP_ItemDeliverySpot_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnRep_Deliverables
// (BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::OnRep_Deliverables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnRep_Deliverables");

	ABP_ItemDeliverySpot_C_OnRep_Deliverables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UserConstructionScript");

	ABP_ItemDeliverySpot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ItemDeliverySpot_C::BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ItemDeliverySpot_C_BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemDeliverySpot_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnInitialize");

	ABP_ItemDeliverySpot_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::OnEnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyGainedPrerequisites");

	ABP_ItemDeliverySpot_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::OnEnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyLostPrerequisites");

	ABP_ItemDeliverySpot_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnUpdateUIWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::OnUpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnUpdateUIWidgets");

	ABP_ItemDeliverySpot_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnDeliverablesChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::OnDeliverablesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnDeliverablesChanged");

	ABP_ItemDeliverySpot_C_OnDeliverablesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ProgressVisualStage
// (BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::ProgressVisualStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ProgressVisualStage");

	ABP_ItemDeliverySpot_C_ProgressVisualStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnAnyObjectiveProgressChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemDeliverySpot_C::OnAnyObjectiveProgressChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnAnyObjectiveProgressChanged");

	ABP_ItemDeliverySpot_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ExecuteUbergraph_BP_ItemDeliverySpot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemDeliverySpot_C::ExecuteUbergraph_BP_ItemDeliverySpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ExecuteUbergraph_BP_ItemDeliverySpot");

	ABP_ItemDeliverySpot_C_ExecuteUbergraph_BP_ItemDeliverySpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
