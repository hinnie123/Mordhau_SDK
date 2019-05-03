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

// Function BP_LocalPlay.BP_LocalPlay_C.Get_BotSettings_Visibility_1
struct UBP_LocalPlay_C_Get_BotSettings_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalPlay.BP_LocalPlay_C.GetPlayerCountText
struct UBP_LocalPlay_C_GetPlayerCountText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LocalPlay.BP_LocalPlay_C.Construct
struct UBP_LocalPlay_C_Construct_Params
{
};

// Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UBP_LocalPlay_C_BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature
struct UBP_LocalPlay_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LocalPlay.BP_LocalPlay_C.ExecuteUbergraph_BP_LocalPlay
struct UBP_LocalPlay_C_ExecuteUbergraph_BP_LocalPlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
