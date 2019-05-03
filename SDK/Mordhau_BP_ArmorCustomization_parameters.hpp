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

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.SetEditingDefaultTier
struct UBP_ArmorCustomization_C_SetEditingDefaultTier_Params
{
	int                                                NewTier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateCharacterDollWrapped
struct UBP_ArmorCustomization_C_UpdateCharacterDollWrapped_Params
{
	bool                                               OnlyUpdateMaterials;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantEquipmentSwitch;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.MetalTintColorHovered
struct UBP_ArmorCustomization_C_MetalTintColorHovered_Params
{
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemColorHovered
struct UBP_ArmorCustomization_C_EmblemColorHovered_Params
{
	int                                                Idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemSelectionClicked
struct UBP_ArmorCustomization_C_EmblemSelectionClicked_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemSelectionHovered
struct UBP_ArmorCustomization_C_EmblemSelectionHovered_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.ShowEmblemChoiceList
struct UBP_ArmorCustomization_C_ShowEmblemChoiceList_Params
{
	int                                                CurrentId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.ResetWrapperToTierDefault
struct UBP_ArmorCustomization_C_ResetWrapperToTierDefault_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.GetVisibility_1
struct UBP_ArmorCustomization_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.Get_MovementSpeedBar_Percent_1
struct UBP_ArmorCustomization_C_Get_MovementSpeedBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionCanceled
struct UBP_ArmorCustomization_C_WearableSelectionCanceled_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionHovered
struct UBP_ArmorCustomization_C_WearableSelectionHovered_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionClicked
struct UBP_ArmorCustomization_C_WearableSelectionClicked_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.ShowWearableChoiceList
struct UBP_ArmorCustomization_C_ShowWearableChoiceList_Params
{
	TArray<class UClass*>                              Wearables;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EWearableSlot                                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.GetValues
struct UBP_ArmorCustomization_C_GetValues_Params
{
	int                                                Emblem;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                EmblemColor1;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                EmblemColor2;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MetalRoughnesScale;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MetalTint;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              EmblemColors;                                             // (Parm, OutParm, ZeroConstructor)
	int                                                metalroughnessscaleLength;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              MetalTintColors;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateWidgets
struct UBP_ArmorCustomization_C_UpdateWidgets_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnDrag
struct UBP_ArmorCustomization_C_OnDrag_Params
{
	float                                              DeltaDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.RegisterPreviewEvents
struct UBP_ArmorCustomization_C_RegisterPreviewEvents_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnScroll
struct UBP_ArmorCustomization_C_OnScroll_Params
{
	float                                              ScrollDelta;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.SetActive
struct UBP_ArmorCustomization_C_SetActive_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnProfileChanged
struct UBP_ArmorCustomization_C_OnProfileChanged_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.Construct
struct UBP_ArmorCustomization_C_Construct_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.ExecuteUbergraph_BP_ArmorCustomization
struct UBP_ArmorCustomization_C_ExecuteUbergraph_BP_ArmorCustomization_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
