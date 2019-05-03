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

// Function BP_BearTrap.BP_BearTrap_C.CanHeldInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BearTrap_C::CanHeldInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.CanHeldInteract");

	ABP_BearTrap_C_CanHeldInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BearTrap.BP_BearTrap_C.ShouldShine
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BearTrap_C::ShouldShine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ShouldShine");

	ABP_BearTrap_C_ShouldShine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BearTrap.BP_BearTrap_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BearTrap_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.CanInteract");

	ABP_BearTrap_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BearTrap.BP_BearTrap_C.DealDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter*      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::DealDamage(class AAdvancedCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.DealDamage");

	ABP_BearTrap_C_DealDamage_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.ValidatePlantSpot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation1P               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                CameraRotattion1P              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BearTrap_C::ValidatePlantSpot(const struct FVector& CameraLocation1P, const struct FRotator& CameraRotattion1P, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ValidatePlantSpot");

	ABP_BearTrap_C_ValidatePlantSpot_Params params;
	params.CameraLocation1P = CameraLocation1P;
	params.CameraRotattion1P = CameraRotattion1P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (AttachToComponent != nullptr)
		*AttachToComponent = params.AttachToComponent;
}


// Function BP_BearTrap.BP_BearTrap_C.OnRequestFire
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BearTrap_C::OnRequestFire(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnRequestFire");

	ABP_BearTrap_C_OnRequestFire_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BearTrap.BP_BearTrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BearTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.UserConstructionScript");

	ABP_BearTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.OnLoadedChanged
// (Event, Public, BlueprintEvent)

void ABP_BearTrap_C::OnLoadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnLoadedChanged");

	ABP_BearTrap_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ReceiveActorBeginOverlap");

	ABP_BearTrap_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.FireProjectile
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator*               Orientation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            OwningController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ExpectedDelay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::FireProjectile(struct FVector* Origin, struct FRotator* Orientation, class AController** OwningController, float* ExpectedDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.FireProjectile");

	ABP_BearTrap_C_FireProjectile_Params params;
	params.Origin = Origin;
	params.Orientation = Orientation;
	params.OwningController = OwningController;
	params.ExpectedDelay = ExpectedDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ReceiveAnyDamage");

	ABP_BearTrap_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.OnUsedToKillOther
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::OnUsedToKillOther(class AAdvancedCharacter** Character, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnUsedToKillOther");

	ABP_BearTrap_C_OnUsedToKillOther_Params params;
	params.Character = Character;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.OnPostDismemberedOther
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeparatedBodyPart**     Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::OnPostDismemberedOther(struct FName* bone, class ASeparatedBodyPart** Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnPostDismemberedOther");

	ABP_BearTrap_C_OnPostDismemberedOther_Params params;
	params.bone = bone;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.OnAmmoChanged
// (Event, Public, BlueprintEvent)

void ABP_BearTrap_C::OnAmmoChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnAmmoChanged");

	ABP_BearTrap_C_OnAmmoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.PlanterDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter*      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::PlanterDied(class AAdvancedCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.PlanterDied");

	ABP_BearTrap_C_PlanterDied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.PlanterDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter*      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::PlanterDestroyed(class AAdvancedCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.PlanterDestroyed");

	ABP_BearTrap_C_PlanterDestroyed_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnInteractionStart");

	ABP_BearTrap_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.OnHeldInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::OnHeldInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnHeldInteractionStart");

	ABP_BearTrap_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap.BP_BearTrap_C.ExecuteUbergraph_BP_BearTrap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_C::ExecuteUbergraph_BP_BearTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ExecuteUbergraph_BP_BearTrap");

	ABP_BearTrap_C_ExecuteUbergraph_BP_BearTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
