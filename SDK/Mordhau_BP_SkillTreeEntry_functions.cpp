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

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Clear Branches
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SkillTreeEntry_C::Clear_Branches()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Clear Branches");

	UBP_SkillTreeEntry_C_Clear_Branches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.AddBranch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SkillTreeBranch_C*   Branch                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SkillTreeEntry_C::AddBranch(class UBP_SkillTreeBranch_C** Branch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.AddBranch");

	UBP_SkillTreeEntry_C_AddBranch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;
}


// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SkillTreeEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Construct");

	UBP_SkillTreeEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.ExecuteUbergraph_BP_SkillTreeEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SkillTreeEntry_C::ExecuteUbergraph_BP_SkillTreeEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.ExecuteUbergraph_BP_SkillTreeEntry");

	UBP_SkillTreeEntry_C_ExecuteUbergraph_BP_SkillTreeEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
