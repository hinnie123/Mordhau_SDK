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

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetScaledSkillLevelParams
struct ABP_HordePlayerController_C_GetScaledSkillLevelParams_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Bias;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PercentA;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PercentB;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                IntegerA;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TimeA;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_NextSpecialTime
struct ABP_HordePlayerController_C_OnRep_NextSpecialTime_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_CriticalCounter
struct ABP_HordePlayerController_C_OnRep_CriticalCounter_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_BackstabCounter
struct ABP_HordePlayerController_C_OnRep_BackstabCounter_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetDiscountedPrice
struct ABP_HordePlayerController_C_GetDiscountedPrice_Params
{
	int                                                BasePrice;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DiscountedPrice;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.AssignFireArrowValues
struct ABP_HordePlayerController_C_AssignFireArrowValues_Params
{
	class AActor*                                      Arrow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.TryScatterShot
struct ABP_HordePlayerController_C_TryScatterShot_Params
{
	class AMordhauProjectile*                          SourceProjectile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.TryFletcherRestock
struct ABP_HordePlayerController_C_TryFletcherRestock_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevelFloat
struct ABP_HordePlayerController_C_GetSkillLevelFloat_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SkillLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.SkillsUpdated
struct ABP_HordePlayerController_C_SkillsUpdated_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.HasPrerequisite
struct ABP_HordePlayerController_C_HasPrerequisite_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevel
struct ABP_HordePlayerController_C_GetSkillLevel_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.UpgradeSkill
struct ABP_HordePlayerController_C_UpgradeSkill_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_ReplicatedSkills
struct ABP_HordePlayerController_C_OnRep_ReplicatedSkills_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment
struct ABP_HordePlayerController_C_CustomizeEquipment_Params
{
	class AMordhauEquipment*                           Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger
struct ABP_HordePlayerController_C_OnRep_PurchaseTrigger_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.UserConstructionScript
struct ABP_HordePlayerController_C_UserConstructionScript_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_2
struct ABP_HordePlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_1
struct ABP_HordePlayerController_C_InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveBeginPlay
struct ABP_HordePlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess
struct ABP_HordePlayerController_C_OnAfterPossess_Params
{
	class APawn**                                      APawn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnBuilt
struct ABP_HordePlayerController_C_OnBuilt_Params
{
	class AActor**                                     Structure;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.RequestUpgradeSkill
struct ABP_HordePlayerController_C_RequestUpgradeSkill_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController
struct ABP_HordePlayerController_C_ExecuteUbergraph_BP_HordePlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
