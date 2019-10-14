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

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.SetProgressBarStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DeliverySpotWidgetFloater_C::SetProgressBarStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.SetProgressBarStyle");

	UBP_DeliverySpotWidgetFloater_C_SetProgressBarStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DeliverySpotWidgetFloater_C::UpdateProgress(float NewProgress, bool Animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.UpdateProgress");

	UBP_DeliverySpotWidgetFloater_C_UpdateProgress_Params params;
	params.NewProgress = NewProgress;
	params.Animate = Animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DeliverySpotWidgetFloater_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.Tick");

	UBP_DeliverySpotWidgetFloater_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DeliverySpotWidgetFloater_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.Construct");

	UBP_DeliverySpotWidgetFloater_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.ExecuteUbergraph_BP_DeliverySpotWidgetFloater
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DeliverySpotWidgetFloater_C::ExecuteUbergraph_BP_DeliverySpotWidgetFloater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.ExecuteUbergraph_BP_DeliverySpotWidgetFloater");

	UBP_DeliverySpotWidgetFloater_C_ExecuteUbergraph_BP_DeliverySpotWidgetFloater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
