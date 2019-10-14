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

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.GetObjectiveProgress
struct ABP_ItemDeliverySpot_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFlipProgressBarState
struct ABP_ItemDeliverySpot_C_UpdateFlipProgressBarState_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFloater
struct ABP_ItemDeliverySpot_C_UpdateFloater_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.AnyObjectiveProgressChanged
struct ABP_ItemDeliverySpot_C_AnyObjectiveProgressChanged_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCapturePointDone
struct ABP_ItemDeliverySpot_C_IsCapturePointDone_Params
{
	bool                                               IsDone;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ActivateSpawns
struct ABP_ItemDeliverySpot_C_ActivateSpawns_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.DisableSpawns
struct ABP_ItemDeliverySpot_C_DisableSpawns_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateDeliverySpotVisuals
struct ABP_ItemDeliverySpot_C_UpdateDeliverySpotVisuals_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyLostPrerequisites
struct ABP_ItemDeliverySpot_C_EnemyLostPrerequisites_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyGainedPrerequisites
struct ABP_ItemDeliverySpot_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Initialize
struct ABP_ItemDeliverySpot_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          CapturePoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Disable
struct ABP_ItemDeliverySpot_C_Disable_Params
{
	bool                                               SlowDisable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Activate
struct ABP_ItemDeliverySpot_C_Activate_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnRep_Deliverables
struct ABP_ItemDeliverySpot_C_OnRep_Deliverables_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UserConstructionScript
struct ABP_ItemDeliverySpot_C_UserConstructionScript_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ItemDeliverySpot_C_BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnInitialize
struct ABP_ItemDeliverySpot_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyGainedPrerequisites
struct ABP_ItemDeliverySpot_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyLostPrerequisites
struct ABP_ItemDeliverySpot_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnUpdateUIWidgets
struct ABP_ItemDeliverySpot_C_OnUpdateUIWidgets_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnDeliverablesChanged
struct ABP_ItemDeliverySpot_C_OnDeliverablesChanged_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ProgressVisualStage
struct ABP_ItemDeliverySpot_C_ProgressVisualStage_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnAnyObjectiveProgressChanged
struct ABP_ItemDeliverySpot_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ExecuteUbergraph_BP_ItemDeliverySpot
struct ABP_ItemDeliverySpot_C_ExecuteUbergraph_BP_ItemDeliverySpot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
