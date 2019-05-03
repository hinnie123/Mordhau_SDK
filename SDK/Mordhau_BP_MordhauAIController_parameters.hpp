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

// Function BP_MordhauAIController.BP_MordhauAIController_C.GetTeamFilterClass
struct ABP_MordhauAIController_C_GetTeamFilterClass_Params
{
	class UClass*                                      FilterClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.UserConstructionScript
struct ABP_MordhauAIController_C_UserConstructionScript_Params
{
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnPossess
struct ABP_MordhauAIController_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnAfterUnPossess
struct ABP_MordhauAIController_C_OnAfterUnPossess_Params
{
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.ReceiveBeginPlay
struct ABP_MordhauAIController_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnStartedPerceivingCharacter
struct ABP_MordhauAIController_C_OnStartedPerceivingCharacter_Params
{
	class AAdvancedCharacter**                         PerceivedCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPerceptionInfo*                            PerceptionInfo;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnStoppedPerceivingCharacter
struct ABP_MordhauAIController_C_OnStoppedPerceivingCharacter_Params
{
	class AAdvancedCharacter**                         PerceivedCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPerceptionInfo*                            PerceptionInfo;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.ExecuteUbergraph_BP_MordhauAIController
struct ABP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
