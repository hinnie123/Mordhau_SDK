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

// Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.UserConstructionScript
struct ABP_ThrowableEquipment_C_UserConstructionScript_Params
{
};

// Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.AssignCustomizationToProjectile
struct ABP_ThrowableEquipment_C_AssignCustomizationToProjectile_Params
{
	class AMordhauProjectile**                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.ExecuteUbergraph_BP_ThrowableEquipment
struct ABP_ThrowableEquipment_C_ExecuteUbergraph_BP_ThrowableEquipment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
