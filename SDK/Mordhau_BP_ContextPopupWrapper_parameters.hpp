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

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.GetVisibility_1
struct UBP_ContextPopupWrapper_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.OnGetMenuContent_1
struct UBP_ContextPopupWrapper_C_OnGetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Close Menu
struct UBP_ContextPopupWrapper_C_Close_Menu_Params
{
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Open Menu
struct UBP_ContextPopupWrapper_C_Open_Menu_Params
{
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Construct Context Menu
struct UBP_ContextPopupWrapper_C_Construct_Context_Menu_Params
{
	TMap<struct FString, struct FText>                 Option_Map;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBP_ContextPopupWrapper_C*                   Wrapper;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBP_ContextPopupWrapper_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ExecuteUbergraph_BP_ContextPopupWrapper
struct UBP_ContextPopupWrapper_C_ExecuteUbergraph_BP_ContextPopupWrapper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ContextButtonClicked__DelegateSignature
struct UBP_ContextPopupWrapper_C_ContextButtonClicked__DelegateSignature_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
