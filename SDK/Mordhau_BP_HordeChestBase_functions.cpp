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

// Function BP_HordeChestBase.BP_HordeChestBase_C.UpdateVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordeChestBase_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.UpdateVisuals");

	ABP_HordeChestBase_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.SetAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewAvailable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeChestBase_C::SetAvailability(bool NewAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.SetAvailability");

	ABP_HordeChestBase_C_SetAvailability_Params params;
	params.NewAvailable = NewAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HordeChestBase_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.CanInteract");

	ABP_HordeChestBase_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeChestBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.UserConstructionScript");

	ABP_HordeChestBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordeChestBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveBeginPlay");

	ABP_HordeChestBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeChestBase_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.OnInteractionStart");

	ABP_HordeChestBase_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeChestBase_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveAnyDamage");

	ABP_HordeChestBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.ExecuteUbergraph_BP_HordeChestBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeChestBase_C::ExecuteUbergraph_BP_HordeChestBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.ExecuteUbergraph_BP_HordeChestBase");

	ABP_HordeChestBase_C_ExecuteUbergraph_BP_HordeChestBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
