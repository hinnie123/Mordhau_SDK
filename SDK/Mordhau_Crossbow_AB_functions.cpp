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

// Function Crossbow_AB.Crossbow_AB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Crossbow_AB_AnimGraphNode_TwoWayBlend_DD85EA154E983BC610F11F944CCD1ADD
// (BlueprintEvent)

void UCrossbow_AB_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Crossbow_AB_AnimGraphNode_TwoWayBlend_DD85EA154E983BC610F11F944CCD1ADD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crossbow_AB.Crossbow_AB_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Crossbow_AB_AnimGraphNode_TwoWayBlend_DD85EA154E983BC610F11F944CCD1ADD");

	UCrossbow_AB_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Crossbow_AB_AnimGraphNode_TwoWayBlend_DD85EA154E983BC610F11F944CCD1ADD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crossbow_AB.Crossbow_AB_C.ExecuteUbergraph_Crossbow_AB
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCrossbow_AB_C::ExecuteUbergraph_Crossbow_AB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crossbow_AB.Crossbow_AB_C.ExecuteUbergraph_Crossbow_AB");

	UCrossbow_AB_C_ExecuteUbergraph_Crossbow_AB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
