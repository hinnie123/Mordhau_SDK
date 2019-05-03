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

// Function BP_LocalPlay.BP_LocalPlay_C.Get_BotSettings_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_LocalPlay_C::Get_BotSettings_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.Get_BotSettings_Visibility_1");

	UBP_LocalPlay_C_Get_BotSettings_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LocalPlay.BP_LocalPlay_C.GetPlayerCountText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_LocalPlay_C::GetPlayerCountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.GetPlayerCountText");

	UBP_LocalPlay_C_GetPlayerCountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LocalPlay.BP_LocalPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LocalPlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.Construct");

	UBP_LocalPlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlay_C::BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UBP_LocalPlay_C_BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LocalPlay_C::BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature");

	UBP_LocalPlay_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlay.BP_LocalPlay_C.ExecuteUbergraph_BP_LocalPlay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlay_C::ExecuteUbergraph_BP_LocalPlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.ExecuteUbergraph_BP_LocalPlay");

	UBP_LocalPlay_C_ExecuteUbergraph_BP_LocalPlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
