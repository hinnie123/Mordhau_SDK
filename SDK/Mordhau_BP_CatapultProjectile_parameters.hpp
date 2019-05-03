#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CatapultProjectile.BP_CatapultProjectile_C.UserConstructionScript
struct ABP_CatapultProjectile_C_UserConstructionScript_Params
{
};

// Function BP_CatapultProjectile.BP_CatapultProjectile_C.OnProjectileHit
struct ABP_CatapultProjectile_C_OnProjectileHit_Params
{
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             BounceForce;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasHitWorld;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasStopped;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CatapultProjectile.BP_CatapultProjectile_C.Fire
struct ABP_CatapultProjectile_C_Fire_Params
{
};

// Function BP_CatapultProjectile.BP_CatapultProjectile_C.ExecuteUbergraph_BP_CatapultProjectile
struct ABP_CatapultProjectile_C_ExecuteUbergraph_BP_CatapultProjectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
