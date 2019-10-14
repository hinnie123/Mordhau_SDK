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

// Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateFromSuppliedXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SuppliedXP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CasualRankWidget_C::UpdateFromSuppliedXP(int SuppliedXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateFromSuppliedXP");

	UBP_CasualRankWidget_C_UpdateFromSuppliedXP_Params params;
	params.SuppliedXP = SuppliedXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CasualRankWidget.BP_CasualRankWidget_C.GetToolTipText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_CasualRankWidget_C::GetToolTipText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.GetToolTipText_1");

	UBP_CasualRankWidget_C_GetToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateRankProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CasualRankWidget_C::UpdateRankProgress(int XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateRankProgress");

	UBP_CasualRankWidget_C_UpdateRankProgress_Params params;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_RemainingXPText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_CasualRankWidget_C::Get_RemainingXPText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_RemainingXPText_Text_1");

	UBP_CasualRankWidget_C_Get_RemainingXPText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_XPProgressBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_CasualRankWidget_C::Get_XPProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_XPProgressBar_Percent_1");

	UBP_CasualRankWidget_C_Get_XPProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CasualRankWidget.BP_CasualRankWidget_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CasualRankWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.Update");

	UBP_CasualRankWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
