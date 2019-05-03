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

// Function BP_SubNavButton.BP_SubNavButton_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SubNavButton_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.Update");

	UBP_SubNavButton_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubNavButton.BP_SubNavButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SubNavButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.Construct");

	UBP_SubNavButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubNavButton.BP_SubNavButton_C.BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SubNavButton_C::BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature");

	UBP_SubNavButton_C_BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubNavButton.BP_SubNavButton_C.ExecuteUbergraph_BP_SubNavButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SubNavButton_C::ExecuteUbergraph_BP_SubNavButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.ExecuteUbergraph_BP_SubNavButton");

	UBP_SubNavButton_C_ExecuteUbergraph_BP_SubNavButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubNavButton.BP_SubNavButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_SubNavButton_C::OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.OnClick__DelegateSignature");

	UBP_SubNavButton_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
