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

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankMMRText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_PlayerMenu_C::Get_CurrentRankMMRText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankMMRText_Text_1");

	UBP_PlayerMenu_C_Get_CurrentRankMMRText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankText_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_PlayerMenu_C::Get_CurrentRankText_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankText_ColorAndOpacity_1");

	UBP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_PlayerMenu_C::Get_CurrentRankText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankText_Text_1");

	UBP_PlayerMenu_C_Get_CurrentRankText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerMenu_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.Update");

	UBP_PlayerMenu_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PlayerMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.Construct");

	UBP_PlayerMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.BndEvt__ChangeBannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerMenu_C::BndEvt__ChangeBannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.BndEvt__ChangeBannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_PlayerMenu_C_BndEvt__ChangeBannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.OnHideAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerMenu_C::OnHideAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.OnHideAnimFinish");

	UBP_PlayerMenu_C_OnHideAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.OnItemsRefreshed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemStack>      ItemStacks                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_PlayerMenu_C::OnItemsRefreshed(bool bWasSuccessful, TArray<struct FItemStack> ItemStacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.OnItemsRefreshed");

	UBP_PlayerMenu_C_OnItemsRefreshed_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ItemStacks = ItemStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.CloseBannerMenu
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerMenu_C::CloseBannerMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.CloseBannerMenu");

	UBP_PlayerMenu_C_CloseBannerMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.OnShown");

	UBP_PlayerMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerMenu.BP_PlayerMenu_C.ExecuteUbergraph_BP_PlayerMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerMenu_C::ExecuteUbergraph_BP_PlayerMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerMenu.BP_PlayerMenu_C.ExecuteUbergraph_BP_PlayerMenu");

	UBP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
