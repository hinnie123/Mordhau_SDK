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

// Function BP_VoteKickMenu.BP_VoteKickMenu_C.Get_TextBlock_3_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_VoteKickMenu_C::Get_TextBlock_3_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Get_TextBlock_3_Text_1");

	UBP_VoteKickMenu_C_Get_TextBlock_3_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VoteKickMenu.BP_VoteKickMenu_C.Get_TextBlock_0_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_VoteKickMenu_C::Get_TextBlock_0_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Get_TextBlock_0_Text_1");

	UBP_VoteKickMenu_C_Get_TextBlock_0_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VoteKickMenu.BP_VoteKickMenu_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VoteKickMenu_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Hide");

	UBP_VoteKickMenu_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoteKickMenu.BP_VoteKickMenu_C.Show
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_VoteKickMenu_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Show");

	UBP_VoteKickMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoteKickMenu.BP_VoteKickMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_VoteKickMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Construct");

	UBP_VoteKickMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoteKickMenu.BP_VoteKickMenu_C.ExecuteUbergraph_BP_VoteKickMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoteKickMenu_C::ExecuteUbergraph_BP_VoteKickMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.ExecuteUbergraph_BP_VoteKickMenu");

	UBP_VoteKickMenu_C_ExecuteUbergraph_BP_VoteKickMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
