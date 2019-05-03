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

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetTextColorAndOpacity
struct UBP_ServerBrowserEntry_C_GetTextColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetPasswordVisibility
struct UBP_ServerBrowserEntry_C_GetPasswordVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetVacVisibility
struct UBP_ServerBrowserEntry_C_GetVacVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetOfficialVisibility
struct UBP_ServerBrowserEntry_C_GetOfficialVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerBrowser
struct UBP_ServerBrowserEntry_C_GetServerBrowser_Params
{
	class UBP_ServerBrowser_C*                         ServerBrowser;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Select
struct UBP_ServerBrowserEntry_C_Select_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetGameModeText
struct UBP_ServerBrowserEntry_C_GetGameModeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetMapText
struct UBP_ServerBrowserEntry_C_GetMapText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerNameText
struct UBP_ServerBrowserEntry_C_GetServerNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetPingText
struct UBP_ServerBrowserEntry_C_GetPingText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetMaxPlayersText
struct UBP_ServerBrowserEntry_C_GetMaxPlayersText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetCurrentPlayersText
struct UBP_ServerBrowserEntry_C_GetCurrentPlayersText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Construct
struct UBP_ServerBrowserEntry_C_Construct_Params
{
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowserEntry_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.ExecuteUbergraph_BP_ServerBrowserEntry
struct UBP_ServerBrowserEntry_C_ExecuteUbergraph_BP_ServerBrowserEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
