// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateControlSchemeDropdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateControlSchemeDropdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateControlSchemeDropdown");

	UBP_ControlsSettings_C_UpdateControlSchemeDropdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyAngleAttacksWithMovement
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyAngleAttacksWithMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyAngleAttacksWithMovement");

	UBP_ControlsSettings_C_ApplyAngleAttacksWithMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateAngleAttacksWithMovementCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateAngleAttacksWithMovementCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateAngleAttacksWithMovementCheckbox");

	UBP_ControlsSettings_C_UpdateAngleAttacksWithMovementCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateAngleAttackAfterPressCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateAngleAttackAfterPressCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateAngleAttackAfterPressCheckbox");

	UBP_ControlsSettings_C_UpdateAngleAttackAfterPressCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyAngleAttackAfterPress
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyAngleAttackAfterPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyAngleAttackAfterPress");

	UBP_ControlsSettings_C_ApplyAngleAttackAfterPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInverseAttackDirection
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyInverseAttackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInverseAttackDirection");

	UBP_ControlsSettings_C_ApplyInverseAttackDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInverseAttackDirectionCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateInverseAttackDirectionCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInverseAttackDirectionCheckbox");

	UBP_ControlsSettings_C_UpdateInverseAttackDirectionCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyToggleSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyToggleSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyToggleSprint");

	UBP_ControlsSettings_C_ApplyToggleSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.GetSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SliderEntry_C*       Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               Limits                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ControlsSettings_C::GetSliderValue(class UBP_SliderEntry_C* Slider, const struct FVector2D& Limits, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.GetSliderValue");

	UBP_ControlsSettings_C_GetSliderValue_Params params;
	params.Slider = Slider;
	params.Limits = Limits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateToggleSprintCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateToggleSprintCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateToggleSprintCheckbox");

	UBP_ControlsSettings_C_UpdateToggleSprintCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateSlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SliderEntry_C*       Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Limits                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_ControlsSettings_C::UpdateSlider(class UBP_SliderEntry_C* Slider, float Value, const struct FVector2D& Limits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateSlider");

	UBP_ControlsSettings_C_UpdateSlider_Params params;
	params.Slider = Slider;
	params.Value = Value;
	params.Limits = Limits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightYDeadzone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyGamepadRightYDeadzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightYDeadzone");

	UBP_ControlsSettings_C_ApplyGamepadRightYDeadzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightXDeadzone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyGamepadRightXDeadzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightXDeadzone");

	UBP_ControlsSettings_C_ApplyGamepadRightXDeadzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftYDeadzone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyGamepadLeftYDeadzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftYDeadzone");

	UBP_ControlsSettings_C_ApplyGamepadLeftYDeadzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftXDeadzone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyGamepadLeftXDeadzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftXDeadzone");

	UBP_ControlsSettings_C_ApplyGamepadLeftXDeadzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadRightY
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyInvertGamepadRightY()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadRightY");

	UBP_ControlsSettings_C_ApplyInvertGamepadRightY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadRightX
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyInvertGamepadRightX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadRightX");

	UBP_ControlsSettings_C_ApplyInvertGamepadRightX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadRightYCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateInvertGamepadRightYCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadRightYCheckbox");

	UBP_ControlsSettings_C_UpdateInvertGamepadRightYCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadRightXCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateInvertGamepadRightXCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadRightXCheckbox");

	UBP_ControlsSettings_C_UpdateInvertGamepadRightXCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightYDeadzoneSlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateGamepadRightYDeadzoneSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightYDeadzoneSlider");

	UBP_ControlsSettings_C_UpdateGamepadRightYDeadzoneSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightXDeadzoneSlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateGamepadRightXDeadzoneSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightXDeadzoneSlider");

	UBP_ControlsSettings_C_UpdateGamepadRightXDeadzoneSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftYDeadzoneSlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateGamepadLeftYDeadzoneSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftYDeadzoneSlider");

	UBP_ControlsSettings_C_UpdateGamepadLeftYDeadzoneSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftXDeadzoneSlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateGamepadLeftXDeadzoneSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftXDeadzoneSlider");

	UBP_ControlsSettings_C_UpdateGamepadLeftXDeadzoneSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightYSensitivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyGamepadRightYSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightYSensitivity");

	UBP_ControlsSettings_C_ApplyGamepadRightYSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightXSensitivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyGamepadRightXSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadRightXSensitivity");

	UBP_ControlsSettings_C_ApplyGamepadRightXSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftYSensitivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyGamepadLeftYSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftYSensitivity");

	UBP_ControlsSettings_C_ApplyGamepadLeftYSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftXSensitivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyGamepadLeftXSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyGamepadLeftXSensitivity");

	UBP_ControlsSettings_C_ApplyGamepadLeftXSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyMouseYSensitivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyMouseYSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyMouseYSensitivity");

	UBP_ControlsSettings_C_ApplyMouseYSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyMouseXSensitivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyMouseXSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyMouseXSensitivity");

	UBP_ControlsSettings_C_ApplyMouseXSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightYSensitivitySlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateGamepadRightYSensitivitySlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightYSensitivitySlider");

	UBP_ControlsSettings_C_UpdateGamepadRightYSensitivitySlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightXSensitivitySlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateGamepadRightXSensitivitySlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadRightXSensitivitySlider");

	UBP_ControlsSettings_C_UpdateGamepadRightXSensitivitySlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftYSensitivitySlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateGamepadLeftYSensitivitySlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftYSensitivitySlider");

	UBP_ControlsSettings_C_UpdateGamepadLeftYSensitivitySlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftXSensitivitySlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateGamepadLeftXSensitivitySlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateGamepadLeftXSensitivitySlider");

	UBP_ControlsSettings_C_UpdateGamepadLeftXSensitivitySlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateMouseYSensitivitySlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateMouseYSensitivitySlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateMouseYSensitivitySlider");

	UBP_ControlsSettings_C_UpdateMouseYSensitivitySlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateMouseXSensitivitySlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateMouseXSensitivitySlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateMouseXSensitivitySlider");

	UBP_ControlsSettings_C_UpdateMouseXSensitivitySlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyFlipAttackSide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyFlipAttackSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyFlipAttackSide");

	UBP_ControlsSettings_C_ApplyFlipAttackSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateFlipAttackSideCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateFlipAttackSideCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateFlipAttackSideCheckbox");

	UBP_ControlsSettings_C_UpdateFlipAttackSideCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadLeftY
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyInvertGamepadLeftY()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadLeftY");

	UBP_ControlsSettings_C_ApplyInvertGamepadLeftY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadLeftX
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyInvertGamepadLeftX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertGamepadLeftX");

	UBP_ControlsSettings_C_ApplyInvertGamepadLeftX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadLeftYCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateInvertGamepadLeftYCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadLeftYCheckbox");

	UBP_ControlsSettings_C_UpdateInvertGamepadLeftYCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadLeftXCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateInvertGamepadLeftXCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertGamepadLeftXCheckbox");

	UBP_ControlsSettings_C_UpdateInvertGamepadLeftXCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertMouseY
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyInvertMouseY()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertMouseY");

	UBP_ControlsSettings_C_ApplyInvertMouseY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertMouseYCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateInvertMouseYCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertMouseYCheckbox");

	UBP_ControlsSettings_C_UpdateInvertMouseYCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertMouseX
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ApplyInvertMouseX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ApplyInvertMouseX");

	UBP_ControlsSettings_C_ApplyInvertMouseX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertMouseXCheckbox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateInvertMouseXCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateInvertMouseXCheckbox");

	UBP_ControlsSettings_C_UpdateInvertMouseXCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.OnShown");

	UBP_ControlsSettings_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateWidgets
// (BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::UpdateWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.UpdateWidgets");

	UBP_ControlsSettings_C_UpdateWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ToggleSprintCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__ToggleSprintCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ToggleSprintCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__ToggleSprintCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InverseAttackDirectionCheckbox_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__InverseAttackDirectionCheckbox_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InverseAttackDirectionCheckbox_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__InverseAttackDirectionCheckbox_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__AngleAttackAfterPressCheckbox_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__AngleAttackAfterPressCheckbox_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__AngleAttackAfterPressCheckbox_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__AngleAttackAfterPressCheckbox_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__FlipAttackSideCheckbox_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__FlipAttackSideCheckbox_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__FlipAttackSideCheckbox_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__FlipAttackSideCheckbox_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertMouseXCheckbox_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__InvertMouseXCheckbox_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertMouseXCheckbox_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__InvertMouseXCheckbox_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__MouseXSensitivitySlider_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__MouseXSensitivitySlider_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__MouseXSensitivitySlider_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__MouseXSensitivitySlider_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertMouseYCheckbox_K2Node_ComponentBoundEvent_69_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__InvertMouseYCheckbox_K2Node_ComponentBoundEvent_69_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertMouseYCheckbox_K2Node_ComponentBoundEvent_69_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__InvertMouseYCheckbox_K2Node_ComponentBoundEvent_69_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__MouseYSensitivitySlider_K2Node_ComponentBoundEvent_83_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__MouseYSensitivitySlider_K2Node_ComponentBoundEvent_83_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__MouseYSensitivitySlider_K2Node_ComponentBoundEvent_83_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__MouseYSensitivitySlider_K2Node_ComponentBoundEvent_83_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadLeftXCheckbox_K2Node_ComponentBoundEvent_98_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__InvertGamepadLeftXCheckbox_K2Node_ComponentBoundEvent_98_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadLeftXCheckbox_K2Node_ComponentBoundEvent_98_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__InvertGamepadLeftXCheckbox_K2Node_ComponentBoundEvent_98_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftXSensitivitySlider_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__GamepadLeftXSensitivitySlider_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftXSensitivitySlider_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__GamepadLeftXSensitivitySlider_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftXDeadzoneSlider_K2Node_ComponentBoundEvent_131_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__GamepadLeftXDeadzoneSlider_K2Node_ComponentBoundEvent_131_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftXDeadzoneSlider_K2Node_ComponentBoundEvent_131_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__GamepadLeftXDeadzoneSlider_K2Node_ComponentBoundEvent_131_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadLeftYCheckbox_K2Node_ComponentBoundEvent_149_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__InvertGamepadLeftYCheckbox_K2Node_ComponentBoundEvent_149_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadLeftYCheckbox_K2Node_ComponentBoundEvent_149_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__InvertGamepadLeftYCheckbox_K2Node_ComponentBoundEvent_149_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftYSensitivitySlider_K2Node_ComponentBoundEvent_168_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__GamepadLeftYSensitivitySlider_K2Node_ComponentBoundEvent_168_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftYSensitivitySlider_K2Node_ComponentBoundEvent_168_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__GamepadLeftYSensitivitySlider_K2Node_ComponentBoundEvent_168_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftYDeadzoneSlider_K2Node_ComponentBoundEvent_188_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__GamepadLeftYDeadzoneSlider_K2Node_ComponentBoundEvent_188_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadLeftYDeadzoneSlider_K2Node_ComponentBoundEvent_188_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__GamepadLeftYDeadzoneSlider_K2Node_ComponentBoundEvent_188_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadRightXCheckbox_K2Node_ComponentBoundEvent_209_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__InvertGamepadRightXCheckbox_K2Node_ComponentBoundEvent_209_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadRightXCheckbox_K2Node_ComponentBoundEvent_209_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__InvertGamepadRightXCheckbox_K2Node_ComponentBoundEvent_209_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightXSensitivitySlider_K2Node_ComponentBoundEvent_231_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__GamepadRightXSensitivitySlider_K2Node_ComponentBoundEvent_231_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightXSensitivitySlider_K2Node_ComponentBoundEvent_231_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__GamepadRightXSensitivitySlider_K2Node_ComponentBoundEvent_231_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightXDeadzoneSlider_K2Node_ComponentBoundEvent_254_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__GamepadRightXDeadzoneSlider_K2Node_ComponentBoundEvent_254_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightXDeadzoneSlider_K2Node_ComponentBoundEvent_254_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__GamepadRightXDeadzoneSlider_K2Node_ComponentBoundEvent_254_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadRightYCheckbox_K2Node_ComponentBoundEvent_278_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__InvertGamepadRightYCheckbox_K2Node_ComponentBoundEvent_278_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InvertGamepadRightYCheckbox_K2Node_ComponentBoundEvent_278_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__InvertGamepadRightYCheckbox_K2Node_ComponentBoundEvent_278_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightYSensitivitySlider_K2Node_ComponentBoundEvent_303_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__GamepadRightYSensitivitySlider_K2Node_ComponentBoundEvent_303_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightYSensitivitySlider_K2Node_ComponentBoundEvent_303_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__GamepadRightYSensitivitySlider_K2Node_ComponentBoundEvent_303_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightYDeadzoneSlider_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__GamepadRightYDeadzoneSlider_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__GamepadRightYDeadzoneSlider_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__GamepadRightYDeadzoneSlider_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InverseAttackDirectionYCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__InverseAttackDirectionYCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__InverseAttackDirectionYCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__InverseAttackDirectionYCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__AngleAttacksWithMovementCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__AngleAttacksWithMovementCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__AngleAttacksWithMovementCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__AngleAttacksWithMovementCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)

void UBP_ControlsSettings_C::BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ControlsSettings_C::BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature");

	UBP_ControlsSettings_C_BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ContinueButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::ContinueButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ContinueButtonClicked");

	UBP_ControlsSettings_C_ContinueButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.CancelButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_ControlsSettings_C::CancelButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.CancelButtonClicked");

	UBP_ControlsSettings_C_CancelButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlsSettings.BP_ControlsSettings_C.ExecuteUbergraph_BP_ControlsSettings
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ControlsSettings_C::ExecuteUbergraph_BP_ControlsSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlsSettings.BP_ControlsSettings_C.ExecuteUbergraph_BP_ControlsSettings");

	UBP_ControlsSettings_C_ExecuteUbergraph_BP_ControlsSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
