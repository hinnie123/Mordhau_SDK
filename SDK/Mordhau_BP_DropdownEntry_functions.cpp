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

// Function BP_DropdownEntry.BP_DropdownEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DropdownEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownEntry.BP_DropdownEntry_C.Construct");

	UBP_DropdownEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.BndEvt__dropdownEntry_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_DropdownEntry_C::BndEvt__dropdownEntry_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownEntry.BP_DropdownEntry_C.BndEvt__dropdownEntry_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UBP_DropdownEntry_C_BndEvt__dropdownEntry_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropdownEntry_C::BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownEntry.BP_DropdownEntry_C.BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature");

	UBP_DropdownEntry_C_BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.ExecuteUbergraph_BP_DropdownEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropdownEntry_C::ExecuteUbergraph_BP_DropdownEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownEntry.BP_DropdownEntry_C.ExecuteUbergraph_BP_DropdownEntry");

	UBP_DropdownEntry_C_ExecuteUbergraph_BP_DropdownEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DropdownEntry_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownEntry.BP_DropdownEntry_C.OnHovered__DelegateSignature");

	UBP_DropdownEntry_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropdownEntry_C::OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropdownEntry.BP_DropdownEntry_C.OnSelectionChanged__DelegateSignature");

	UBP_DropdownEntry_C_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
