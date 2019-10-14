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

// Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Deselect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ReusableNavTabButton_C::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Deselect");

	UBP_ReusableNavTabButton_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ReusableNavTabButton_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Select");

	UBP_ReusableNavTabButton_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ReusableNavTabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Construct");

	UBP_ReusableNavTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ReusableNavTabButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_ReusableNavTabButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ReusableNavTabButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.PreConstruct");

	UBP_ReusableNavTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ExecuteUbergraph_BP_ReusableNavTabButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ReusableNavTabButton_C::ExecuteUbergraph_BP_ReusableNavTabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ExecuteUbergraph_BP_ReusableNavTabButton");

	UBP_ReusableNavTabButton_C_ExecuteUbergraph_BP_ReusableNavTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ButtonDeselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ReusableNavTabButton_C::ButtonDeselected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ButtonDeselected__DelegateSignature");

	UBP_ReusableNavTabButton_C_ButtonDeselected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ReusableNavTabButton_C::ButtonSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ButtonSelected__DelegateSignature");

	UBP_ReusableNavTabButton_C_ButtonSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
