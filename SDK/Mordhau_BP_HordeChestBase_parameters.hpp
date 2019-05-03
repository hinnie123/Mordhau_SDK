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

// Function BP_HordeChestBase.BP_HordeChestBase_C.UpdateVisuals
struct ABP_HordeChestBase_C_UpdateVisuals_Params
{
};

// Function BP_HordeChestBase.BP_HordeChestBase_C.SetAvailability
struct ABP_HordeChestBase_C_SetAvailability_Params
{
	bool                                               NewAvailable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeChestBase.BP_HordeChestBase_C.CanInteract
struct ABP_HordeChestBase_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HordeChestBase.BP_HordeChestBase_C.UserConstructionScript
struct ABP_HordeChestBase_C_UserConstructionScript_Params
{
};

// Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveBeginPlay
struct ABP_HordeChestBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeChestBase.BP_HordeChestBase_C.OnInteractionStart
struct ABP_HordeChestBase_C_OnInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveAnyDamage
struct ABP_HordeChestBase_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeChestBase.BP_HordeChestBase_C.ExecuteUbergraph_BP_HordeChestBase
struct ABP_HordeChestBase_C_ExecuteUbergraph_BP_HordeChestBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
