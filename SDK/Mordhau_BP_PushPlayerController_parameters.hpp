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

// Function BP_PushPlayerController.BP_PushPlayerController_C.ShowCurrentObjective
struct ABP_PushPlayerController_C_ShowCurrentObjective_Params
{
	bool                                               PlayHorn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PushPlayerController.BP_PushPlayerController_C.UserConstructionScript
struct ABP_PushPlayerController_C_UserConstructionScript_Params
{
};

// Function BP_PushPlayerController.BP_PushPlayerController_C.OnAfterPossess
struct ABP_PushPlayerController_C_OnAfterPossess_Params
{
	class APawn**                                      APawn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PushPlayerController.BP_PushPlayerController_C.ExecuteUbergraph_BP_PushPlayerController
struct ABP_PushPlayerController_C_ExecuteUbergraph_BP_PushPlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
