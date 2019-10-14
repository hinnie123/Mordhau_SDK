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

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Get_timer_Text_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_PushHUDWidget_C::Get_timer_Text_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushHUDWidget.BP_PushHUDWidget_C.Get_timer_Text_Visibility_1");

	UBP_PushHUDWidget_C_Get_timer_Text_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Get_timer_Text_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_PushHUDWidget_C::Get_timer_Text_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushHUDWidget.BP_PushHUDWidget_C.Get_timer_Text_Text_1");

	UBP_PushHUDWidget_C_Get_timer_Text_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PushHUDWidget.BP_PushHUDWidget_C.InitializeCapPointGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCapturePointGroup      Group                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PushHUDWidget_C::InitializeCapPointGroup(const struct FCapturePointGroup& Group, int Index, int Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushHUDWidget.BP_PushHUDWidget_C.InitializeCapPointGroup");

	UBP_PushHUDWidget_C_InitializeCapPointGroup_Params params;
	params.Group = Group;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushHUDWidget.BP_PushHUDWidget_C.GetLeftTeamColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBP_PushHUDWidget_C::GetLeftTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushHUDWidget.BP_PushHUDWidget_C.GetLeftTeamColor");

	UBP_PushHUDWidget_C_GetLeftTeamColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PushHUDWidget.BP_PushHUDWidget_C.GetRightTeamColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBP_PushHUDWidget_C::GetRightTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushHUDWidget.BP_PushHUDWidget_C.GetRightTeamColor");

	UBP_PushHUDWidget_C_GetRightTeamColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PushHUDWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushHUDWidget.BP_PushHUDWidget_C.Tick");

	UBP_PushHUDWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushHUDWidget.BP_PushHUDWidget_C.AddTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time_to_add__seconds_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PushHUDWidget_C::AddTime(float Time_to_add__seconds_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushHUDWidget.BP_PushHUDWidget_C.AddTime");

	UBP_PushHUDWidget_C_AddTime_Params params;
	params.Time_to_add__seconds_ = Time_to_add__seconds_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushHUDWidget.BP_PushHUDWidget_C.ExecuteUbergraph_BP_PushHUDWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PushHUDWidget_C::ExecuteUbergraph_BP_PushHUDWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushHUDWidget.BP_PushHUDWidget_C.ExecuteUbergraph_BP_PushHUDWidget");

	UBP_PushHUDWidget_C_ExecuteUbergraph_BP_PushHUDWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
