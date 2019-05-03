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

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateControlSchemeDropdown
struct UBP_ControlsSettings_C_UpdateControlSchemeDropdown_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyAngleAttacksWithMovement
struct UBP_ControlsSettings_C_ApplyAngleAttacksWithMovement_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateAngleAttacksWithMovementCheckbox
struct UBP_ControlsSettings_C_UpdateAngleAttacksWithMovementCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateAngleAttackAfterPressCheckbox
struct UBP_ControlsSettings_C_UpdateAngleAttackAfterPressCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyAngleAttackAfterPress
struct UBP_ControlsSettings_C_ApplyAngleAttackAfterPress_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInverseAttackDirection
struct UBP_ControlsSettings_C_ApplyInverseAttackDirection_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInverseAttackDirectionCheckbox
struct UBP_ControlsSettings_C_UpdateInverseAttackDirectionCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyToggleSprint
struct UBP_ControlsSettings_C_ApplyToggleSprint_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.GetSliderValue
struct UBP_ControlsSettings_C_GetSliderValue_Params
{
	class UBP_SliderEntry_C*                           Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   Limits;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateToggleSprintCheckbox
struct UBP_ControlsSettings_C_UpdateToggleSprintCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateSlider
struct UBP_ControlsSettings_C_UpdateSlider_Params
{
	class UBP_SliderEntry_C*                           Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Limits;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightYDeadzone
struct UBP_ControlsSettings_C_ApplyGamepadRightYDeadzone_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightXDeadzone
struct UBP_ControlsSettings_C_ApplyGamepadRightXDeadzone_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftYDeadzone
struct UBP_ControlsSettings_C_ApplyGamepadLeftYDeadzone_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftXDeadzone
struct UBP_ControlsSettings_C_ApplyGamepadLeftXDeadzone_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadRightY
struct UBP_ControlsSettings_C_ApplyInvertGamepadRightY_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadRightX
struct UBP_ControlsSettings_C_ApplyInvertGamepadRightX_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadRightYCheckbox
struct UBP_ControlsSettings_C_UpdateInvertGamepadRightYCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadRightXCheckbox
struct UBP_ControlsSettings_C_UpdateInvertGamepadRightXCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightYDeadzoneSlider
struct UBP_ControlsSettings_C_UpdateGamepadRightYDeadzoneSlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightXDeadzoneSlider
struct UBP_ControlsSettings_C_UpdateGamepadRightXDeadzoneSlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftYDeadzoneSlider
struct UBP_ControlsSettings_C_UpdateGamepadLeftYDeadzoneSlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftXDeadzoneSlider
struct UBP_ControlsSettings_C_UpdateGamepadLeftXDeadzoneSlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightYSensitivity
struct UBP_ControlsSettings_C_ApplyGamepadRightYSensitivity_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightXSensitivity
struct UBP_ControlsSettings_C_ApplyGamepadRightXSensitivity_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftYSensitivity
struct UBP_ControlsSettings_C_ApplyGamepadLeftYSensitivity_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftXSensitivity
struct UBP_ControlsSettings_C_ApplyGamepadLeftXSensitivity_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyMouseYSensitivity
struct UBP_ControlsSettings_C_ApplyMouseYSensitivity_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyMouseXSensitivity
struct UBP_ControlsSettings_C_ApplyMouseXSensitivity_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightYSensitivitySlider
struct UBP_ControlsSettings_C_UpdateGamepadRightYSensitivitySlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightXSensitivitySlider
struct UBP_ControlsSettings_C_UpdateGamepadRightXSensitivitySlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftYSensitivitySlider
struct UBP_ControlsSettings_C_UpdateGamepadLeftYSensitivitySlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftXSensitivitySlider
struct UBP_ControlsSettings_C_UpdateGamepadLeftXSensitivitySlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateMouseYSensitivitySlider
struct UBP_ControlsSettings_C_UpdateMouseYSensitivitySlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateMouseXSensitivitySlider
struct UBP_ControlsSettings_C_UpdateMouseXSensitivitySlider_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyFlipAttackSide
struct UBP_ControlsSettings_C_ApplyFlipAttackSide_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateFlipAttackSideCheckbox
struct UBP_ControlsSettings_C_UpdateFlipAttackSideCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadLeftY
struct UBP_ControlsSettings_C_ApplyInvertGamepadLeftY_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadLeftX
struct UBP_ControlsSettings_C_ApplyInvertGamepadLeftX_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadLeftYCheckbox
struct UBP_ControlsSettings_C_UpdateInvertGamepadLeftYCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadLeftXCheckbox
struct UBP_ControlsSettings_C_UpdateInvertGamepadLeftXCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertMouseY
struct UBP_ControlsSettings_C_ApplyInvertMouseY_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertMouseYCheckbox
struct UBP_ControlsSettings_C_UpdateInvertMouseYCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertMouseX
struct UBP_ControlsSettings_C_ApplyInvertMouseX_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertMouseXCheckbox
struct UBP_ControlsSettings_C_UpdateInvertMouseXCheckbox_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.OnShown
struct UBP_ControlsSettings_C_OnShown_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateWidgets
struct UBP_ControlsSettings_C_UpdateWidgets_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ToggleSprintCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__ToggleSprintCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InverseAttackDirectionCheckbox_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__InverseAttackDirectionCheckbox_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__AngleAttackAfterPressCheckbox_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__AngleAttackAfterPressCheckbox_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__FlipAttackSideCheckbox_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__FlipAttackSideCheckbox_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertMouseXCheckbox_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__InvertMouseXCheckbox_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__MouseXSensitivitySlider_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__MouseXSensitivitySlider_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertMouseYCheckbox_K2Node_ComponentBoundEvent_69_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__InvertMouseYCheckbox_K2Node_ComponentBoundEvent_69_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__MouseYSensitivitySlider_K2Node_ComponentBoundEvent_83_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__MouseYSensitivitySlider_K2Node_ComponentBoundEvent_83_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadLeftXCheckbox_K2Node_ComponentBoundEvent_98_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__InvertGamepadLeftXCheckbox_K2Node_ComponentBoundEvent_98_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftXSensitivitySlider_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__GamepadLeftXSensitivitySlider_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftXDeadzoneSlider_K2Node_ComponentBoundEvent_131_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__GamepadLeftXDeadzoneSlider_K2Node_ComponentBoundEvent_131_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadLeftYCheckbox_K2Node_ComponentBoundEvent_149_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__InvertGamepadLeftYCheckbox_K2Node_ComponentBoundEvent_149_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftYSensitivitySlider_K2Node_ComponentBoundEvent_168_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__GamepadLeftYSensitivitySlider_K2Node_ComponentBoundEvent_168_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftYDeadzoneSlider_K2Node_ComponentBoundEvent_188_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__GamepadLeftYDeadzoneSlider_K2Node_ComponentBoundEvent_188_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadRightXCheckbox_K2Node_ComponentBoundEvent_209_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__InvertGamepadRightXCheckbox_K2Node_ComponentBoundEvent_209_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightXSensitivitySlider_K2Node_ComponentBoundEvent_231_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__GamepadRightXSensitivitySlider_K2Node_ComponentBoundEvent_231_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightXDeadzoneSlider_K2Node_ComponentBoundEvent_254_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__GamepadRightXDeadzoneSlider_K2Node_ComponentBoundEvent_254_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadRightYCheckbox_K2Node_ComponentBoundEvent_278_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__InvertGamepadRightYCheckbox_K2Node_ComponentBoundEvent_278_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightYSensitivitySlider_K2Node_ComponentBoundEvent_303_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__GamepadRightYSensitivitySlider_K2Node_ComponentBoundEvent_303_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightYDeadzoneSlider_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__GamepadRightYDeadzoneSlider_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InverseAttackDirectionYCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__InverseAttackDirectionYCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__AngleAttacksWithMovementCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__AngleAttacksWithMovementCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature
struct UBP_ControlsSettings_C_BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ContinueButtonClicked
struct UBP_ControlsSettings_C_ContinueButtonClicked_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.CancelButtonClicked
struct UBP_ControlsSettings_C_CancelButtonClicked_Params
{
};

// Function BP_ControlsSettings.BP_ControlsSettings_C.ExecuteUbergraph_BP_ControlsSettings
struct UBP_ControlsSettings_C_ExecuteUbergraph_BP_ControlsSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
