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

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_DivineFavorCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::OnRep_DivineFavorCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_DivineFavorCounter");

	ABP_HordeCharacter_C_OnRep_DivineFavorCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.AwardHealthOnKillToTeammates
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::AwardHealthOnKillToTeammates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.AwardHealthOnKillToTeammates");

	ABP_HordeCharacter_C_AwardHealthOnKillToTeammates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilledEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HordeEnemy_C*        Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::OnKilledEnemy(class ABP_HordeEnemy_C* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilledEnemy");

	ABP_HordeCharacter_C_OnKilledEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.SpecialCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::SpecialCooldown(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.SpecialCooldown");

	ABP_HordeCharacter_C_SpecialCooldown_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.DoSpecialAbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::DoSpecialAbility(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.DoSpecialAbility");

	ABP_HordeCharacter_C_DoSpecialAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Vanish
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::Stage2Vanish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Vanish");

	ABP_HordeCharacter_C_Stage2Vanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginVanish
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::BeginVanish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginVanish");

	ABP_HordeCharacter_C_BeginVanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Immortality
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::Stage2Immortality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Immortality");

	ABP_HordeCharacter_C_Stage2Immortality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginImmortality
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::BeginImmortality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginImmortality");

	ABP_HordeCharacter_C_BeginImmortality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2DivineFavor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::Stage2DivineFavor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2DivineFavor");

	ABP_HordeCharacter_C_Stage2DivineFavor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginDivineFavor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::BeginDivineFavor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginDivineFavor");

	ABP_HordeCharacter_C_BeginDivineFavor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Taunt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::Stage2Taunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Taunt");

	ABP_HordeCharacter_C_Stage2Taunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginTaunt
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::BeginTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginTaunt");

	ABP_HordeCharacter_C_BeginTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Shockwave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::Stage2Shockwave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Shockwave");

	ABP_HordeCharacter_C_Stage2Shockwave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Hookshot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::Stage2Hookshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Hookshot");

	ABP_HordeCharacter_C_Stage2Hookshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginShockwave
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::BeginShockwave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginShockwave");

	ABP_HordeCharacter_C_BeginShockwave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginHookshot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::BeginHookshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginHookshot");

	ABP_HordeCharacter_C_BeginHookshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyDamage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_HordeCharacter_C::ModifyDamage(float* DamageAmount, EMordhauDamageType* DamageType, struct FHitResult* HitInfo, class AActor** Source, class AActor** Agent, class AController** EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyDamage");

	ABP_HordeCharacter_C_ModifyDamage_Params params;
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


// Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkillsToEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::ApplySkillsToEquipment(class AMordhauEquipment* Equip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkillsToEquipment");

	ABP_HordeCharacter_C_ApplySkillsToEquipment_Params params;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyOutgoingDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType             DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InDamage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::ModifyOutgoingDamage(class AActor* Receiver, EMordhauDamageType DamageType, class AActor* Agent, float InDamage, struct FHitResult* HitInfo, float* OutDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyOutgoingDamage");

	ABP_HordeCharacter_C_ModifyOutgoingDamage_Params params;
	params.Receiver = Receiver;
	params.DamageType = DamageType;
	params.Agent = Agent;
	params.InDamage = InDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
	if (OutDamage != nullptr)
		*OutDamage = params.OutDamage;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkillFloat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::GetSkillFloat(TEnumAsByte<E_HordeSkill> Skill, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkillFloat");

	ABP_HordeCharacter_C_GetSkillFloat_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.RoundEnded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::RoundEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.RoundEnded");

	ABP_HordeCharacter_C_RoundEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkills
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::ApplySkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkills");

	ABP_HordeCharacter_C_ApplySkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::GetSkill(TEnumAsByte<E_HordeSkill> Skill, unsigned char* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkill");

	ABP_HordeCharacter_C_GetSkill_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_ReplicatedSkills
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::OnRep_ReplicatedSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_ReplicatedSkills");

	ABP_HordeCharacter_C_OnRep_ReplicatedSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.UserConstructionScript");

	ABP_HordeCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordeCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveBeginPlay");

	ABP_HordeCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnDied");

	ABP_HordeCharacter_C_OnDied_Params params;
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


// Function BP_HordeCharacter.BP_HordeCharacter_C.OnArmorReplicated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWearableSlot*                 Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::OnArmorReplicated(EWearableSlot* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnArmorReplicated");

	ABP_HordeCharacter_C_OnArmorReplicated_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::OnKilled(class AController** EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilled");

	ABP_HordeCharacter_C_OnKilled_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.OnPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauEquipment**      Eq                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::OnPickedUp(class AMordhauEquipment** Eq)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnPickedUp");

	ABP_HordeCharacter_C_OnPickedUp_Params params;
	params.Eq = Eq;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.OnBlockedMelee
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AMordhauCharacter**      Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::OnBlockedMelee(struct FHitResult* HitResult, class AMordhauCharacter** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnBlockedMelee");

	ABP_HordeCharacter_C_OnBlockedMelee_Params params;
	params.HitResult = HitResult;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.OnAttackStarted
// (Event, Public, BlueprintEvent)

void ABP_HordeCharacter_C::OnAttackStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnAttackStarted");

	ABP_HordeCharacter_C_OnAttackStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.TriggerImmortality
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::TriggerImmortality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.TriggerImmortality");

	ABP_HordeCharacter_C_TriggerImmortality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.Unvanish
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::Unvanish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Unvanish");

	ABP_HordeCharacter_C_Unvanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_HordeCharacter_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveDestroyed");

	ABP_HordeCharacter_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.RegenerationTick
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::RegenerationTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.RegenerationTick");

	ABP_HordeCharacter_C_RegenerationTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.MaintenanceTick
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeCharacter_C::MaintenanceTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.MaintenanceTick");

	ABP_HordeCharacter_C_MaintenanceTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.RequestVolley
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Aim                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_HordeCharacter_C::RequestVolley(const struct FRotator& Aim, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.RequestVolley");

	ABP_HordeCharacter_C_RequestVolley_Params params;
	params.Aim = Aim;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeCharacter.BP_HordeCharacter_C.ExecuteUbergraph_BP_HordeCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeCharacter_C::ExecuteUbergraph_BP_HordeCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ExecuteUbergraph_BP_HordeCharacter");

	ABP_HordeCharacter_C_ExecuteUbergraph_BP_HordeCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
