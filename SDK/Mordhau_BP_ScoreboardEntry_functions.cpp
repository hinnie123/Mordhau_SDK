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

// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.UpdateValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     Mordhau_PlayerState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardEntry_C::UpdateValues(class AMordhauPlayerState* Mordhau_PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.UpdateValues");

	UBP_ScoreboardEntry_C_UpdateValues_Params params;
	params.Mordhau_PlayerState = Mordhau_PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.WasUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardEntry_C::WasUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.WasUpdated");

	UBP_ScoreboardEntry_C_WasUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ScoreboardEntry_C::GetVisibility_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_3");

	UBP_ScoreboardEntry_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ScoreboardEntry_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_2");

	UBP_ScoreboardEntry_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ScoreboardEntry_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetVisibility_1");

	UBP_ScoreboardEntry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_ScoreboardEntry_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetColorAndOpacity_1");

	UBP_ScoreboardEntry_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.Get_Prefix_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ScoreboardEntry_C::Get_Prefix_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.Get_Prefix_Text_1");

	UBP_ScoreboardEntry_C_Get_Prefix_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetNameColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_ScoreboardEntry_C::GetNameColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetNameColorAndOpacity");

	UBP_ScoreboardEntry_C_GetNameColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetBackgroundColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBP_ScoreboardEntry_C::GetBackgroundColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.GetBackgroundColorAndOpacity");

	UBP_ScoreboardEntry_C_GetBackgroundColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ScoreboardEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.Construct");

	UBP_ScoreboardEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.ExecuteUbergraph_BP_ScoreboardEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardEntry_C::ExecuteUbergraph_BP_ScoreboardEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntry.BP_ScoreboardEntry_C.ExecuteUbergraph_BP_ScoreboardEntry");

	UBP_ScoreboardEntry_C_ExecuteUbergraph_BP_ScoreboardEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
