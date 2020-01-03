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

// Function BP_Catapult.BP_Catapult_C.ClearFireEffects
struct ABP_Catapult_C_ClearFireEffects_Params
{
};

// Function BP_Catapult.BP_Catapult_C.OnRep_Fire
struct ABP_Catapult_C_OnRep_Fire_Params
{
};

// Function BP_Catapult.BP_Catapult_C.PostProcessCameraPOV
struct ABP_Catapult_C_PostProcessCameraPOV_Params
{
	struct FPOV*                                       InPOV;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPOV                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Catapult.BP_Catapult_C.AdjustArm
struct ABP_Catapult_C_AdjustArm_Params
{
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.OnRep_State
struct ABP_Catapult_C_OnRep_State_Params
{
};

// Function BP_Catapult.BP_Catapult_C.UserConstructionScript
struct ABP_Catapult_C_UserConstructionScript_Params
{
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2
struct ABP_Catapult_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_Fire_K2Node_InputActionEvent_1
struct ABP_Catapult_C_InpActEvt_Fire_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
struct ABP_Catapult_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
struct ABP_Catapult_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Catapult.BP_Catapult_C.UpdateFPCameraFor
struct ABP_Catapult_C_UpdateFPCameraFor_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRotationOnly;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.FireCatapult
struct ABP_Catapult_C_FireCatapult_Params
{
};

// Function BP_Catapult.BP_Catapult_C.ReceiveUnpossessed
struct ABP_Catapult_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.BPLODTick
struct ABP_Catapult_C_BPLODTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.RaiseArm
struct ABP_Catapult_C_RaiseArm_Params
{
};

// Function BP_Catapult.BP_Catapult_C.LowerArm
struct ABP_Catapult_C_LowerArm_Params
{
};

// Function BP_Catapult.BP_Catapult_C.OnDied
struct ABP_Catapult_C_OnDied_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.OnCosmeticHit
struct ABP_Catapult_C_OnCosmeticHit_Params
{
	EMordhauDamageType*                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Move Right_K2Node_InputAxisEvent_21
struct ABP_Catapult_C_InpAxisEvt_Move_Right_K2Node_InputAxisEvent_21_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_36
struct ABP_Catapult_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_36_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_7
struct ABP_Catapult_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.ReceiveBeginPlay
struct ABP_Catapult_C_ReceiveBeginPlay_Params
{
};

// Function BP_Catapult.BP_Catapult_C.OnStartedDriving
struct ABP_Catapult_C_OnStartedDriving_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.OnStoppedDriving
struct ABP_Catapult_C_OnStoppedDriving_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Catapult.BP_Catapult_C.ReceiveDestroyed
struct ABP_Catapult_C_ReceiveDestroyed_Params
{
};

// Function BP_Catapult.BP_Catapult_C.ExecuteUbergraph_BP_Catapult
struct ABP_Catapult_C_ExecuteUbergraph_BP_Catapult_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
