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

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.GetObjectiveProgress
struct ABP_FrontlineInteractable_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UpdateUIWidgets
struct ABP_FrontlineInteractable_C_UpdateUIWidgets_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanHeldInteract
struct ABP_FrontlineInteractable_C_CanHeldInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanInteract
struct ABP_FrontlineInteractable_C_CanInteract_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IncrementInteractions
struct ABP_FrontlineInteractable_C_IncrementInteractions_Params
{
	class AMordhauPlayerController*                    Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnRep_Interactions
struct ABP_FrontlineInteractable_C_OnRep_Interactions_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyLostPrerequisites
struct ABP_FrontlineInteractable_C_EnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyGainedPrerequisites
struct ABP_FrontlineInteractable_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Initialize
struct ABP_FrontlineInteractable_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          CapturePoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Disable
struct ABP_FrontlineInteractable_C_Disable_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Activate
struct ABP_FrontlineInteractable_C_Activate_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UserConstructionScript
struct ABP_FrontlineInteractable_C_UserConstructionScript_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInitialize
struct ABP_FrontlineInteractable_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyGainedPrerequisites
struct ABP_FrontlineInteractable_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyLostPrerequisites
struct ABP_FrontlineInteractable_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnUpdateUIWidgets
struct ABP_FrontlineInteractable_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionsChanged
struct ABP_FrontlineInteractable_C_OnInteractionsChanged_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ProgressVisualStage
struct ABP_FrontlineInteractable_C_ProgressVisualStage_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnHeldInteractionStart
struct ABP_FrontlineInteractable_C_OnHeldInteractionStart_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ExecuteUbergraph_BP_FrontlineInteractable
struct ABP_FrontlineInteractable_C_ExecuteUbergraph_BP_FrontlineInteractable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
