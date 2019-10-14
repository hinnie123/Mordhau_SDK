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

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Update
struct UBP_ServerBrowserEntry_C_Update_Params
{
	struct FServerSearchResult                         Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerBrowser
struct UBP_ServerBrowserEntry_C_GetServerBrowser_Params
{
	class UBP_ServerBrowser_C*                         ServerBrowser;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Select
struct UBP_ServerBrowserEntry_C_Select_Params
{
	bool                                               isSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
