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

// Function BP_HordeTask.BP_HordeTask_C.GetLocationTarget
struct ABP_HordeTask_C_GetLocationTarget_Params
{
	class ABP_HordeEnemy_C*                            Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_HordeTask.BP_HordeTask_C.IsTaskValidFor
struct ABP_HordeTask_C_IsTaskValidFor_Params
{
	class ABP_HordeEnemy_C*                            Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeTask.BP_HordeTask_C.TaskTriggered
struct ABP_HordeTask_C_TaskTriggered_Params
{
	class ABP_HordeEnemy_C*                            Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordeTask.BP_HordeTask_C.UserConstructionScript
struct ABP_HordeTask_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
