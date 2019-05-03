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

// Function BP_DemoUI.BP_DemoUI_C.GetText_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_DemoUI_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.GetText_2");

	UBP_DemoUI_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DemoUI.BP_DemoUI_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_DemoUI_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.GetText_1");

	UBP_DemoUI_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DemoUI.BP_DemoUI_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_DemoUI_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.OnKeyDown");

	UBP_DemoUI_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DemoUI.BP_DemoUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DemoUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.Construct");

	UBP_DemoUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoUI.BP_DemoUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DemoUI_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.Tick");

	UBP_DemoUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoUI.BP_DemoUI_C.BndEvt__Slider_33_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UBP_DemoUI_C::BndEvt__Slider_33_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.BndEvt__Slider_33_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature");

	UBP_DemoUI_C_BndEvt__Slider_33_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoUI.BP_DemoUI_C.BndEvt__Slider_33_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UBP_DemoUI_C::BndEvt__Slider_33_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.BndEvt__Slider_33_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature");

	UBP_DemoUI_C_BndEvt__Slider_33_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoUI.BP_DemoUI_C.BndEvt__LessSpeed_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_DemoUI_C::BndEvt__LessSpeed_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.BndEvt__LessSpeed_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_DemoUI_C_BndEvt__LessSpeed_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoUI.BP_DemoUI_C.BndEvt__MoreSpeed_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_DemoUI_C::BndEvt__MoreSpeed_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.BndEvt__MoreSpeed_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBP_DemoUI_C_BndEvt__MoreSpeed_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoUI.BP_DemoUI_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_DemoUI_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBP_DemoUI_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoUI.BP_DemoUI_C.ExecuteUbergraph_BP_DemoUI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DemoUI_C::ExecuteUbergraph_BP_DemoUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoUI.BP_DemoUI_C.ExecuteUbergraph_BP_DemoUI");

	UBP_DemoUI_C_ExecuteUbergraph_BP_DemoUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
