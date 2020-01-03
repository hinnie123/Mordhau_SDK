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

// Function BP_DeployableBallista.BP_DeployableBallista_C.ClearFireEffects
struct ABP_DeployableBallista_C_ClearFireEffects_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_Fire
struct ABP_DeployableBallista_C_OnRep_Fire_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_Ammo
struct ABP_DeployableBallista_C_OnRep_Ammo_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_InitialRegeneration
struct ABP_DeployableBallista_C_OnRep_InitialRegeneration_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.CanDrive
struct ABP_DeployableBallista_C_CanDrive_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.PostProcessCameraPOV
struct ABP_DeployableBallista_C_PostProcessCameraPOV_Params
{
	struct FPOV*                                       InPOV;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPOV                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_State
struct ABP_DeployableBallista_C_OnRep_State_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.UserConstructionScript
struct ABP_DeployableBallista_C_UserConstructionScript_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Fire_K2Node_InputActionEvent_2
struct ABP_DeployableBallista_C_InpActEvt_Fire_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1
struct ABP_DeployableBallista_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveBeginPlay
struct ABP_DeployableBallista_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.FireBallista
struct ABP_DeployableBallista_C_FireBallista_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.UpdateAnimationFor
struct ABP_DeployableBallista_C_UpdateAnimationFor_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauAnimInstance**                       AnimInst;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.UpdateFPCameraFor
struct ABP_DeployableBallista_C_UpdateFPCameraFor_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRotationOnly;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnDied
struct ABP_DeployableBallista_C_OnDied_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMordhauDamageType*                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnCosmeticHit
struct ABP_DeployableBallista_C_OnCosmeticHit_Params
{
	EMordhauDamageType*                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.BPLODTick
struct ABP_DeployableBallista_C_BPLODTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_19
struct ABP_DeployableBallista_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_19_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_5
struct ABP_DeployableBallista_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveAnyDamage
struct ABP_DeployableBallista_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.ReplenishAmmo
struct ABP_DeployableBallista_C_ReplenishAmmo_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveDestroyed
struct ABP_DeployableBallista_C_ReceiveDestroyed_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.ExecuteUbergraph_BP_DeployableBallista
struct ABP_DeployableBallista_C_ExecuteUbergraph_BP_DeployableBallista_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
