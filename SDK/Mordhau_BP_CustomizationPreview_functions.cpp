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

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnhideMouse
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::UnhideMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnhideMouse");

	UBP_CustomizationPreview_C_UnhideMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.HideMouse
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::HideMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.HideMouse");

	UBP_CustomizationPreview_C_HideMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_CustomizationPreview_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyDown");

	UBP_CustomizationPreview_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_CustomizationPreview_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonUp");

	UBP_CustomizationPreview_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_CustomizationPreview_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonDown");

	UBP_CustomizationPreview_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnbindEvents");

	UBP_CustomizationPreview_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_CustomizationPreview_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheel");

	UBP_CustomizationPreview_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_CustomizationPreview_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseMove");

	UBP_CustomizationPreview_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CustomizationPreview_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseLeave");

	UBP_CustomizationPreview_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CustomizationPreview_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseEnter");

	UBP_CustomizationPreview_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationPreview_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.Tick");

	UBP_CustomizationPreview_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.ExecuteUbergraph_BP_CustomizationPreview
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationPreview_C::ExecuteUbergraph_BP_CustomizationPreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.ExecuteUbergraph_BP_CustomizationPreview");

	UBP_CustomizationPreview_C_ExecuteUbergraph_BP_CustomizationPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_CustomizationPreview_C::OnKeyPressed__DelegateSignature(const struct FKey& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyPressed__DelegateSignature");

	UBP_CustomizationPreview_C_OnKeyPressed__DelegateSignature_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::OnMMBReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBReleased__DelegateSignature");

	UBP_CustomizationPreview_C_OnMMBReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::OnMMBPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBPressed__DelegateSignature");

	UBP_CustomizationPreview_C_OnMMBPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::OnRMBReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBReleased__DelegateSignature");

	UBP_CustomizationPreview_C_OnRMBReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::OnRMBPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBPressed__DelegateSignature");

	UBP_CustomizationPreview_C_OnRMBPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::OnLMBReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBReleased__DelegateSignature");

	UBP_CustomizationPreview_C_OnLMBReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationPreview_C::OnLMBPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBPressed__DelegateSignature");

	UBP_CustomizationPreview_C_OnLMBPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseAxis__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Movement                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_CustomizationPreview_C::OnMouseAxis__DelegateSignature(const struct FVector2D& Movement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseAxis__DelegateSignature");

	UBP_CustomizationPreview_C_OnMouseAxis__DelegateSignature_Params params;
	params.Movement = Movement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheelScrolling__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScrollDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationPreview_C::OnMouseWheelScrolling__DelegateSignature(float ScrollDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheelScrolling__DelegateSignature");

	UBP_CustomizationPreview_C_OnMouseWheelScrolling__DelegateSignature_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnDrag__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationPreview_C::OnDrag__DelegateSignature(float DeltaDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnDrag__DelegateSignature");

	UBP_CustomizationPreview_C_OnDrag__DelegateSignature_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
