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

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.GetObjectiveProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineDestroyable_C::GetObjectiveProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.GetObjectiveProgress");

	ABP_FrontlineDestroyable_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UpdateUIWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::UpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UpdateUIWidgets");

	ABP_FrontlineDestroyable_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::EnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyLostPrerequisites");

	ABP_FrontlineDestroyable_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::EnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyGainedPrerequisites");

	ABP_FrontlineDestroyable_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      InCapturePoint                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineDestroyable_C::Initialize(class ABP_CapturePoint_C* InCapturePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.Initialize");

	ABP_FrontlineDestroyable_C_Initialize_Params params;
	params.InCapturePoint = InCapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UserConstructionScript");

	ABP_FrontlineDestroyable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrontlineDestroyable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveBeginPlay");

	ABP_FrontlineDestroyable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnReplicatedHealthChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::OnReplicatedHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnReplicatedHealthChanged");

	ABP_FrontlineDestroyable_C_OnReplicatedHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineDestroyable_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveAnyDamage");

	ABP_FrontlineDestroyable_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::OnEnemyGainedPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyGainedPrerequisites");

	ABP_FrontlineDestroyable_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::OnEnemyLostPrerequisites()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyLostPrerequisites");

	ABP_FrontlineDestroyable_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnUpdateUIWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::OnUpdateUIWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnUpdateUIWidgets");

	ABP_FrontlineDestroyable_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineDestroyable_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnInitialize");

	ABP_FrontlineDestroyable_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnAnyObjectiveProgressChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineDestroyable_C::OnAnyObjectiveProgressChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnAnyObjectiveProgressChanged");

	ABP_FrontlineDestroyable_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ExecuteUbergraph_BP_FrontlineDestroyable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineDestroyable_C::ExecuteUbergraph_BP_FrontlineDestroyable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ExecuteUbergraph_BP_FrontlineDestroyable");

	ABP_FrontlineDestroyable_C_ExecuteUbergraph_BP_FrontlineDestroyable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
