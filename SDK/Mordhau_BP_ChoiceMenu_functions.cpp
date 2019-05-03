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

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.Choose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChoiceMenu_C::Choose(int Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.Choose");

	UBP_ChoiceMenu_C_Choose_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceMenu.BP_ChoiceMenu_C.UpdateCurrentPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ChoiceMenu_C::UpdateCurrentPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.UpdateCurrentPage");

	UBP_ChoiceMenu_C_UpdateCurrentPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceMenu.BP_ChoiceMenu_C.OptionChosen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChoiceMenu_C::OptionChosen(int Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.OptionChosen");

	UBP_ChoiceMenu_C_OptionChosen_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceMenu.BP_ChoiceMenu_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ChoiceMenu_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.Hide");

	UBP_ChoiceMenu_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceMenu.BP_ChoiceMenu_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ChoiceMenu_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.Show");

	UBP_ChoiceMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceMenu.BP_ChoiceMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ChoiceMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.Construct");

	UBP_ChoiceMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChoiceMenu.BP_ChoiceMenu_C.ExecuteUbergraph_BP_ChoiceMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChoiceMenu_C::ExecuteUbergraph_BP_ChoiceMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.ExecuteUbergraph_BP_ChoiceMenu");

	UBP_ChoiceMenu_C_ExecuteUbergraph_BP_ChoiceMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
