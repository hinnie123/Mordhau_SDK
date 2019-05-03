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

// Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_Regenerating
// (BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::OnRep_Regenerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_Regenerating");

	ABP_DestroyableActor_C_OnRep_Regenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.OnReplicatedHealthChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::OnReplicatedHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.OnReplicatedHealthChanged");

	ABP_DestroyableActor_C_OnReplicatedHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.StopRegenerating
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::StopRegenerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.StopRegenerating");

	ABP_DestroyableActor_C_StopRegenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.PlayParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::PlayParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.PlayParticle");

	ABP_DestroyableActor_C_PlayParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestroyableActor_C::SetHealth(float NewHealth, class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.SetHealth");

	ABP_DestroyableActor_C_SetHealth_Params params;
	params.NewHealth = NewHealth;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_ReplicatedHealth
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::OnRep_ReplicatedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_ReplicatedHealth");

	ABP_DestroyableActor_C_OnRep_ReplicatedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.UpdateReplicatedHealth
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::UpdateReplicatedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.UpdateReplicatedHealth");

	ABP_DestroyableActor_C_UpdateReplicatedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.UserConstructionScript");

	ABP_DestroyableActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestroyableActor_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveAnyDamage");

	ABP_DestroyableActor_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DestroyableActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveBeginPlay");

	ABP_DestroyableActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.RegenTickEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::RegenTickEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.RegenTickEvent");

	ABP_DestroyableActor_C_RegenTickEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.StartRegenerating
// (BlueprintCallable, BlueprintEvent)

void ABP_DestroyableActor_C::StartRegenerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.StartRegenerating");

	ABP_DestroyableActor_C_StartRegenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableActor.BP_DestroyableActor_C.ExecuteUbergraph_BP_DestroyableActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestroyableActor_C::ExecuteUbergraph_BP_DestroyableActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.ExecuteUbergraph_BP_DestroyableActor");

	ABP_DestroyableActor_C_ExecuteUbergraph_BP_DestroyableActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
