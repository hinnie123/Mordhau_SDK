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

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetFillColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBP_CapPointInfoPanelWidget_C::GetFillColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetFillColorAndOpacity_1");

	UBP_CapPointInfoPanelWidget_C_GetFillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_CapPointInfoPanelWidget_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetPercent_1");

	UBP_CapPointInfoPanelWidget_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_Icon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UBP_CapPointInfoPanelWidget_C::Get_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_Icon_Brush_1");

	UBP_CapPointInfoPanelWidget_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_CapPointState_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_CapPointInfoPanelWidget_C::Get_CapPointState_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_CapPointState_Text_1");

	UBP_CapPointInfoPanelWidget_C_Get_CapPointState_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CapPointInfoPanelWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Tick");

	UBP_CapPointInfoPanelWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      Capture_Point_Ref              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CapPointInfoPanelWidget_C::Show(class ABP_CapturePoint_C* Capture_Point_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Show");

	UBP_CapPointInfoPanelWidget_C_Show_Params params;
	params.Capture_Point_Ref = Capture_Point_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_CapPointInfoPanelWidget_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Hide");

	UBP_CapPointInfoPanelWidget_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.ExecuteUbergraph_BP_CapPointInfoPanelWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CapPointInfoPanelWidget_C::ExecuteUbergraph_BP_CapPointInfoPanelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.ExecuteUbergraph_BP_CapPointInfoPanelWidget");

	UBP_CapPointInfoPanelWidget_C_ExecuteUbergraph_BP_CapPointInfoPanelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
