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

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Disable
struct ABP_SpawnProtectionBox_C_Disable_Params
{
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Enable
struct ABP_SpawnProtectionBox_C_Enable_Params
{
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.UserConstructionScript
struct ABP_SpawnProtectionBox_C_UserConstructionScript_Params
{
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorBeginOverlap
struct ABP_SpawnProtectionBox_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorEndOverlap
struct ABP_SpawnProtectionBox_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ExecuteUbergraph_BP_SpawnProtectionBox
struct ABP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
