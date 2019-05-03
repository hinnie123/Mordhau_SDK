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

// Function BP_CasualRankUp.BP_CasualRankUp_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CasualRankUp_C::Update(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.Update");

	UBP_CasualRankUp_C_Update_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CasualRankUp.BP_CasualRankUp_C.Get_RankText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_CasualRankUp_C::Get_RankText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.Get_RankText_Text_1");

	UBP_CasualRankUp_C_Get_RankText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CasualRankUp.BP_CasualRankUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CasualRankUp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.Construct");

	UBP_CasualRankUp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CasualRankUp.BP_CasualRankUp_C.Exit
// (BlueprintCallable, BlueprintEvent)

void UBP_CasualRankUp_C::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.Exit");

	UBP_CasualRankUp_C_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CasualRankUp.BP_CasualRankUp_C.ExecuteUbergraph_BP_CasualRankUp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CasualRankUp_C::ExecuteUbergraph_BP_CasualRankUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.ExecuteUbergraph_BP_CasualRankUp");

	UBP_CasualRankUp_C_ExecuteUbergraph_BP_CasualRankUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
