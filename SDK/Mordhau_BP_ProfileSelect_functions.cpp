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

// Function BP_ProfileSelect.BP_ProfileSelect_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_ProfileSelect_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.OnKeyDown");

	UBP_ProfileSelect_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ProfileSelect.BP_ProfileSelect_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ProfileSelect_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.Hide");

	UBP_ProfileSelect_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfileSelect.BP_ProfileSelect_C.Get_ConfirmButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_ProfileSelect_C::Get_ConfirmButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.Get_ConfirmButton_bIsEnabled_1");

	UBP_ProfileSelect_C_Get_ConfirmButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ProfileSelect.BP_ProfileSelect_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ProfileSelect_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.Show");

	UBP_ProfileSelect_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfileSelect.BP_ProfileSelect_C.PopulateCharacterProfiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ProfileSelect_C::PopulateCharacterProfiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.PopulateCharacterProfiles");

	UBP_ProfileSelect_C_PopulateCharacterProfiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfileSelect.BP_ProfileSelect_C.ProfileButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProfileId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ProfileSelect_C::ProfileButtonClicked(int ProfileId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.ProfileButtonClicked");

	UBP_ProfileSelect_C_ProfileButtonClicked_Params params;
	params.ProfileId = ProfileId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfileSelect.BP_ProfileSelect_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ProfileSelect_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileSelect_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfileSelect.BP_ProfileSelect_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ProfileSelect_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileSelect_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProfileSelect.BP_ProfileSelect_C.ExecuteUbergraph_BP_ProfileSelect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ProfileSelect_C::ExecuteUbergraph_BP_ProfileSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProfileSelect.BP_ProfileSelect_C.ExecuteUbergraph_BP_ProfileSelect");

	UBP_ProfileSelect_C_ExecuteUbergraph_BP_ProfileSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
