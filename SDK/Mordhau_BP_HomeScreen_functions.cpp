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

// Function BP_HomeScreen.BP_HomeScreen_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_HomeScreen_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.GetVisibility_1");

	UBP_HomeScreen_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.Get_TextBlock_14_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_HomeScreen_C::Get_TextBlock_14_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.Get_TextBlock_14_Text_1");

	UBP_HomeScreen_C_Get_TextBlock_14_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.GetXPText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_HomeScreen_C::GetXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.GetXPText");

	UBP_HomeScreen_C_GetXPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.GetGoldText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_HomeScreen_C::GetGoldText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.GetGoldText");

	UBP_HomeScreen_C_GetGoldText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.GetCurrentVersionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_HomeScreen_C::GetCurrentVersionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.GetCurrentVersionText");

	UBP_HomeScreen_C_GetCurrentVersionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.OnUrlChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HomeScreen_C::OnUrlChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.OnUrlChanged");

	UBP_HomeScreen_C_OnUrlChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__ChangelogsButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__ChangelogsButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__ChangelogsButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature");

	UBP_HomeScreen_C_BndEvt__ChangelogsButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_HomeScreen_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__QuickstartGuideButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__QuickstartGuideButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__QuickstartGuideButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	UBP_HomeScreen_C_BndEvt__QuickstartGuideButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.OnShown");

	UBP_HomeScreen_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.OnHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.OnHidden");

	UBP_HomeScreen_C_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBP_HomeScreen_C_BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_HomeScreen_C_BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_HomeScreen_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_HomeScreen_C_BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_HomeScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.Construct");

	UBP_HomeScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.OnItemsRefreshed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSteamID                SteamID                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FItemStack>      ItemStacks                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_HomeScreen_C::OnItemsRefreshed(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.OnItemsRefreshed");

	UBP_HomeScreen_C_OnItemsRefreshed_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.SteamID = SteamID;
	params.ItemStacks = ItemStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.OnPartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamID>        PartyMembers                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_HomeScreen_C::OnPartyUpdated(TArray<struct FSteamID> PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.OnPartyUpdated");

	UBP_HomeScreen_C_OnPartyUpdated_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.UpdatePartyList
// (BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::UpdatePartyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.UpdatePartyList");

	UBP_HomeScreen_C_UpdatePartyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.TutorialPopupConfirm
// (BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::TutorialPopupConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.TutorialPopupConfirm");

	UBP_HomeScreen_C_TutorialPopupConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.TutorialPopupCancel
// (BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::TutorialPopupCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.TutorialPopupCancel");

	UBP_HomeScreen_C_TutorialPopupCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.ToggleNews
// (BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::ToggleNews()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.ToggleNews");

	UBP_HomeScreen_C_ToggleNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBP_HomeScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.CustomEvent_1");

	UBP_HomeScreen_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.CustomEvent_2");

	UBP_HomeScreen_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HomeScreen.BP_HomeScreen_C.ExecuteUbergraph_BP_HomeScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HomeScreen_C::ExecuteUbergraph_BP_HomeScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HomeScreen.BP_HomeScreen_C.ExecuteUbergraph_BP_HomeScreen");

	UBP_HomeScreen_C_ExecuteUbergraph_BP_HomeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
