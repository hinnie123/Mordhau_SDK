// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SkillTreeBranch_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Clear");

	UBP_SkillTreeBranch_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.AddNodeToBranch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SkillTreeNode_C*     Node                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SkillTreeBranch_C::AddNodeToBranch(TEnumAsByte<E_HordeSkill> Skill, class UBP_SkillTreeNode_C** Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.AddNodeToBranch");

	UBP_SkillTreeBranch_C_AddNodeToBranch_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}


// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SkillTreeBranch_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Construct");

	UBP_SkillTreeBranch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.ExecuteUbergraph_BP_SkillTreeBranch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SkillTreeBranch_C::ExecuteUbergraph_BP_SkillTreeBranch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.ExecuteUbergraph_BP_SkillTreeBranch");

	UBP_SkillTreeBranch_C_ExecuteUbergraph_BP_SkillTreeBranch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
