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

// Function BP_NavButton.BP_NavButton_C.Get_NavText_Visibility_1
struct UBP_NavButton_C_Get_NavText_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NavButton.BP_NavButton_C.GetText
struct UBP_NavButton_C_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_NavButton.BP_NavButton_C.Update
struct UBP_NavButton_C_Update_Params
{
};

// Function BP_NavButton.BP_NavButton_C.Tick
struct UBP_NavButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NavButton.BP_NavButton_C.Construct
struct UBP_NavButton_C_Construct_Params
{
};

// Function BP_NavButton.BP_NavButton_C.BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
struct UBP_NavButton_C_BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_NavButton.BP_NavButton_C.ExecuteUbergraph_BP_NavButton
struct UBP_NavButton_C_ExecuteUbergraph_BP_NavButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NavButton.BP_NavButton_C.OnClick__DelegateSignature
struct UBP_NavButton_C_OnClick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
