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

// Function BP_TrainingMenu.BP_TrainingMenu_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_TrainingMenu_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.GetVisibility_1");

	UBP_TrainingMenu_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingMenu.BP_TrainingMenu_C.TutorialPopupConfirm
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingMenu_C::TutorialPopupConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.TutorialPopupConfirm");

	UBP_TrainingMenu_C_TutorialPopupConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingMenu.BP_TrainingMenu_C.TutorialPopupCancel
// (BlueprintCallable, BlueprintEvent)

void UBP_TrainingMenu_C::TutorialPopupCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.TutorialPopupCancel");

	UBP_TrainingMenu_C_TutorialPopupCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingMenu.BP_TrainingMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_TrainingMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_TrainingMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingMenu.BP_TrainingMenu_C.ExecuteUbergraph_BP_TrainingMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TrainingMenu_C::ExecuteUbergraph_BP_TrainingMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.ExecuteUbergraph_BP_TrainingMenu");

	UBP_TrainingMenu_C_ExecuteUbergraph_BP_TrainingMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
