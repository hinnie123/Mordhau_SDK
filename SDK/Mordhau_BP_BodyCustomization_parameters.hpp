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

// Function BP_BodyCustomization.BP_BodyCustomization_C.SkinColorHovered
struct UBP_BodyCustomization_C_SkinColorHovered_Params
{
	int                                                NewSkinColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateDoll
struct UBP_BodyCustomization_C_UpdateDoll_Params
{
	bool                                               OnlyUpdateMaterials;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateWidget
struct UBP_BodyCustomization_C_UpdateWidget_Params
{
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.GetValues
struct UBP_BodyCustomization_C_GetValues_Params
{
	int                                                Voice;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Fat;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Skinny;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Strong;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SkinColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                VoiceCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FatCount;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SkinnyCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StrongCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFemale;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.RegisterPreviewEvents
struct UBP_BodyCustomization_C_RegisterPreviewEvents_Params
{
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.OnDrag
struct UBP_BodyCustomization_C_OnDrag_Params
{
	float                                              DeltaDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.OnScroll
struct UBP_BodyCustomization_C_OnScroll_Params
{
	float                                              ScrollDelta;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature_Params
{
	int                                                LstSelectedColorIndex;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.SetActive
struct UBP_BodyCustomization_C_SetActive_Params
{
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.OnProfileChanged
struct UBP_BodyCustomization_C_OnProfileChanged_Params
{
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.ExecuteUbergraph_BP_BodyCustomization
struct UBP_BodyCustomization_C_ExecuteUbergraph_BP_BodyCustomization_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
