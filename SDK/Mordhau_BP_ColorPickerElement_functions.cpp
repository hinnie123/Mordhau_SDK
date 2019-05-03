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

// Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_Lock_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ColorPickerElement_C::Get_Lock_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_Lock_Visibility_1");

	UBP_ColorPickerElement_C_Get_Lock_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_ImageButton_ToolTipText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ColorPickerElement_C::Get_ImageButton_ToolTipText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_ImageButton_ToolTipText_1");

	UBP_ColorPickerElement_C_Get_ImageButton_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.IsSelectedElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPickerElement_C::IsSelectedElement(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.IsSelectedElement");

	UBP_ColorPickerElement_C_IsSelectedElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPickerElement_C::SetData(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetData");

	UBP_ColorPickerElement_C_SetData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_ColorPickerElement_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetColor");

	UBP_ColorPickerElement_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ColorPickerElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.Construct");

	UBP_ColorPickerElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ColorPickerElement_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseEnter");

	UBP_ColorPickerElement_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ColorPickerElement_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseLeave");

	UBP_ColorPickerElement_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ColorPickerElement_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature");

	UBP_ColorPickerElement_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ColorPickerElement_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature");

	UBP_ColorPickerElement_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ColorPickerElement.BP_ColorPickerElement_C.ExecuteUbergraph_BP_ColorPickerElement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ColorPickerElement_C::ExecuteUbergraph_BP_ColorPickerElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.ExecuteUbergraph_BP_ColorPickerElement");

	UBP_ColorPickerElement_C_ExecuteUbergraph_BP_ColorPickerElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
