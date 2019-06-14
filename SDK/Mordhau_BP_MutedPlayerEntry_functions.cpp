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

// Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.OnContextButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MutedPlayerEntry_C::OnContextButtonClicked(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.OnContextButtonClicked");

	UBP_MutedPlayerEntry_C_OnContextButtonClicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MutedPlayerEntry_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UBP_MutedPlayerEntry_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.ExecuteUbergraph_BP_MutedPlayerEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MutedPlayerEntry_C::ExecuteUbergraph_BP_MutedPlayerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.ExecuteUbergraph_BP_MutedPlayerEntry");

	UBP_MutedPlayerEntry_C_ExecuteUbergraph_BP_MutedPlayerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
