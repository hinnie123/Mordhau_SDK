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

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.GetSkillPoints
struct UBP_SkillTreeNode_C_GetSkillPoints_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.CanUpgrade
struct UBP_SkillTreeNode_C_CanUpgrade_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.SetActiveStyle
struct UBP_SkillTreeNode_C_SetActiveStyle_Params
{
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_LockOverlay_Visibility_1
struct UBP_SkillTreeNode_C_Get_LockOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Update
struct UBP_SkillTreeNode_C_Update_Params
{
	bool                                               Animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_Image_Icon_Brush_1
struct UBP_SkillTreeNode_C_Get_Image_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.GetText_1
struct UBP_SkillTreeNode_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Get_Image_Icon_ColorAndOpacity_1
struct UBP_SkillTreeNode_C_Get_Image_Icon_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_SkillTreeNode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Activate
struct UBP_SkillTreeNode_C_Activate_Params
{
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBP_SkillTreeNode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UBP_SkillTreeNode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.Construct
struct UBP_SkillTreeNode_C_Construct_Params
{
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.ExecuteUbergraph_BP_SkillTreeNode
struct UBP_SkillTreeNode_C_ExecuteUbergraph_BP_SkillTreeNode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.NodeClicked__DelegateSignature
struct UBP_SkillTreeNode_C_NodeClicked__DelegateSignature_Params
{
	class UBP_SkillTreeNode_C*                         Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SkillTreeNode.BP_SkillTreeNode_C.NodeHovered__DelegateSignature
struct UBP_SkillTreeNode_C_NodeHovered__DelegateSignature_Params
{
	class UBP_SkillTreeNode_C*                         Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
