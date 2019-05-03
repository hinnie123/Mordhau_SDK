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

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetVisibility_1
struct UBP_WearableSlotCustomization_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.ColorHovered
struct UBP_WearableSlotCustomization_C_ColorHovered_Params
{
	int                                                Idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Get_TextBlock_26_Text_1
struct UBP_WearableSlotCustomization_C_Get_TextBlock_26_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Get_armorTier_ToolTipText
struct UBP_WearableSlotCustomization_C_Get_armorTier_ToolTipText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetTierIconVisibility
struct UBP_WearableSlotCustomization_C_GetTierIconVisibility_Params
{
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Get_SubSlotText_Visibility_1
struct UBP_WearableSlotCustomization_C_Get_SubSlotText_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Get_MainSlotText_Visibility_1
struct UBP_WearableSlotCustomization_C_Get_MainSlotText_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetColor2Visibility
struct UBP_WearableSlotCustomization_C_GetColor2Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetColor1Visibility
struct UBP_WearableSlotCustomization_C_GetColor1Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetPatternVisibility
struct UBP_WearableSlotCustomization_C_GetPatternVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.RebuildWidget
struct UBP_WearableSlotCustomization_C_RebuildWidget_Params
{
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetValues
struct UBP_WearableSlotCustomization_C_GetValues_Params
{
	struct FText                                       WearableName;                                             // (Parm, OutParm)
	unsigned char                                      WearableColor1Index;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WearableColor2Index;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Pattern;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PatternLength;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              WearableColors1;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<class UClass*>                              WearableColors2;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               HasColor1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasColor2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ArmorClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemDefID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EItemRarity                                        ItemRarity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.UpdateWearableColor
struct UBP_WearableSlotCustomization_C_UpdateWearableColor_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.UpdateWearablePattern
struct UBP_WearableSlotCustomization_C_UpdateWearablePattern_Params
{
	int                                                Pattern;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.UpdateWearable
struct UBP_WearableSlotCustomization_C_UpdateWearable_Params
{
	int                                                NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DoNotUpdateWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColors1_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColors1_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_3539_OnClicked__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_3539_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_2683_OnHovered__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_2683_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_2717_OnHovered__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_2717_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_4518_OnClosed__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_4518_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_4554_OnClosed__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_4554_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__Pattern_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__Pattern_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__PickWearableButton_K2Node_ComponentBoundEvent_606_OnButtonClickedEvent__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__PickWearableButton_K2Node_ComponentBoundEvent_606_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Construct
struct UBP_WearableSlotCustomization_C_Construct_Params
{
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.OnItemsUnlocked
struct UBP_WearableSlotCustomization_C_OnItemsUnlocked_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FItemStack>                          ItemStacks;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.ExecuteUbergraph_BP_WearableSlotCustomization
struct UBP_WearableSlotCustomization_C_ExecuteUbergraph_BP_WearableSlotCustomization_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
