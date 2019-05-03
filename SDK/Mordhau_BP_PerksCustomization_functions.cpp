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

// Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerksCustomization_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateWidget");

	UBP_PerksCustomization_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.RegisterPreviewEvents
// (BlueprintCallable, BlueprintEvent)

void UBP_PerksCustomization_C::RegisterPreviewEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.RegisterPreviewEvents");

	UBP_PerksCustomization_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.OnDrag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PerksCustomization_C::OnDrag(float DeltaDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.OnDrag");

	UBP_PerksCustomization_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.OnScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScrollDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PerksCustomization_C::OnScroll(float ScrollDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.OnScroll");

	UBP_PerksCustomization_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateProfileAndPreview
// (BlueprintCallable, BlueprintEvent)

void UBP_PerksCustomization_C::UpdateProfileAndPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateProfileAndPreview");

	UBP_PerksCustomization_C_UpdateProfileAndPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PerksCustomization_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.Construct");

	UBP_PerksCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.PerkClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PerksCustomization_C::PerkClicked(unsigned char NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.PerkClicked");

	UBP_PerksCustomization_C_PerkClicked_Params params;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerksCustomization_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.SetActive");

	UBP_PerksCustomization_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.OnProfileChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerksCustomization_C::OnProfileChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.OnProfileChanged");

	UBP_PerksCustomization_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.PerkHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Cost                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PerksCustomization_C::PerkHovered(int Cost, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.PerkHovered");

	UBP_PerksCustomization_C_PerkHovered_Params params;
	params.Cost = Cost;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PerksCustomization.BP_PerksCustomization_C.ExecuteUbergraph_BP_PerksCustomization
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PerksCustomization_C::ExecuteUbergraph_BP_PerksCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.ExecuteUbergraph_BP_PerksCustomization");

	UBP_PerksCustomization_C_ExecuteUbergraph_BP_PerksCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
