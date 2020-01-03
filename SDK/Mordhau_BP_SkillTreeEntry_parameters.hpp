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

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Clear Branches
struct UBP_SkillTreeEntry_C_Clear_Branches_Params
{
};

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.AddBranch
struct UBP_SkillTreeEntry_C_AddBranch_Params
{
	class UBP_SkillTreeBranch_C*                       Branch;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Construct
struct UBP_SkillTreeEntry_C_Construct_Params
{
};

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.ExecuteUbergraph_BP_SkillTreeEntry
struct UBP_SkillTreeEntry_C_ExecuteUbergraph_BP_SkillTreeEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
