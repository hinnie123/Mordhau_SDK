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

// Function BP_ClothShoulders.BP_ClothShoulders_C.UserConstructionScript
struct UBP_ClothShoulders_C_UserConstructionScript_Params
{
};

// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveBeginPlay
struct UBP_ClothShoulders_C_ReceiveBeginPlay_Params
{
};

// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveActorBeginOverlap
struct UBP_ClothShoulders_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveTick
struct UBP_ClothShoulders_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothShoulders.BP_ClothShoulders_C.ExecuteUbergraph_BP_ClothShoulders
struct UBP_ClothShoulders_C_ExecuteUbergraph_BP_ClothShoulders_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
