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

// Function BP_Ballista.BP_Ballista_C.ClearFireEffects
struct ABP_Ballista_C_ClearFireEffects_Params
{
};

// Function BP_Ballista.BP_Ballista_C.OnRep_Fire
struct ABP_Ballista_C_OnRep_Fire_Params
{
};

// Function BP_Ballista.BP_Ballista_C.OnRep_ReplicatedTurnCap
struct ABP_Ballista_C_OnRep_ReplicatedTurnCap_Params
{
};

// Function BP_Ballista.BP_Ballista_C.OnRep_ReplicatedLookUpCap
struct ABP_Ballista_C_OnRep_ReplicatedLookUpCap_Params
{
};

// Function BP_Ballista.BP_Ballista_C.PostProcessCameraPOV
struct ABP_Ballista_C_PostProcessCameraPOV_Params
{
	struct FPOV*                                       InPOV;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPOV                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Ballista.BP_Ballista_C.OnRep_State
struct ABP_Ballista_C_OnRep_State_Params
{
};

// Function BP_Ballista.BP_Ballista_C.UserConstructionScript
struct ABP_Ballista_C_UserConstructionScript_Params
{
};

// Function BP_Ballista.BP_Ballista_C.InpActEvt_Fire_K2Node_InputActionEvent_2
struct ABP_Ballista_C_InpActEvt_Fire_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Ballista.BP_Ballista_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1
struct ABP_Ballista_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Ballista.BP_Ballista_C.ReceiveBeginPlay
struct ABP_Ballista_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ballista.BP_Ballista_C.FireBallista
struct ABP_Ballista_C_FireBallista_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.UpdateAnimationFor
struct ABP_Ballista_C_UpdateAnimationFor_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauAnimInstance**                       AnimInst;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.UpdateFPCameraFor
struct ABP_Ballista_C_UpdateFPCameraFor_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRotationOnly;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.OnDied
struct ABP_Ballista_C_OnDied_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.OnCosmeticHit
struct ABP_Ballista_C_OnCosmeticHit_Params
{
	EMordhauDamageType*                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.BPLODTick
struct ABP_Ballista_C_BPLODTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_19
struct ABP_Ballista_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_19_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_5
struct ABP_Ballista_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.OnStartedDriving
struct ABP_Ballista_C_OnStartedDriving_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.OnStoppedDriving
struct ABP_Ballista_C_OnStoppedDriving_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ballista.BP_Ballista_C.ReceiveDestroyed
struct ABP_Ballista_C_ReceiveDestroyed_Params
{
};

// Function BP_Ballista.BP_Ballista_C.ExecuteUbergraph_BP_Ballista
struct ABP_Ballista_C_ExecuteUbergraph_BP_Ballista_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
