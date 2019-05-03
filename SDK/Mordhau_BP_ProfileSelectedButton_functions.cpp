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

// Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ProfileSelectedButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileSelectedButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ProfileSelectedButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.Construct");

	UBP_ProfileSelectedButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.ExecuteUbergraph_BP_ProfileSelectedButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ProfileSelectedButton_C::ExecuteUbergraph_BP_ProfileSelectedButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.ExecuteUbergraph_BP_ProfileSelectedButton");

	UBP_ProfileSelectedButton_C_ExecuteUbergraph_BP_ProfileSelectedButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
