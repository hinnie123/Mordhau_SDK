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

// Function BP_SliderEntry.BP_SliderEntry_C.GetValue
struct UBP_SliderEntry_C_GetValue_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SliderEntry.BP_SliderEntry_C.SetValue
struct UBP_SliderEntry_C_SetValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SliderEntry.BP_SliderEntry_C.GetPercent
struct UBP_SliderEntry_C_GetPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SliderEntry.BP_SliderEntry_C.GetNumericValue
struct UBP_SliderEntry_C_GetNumericValue_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SliderEntry.BP_SliderEntry_C.ExecuteUbergraph_BP_SliderEntry
struct UBP_SliderEntry_C_ExecuteUbergraph_BP_SliderEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SliderEntry.BP_SliderEntry_C.OnHovered__DelegateSignature
struct UBP_SliderEntry_C_OnHovered__DelegateSignature_Params
{
};

// Function BP_SliderEntry.BP_SliderEntry_C.OnValueChanged__DelegateSignature
struct UBP_SliderEntry_C_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
