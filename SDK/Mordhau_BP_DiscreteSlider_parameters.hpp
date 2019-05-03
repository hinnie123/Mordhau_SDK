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

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetPercent
struct UBP_DiscreteSlider_C_GetPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.ContinualizeValue
struct UBP_DiscreteSlider_C_ContinualizeValue_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ContinualizedValue;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChangedInternal
struct UBP_DiscreteSlider_C_OnValueChangedInternal_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetValue
struct UBP_DiscreteSlider_C_GetValue_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.SetValue
struct UBP_DiscreteSlider_C_SetValue_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfIndices;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.DiscretizeValue
struct UBP_DiscreteSlider_C_DiscretizeValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DiscretizedValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature
struct UBP_DiscreteSlider_C_BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature
struct UBP_DiscreteSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.ExecuteUbergraph_BP_DiscreteSlider
struct UBP_DiscreteSlider_C_ExecuteUbergraph_BP_DiscreteSlider_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnStartedTouching__DelegateSignature
struct UBP_DiscreteSlider_C_OnStartedTouching__DelegateSignature_Params
{
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChanged__DelegateSignature
struct UBP_DiscreteSlider_C_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
