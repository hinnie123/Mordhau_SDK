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

// Function BP_TargetInfo.BP_TargetInfo_C.Get_TextBlock_0_Text_1
struct UBP_TargetInfo_C_Get_TextBlock_0_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_TargetInfo.BP_TargetInfo_C.Get_TextBlock_0_Visibility_1
struct UBP_TargetInfo_C_Get_TextBlock_0_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TargetInfo.BP_TargetInfo_C.GetVisibility_1
struct UBP_TargetInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TargetInfo.BP_TargetInfo_C.GetPlayerStateFromTarget
struct UBP_TargetInfo_C_GetPlayerStateFromTarget_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauPlayerState*                         State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TargetInfo.BP_TargetInfo_C.Get_HeadText_Text_1
struct UBP_TargetInfo_C_Get_HeadText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_TargetInfo.BP_TargetInfo_C.Get_TargetNameText_Visibility_1
struct UBP_TargetInfo_C_Get_TargetNameText_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TargetInfo.BP_TargetInfo_C.Get_HeadText_Visibility
struct UBP_TargetInfo_C_Get_HeadText_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TargetInfo.BP_TargetInfo_C.CheckForTarget
struct UBP_TargetInfo_C_CheckForTarget_Params
{
};

// Function BP_TargetInfo.BP_TargetInfo_C.Construct
struct UBP_TargetInfo_C_Construct_Params
{
};

// Function BP_TargetInfo.BP_TargetInfo_C.ExecuteUbergraph_BP_TargetInfo
struct UBP_TargetInfo_C_ExecuteUbergraph_BP_TargetInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
