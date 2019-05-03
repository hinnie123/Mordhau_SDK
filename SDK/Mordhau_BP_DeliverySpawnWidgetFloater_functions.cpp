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

// Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_DeliverySpawnWidgetFloater_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.GetVisibility_1");

	UBP_DeliverySpawnWidgetFloater_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DeliverySpawnWidgetFloater_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.Tick");

	UBP_DeliverySpawnWidgetFloater_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.ExecuteUbergraph_BP_DeliverySpawnWidgetFloater
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DeliverySpawnWidgetFloater_C::ExecuteUbergraph_BP_DeliverySpawnWidgetFloater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.ExecuteUbergraph_BP_DeliverySpawnWidgetFloater");

	UBP_DeliverySpawnWidgetFloater_C_ExecuteUbergraph_BP_DeliverySpawnWidgetFloater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
