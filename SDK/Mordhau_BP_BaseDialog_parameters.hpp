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

// Function BP_BaseDialog.BP_BaseDialog_C.GetTitleText
struct UBP_BaseDialog_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_BaseDialog.BP_BaseDialog_C.OnMouseButtonDown_1
struct UBP_BaseDialog_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_BaseDialog.BP_BaseDialog_C.Show
struct UBP_BaseDialog_C_Show_Params
{
};

// Function BP_BaseDialog.BP_BaseDialog_C.Hide
struct UBP_BaseDialog_C_Hide_Params
{
};

// Function BP_BaseDialog.BP_BaseDialog_C.ExecuteUbergraph_BP_BaseDialog
struct UBP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
