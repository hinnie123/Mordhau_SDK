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

// Function BP_PostMatchScreen.BP_PostMatchScreen_C.Get_TextBlock_0_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_PostMatchScreen_C::Get_TextBlock_0_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.Get_TextBlock_0_Text_1");

	UBP_PostMatchScreen_C_Get_TextBlock_0_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_PostMatchScreen_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.OnKeyDown");

	UBP_PostMatchScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_PostMatchScreen_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.GetText_1");

	UBP_PostMatchScreen_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.UpdateVotes
// (BlueprintCallable, BlueprintEvent)

void UBP_PostMatchScreen_C::UpdateVotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.UpdateVotes");

	UBP_PostMatchScreen_C_UpdateVotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.Show
// (BlueprintCallable, BlueprintEvent)

void UBP_PostMatchScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.Show");

	UBP_PostMatchScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PostMatchScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.Construct");

	UBP_PostMatchScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchScreen.BP_PostMatchScreen_C.ExecuteUbergraph_BP_PostMatchScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatchScreen_C::ExecuteUbergraph_BP_PostMatchScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.ExecuteUbergraph_BP_PostMatchScreen");

	UBP_PostMatchScreen_C_ExecuteUbergraph_BP_PostMatchScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
