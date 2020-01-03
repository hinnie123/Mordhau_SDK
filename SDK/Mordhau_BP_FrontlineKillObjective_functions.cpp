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

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.GetObjectiveProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::GetObjectiveProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.GetObjectiveProgress");

	ABP_FrontlineKillObjective_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.AwardScorePointsIfApplicable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::AwardScorePointsIfApplicable(class AController* Instigator, int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.AwardScorePointsIfApplicable");

	ABP_FrontlineKillObjective_C_AwardScorePointsIfApplicable_Params params;
	params.Instigator = Instigator;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.CompileCandidatesList
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::CompileCandidatesList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.CompileCandidatesList");

	ABP_FrontlineKillObjective_C_CompileCandidatesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCandidateValidForPossession
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_FrontlinePlayerController_C* Candidate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::IsCandidateValidForPossession(class ABP_FrontlinePlayerController_C* Candidate, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCandidateValidForPossession");

	ABP_FrontlineKillObjective_C_IsCandidateValidForPossession_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.NotifyCandidateForPossession
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::NotifyCandidateForPossession()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.NotifyCandidateForPossession");

	ABP_FrontlineKillObjective_C_NotifyCandidateForPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ProcessPossessionCandidates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::ProcessPossessionCandidates(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ProcessPossessionCandidates");

	ABP_FrontlineKillObjective_C_ProcessPossessionCandidates_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UpdateUIWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::UpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UpdateUIWidgets");

	ABP_FrontlineKillObjective_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.SpawnOurEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::SpawnOurEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.SpawnOurEquipment");

	ABP_FrontlineKillObjective_C_SpawnOurEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UserConstructionScript");

	ABP_FrontlineKillObjective_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrontlineKillObjective_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveBeginPlay");

	ABP_FrontlineKillObjective_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::OnEnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyGainedPrerequisites");

	ABP_FrontlineKillObjective_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::OnEnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyLostPrerequisites");

	ABP_FrontlineKillObjective_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveAnyDamage");

	ABP_FrontlineKillObjective_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnInitialize");

	ABP_FrontlineKillObjective_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnDied");

	ABP_FrontlineKillObjective_C_OnDied_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnUpdateUIWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::OnUpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnUpdateUIWidgets");

	ABP_FrontlineKillObjective_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnHealthChanged
// (Event, Public, BlueprintEvent)

void ABP_FrontlineKillObjective_C::OnHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnHealthChanged");

	ABP_FrontlineKillObjective_C_OnHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.BPLODTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::BPLODTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.BPLODTick");

	ABP_FrontlineKillObjective_C_BPLODTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnAnyObjectiveProgressChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineKillObjective_C::OnAnyObjectiveProgressChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnAnyObjectiveProgressChanged");

	ABP_FrontlineKillObjective_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.MoveBlockedBySlow
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Impact                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_FrontlineKillObjective_C::MoveBlockedBySlow(struct FHitResult* Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.MoveBlockedBySlow");

	ABP_FrontlineKillObjective_C_MoveBlockedBySlow_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ExecuteUbergraph_BP_FrontlineKillObjective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineKillObjective_C::ExecuteUbergraph_BP_FrontlineKillObjective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ExecuteUbergraph_BP_FrontlineKillObjective");

	ABP_FrontlineKillObjective_C_ExecuteUbergraph_BP_FrontlineKillObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
