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

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TimerOverlay_Visibility_1
struct UBP_ProfileCustomization_C_Get_TimerOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TimerText_Text_1
struct UBP_ProfileCustomization_C_Get_TimerText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_AddNewProfileButton_Visibility_1
struct UBP_ProfileCustomization_C_Get_AddNewProfileButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetProfileModificationButtonsVisibility
struct UBP_ProfileCustomization_C_GetProfileModificationButtonsVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TextBlock_8_Text_1
struct UBP_ProfileCustomization_C_Get_TextBlock_8_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_RegularCustomization_Visibility_1
struct UBP_ProfileCustomization_C_Get_RegularCustomization_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetArmoryState
struct UBP_ProfileCustomization_C_SetArmoryState_Params
{
	TEnumAsByte<E_ArmoryStates>                        NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_3
struct UBP_ProfileCustomization_C_GetVisibility_3_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointInfoElement_Visibility_1
struct UBP_ProfileCustomization_C_Get_PointInfoElement_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.RibbonCostVisibility
struct UBP_ProfileCustomization_C_RibbonCostVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_NameRibbonSizeBox_Visibility_1
struct UBP_ProfileCustomization_C_Get_NameRibbonSizeBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_EquipmentSlotButtons_Visibility
struct UBP_ProfileCustomization_C_Get_EquipmentSlotButtons_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Skills_Visibility_1
struct UBP_ProfileCustomization_C_Get_Skills_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CloneRenameDeleteAvailable
struct UBP_ProfileCustomization_C_Get_CloneRenameDeleteAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.CompareToSavedProfile
struct UBP_ProfileCustomization_C_CompareToSavedProfile_Params
{
	bool                                               AreProfilesEqual;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SpawnButtonOverlay_Visibility_1
struct UBP_ProfileCustomization_C_Get_SpawnButtonOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MenuToggleButtonOverlay_Visibility_1
struct UBP_ProfileCustomization_C_Get_MenuToggleButtonOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_ArmorProtectionBarStatic_Percent_1
struct UBP_ProfileCustomization_C_Get_ArmorProtectionBarStatic_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MovementSpeedBarStatic_Percent_1
struct UBP_ProfileCustomization_C_Get_MovementSpeedBarStatic_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_AdditionalPointsBar_Percent_1
struct UBP_ProfileCustomization_C_Get_AdditionalPointsBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetAllPointCosts
struct UBP_ProfileCustomization_C_GetAllPointCosts_Params
{
	int                                                Current_Points;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Equipment_Cost;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ArmorCost;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                EquipmentPreviewCost;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ArmorPreviewCost;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PerkCost;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PerkPreviewCost;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isPreviewPerkSelected;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_NotEnoughPointsBar_Percent_1
struct UBP_ProfileCustomization_C_Get_NotEnoughPointsBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointInfoElement_ToolTipText_1
struct UBP_ProfileCustomization_C_Get_PointInfoElement_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_ColorAndOpacity_2
struct UBP_ProfileCustomization_C_Get_CurrentPoints_ColorAndOpacity_2_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_Text_2
struct UBP_ProfileCustomization_C_Get_CurrentPoints_Text_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Image_17_ColorAndOpacity_1
struct UBP_ProfileCustomization_C_Get_Image_17_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_2
struct UBP_ProfileCustomization_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SaveButtonOverlay_Visibility_1
struct UBP_ProfileCustomization_C_Get_SaveButtonOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.CloseMenu
struct UBP_ProfileCustomization_C_CloseMenu_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_ArmorAmountBar_Percent_1
struct UBP_ProfileCustomization_C_Get_ArmorAmountBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.UpdateArmorBreakdownButtonStyle
struct UBP_ProfileCustomization_C_UpdateArmorBreakdownButtonStyle_Params
{
	EWearableSlot                                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.UpdateGearBreakdownButtonStyle
struct UBP_ProfileCustomization_C_UpdateGearBreakdownButtonStyle_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.ResetBreakdownButtonStyles
struct UBP_ProfileCustomization_C_ResetBreakdownButtonStyles_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Legs_Text_1
struct UBP_ProfileCustomization_C_Get_Legs_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Torso_Text_1
struct UBP_ProfileCustomization_C_Get_Torso_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Helmet_Text_1
struct UBP_ProfileCustomization_C_Get_Helmet_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.DisplayEquipmentSelectionList
struct UBP_ProfileCustomization_C_DisplayEquipmentSelectionList_Params
{
	class UBP_EquipmentSlotCustomization_C*            Equipment_Slot_Reference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.DisplayWearableSelectionList
struct UBP_ProfileCustomization_C_DisplayWearableSelectionList_Params
{
	EWearableSlot                                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_ColorAndOpacity_1
struct UBP_ProfileCustomization_C_Get_CurrentPoints_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MovementSpeedBar_Percent_1
struct UBP_ProfileCustomization_C_Get_MovementSpeedBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointsLeft_Percent_1
struct UBP_ProfileCustomization_C_Get_PointsLeft_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryWeaponText_Text_1
struct UBP_ProfileCustomization_C_Get_TertiaryWeaponText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryWeaponText_Text_1
struct UBP_ProfileCustomization_C_Get_SecondaryWeaponText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryWeaponText_Text_1
struct UBP_ProfileCustomization_C_Get_PrimaryWeaponText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetLoadoutRibbonStyle
struct UBP_ProfileCustomization_C_SetLoadoutRibbonStyle_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hover;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Unselect Main Tabs
struct UBP_ProfileCustomization_C_Unselect_Main_Tabs_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Set Ribbon Text Name to selected profile's name
struct UBP_ProfileCustomization_C_Set_Ribbon_Text_Name_to_selected_profile_s_name_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_RibbonText_Text_1
struct UBP_ProfileCustomization_C_Get_RibbonText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetPointCostBreakdownEntries
struct UBP_ProfileCustomization_C_SetPointCostBreakdownEntries_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryCost_Visibility_1
struct UBP_ProfileCustomization_C_Get_TertiaryCost_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryCost_Visibility_1
struct UBP_ProfileCustomization_C_Get_SecondaryCost_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryCost_Visibility_1
struct UBP_ProfileCustomization_C_Get_PrimaryCost_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_LegsCost_Visibility_1
struct UBP_ProfileCustomization_C_Get_LegsCost_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TorsoCost_Visibility_1
struct UBP_ProfileCustomization_C_Get_TorsoCost_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_HelmetCost_Visibility_1
struct UBP_ProfileCustomization_C_Get_HelmetCost_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TorsoCost_Text_1
struct UBP_ProfileCustomization_C_Get_TorsoCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_LegsCost_Text_1
struct UBP_ProfileCustomization_C_Get_LegsCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryCost_Text_1
struct UBP_ProfileCustomization_C_Get_SecondaryCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryCost_Text_1
struct UBP_ProfileCustomization_C_Get_TertiaryCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryCost_Text_1
struct UBP_ProfileCustomization_C_Get_PrimaryCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetCostEquipmentSlot
struct UBP_ProfileCustomization_C_GetCostEquipmentSlot_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetCostArmorSlot
struct UBP_ProfileCustomization_C_GetCostArmorSlot_Params
{
	EWearableSlot                                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_HelmetCost_Text_1
struct UBP_ProfileCustomization_C_Get_HelmetCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TotalPoints_Text_1
struct UBP_ProfileCustomization_C_Get_TotalPoints_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_Text_1
struct UBP_ProfileCustomization_C_Get_CurrentPoints_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.SaveFunction
struct UBP_ProfileCustomization_C_SaveFunction_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_3
struct UBP_ProfileCustomization_C_GetColorAndOpacity_3_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_2
struct UBP_ProfileCustomization_C_GetColorAndOpacity_2_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_1
struct UBP_ProfileCustomization_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_1
struct UBP_ProfileCustomization_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetText_1
struct UBP_ProfileCustomization_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.updateGearTabColors
struct UBP_ProfileCustomization_C_updateGearTabColors_Params
{
	class UButton*                                     Selected_Button;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.updateMainTabColors
struct UBP_ProfileCustomization_C_updateMainTabColors_Params
{
	class UImage*                                      SelectedIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     SelectedButton;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.DestroyCustomizationActors
struct UBP_ProfileCustomization_C_DestroyCustomizationActors_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipmentButtonClick
struct UBP_ProfileCustomization_C_OnEquipmentButtonClick_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment1Click
struct UBP_ProfileCustomization_C_OnEquipment1Click_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment3Click
struct UBP_ProfileCustomization_C_OnEquipment3Click_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment2Click
struct UBP_ProfileCustomization_C_OnEquipment2Click_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__AddNewEquipmentPresetButton_K2Node_ComponentBoundEvent_5792_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__AddNewEquipmentPresetButton_K2Node_ComponentBoundEvent_5792_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__EditEquipmentPresetButton_K2Node_ComponentBoundEvent_5821_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__EditEquipmentPresetButton_K2Node_ComponentBoundEvent_5821_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__DeleteEquipmentPresetButton_K2Node_ComponentBoundEvent_5852_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__DeleteEquipmentPresetButton_K2Node_ComponentBoundEvent_5852_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnShown
struct UBP_ProfileCustomization_C_OnShown_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.NewProfileNameEntered
struct UBP_ProfileCustomization_C_NewProfileNameEntered_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.NewProfileNameCanceled
struct UBP_ProfileCustomization_C_NewProfileNameCanceled_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__CloneProfileButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__CloneProfileButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.DeleteCancel
struct UBP_ProfileCustomization_C_DeleteCancel_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.DeleteConfirm
struct UBP_ProfileCustomization_C_DeleteConfirm_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__RenameProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__RenameProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.RenameCancel
struct UBP_ProfileCustomization_C_RenameCancel_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.RenameConfirm
struct UBP_ProfileCustomization_C_RenameConfirm_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__EquipmentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__EquipmentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__WearablesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__WearablesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SkillsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__SkillsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__FaceButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__BodyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__BodyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TertiarySlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__TertiarySlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__PrimarySlotButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__PrimarySlotButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SecondarySlotButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__SecondarySlotButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_2730_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_2730_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowSkills
struct UBP_ProfileCustomization_C_ShowSkills_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowWearables
struct UBP_ProfileCustomization_C_ShowWearables_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Construct
struct UBP_ProfileCustomization_C_Construct_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_654_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_654_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnProfileChanged
struct UBP_ProfileCustomization_C_OnProfileChanged_Params
{
	struct FCharacterProfile                           New_Profile;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowLoadoutPicker
struct UBP_ProfileCustomization_C_ShowLoadoutPicker_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3551_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3551_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_249_K2Node_ComponentBoundEvent_4101_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__Button_249_K2Node_ComponentBoundEvent_4101_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SecondaryRibbonButton_K2Node_ComponentBoundEvent_4243_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__SecondaryRibbonButton_K2Node_ComponentBoundEvent_4243_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TertiaryRibbonButton_K2Node_ComponentBoundEvent_4277_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__TertiaryRibbonButton_K2Node_ComponentBoundEvent_4277_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__LegsRibbonButton_K2Node_ComponentBoundEvent_4464_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__LegsRibbonButton_K2Node_ComponentBoundEvent_4464_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TorsoRibbonButton_K2Node_ComponentBoundEvent_4481_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__TorsoRibbonButton_K2Node_ComponentBoundEvent_4481_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Tick
struct UBP_ProfileCustomization_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1706_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1706_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3555_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_3555_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__MenuToggleButton_K2Node_ComponentBoundEvent_4038_OnButtonClickedEvent__DelegateSignature
struct UBP_ProfileCustomization_C_BndEvt__MenuToggleButton_K2Node_ComponentBoundEvent_4038_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.UnsavedChangesPopup
struct UBP_ProfileCustomization_C_UnsavedChangesPopup_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.ChangesCancel
struct UBP_ProfileCustomization_C_ChangesCancel_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.ChangesConfirm
struct UBP_ProfileCustomization_C_ChangesConfirm_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnAnimationFinished
struct UBP_ProfileCustomization_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Show Regular Armory
struct UBP_ProfileCustomization_C_Show_Regular_Armory_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.Show HordeBR Armory
struct UBP_ProfileCustomization_C_Show_HordeBR_Armory_Params
{
};

// Function BP_ProfileCustomization.BP_ProfileCustomization_C.ExecuteUbergraph_BP_ProfileCustomization
struct UBP_ProfileCustomization_C_ExecuteUbergraph_BP_ProfileCustomization_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
