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

// Function BP_Ladder.BP_Ladder_C.UpdateInteractionText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Ladder_C::UpdateInteractionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.UpdateInteractionText");

	ABP_Ladder_C_UpdateInteractionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.OnRep_LadderState
// (BlueprintCallable, BlueprintEvent)

void ABP_Ladder_C::OnRep_LadderState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.OnRep_LadderState");

	ABP_Ladder_C_OnRep_LadderState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.CanHeldInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Ladder_C::CanHeldInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.CanHeldInteract");

	ABP_Ladder_C_CanHeldInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Ladder.BP_Ladder_C.CanInteract
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Ladder_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.CanInteract");

	ABP_Ladder_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Ladder.BP_Ladder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ladder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.UserConstructionScript");

	ABP_Ladder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.OnHeldInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ladder_C::OnHeldInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.OnHeldInteractionStart");

	ABP_Ladder_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ladder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.ReceiveBeginPlay");

	ABP_Ladder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.OnHighlightMaintained
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ladder_C::OnHighlightMaintained(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.OnHighlightMaintained");

	ABP_Ladder_C_OnHighlightMaintained_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.BeginAnimatingLadder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoEffects                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ladder_C::BeginAnimatingLadder(bool DoEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.BeginAnimatingLadder");

	ABP_Ladder_C_BeginAnimatingLadder_Params params;
	params.DoEffects = DoEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ladder_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.OnInteractionStart");

	ABP_Ladder_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ladder_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.ReceiveAnyDamage");

	ABP_Ladder_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ladder_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.ReceiveTick");

	ABP_Ladder_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.ToggleLadderState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ladder_C::ToggleLadderState(class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.ToggleLadderState");

	ABP_Ladder_C_ToggleLadderState_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ladder.BP_Ladder_C.ExecuteUbergraph_BP_Ladder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ladder_C::ExecuteUbergraph_BP_Ladder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ladder.BP_Ladder_C.ExecuteUbergraph_BP_Ladder");

	ABP_Ladder_C_ExecuteUbergraph_BP_Ladder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
