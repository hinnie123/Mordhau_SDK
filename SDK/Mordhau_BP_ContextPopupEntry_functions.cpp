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

// Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ContextPopupEntry_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.GetText_1");

	UBP_ContextPopupEntry_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ContextPopupEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UBP_ContextPopupEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.ExecuteUbergraph_BP_ContextPopupEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ContextPopupEntry_C::ExecuteUbergraph_BP_ContextPopupEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.ExecuteUbergraph_BP_ContextPopupEntry");

	UBP_ContextPopupEntry_C_ExecuteUbergraph_BP_ContextPopupEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
