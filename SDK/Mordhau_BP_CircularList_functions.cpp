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

// Function BP_CircularList.BP_CircularList_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CircularList_C::Initialize(int StartValue, int MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.Initialize");

	UBP_CircularList_C_Initialize_Params params;
	params.StartValue = StartValue;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircularList.BP_CircularList_C.BndEvt__Next_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CircularList_C::BndEvt__Next_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.BndEvt__Next_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature");

	UBP_CircularList_C_BndEvt__Next_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircularList.BP_CircularList_C.BndEvt__Prev_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CircularList_C::BndEvt__Prev_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.BndEvt__Prev_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature");

	UBP_CircularList_C_BndEvt__Prev_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircularList.BP_CircularList_C.ExecuteUbergraph_BP_CircularList
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CircularList_C::ExecuteUbergraph_BP_CircularList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.ExecuteUbergraph_BP_CircularList");

	UBP_CircularList_C_ExecuteUbergraph_BP_CircularList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircularList.BP_CircularList_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CircularList_C::OnValueChanged__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.OnValueChanged__DelegateSignature");

	UBP_CircularList_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
