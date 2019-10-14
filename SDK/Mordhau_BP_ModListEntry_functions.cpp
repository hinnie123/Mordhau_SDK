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

// Function BP_ModListEntry.BP_ModListEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ModListEntry_C::BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModListEntry.BP_ModListEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UBP_ModListEntry_C_BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModListEntry.BP_ModListEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ModListEntry_C::BndEvt__sliderEntry_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModListEntry.BP_ModListEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UBP_ModListEntry_C_BndEvt__sliderEntry_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModListEntry.BP_ModListEntry_C.ExecuteUbergraph_BP_ModListEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ModListEntry_C::ExecuteUbergraph_BP_ModListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModListEntry.BP_ModListEntry_C.ExecuteUbergraph_BP_ModListEntry");

	UBP_ModListEntry_C_ExecuteUbergraph_BP_ModListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModListEntry.BP_ModListEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ModListEntry_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModListEntry.BP_ModListEntry_C.OnClicked__DelegateSignature");

	UBP_ModListEntry_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModListEntry.BP_ModListEntry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ModListEntry_C*      Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_ModListEntry_C::OnHovered__DelegateSignature(class UBP_ModListEntry_C* Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModListEntry.BP_ModListEntry_C.OnHovered__DelegateSignature");

	UBP_ModListEntry_C_OnHovered__DelegateSignature_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModListEntry.BP_ModListEntry_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ModListEntry_C::OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModListEntry.BP_ModListEntry_C.OnValueChanged__DelegateSignature");

	UBP_ModListEntry_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
