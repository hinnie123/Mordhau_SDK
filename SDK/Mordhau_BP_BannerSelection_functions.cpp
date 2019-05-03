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

// Function BP_BannerSelection.BP_BannerSelection_C.UpdatePreviewWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Banner_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BannerSelection_C::UpdatePreviewWidget(int Banner_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.UpdatePreviewWidget");

	UBP_BannerSelection_C_UpdatePreviewWidget_Params params;
	params.Banner_ID = Banner_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerSelection.BP_BannerSelection_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BannerSelection_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.Clear");

	UBP_BannerSelection_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerSelection.BP_BannerSelection_C.Populate Grid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BannerSelection_C::Populate_Grid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.Populate Grid");

	UBP_BannerSelection_C_Populate_Grid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerSelection.BP_BannerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_BannerSelection_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_BannerSelection_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerSelection.BP_BannerSelection_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)

void UBP_BannerSelection_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.CloseMenu");

	UBP_BannerSelection_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerSelection.BP_BannerSelection_C.Update
// (BlueprintCallable, BlueprintEvent)

void UBP_BannerSelection_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.Update");

	UBP_BannerSelection_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerSelection.BP_BannerSelection_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BannerSelection_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.Tick");

	UBP_BannerSelection_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerSelection.BP_BannerSelection_C.ExecuteUbergraph_BP_BannerSelection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BannerSelection_C::ExecuteUbergraph_BP_BannerSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.ExecuteUbergraph_BP_BannerSelection");

	UBP_BannerSelection_C_ExecuteUbergraph_BP_BannerSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
