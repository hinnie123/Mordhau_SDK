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

// Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Get_TextBlock_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_MatchmakingSearchWidget_C::Get_TextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Get_TextBlock_Text_1");

	UBP_MatchmakingSearchWidget_C_Get_TextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MatchmakingSearchWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Construct");

	UBP_MatchmakingSearchWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Activate
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingSearchWidget_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Activate");

	UBP_MatchmakingSearchWidget_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchmakingSearchWidget_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Deactivate");

	UBP_MatchmakingSearchWidget_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.ExecuteUbergraph_BP_MatchmakingSearchWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchmakingSearchWidget_C::ExecuteUbergraph_BP_MatchmakingSearchWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.ExecuteUbergraph_BP_MatchmakingSearchWidget");

	UBP_MatchmakingSearchWidget_C_ExecuteUbergraph_BP_MatchmakingSearchWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
