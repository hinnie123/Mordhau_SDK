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

// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetOriginCorner
struct UBP_ColorPickerContainer_C_SetOriginCorner_Params
{
	int                                                Corner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateWidth
struct UBP_ColorPickerContainer_C_GetColorPickerApproximateWidth_Params
{
	float                                              Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateHeight
struct UBP_ColorPickerContainer_C_GetColorPickerApproximateHeight_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetColors
struct UBP_ColorPickerContainer_C_SetColors_Params
{
	TArray<class UClass*>                              Colors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.Show
struct UBP_ColorPickerContainer_C_Show_Params
{
};

// Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.ExecuteUbergraph_BP_ColorPickerContainer
struct UBP_ColorPickerContainer_C_ExecuteUbergraph_BP_ColorPickerContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
