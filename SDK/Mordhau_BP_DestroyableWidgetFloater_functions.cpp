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

// Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DestroyableWidgetFloater_C::UpdateHealth(float NewHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.UpdateHealth");

	UBP_DestroyableWidgetFloater_C_UpdateHealth_Params params;
	params.NewHealth = NewHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DestroyableWidgetFloater_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.Tick");

	UBP_DestroyableWidgetFloater_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.ExecuteUbergraph_BP_DestroyableWidgetFloater
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DestroyableWidgetFloater_C::ExecuteUbergraph_BP_DestroyableWidgetFloater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableWidgetFloater.BP_DestroyableWidgetFloater_C.ExecuteUbergraph_BP_DestroyableWidgetFloater");

	UBP_DestroyableWidgetFloater_C_ExecuteUbergraph_BP_DestroyableWidgetFloater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
