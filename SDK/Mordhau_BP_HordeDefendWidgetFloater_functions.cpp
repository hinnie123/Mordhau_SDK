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

// Function BP_HordeDefendWidgetFloater.BP_HordeDefendWidgetFloater_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HordeDefendWidgetFloater_C::UpdateHealth(float NewHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeDefendWidgetFloater.BP_HordeDefendWidgetFloater_C.UpdateHealth");

	UBP_HordeDefendWidgetFloater_C_UpdateHealth_Params params;
	params.NewHealth = NewHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeDefendWidgetFloater.BP_HordeDefendWidgetFloater_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HordeDefendWidgetFloater_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeDefendWidgetFloater.BP_HordeDefendWidgetFloater_C.Tick");

	UBP_HordeDefendWidgetFloater_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeDefendWidgetFloater.BP_HordeDefendWidgetFloater_C.ExecuteUbergraph_BP_HordeDefendWidgetFloater
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HordeDefendWidgetFloater_C::ExecuteUbergraph_BP_HordeDefendWidgetFloater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeDefendWidgetFloater.BP_HordeDefendWidgetFloater_C.ExecuteUbergraph_BP_HordeDefendWidgetFloater");

	UBP_HordeDefendWidgetFloater_C_ExecuteUbergraph_BP_HordeDefendWidgetFloater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
