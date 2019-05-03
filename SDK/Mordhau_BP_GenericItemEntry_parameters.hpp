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

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipmentSkin
struct UBP_GenericItemEntry_C_InitializeFromEquipmentSkin_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetItemToUnlock
struct UBP_GenericItemEntry_C_GetItemToUnlock_Params
{
	int                                                ItemNeeded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromItem
struct UBP_GenericItemEntry_C_InitializeFromItem_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromWearable
struct UBP_GenericItemEntry_C_InitializeFromWearable_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromNothing
struct UBP_GenericItemEntry_C_InitializeFromNothing_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipment
struct UBP_GenericItemEntry_C_InitializeFromEquipment_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetRemoveIconBoxVisibility
struct UBP_GenericItemEntry_C_GetRemoveIconBoxVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ToolTipText_1
struct UBP_GenericItemEntry_C_Get_CostText_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ColorAndOpacity_1
struct UBP_GenericItemEntry_C_Get_CostText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_NameText_ColorAndOpacity_1
struct UBP_GenericItemEntry_C_Get_NameText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.Initialize
struct UBP_GenericItemEntry_C_Initialize_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
struct UBP_GenericItemEntry_C_BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.RequestUnlock
struct UBP_GenericItemEntry_C_RequestUnlock_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseConfirm
struct UBP_GenericItemEntry_C_PurchaseConfirm_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseCancel
struct UBP_GenericItemEntry_C_PurchaseCancel_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.ItemsUnlocked
struct UBP_GenericItemEntry_C_ItemsUnlocked_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamID                                    SteamID;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FItemStack>                          ItemStacks;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UBP_GenericItemEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBP_GenericItemEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.ExecuteUbergraph_BP_GenericItemEntry
struct UBP_GenericItemEntry_C_ExecuteUbergraph_BP_GenericItemEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
