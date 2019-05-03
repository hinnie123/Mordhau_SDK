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

// Function BP_CapturePoint.BP_CapturePoint_C.ObjectivesChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CapturePoint_C::ObjectivesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.ObjectivesChanged");

	ABP_CapturePoint_C_ObjectivesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.Set Cap Point Widget Colors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Fill_Color                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Progress_Bar_Color             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_CapturePoint_C::Set_Cap_Point_Widget_Colors(const struct FLinearColor& Fill_Color, const struct FLinearColor& Progress_Bar_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.Set Cap Point Widget Colors");

	ABP_CapturePoint_C_Set_Cap_Point_Widget_Colors_Params params;
	params.Fill_Color = Fill_Color;
	params.Progress_Bar_Color = Progress_Bar_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.GetTeamRelevance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Relevance                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CapturePoint_C::GetTeamRelevance(unsigned char Team, int* Relevance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.GetTeamRelevance");

	ABP_CapturePoint_C_GetTeamRelevance_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Relevance != nullptr)
		*Relevance = params.Relevance;
}


// Function BP_CapturePoint.BP_CapturePoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CapturePoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.UserConstructionScript");

	ABP_CapturePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CapturePoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.ReceiveBeginPlay");

	ABP_CapturePoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.OnCapturingTeamChanged
// (Event, Public, BlueprintEvent)

void ABP_CapturePoint_C::OnCapturingTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnCapturingTeamChanged");

	ABP_CapturePoint_C_OnCapturingTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.OnOwningTeamChanged
// (Event, Public, BlueprintEvent)

void ABP_CapturePoint_C::OnOwningTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnOwningTeamChanged");

	ABP_CapturePoint_C_OnOwningTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.EnemyGainedPrerequisites
// (Event, Public, BlueprintEvent)

void ABP_CapturePoint_C::EnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.EnemyGainedPrerequisites");

	ABP_CapturePoint_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.EnemyLostPrerequisites
// (Event, Public, BlueprintEvent)

void ABP_CapturePoint_C::EnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.EnemyLostPrerequisites");

	ABP_CapturePoint_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.UpdateUIWidgets
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CapturePoint_C::UpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.UpdateUIWidgets");

	ABP_CapturePoint_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.OnStartedFlashing
// (Event, Public, BlueprintEvent)

void ABP_CapturePoint_C::OnStartedFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnStartedFlashing");

	ABP_CapturePoint_C_OnStartedFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.OnStoppedFlashing
// (Event, Public, BlueprintEvent)

void ABP_CapturePoint_C::OnStoppedFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnStoppedFlashing");

	ABP_CapturePoint_C_OnStoppedFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.TriggerWinDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_CapturePoint_C::TriggerWinDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.TriggerWinDelayed");

	ABP_CapturePoint_C_TriggerWinDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.Pulse
// (BlueprintCallable, BlueprintEvent)

void ABP_CapturePoint_C::Pulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.Pulse");

	ABP_CapturePoint_C_Pulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapturePoint.BP_CapturePoint_C.ExecuteUbergraph_BP_CapturePoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CapturePoint_C::ExecuteUbergraph_BP_CapturePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.ExecuteUbergraph_BP_CapturePoint");

	ABP_CapturePoint_C_ExecuteUbergraph_BP_CapturePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
