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

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SetWidgetBinding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_KeyBindingElementWidget_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsPrimary                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyBindingsSettings_C::SetWidgetBinding(class UBP_KeyBindingElementWidget_C* Widget, const struct FKey& Key, bool bIsPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SetWidgetBinding");

	UBP_KeyBindingsSettings_C_SetWidgetBinding_Params params;
	params.Widget = Widget;
	params.Key = Key;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindDuplicateBindingWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsPrimary                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_KeyBindingElementWidget_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_KeyBindingsSettings_C::FindDuplicateBindingWidget(const struct FKey& Key, bool bIsPrimary, class UBP_KeyBindingElementWidget_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindDuplicateBindingWidget");

	UBP_KeyBindingsSettings_C_FindDuplicateBindingWidget_Params params;
	params.Key = Key;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SelectWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_KeyBindingElementWidget_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_KeyBindingsSettings_C::SelectWidget(class UBP_KeyBindingElementWidget_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SelectWidget");

	UBP_KeyBindingsSettings_C_SelectWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_KeyBindingsSettings_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseWheel");

	UBP_KeyBindingsSettings_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_KeyBindingsSettings_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewMouseButtonDown");

	UBP_KeyBindingsSettings_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_KeyBindingsSettings_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseMove");

	UBP_KeyBindingsSettings_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindWidgetByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_KeyBindingElementWidget_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_KeyBindingsSettings_C::FindWidgetByName(const struct FName& ActionName, class UBP_KeyBindingElementWidget_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindWidgetByName");

	UBP_KeyBindingsSettings_C_FindWidgetByName_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.PopulateCustomBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SourceScheme                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyBindingsSettings_C::PopulateCustomBindings(int SourceScheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.PopulateCustomBindings");

	UBP_KeyBindingsSettings_C_PopulateCustomBindings_Params params;
	params.SourceScheme = SourceScheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.HandleInputEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsAxis                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             _Handled                       (Parm, OutParm)

void UBP_KeyBindingsSettings_C::HandleInputEvent(const struct FKey& Key, bool bIsAxis, struct FEventReply* _Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.HandleInputEvent");

	UBP_KeyBindingsSettings_C_HandleInputEvent_Params params;
	params.Key = Key;
	params.bIsAxis = bIsAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_Handled != nullptr)
		*_Handled = params._Handled;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_KeyBindingsSettings_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnAnalogValueChanged");

	UBP_KeyBindingsSettings_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_KeyBindingsSettings_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewKeyDown");

	UBP_KeyBindingsSettings_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_KeyBindingsSettings_C::BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_KeyBindingsSettings_C_BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_KeyBindingsSettings_C::BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBP_KeyBindingsSettings_C_BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_KeyBindingsSettings_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_KeyBindingsSettings_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_KeyBindingsSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.Construct");

	UBP_KeyBindingsSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnYesClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_KeyBindingsSettings_C::OnYesClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnYesClicked");

	UBP_KeyBindingsSettings_C_OnYesClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnNoClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_KeyBindingsSettings_C::OnNoClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnNoClicked");

	UBP_KeyBindingsSettings_C_OnNoClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ApplyKeyBindings
// (BlueprintCallable, BlueprintEvent)

void UBP_KeyBindingsSettings_C::ApplyKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ApplyKeyBindings");

	UBP_KeyBindingsSettings_C_ApplyKeyBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ExecuteUbergraph_BP_KeyBindingsSettings
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyBindingsSettings_C::ExecuteUbergraph_BP_KeyBindingsSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ExecuteUbergraph_BP_KeyBindingsSettings");

	UBP_KeyBindingsSettings_C_ExecuteUbergraph_BP_KeyBindingsSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
