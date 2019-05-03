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

// Function BP_CatapultProjectile.BP_CatapultProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CatapultProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatapultProjectile.BP_CatapultProjectile_C.UserConstructionScript");

	ABP_CatapultProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatapultProjectile.BP_CatapultProjectile_C.OnProjectileHit
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         BounceForce                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasHitWorld                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasStopped                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatapultProjectile_C::OnProjectileHit(struct FVector* HitLocation, struct FVector* HitNormal, float* BounceForce, unsigned char* Surface, bool* bHasHitWorld, bool* bHasStopped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatapultProjectile.BP_CatapultProjectile_C.OnProjectileHit");

	ABP_CatapultProjectile_C_OnProjectileHit_Params params;
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


// Function BP_CatapultProjectile.BP_CatapultProjectile_C.Fire
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CatapultProjectile_C::Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatapultProjectile.BP_CatapultProjectile_C.Fire");

	ABP_CatapultProjectile_C_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatapultProjectile.BP_CatapultProjectile_C.ExecuteUbergraph_BP_CatapultProjectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatapultProjectile_C::ExecuteUbergraph_BP_CatapultProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatapultProjectile.BP_CatapultProjectile_C.ExecuteUbergraph_BP_CatapultProjectile");

	ABP_CatapultProjectile_C_ExecuteUbergraph_BP_CatapultProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
