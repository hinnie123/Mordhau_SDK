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

// Function BP_NavButton.BP_NavButton_C.Get_NavText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_NavButton_C::Get_NavText_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavButton.BP_NavButton_C.Get_NavText_Visibility_1");

	UBP_NavButton_C_Get_NavText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NavButton.BP_NavButton_C.GetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_NavButton_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavButton.BP_NavButton_C.GetText");

	UBP_NavButton_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NavButton.BP_NavButton_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_NavButton_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavButton.BP_NavButton_C.Update");

	UBP_NavButton_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavButton.BP_NavButton_C.BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_NavButton_C::BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavButton.BP_NavButton_C.BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature");

	UBP_NavButton_C_BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavButton.BP_NavButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_NavButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavButton.BP_NavButton_C.Construct");

	UBP_NavButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavButton.BP_NavButton_C.ExecuteUbergraph_BP_NavButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_NavButton_C::ExecuteUbergraph_BP_NavButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavButton.BP_NavButton_C.ExecuteUbergraph_BP_NavButton");

	UBP_NavButton_C_ExecuteUbergraph_BP_NavButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavButton.BP_NavButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_NavButton_C::OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavButton.BP_NavButton_C.OnClick__DelegateSignature");

	UBP_NavButton_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
