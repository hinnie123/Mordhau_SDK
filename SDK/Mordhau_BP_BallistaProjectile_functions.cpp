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

// Function BP_BallistaProjectile.BP_BallistaProjectile_C.AttachProjectile
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BallistaProjectile_C::AttachProjectile(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.AttachProjectile");

	ABP_BallistaProjectile_C_AttachProjectile_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BallistaProjectile.BP_BallistaProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BallistaProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.UserConstructionScript");

	ABP_BallistaProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BallistaProjectile.BP_BallistaProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BallistaProjectile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.ReceiveTick");

	ABP_BallistaProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnUsedToKillOther
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BallistaProjectile_C::OnUsedToKillOther(class AAdvancedCharacter** Character, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnUsedToKillOther");

	ABP_BallistaProjectile_C_OnUsedToKillOther_Params params;
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


// Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnPostDismemberedOther
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeparatedBodyPart**     Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BallistaProjectile_C::OnPostDismemberedOther(struct FName* bone, class ASeparatedBodyPart** Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnPostDismemberedOther");

	ABP_BallistaProjectile_C_OnPostDismemberedOther_Params params;
	params.bone = bone;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnProjectileHit
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         BounceForce                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasHitWorld                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasStopped                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BallistaProjectile_C::OnProjectileHit(struct FVector* HitLocation, struct FVector* HitNormal, float* BounceForce, unsigned char* Surface, bool* bHasHitWorld, bool* bHasStopped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnProjectileHit");

	ABP_BallistaProjectile_C_OnProjectileHit_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.BounceForce = BounceForce;
	params.Surface = Surface;
	params.bHasHitWorld = bHasHitWorld;
	params.bHasStopped = bHasStopped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BallistaProjectile.BP_BallistaProjectile_C.ExecuteUbergraph_BP_BallistaProjectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BallistaProjectile_C::ExecuteUbergraph_BP_BallistaProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.ExecuteUbergraph_BP_BallistaProjectile");

	ABP_BallistaProjectile_C_ExecuteUbergraph_BP_BallistaProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
