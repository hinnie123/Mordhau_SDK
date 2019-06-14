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

// Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation Right
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::Request_Main_Navigation_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation Right");

	UBP_MainMenu_C_Request_Main_Navigation_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation Left
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::Request_Main_Navigation_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation Left");

	UBP_MainMenu_C_Request_Main_Navigation_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_MainMenu_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnKeyDown");

	UBP_MainMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MainMenu.BP_MainMenu_C.Get_ArmorySubNav_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_MainMenu_C::Get_ArmorySubNav_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Get_ArmorySubNav_Visibility_1");

	UBP_MainMenu_C_Get_ArmorySubNav_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MainMenu.BP_MainMenu_C.AskHUDToHideUs
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::AskHUDToHideUs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.AskHUDToHideUs");

	UBP_MainMenu_C_AskHUDToHideUs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.HideQuickJoinDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::HideQuickJoinDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.HideQuickJoinDialog");

	UBP_MainMenu_C_HideQuickJoinDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.ShowQuickJoinDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::ShowQuickJoinDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowQuickJoinDialog");

	UBP_MainMenu_C_ShowQuickJoinDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.CreateQuickJoinDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::CreateQuickJoinDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CreateQuickJoinDialog");

	UBP_MainMenu_C_CreateQuickJoinDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.HideQuitMatchDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::HideQuitMatchDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.HideQuitMatchDialog");

	UBP_MainMenu_C_HideQuitMatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.ShowQuitMatchDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::ShowQuitMatchDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowQuitMatchDialog");

	UBP_MainMenu_C_ShowQuitMatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.CreateQuitMatchDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::CreateQuitMatchDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CreateQuitMatchDialog");

	UBP_MainMenu_C_CreateQuitMatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.GetCloseButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_MainMenu_C::GetCloseButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.GetCloseButtonVisibility");

	UBP_MainMenu_C_GetCloseButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MainMenu.BP_MainMenu_C.GetHomeButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_MainMenu_C::GetHomeButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.GetHomeButtonVisibility");

	UBP_MainMenu_C_GetHomeButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MainMenu.BP_MainMenu_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.QuitGame");

	UBP_MainMenu_C_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.HideQuitGameDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::HideQuitGameDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.HideQuitGameDialog");

	UBP_MainMenu_C_HideQuitGameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.ShowQuitGameDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::ShowQuitGameDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowQuitGameDialog");

	UBP_MainMenu_C_ShowQuitGameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.CreateQuitGameDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::CreateQuitGameDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CreateQuitGameDialog");

	UBP_MainMenu_C_CreateQuitGameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_MainMenu_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnPreviewKeyDown");

	UBP_MainMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MainMenu.BP_MainMenu_C.SetContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MenuContentWidget_C* NewWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MainMenu_C::SetContentWidget(class UBP_MenuContentWidget_C* NewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.SetContentWidget");

	UBP_MainMenu_C_SetContentWidget_Params params;
	params.NewWidget = NewWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.UpdateNavAndSubNavButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::UpdateNavAndSubNavButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.UpdateNavAndSubNavButtons");

	UBP_MainMenu_C_UpdateNavAndSubNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.CleanUpCustomization
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::CleanUpCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CleanUpCustomization");

	UBP_MainMenu_C_CleanUpCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ArmoryStates>    Armory_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenu_C::Show(TEnumAsByte<E_ArmoryStates> Armory_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Show");

	UBP_MainMenu_C_Show_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Hide");

	UBP_MainMenu_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnFailure_374B66EC4085986CEE5E52B4E6840193
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MainMenu_C::OnFailure_374B66EC4085986CEE5E52B4E6840193(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnFailure_374B66EC4085986CEE5E52B4E6840193");

	UBP_MainMenu_C_OnFailure_374B66EC4085986CEE5E52B4E6840193_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnSuccess_374B66EC4085986CEE5E52B4E6840193
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MainMenu_C::OnSuccess_374B66EC4085986CEE5E52B4E6840193(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnSuccess_374B66EC4085986CEE5E52B4E6840193");

	UBP_MainMenu_C_OnSuccess_374B66EC4085986CEE5E52B4E6840193_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnFailure_B1DA11084BE01BCE48C8FBAB6D55A992
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::OnFailure_B1DA11084BE01BCE48C8FBAB6D55A992()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnFailure_B1DA11084BE01BCE48C8FBAB6D55A992");

	UBP_MainMenu_C_OnFailure_B1DA11084BE01BCE48C8FBAB6D55A992_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnSuccess_B1DA11084BE01BCE48C8FBAB6D55A992
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::OnSuccess_B1DA11084BE01BCE48C8FBAB6D55A992()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnSuccess_B1DA11084BE01BCE48C8FBAB6D55A992");

	UBP_MainMenu_C_OnSuccess_B1DA11084BE01BCE48C8FBAB6D55A992_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnFailure_D1B5C5904AD6F30CA08466876916931A
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::OnFailure_D1B5C5904AD6F30CA08466876916931A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnFailure_D1B5C5904AD6F30CA08466876916931A");

	UBP_MainMenu_C_OnFailure_D1B5C5904AD6F30CA08466876916931A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnSuccess_D1B5C5904AD6F30CA08466876916931A
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::OnSuccess_D1B5C5904AD6F30CA08466876916931A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnSuccess_D1B5C5904AD6F30CA08466876916931A");

	UBP_MainMenu_C_OnSuccess_D1B5C5904AD6F30CA08466876916931A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7");

	UBP_MainMenu_C_OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7");

	UBP_MainMenu_C_OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.OnShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ArmoryStates>    Armory_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenu_C::OnShow(TEnumAsByte<E_ArmoryStates> Armory_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnShow");

	UBP_MainMenu_C_OnShow_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MainMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Construct");

	UBP_MainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__QuickJoinButton_K2Node_ComponentBoundEvent_81_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__QuickJoinButton_K2Node_ComponentBoundEvent_81_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__QuickJoinButton_K2Node_ComponentBoundEvent_81_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__QuickJoinButton_K2Node_ComponentBoundEvent_81_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.QuickJoin
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::QuickJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.QuickJoin");

	UBP_MainMenu_C_QuickJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.QuitMatch
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::QuitMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.QuitMatch");

	UBP_MainMenu_C_QuitMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__LoadoutsButton_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__LoadoutsButton_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__LoadoutsButton_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__LoadoutsButton_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Tick");

	UBP_MainMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.GoToMatchMaking
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenu_C::GoToMatchMaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.GoToMatchMaking");

	UBP_MainMenu_C_GoToMatchMaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenu_C::BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenu_C::ExecuteUbergraph_BP_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu");

	UBP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
