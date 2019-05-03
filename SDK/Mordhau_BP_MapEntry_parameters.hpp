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

// Function BP_MapEntry.BP_MapEntry_C.SetGameModeName
struct UBP_MapEntry_C_SetGameModeName_Params
{
	struct FText                                       GameModeName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapEntry.BP_MapEntry_C.SetThumbnail
struct UBP_MapEntry_C_SetThumbnail_Params
{
	class UTexture2D*                                  Thumbnail;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapEntry.BP_MapEntry_C.SetMapName
struct UBP_MapEntry_C_SetMapName_Params
{
	struct FText                                       MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapEntry.BP_MapEntry_C.Deselect
struct UBP_MapEntry_C_Deselect_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.Select
struct UBP_MapEntry_C_Select_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.Construct
struct UBP_MapEntry_C_Construct_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct UBP_MapEntry_C_BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBP_MapEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBP_MapEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.ExecuteUbergraph_BP_MapEntry
struct UBP_MapEntry_C_ExecuteUbergraph_BP_MapEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapEntry.BP_MapEntry_C.Selected__DelegateSignature
struct UBP_MapEntry_C_Selected__DelegateSignature_Params
{
	class UBP_MapEntry_C*                              Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
