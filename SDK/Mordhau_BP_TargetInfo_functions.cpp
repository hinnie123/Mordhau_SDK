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

// Function BP_TargetInfo.BP_TargetInfo_C.Get_TextBlock_0_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_TargetInfo_C::Get_TextBlock_0_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.Get_TextBlock_0_Text_1");

	UBP_TargetInfo_C_Get_TextBlock_0_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TargetInfo.BP_TargetInfo_C.Get_TextBlock_0_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_TargetInfo_C::Get_TextBlock_0_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.Get_TextBlock_0_Visibility_1");

	UBP_TargetInfo_C_Get_TextBlock_0_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TargetInfo.BP_TargetInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_TargetInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.GetVisibility_1");

	UBP_TargetInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TargetInfo.BP_TargetInfo_C.GetPlayerStateFromTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMordhauPlayerState*     State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TargetInfo_C::GetPlayerStateFromTarget(class AActor* Target, class AMordhauPlayerState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.GetPlayerStateFromTarget");

	UBP_TargetInfo_C_GetPlayerStateFromTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function BP_TargetInfo.BP_TargetInfo_C.Get_HeadText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_TargetInfo_C::Get_HeadText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.Get_HeadText_Text_1");

	UBP_TargetInfo_C_Get_HeadText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TargetInfo.BP_TargetInfo_C.Get_TargetNameText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_TargetInfo_C::Get_TargetNameText_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.Get_TargetNameText_Visibility_1");

	UBP_TargetInfo_C_Get_TargetNameText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TargetInfo.BP_TargetInfo_C.Get_HeadText_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_TargetInfo_C::Get_HeadText_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.Get_HeadText_Visibility");

	UBP_TargetInfo_C_Get_HeadText_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TargetInfo.BP_TargetInfo_C.CheckForTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TargetInfo_C::CheckForTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.CheckForTarget");

	UBP_TargetInfo_C_CheckForTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TargetInfo.BP_TargetInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_TargetInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.Construct");

	UBP_TargetInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TargetInfo.BP_TargetInfo_C.ExecuteUbergraph_BP_TargetInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TargetInfo_C::ExecuteUbergraph_BP_TargetInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetInfo.BP_TargetInfo_C.ExecuteUbergraph_BP_TargetInfo");

	UBP_TargetInfo_C_ExecuteUbergraph_BP_TargetInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
