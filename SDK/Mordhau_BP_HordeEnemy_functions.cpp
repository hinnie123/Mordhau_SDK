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

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnRep_StunnedBySkillCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeEnemy_C::OnRep_StunnedBySkillCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.OnRep_StunnedBySkillCounter");

	ABP_HordeEnemy_C_OnRep_StunnedBySkillCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.GetEnragedTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       OutTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_C::GetEnragedTarget(class AMordhauCharacter** OutTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.GetEnragedTarget");

	ABP_HordeEnemy_C_GetEnragedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTarget != nullptr)
		*OutTarget = params.OutTarget;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyParryResult
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InResult                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AMordhauCharacter**      Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HordeEnemy_C::ModifyParryResult(bool* InResult, struct FHitResult* HitResult, class AMordhauCharacter** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyParryResult");

	ABP_HordeEnemy_C_ModifyParryResult_Params params;
	params.InResult = InResult;
	params.HitResult = HitResult;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_HordeEnemy_C::ModifyDamage(float* DamageAmount, EMordhauDamageType* DamageType, struct FHitResult* HitInfo, class AActor** Source, class AActor** Agent, class AController** EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyDamage");

	ABP_HordeEnemy_C_ModifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.Source = Source;
	params.Agent = Agent;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeEnemy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.UserConstructionScript");

	ABP_HordeEnemy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordeEnemy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveBeginPlay");

	ABP_HordeEnemy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_C::OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.OnDied");

	ABP_HordeEnemy_C_OnDied_Params params;
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


// Function BP_HordeEnemy.BP_HordeEnemy_C.MoveBlockedBySlow
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Impact                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HordeEnemy_C::MoveBlockedBySlow(struct FHitResult* Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.MoveBlockedBySlow");

	ABP_HordeEnemy_C_MoveBlockedBySlow_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.CompleteTask
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeEnemy_C::CompleteTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.CompleteTask");

	ABP_HordeEnemy_C_CompleteTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveMordhauDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// EMordhauDamageType*            DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubDamageType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_C::ReceiveMordhauDamage(float* Damage, struct FHitResult* HitResult, EMordhauDamageType* DamageType, unsigned char* SubDamageType, class AActor** Source, class AActor** Agent, class AController** EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveMordhauDamage");

	ABP_HordeEnemy_C_ReceiveMordhauDamage_Params params;
	params.Damage = Damage;
	params.HitResult = HitResult;
	params.DamageType = DamageType;
	params.SubDamageType = SubDamageType;
	params.Source = Source;
	params.Agent = Agent;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.LegSweep
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeEnemy_C::LegSweep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.LegSweep");

	ABP_HordeEnemy_C_LegSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.OnBlockedMelee
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AMordhauCharacter**      Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_C::OnBlockedMelee(struct FHitResult* HitResult, class AMordhauCharacter** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.OnBlockedMelee");

	ABP_HordeEnemy_C_OnBlockedMelee_Params params;
	params.HitResult = HitResult;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.Recoil
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeEnemy_C::Recoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.Recoil");

	ABP_HordeEnemy_C_Recoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.Cripple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_C::Cripple(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.Cripple");

	ABP_HordeEnemy_C_Cripple_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.Enrage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_C::Enrage(class AMordhauCharacter* Target, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.Enrage");

	ABP_HordeEnemy_C_Enrage_Params params;
	params.Target = Target;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.OnKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_C::OnKilled(class AController** EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.OnKilled");

	ABP_HordeEnemy_C_OnKilled_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy.BP_HordeEnemy_C.ExecuteUbergraph_BP_HordeEnemy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_C::ExecuteUbergraph_BP_HordeEnemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ExecuteUbergraph_BP_HordeEnemy");

	ABP_HordeEnemy_C_ExecuteUbergraph_BP_HordeEnemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
