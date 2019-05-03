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

// Function BP_Door.BP_Door_C.GetDoorToActorAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleDegrees                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Door_C::GetDoorToActorAngle(class AActor* Actor, float* AngleDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.GetDoorToActorAngle");

	ABP_Door_C_GetDoorToActorAngle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleDegrees != nullptr)
		*AngleDegrees = params.AngleDegrees;
}


// Function BP_Door.BP_Door_C.GetDoorForwardVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)

void ABP_Door_C::GetDoorForwardVector(struct FVector* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.GetDoorForwardVector");

	ABP_Door_C_GetDoorForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_Door.BP_Door_C.OnRep_DoorState
// (BlueprintCallable, BlueprintEvent)

void ABP_Door_C::OnRep_DoorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.OnRep_DoorState");

	ABP_Door_C_OnRep_DoorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door.BP_Door_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Door_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.UserConstructionScript");

	ABP_Door_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door.BP_Door_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Door_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.ReceiveBeginPlay");

	ABP_Door_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door.BP_Door_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Door_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.ReceiveTick");

	ABP_Door_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door.BP_Door_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Door_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.OnInteractionStart");

	ABP_Door_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door.BP_Door_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Door_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.ReceiveAnyDamage");

	ABP_Door_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door.BP_Door_C.ExecuteUbergraph_BP_Door
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Door_C::ExecuteUbergraph_BP_Door(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door.BP_Door_C.ExecuteUbergraph_BP_Door");

	ABP_Door_C_ExecuteUbergraph_BP_Door_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
