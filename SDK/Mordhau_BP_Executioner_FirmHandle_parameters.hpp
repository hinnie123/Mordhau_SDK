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

// Function BP_Executioner_FirmHandle.BP_Executioner_FirmHandle_C.UserConstructionScript
struct UBP_Executioner_FirmHandle_C_UserConstructionScript_Params
{
};

// Function BP_Executioner_FirmHandle.BP_Executioner_FirmHandle_C.ReceiveBeginPlay
struct UBP_Executioner_FirmHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_Executioner_FirmHandle.BP_Executioner_FirmHandle_C.ReceiveActorBeginOverlap
struct UBP_Executioner_FirmHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Executioner_FirmHandle.BP_Executioner_FirmHandle_C.ReceiveTick
struct UBP_Executioner_FirmHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Executioner_FirmHandle.BP_Executioner_FirmHandle_C.ExecuteUbergraph_BP_Executioner_FirmHandle
struct UBP_Executioner_FirmHandle_C_ExecuteUbergraph_BP_Executioner_FirmHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
