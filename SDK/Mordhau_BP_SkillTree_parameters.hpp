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

// Function BP_SkillTree.BP_SkillTree_C.RefreshNodes
struct UBP_SkillTree_C_RefreshNodes_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.GetAllChildren
struct UBP_SkillTree_C_GetAllChildren_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<E_HordeSkill>>                  OutChildren;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SkillTree.BP_SkillTree_C.GetImmediateChildren
struct UBP_SkillTree_C_GetImmediateChildren_Params
{
	TEnumAsByte<E_HordeSkill>                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<E_HordeSkill>>                  OutChildren;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SkillTree.BP_SkillTree_C.Hide
struct UBP_SkillTree_C_Hide_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.OnPreviewKeyDown
struct UBP_SkillTree_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SkillTree.BP_SkillTree_C.Show
struct UBP_SkillTree_C_Show_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.Get_SkillPoints_Text_1
struct UBP_SkillTree_C_Get_SkillPoints_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SkillTree.BP_SkillTree_C.Construct
struct UBP_SkillTree_C_Construct_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.On Node Hover
struct UBP_SkillTree_C_On_Node_Hover_Params
{
	class UBP_SkillTreeNode_C*                         Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SkillTree.BP_SkillTree_C.On Node Clicked
struct UBP_SkillTree_C_On_Node_Clicked_Params
{
	class UBP_SkillTreeNode_C*                         Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SkillTree.BP_SkillTree_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_SkillTree_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.ExecuteUbergraph_BP_SkillTree
struct UBP_SkillTree_C_ExecuteUbergraph_BP_SkillTree_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
