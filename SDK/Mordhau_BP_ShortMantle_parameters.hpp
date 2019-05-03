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

// Function BP_ShortMantle.BP_ShortMantle_C.UserConstructionScript
struct UBP_ShortMantle_C_UserConstructionScript_Params
{
};

// Function BP_ShortMantle.BP_ShortMantle_C.ReceiveBeginPlay
struct UBP_ShortMantle_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShortMantle.BP_ShortMantle_C.ReceiveActorBeginOverlap
struct UBP_ShortMantle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortMantle.BP_ShortMantle_C.ReceiveTick
struct UBP_ShortMantle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortMantle.BP_ShortMantle_C.ExecuteUbergraph_BP_ShortMantle
struct UBP_ShortMantle_C_ExecuteUbergraph_BP_ShortMantle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
