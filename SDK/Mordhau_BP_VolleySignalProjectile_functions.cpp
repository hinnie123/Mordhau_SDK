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

// Function BP_VolleySignalProjectile.BP_VolleySignalProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VolleySignalProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolleySignalProjectile.BP_VolleySignalProjectile_C.UserConstructionScript");

	ABP_VolleySignalProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolleySignalProjectile.BP_VolleySignalProjectile_C.OnProjectileHit
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         BounceForce                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasHitWorld                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasStopped                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VolleySignalProjectile_C::OnProjectileHit(struct FVector* HitLocation, struct FVector* HitNormal, float* BounceForce, unsigned char* Surface, bool* bHasHitWorld, bool* bHasStopped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolleySignalProjectile.BP_VolleySignalProjectile_C.OnProjectileHit");

	ABP_VolleySignalProjectile_C_OnProjectileHit_Params params;
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


// Function BP_VolleySignalProjectile.BP_VolleySignalProjectile_C.ExecuteUbergraph_BP_VolleySignalProjectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VolleySignalProjectile_C::ExecuteUbergraph_BP_VolleySignalProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolleySignalProjectile.BP_VolleySignalProjectile_C.ExecuteUbergraph_BP_VolleySignalProjectile");

	ABP_VolleySignalProjectile_C_ExecuteUbergraph_BP_VolleySignalProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
