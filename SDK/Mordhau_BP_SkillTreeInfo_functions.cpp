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

// Function BP_SkillTreeInfo.BP_SkillTreeInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_SkillTreeInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeInfo.BP_SkillTreeInfo_C.GetVisibility_1");

	UBP_SkillTreeInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillTreeInfo.BP_SkillTreeInfo_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SkillTreeNode_C*     Node                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_SkillTreeInfo_C::Update(class UBP_SkillTreeNode_C* Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillTreeInfo.BP_SkillTreeInfo_C.Update");

	UBP_SkillTreeInfo_C_Update_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
