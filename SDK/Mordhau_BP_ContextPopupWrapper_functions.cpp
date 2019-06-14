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

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ContextPopupWrapper_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.GetVisibility_1");

	UBP_ContextPopupWrapper_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.OnGetMenuContent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBP_ContextPopupWrapper_C::OnGetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.OnGetMenuContent_1");

	UBP_ContextPopupWrapper_C_OnGetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Close Menu
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ContextPopupWrapper_C::Close_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Close Menu");

	UBP_ContextPopupWrapper_C_Close_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Open Menu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ContextPopupWrapper_C::Open_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Open Menu");

	UBP_ContextPopupWrapper_C_Open_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Construct Context Menu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FString, struct FText> Option_Map                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBP_ContextPopupWrapper_C* Wrapper                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_ContextPopupWrapper_C::Construct_Context_Menu(TMap<struct FString, struct FText> Option_Map, class UBP_ContextPopupWrapper_C** Wrapper)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Construct Context Menu");

	UBP_ContextPopupWrapper_C_Construct_Context_Menu_Params params;
	params.Option_Map = Option_Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wrapper != nullptr)
		*Wrapper = params.Wrapper;
}


// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ContextPopupWrapper_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_ContextPopupWrapper_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ExecuteUbergraph_BP_ContextPopupWrapper
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ContextPopupWrapper_C::ExecuteUbergraph_BP_ContextPopupWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ExecuteUbergraph_BP_ContextPopupWrapper");

	UBP_ContextPopupWrapper_C_ExecuteUbergraph_BP_ContextPopupWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ContextButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ContextPopupWrapper_C::ContextButtonClicked__DelegateSignature(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ContextButtonClicked__DelegateSignature");

	UBP_ContextPopupWrapper_C_ContextButtonClicked__DelegateSignature_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
