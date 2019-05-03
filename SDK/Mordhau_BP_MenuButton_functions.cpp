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

// Function BP_MenuButton.BP_MenuButton_C.Get_TextBlock_15_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_MenuButton_C::Get_TextBlock_15_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.Get_TextBlock_15_Text_1");

	UBP_MenuButton_C_Get_TextBlock_15_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuButton.BP_MenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MenuButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.Construct");

	UBP_MenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuButton.BP_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature");

	UBP_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuButton.BP_MenuButton_C.ApplyStyle
// (BlueprintCallable, BlueprintEvent)

void UBP_MenuButton_C::ApplyStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.ApplyStyle");

	UBP_MenuButton_C_ApplyStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuButton.BP_MenuButton_C.ExecuteUbergraph_BP_MenuButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuButton_C::ExecuteUbergraph_BP_MenuButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.ExecuteUbergraph_BP_MenuButton");

	UBP_MenuButton_C_ExecuteUbergraph_BP_MenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuButton.BP_MenuButton_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MenuButton_C::OnSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.OnSelected__DelegateSignature");

	UBP_MenuButton_C_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
