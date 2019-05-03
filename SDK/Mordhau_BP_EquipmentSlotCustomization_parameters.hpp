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

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetVisibility_1
struct UBP_EquipmentSlotCustomization_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ColorHovered
struct UBP_EquipmentSlotCustomization_C_ColorHovered_Params
{
	int                                                Idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.PartSelectionHovered
struct UBP_EquipmentSlotCustomization_C_PartSelectionHovered_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.PartSelectionClicked
struct UBP_EquipmentSlotCustomization_C_PartSelectionClicked_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowPartChoiceList
struct UBP_EquipmentSlotCustomization_C_ShowPartChoiceList_Params
{
	int                                                CurrentEquipmentId;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentSkinId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPartType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPartId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SkinSelectionHovered
struct UBP_EquipmentSlotCustomization_C_SkinSelectionHovered_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SkinSelectionClicked
struct UBP_EquipmentSlotCustomization_C_SkinSelectionClicked_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowSkinChoiceList
struct UBP_EquipmentSlotCustomization_C_ShowSkinChoiceList_Params
{
	int                                                CurrentEquipmentId;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentSkinId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetEquipmentPart
struct UBP_EquipmentSlotCustomization_C_GetEquipmentPart_Params
{
	TArray<class UClass*>                              Parts;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                PartIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMordhauEquipmentPart*                       EquipmentPart;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.IsAnySkinAvailable
struct UBP_EquipmentSlotCustomization_C_IsAnySkinAvailable_Params
{
	TArray<struct FEquipmentSkinEntry>                 Skins;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsAnySkinAvailable;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_LengthText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_LengthText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AdvancedButton_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_AdvancedButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_BackButton2_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_BackButton2_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsPanel_Visibility_2
struct UBP_EquipmentSlotCustomization_C_Get_StatsPanel_Visibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetText_1
struct UBP_EquipmentSlotCustomization_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_GravityScaleText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_GravityScaleText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ProjectileSpeedText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_ProjectileSpeedText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_TextBlock_7_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_TextBlock_7_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBar_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_DamageBar_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBarText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_DamageBarText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsPanel_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_StatsPanel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ReachBarText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_ReachBarText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AttackTypeButtons_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_AttackTypeButtons_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetRangedWeaponValues
struct UBP_EquipmentSlotCustomization_C_GetRangedWeaponValues_Params
{
	class AMordhauEquipment*                           Equipment_Ref;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WoodDamage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StoneDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1Torso;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Reload_Time;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AutoReload_Time;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxAmmo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RangedDrawTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Should_Flinch;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_SpeedBarText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_SpeedBarText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsHeaderText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_StatsHeaderText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetVisibility_2
struct UBP_EquipmentSlotCustomization_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AltModeCheckboxVisibility_1
struct UBP_EquipmentSlotCustomization_C_Get_AltModeCheckboxVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionCanceled
struct UBP_EquipmentSlotCustomization_C_EquipmentSelectionCanceled_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_CostText_ColorAndOpacity_1
struct UBP_EquipmentSlotCustomization_C_Get_CostText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ReachBar_Percent_1
struct UBP_EquipmentSlotCustomization_C_Get_ReachBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_SpeedBar_Percent
struct UBP_EquipmentSlotCustomization_C_Get_SpeedBar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBar_Percent
struct UBP_EquipmentSlotCustomization_C_Get_DamageBar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetHitKnockbackText
struct UBP_EquipmentSlotCustomization_C_GetHitKnockbackText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMorphCostText
struct UBP_EquipmentSlotCustomization_C_GetMorphCostText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetShouldFlinchText
struct UBP_EquipmentSlotCustomization_C_GetShouldFlinchText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetProjectileValues
struct UBP_EquipmentSlotCustomization_C_GetProjectileValues_Params
{
	class UClass*                                      Projectile_Class;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WoodDamage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StoneDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1Torso;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Should_Flinch;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetRangedDrawText
struct UBP_EquipmentSlotCustomization_C_GetRangedDrawText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMaxAmmoText
struct UBP_EquipmentSlotCustomization_C_GetMaxAmmoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowElements
struct UBP_EquipmentSlotCustomization_C_ShowElements_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetEquipmentValues
struct UBP_EquipmentSlotCustomization_C_GetEquipmentValues_Params
{
	class AMordhauEquipment*                           Equipment_Ref;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Max_Ammo;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Ranged_Draw_Time;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wood_Damage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Stone_Damage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Should_Flinch;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceYMaxText
struct UBP_EquipmentSlotCustomization_C_GetParryViewToleranceYMaxText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceYMinText
struct UBP_EquipmentSlotCustomization_C_GetParryViewToleranceYMinText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceXMaxText
struct UBP_EquipmentSlotCustomization_C_GetParryViewToleranceXMaxText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceXMinText
struct UBP_EquipmentSlotCustomization_C_GetParryViewToleranceXMinText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetBlockMovementRestrictionText
struct UBP_EquipmentSlotCustomization_C_GetBlockMovementRestrictionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetIsParryHeldText
struct UBP_EquipmentSlotCustomization_C_GetIsParryHeldText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetShieldValues
struct UBP_EquipmentSlotCustomization_C_GetShieldValues_Params
{
	class AMordhauEquipment*                           Equipment_Ref;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TurnCap_X;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TurnCap_Y;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ParryStaminaNegation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_XMin;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Xmax;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Ymin;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Ymax;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Block_Movement_Restriction;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsParryHeld;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWeaponValues
struct UBP_EquipmentSlotCustomization_C_GetWeaponValues_Params
{
	EAttackMove                                        AttackMove;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           Equipment_Ref;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Windup;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Combo_Windup;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Release;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MissRecovery;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FeintCost;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MorphCost;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrain;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MissStaminaCost;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              WoodDamage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StoneDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCombo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnHit;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1Torso;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Head;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Torso;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3_Legs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Parry_Stamina_Negation;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_XMin;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Xmax;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Ymin;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Ymax;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Block_Movement_Restriction;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Parry_Held;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Hit_Knockback;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFlinch;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryNegationText
struct UBP_EquipmentSlotCustomization_C_GetParryNegationText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetStoneDamageText
struct UBP_EquipmentSlotCustomization_C_GetStoneDamageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWoodDamageText
struct UBP_EquipmentSlotCustomization_C_GetWoodDamageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCanComboText
struct UBP_EquipmentSlotCustomization_C_GetCanComboText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetHitStopText
struct UBP_EquipmentSlotCustomization_C_GetHitStopText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetStaminaDrainText
struct UBP_EquipmentSlotCustomization_C_GetStaminaDrainText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetFeintCostText
struct UBP_EquipmentSlotCustomization_C_GetFeintCostText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMissStaminaText
struct UBP_EquipmentSlotCustomization_C_GetMissStaminaText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetYTurnCapText
struct UBP_EquipmentSlotCustomization_C_GetYTurnCapText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetXTurnCapText
struct UBP_EquipmentSlotCustomization_C_GetXTurnCapText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMissRecoveryText
struct UBP_EquipmentSlotCustomization_C_GetMissRecoveryText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetReleaseText
struct UBP_EquipmentSlotCustomization_C_GetReleaseText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetComboText
struct UBP_EquipmentSlotCustomization_C_GetComboText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWindupText
struct UBP_EquipmentSlotCustomization_C_GetWindupText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c3_text_T3Legs
struct UBP_EquipmentSlotCustomization_C_Get_cell_r2c3_text_T3Legs_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c3_text_T3Torso
struct UBP_EquipmentSlotCustomization_C_Get_cell_r1c3_text_T3Torso_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c2_text_T2Legs
struct UBP_EquipmentSlotCustomization_C_Get_cell_r2c2_text_T2Legs_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c2_text_T2Torso
struct UBP_EquipmentSlotCustomization_C_Get_cell_r1c2_text_T2Torso_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c2_text_T2Head
struct UBP_EquipmentSlotCustomization_C_Get_cell_r0c2_text_T2Head_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c1_text_T1Legs
struct UBP_EquipmentSlotCustomization_C_Get_cell_r2c1_text_T1Legs_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c1_text_T1Torso
struct UBP_EquipmentSlotCustomization_C_Get_cell_r1c1_text_T1Torso_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c1_text_T1Head
struct UBP_EquipmentSlotCustomization_C_Get_cell_r0c1_text_T1Head_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c0_text_T0Legs
struct UBP_EquipmentSlotCustomization_C_Get_cell_r2c0_text_T0Legs_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c0_text_T0Torso
struct UBP_EquipmentSlotCustomization_C_Get_cell_r1c0_text_T0Torso_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c0_text_T0Head
struct UBP_EquipmentSlotCustomization_C_Get_cell_r0c0_text_T0Head_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SetDamageTableColors
struct UBP_EquipmentSlotCustomization_C_SetDamageTableColors_Params
{
	float                                              Damage_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Cell_Bg;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Cell_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCurrentValues
struct UBP_EquipmentSlotCustomization_C_GetCurrentValues_Params
{
	class AMordhauEquipment*                           Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EEquipmentType                                     EquipmentUIType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Windup;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Combo_Windup;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Release;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Miss_Recovery;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Feint_Cost;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Morph_Cost;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrain;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Miss_Stamina_Cost;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wood_Damage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Stone_Damage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanCombo;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Stop_on_Hit;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0Head;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0Torso;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T0Legs;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1Head;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1Torso;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T1Legs;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2Head;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2Torso;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T2Legs;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3Head;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3Torso;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              T3Legs;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              X_TurnCap;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y_TurnCap;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ParryStaminaNegation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_XMin;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Xmax;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Ymin;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              View_Tolerance_Ymax;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Block_Movement_Restriction;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Parry_Held;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HitKnockback;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Reload_Time;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Auto_Reload_Time;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxAmmo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Ranged_Draw_Time;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Should_Flinch;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateStrikeStabButtonColors
struct UBP_EquipmentSlotCustomization_C_UpdateStrikeStabButtonColors_Params
{
	class UImage*                                      Selected_Icon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     Selected_Button;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c3_text_T3Head
struct UBP_EquipmentSlotCustomization_C_Get_cell_r0c3_text_T3Head_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCurrentEquipment
struct UBP_EquipmentSlotCustomization_C_GetCurrentEquipment_Params
{
	class AMordhauEquipment*                           Equipment;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EEquipmentType                                     EquipmentUIType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetToolTipText_1
struct UBP_EquipmentSlotCustomization_C_GetToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionHovered
struct UBP_EquipmentSlotCustomization_C_EquipmentSelectionHovered_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionClicked
struct UBP_EquipmentSlotCustomization_C_EquipmentSelectionClicked_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowEquipmentChoiceList
struct UBP_EquipmentSlotCustomization_C_ShowEquipmentChoiceList_Params
{
	int                                                CurrentId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPatternsVisibility
struct UBP_EquipmentSlotCustomization_C_GetPatternsVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor3Visibility
struct UBP_EquipmentSlotCustomization_C_GetColor3Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor2Visibility
struct UBP_EquipmentSlotCustomization_C_GetColor2Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor1Visibility
struct UBP_EquipmentSlotCustomization_C_GetColor1Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart3Visibility
struct UBP_EquipmentSlotCustomization_C_GetPart3Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart2Visibility
struct UBP_EquipmentSlotCustomization_C_GetPart2Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart1Visibility
struct UBP_EquipmentSlotCustomization_C_GetPart1Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetSkinsVisibility
struct UBP_EquipmentSlotCustomization_C_GetSkinsVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetValues
struct UBP_EquipmentSlotCustomization_C_GetValues_Params
{
	struct FText                                       EquipmentWearableName;                                    // (Parm, OutParm)
	int                                                Part1Count;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Part2Count;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Part3Count;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part1Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part2Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Part3Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Color1Index;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Color2Index;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Color3Index;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Pattern;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PatternCount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              EquipmentColorTable1;                                     // (Parm, OutParm, ZeroConstructor)
	TArray<class UClass*>                              EquipmentColorTable2;                                     // (Parm, OutParm, ZeroConstructor)
	TArray<class UClass*>                              EquipmentColorTable3;                                     // (Parm, OutParm, ZeroConstructor)
	TArray<struct FEquipmentSkinEntry>                 Skins;                                                    // (Parm, OutParm, ZeroConstructor)
	int                                                Skin;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasColor1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasColor2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasColor3;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Part1Name;                                                // (Parm, OutParm)
	struct FText                                       Part2Name;                                                // (Parm, OutParm)
	struct FText                                       Part3Name;                                                // (Parm, OutParm)
	struct FText                                       Part1Type;                                                // (Parm, OutParm)
	struct FText                                       Part2Type;                                                // (Parm, OutParm)
	struct FText                                       Part3Type;                                                // (Parm, OutParm)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateWidgets
struct UBP_EquipmentSlotCustomization_C_UpdateWidgets_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnDrag
struct UBP_EquipmentSlotCustomization_C_OnDrag_Params
{
	float                                              DeltaDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.RegisterPreviewEvents
struct UBP_EquipmentSlotCustomization_C_RegisterPreviewEvents_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnScroll
struct UBP_EquipmentSlotCustomization_C_OnScroll_Params
{
	float                                              ScrollDelta;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateEquipmentColor
struct UBP_EquipmentSlotCustomization_C_UpdateEquipmentColor_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateEquipmentPattern
struct UBP_EquipmentSlotCustomization_C_UpdateEquipmentPattern_Params
{
	int                                                Pattern;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Refresh
struct UBP_EquipmentSlotCustomization_C_Refresh_Params
{
	bool                                               UpdateWidgets;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SetActive
struct UBP_EquipmentSlotCustomization_C_SetActive_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnProfileChanged
struct UBP_EquipmentSlotCustomization_C_OnProfileChanged_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Construct
struct UBP_EquipmentSlotCustomization_C_Construct_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ExecuteUbergraph_BP_EquipmentSlotCustomization
struct UBP_EquipmentSlotCustomization_C_ExecuteUbergraph_BP_EquipmentSlotCustomization_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
