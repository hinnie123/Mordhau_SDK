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

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InteractWidgetFloater_C::UpdateProgress(float NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.UpdateProgress");

	UBP_InteractWidgetFloater_C_UpdateProgress_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_InteractWidgetFloater_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Construct");

	UBP_InteractWidgetFloater_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InteractWidgetFloater_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Tick");

	UBP_InteractWidgetFloater_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.ExecuteUbergraph_BP_InteractWidgetFloater
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InteractWidgetFloater_C::ExecuteUbergraph_BP_InteractWidgetFloater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.ExecuteUbergraph_BP_InteractWidgetFloater");

	UBP_InteractWidgetFloater_C_ExecuteUbergraph_BP_InteractWidgetFloater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
