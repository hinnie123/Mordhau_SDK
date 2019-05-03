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

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.GetObjectiveProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineInteractable_C::GetObjectiveProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.GetObjectiveProgress");

	ABP_FrontlineInteractable_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UpdateUIWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::UpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UpdateUIWidgets");

	ABP_FrontlineInteractable_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanHeldInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FrontlineInteractable_C::CanHeldInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanHeldInteract");

	ABP_FrontlineInteractable_C_CanHeldInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FrontlineInteractable_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanInteract");

	ABP_FrontlineInteractable_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IncrementInteractions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerController* Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineInteractable_C::IncrementInteractions(class AMordhauPlayerController* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IncrementInteractions");

	ABP_FrontlineInteractable_C_IncrementInteractions_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnRep_Interactions
// (BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::OnRep_Interactions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnRep_Interactions");

	ABP_FrontlineInteractable_C_OnRep_Interactions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::EnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyLostPrerequisites");

	ABP_FrontlineInteractable_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::EnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyGainedPrerequisites");

	ABP_FrontlineInteractable_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      CapturePoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineInteractable_C::Initialize(class ABP_CapturePoint_C* CapturePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Initialize");

	ABP_FrontlineInteractable_C_Initialize_Params params;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Disable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Disable");

	ABP_FrontlineInteractable_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Activate");

	ABP_FrontlineInteractable_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UserConstructionScript");

	ABP_FrontlineInteractable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineInteractable_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInitialize");

	ABP_FrontlineInteractable_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::OnEnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyGainedPrerequisites");

	ABP_FrontlineInteractable_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::OnEnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyLostPrerequisites");

	ABP_FrontlineInteractable_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnUpdateUIWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::OnUpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnUpdateUIWidgets");

	ABP_FrontlineInteractable_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionsChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::OnInteractionsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionsChanged");

	ABP_FrontlineInteractable_C_OnInteractionsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ProgressVisualStage
// (BlueprintCallable, BlueprintEvent)

void ABP_FrontlineInteractable_C::ProgressVisualStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ProgressVisualStage");

	ABP_FrontlineInteractable_C_ProgressVisualStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnHeldInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineInteractable_C::OnHeldInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnHeldInteractionStart");

	ABP_FrontlineInteractable_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ExecuteUbergraph_BP_FrontlineInteractable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineInteractable_C::ExecuteUbergraph_BP_FrontlineInteractable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ExecuteUbergraph_BP_FrontlineInteractable");

	ABP_FrontlineInteractable_C_ExecuteUbergraph_BP_FrontlineInteractable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
