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

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankMMRText_Text_1
struct UBP_PlayerMenu_C_Get_CurrentRankMMRText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankText_ColorAndOpacity_1
struct UBP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankText_Text_1
struct UBP_PlayerMenu_C_Get_CurrentRankText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.Update
struct UBP_PlayerMenu_C_Update_Params
{
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.Construct
struct UBP_PlayerMenu_C_Construct_Params
{
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.BndEvt__ChangeBannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_PlayerMenu_C_BndEvt__ChangeBannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.OnHideAnimFinish
struct UBP_PlayerMenu_C_OnHideAnimFinish_Params
{
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.OnItemsRefreshed
struct UBP_PlayerMenu_C_OnItemsRefreshed_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemStack>                          ItemStacks;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.CloseBannerMenu
struct UBP_PlayerMenu_C_CloseBannerMenu_Params
{
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.OnShown
struct UBP_PlayerMenu_C_OnShown_Params
{
};

// Function BP_PlayerMenu.BP_PlayerMenu_C.ExecuteUbergraph_BP_PlayerMenu
struct UBP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
