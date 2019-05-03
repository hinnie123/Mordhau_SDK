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

// Function BP_ProfilePerkCostEntry.BP_ProfilePerkCostEntry_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ProfilePerkCostEntry_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfilePerkCostEntry.BP_ProfilePerkCostEntry_C.GetVisibility_1");

	UBP_ProfilePerkCostEntry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ProfilePerkCostEntry.BP_ProfilePerkCostEntry_C.BndEvt__PerkRibbonButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ProfilePerkCostEntry_C::BndEvt__PerkRibbonButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfilePerkCostEntry.BP_ProfilePerkCostEntry_C.BndEvt__PerkRibbonButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfilePerkCostEntry_C_BndEvt__PerkRibbonButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfilePerkCostEntry.BP_ProfilePerkCostEntry_C.ExecuteUbergraph_BP_ProfilePerkCostEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ProfilePerkCostEntry_C::ExecuteUbergraph_BP_ProfilePerkCostEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfilePerkCostEntry.BP_ProfilePerkCostEntry_C.ExecuteUbergraph_BP_ProfilePerkCostEntry");

	UBP_ProfilePerkCostEntry_C_ExecuteUbergraph_BP_ProfilePerkCostEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
