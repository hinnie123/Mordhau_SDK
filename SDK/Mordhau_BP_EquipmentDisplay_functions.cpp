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

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Show
// (BlueprintCallable, BlueprintEvent)

void UBP_EquipmentDisplay_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Show");

	UBP_EquipmentDisplay_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_EquipmentDisplay_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Hide");

	UBP_EquipmentDisplay_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentDisplay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Tick");

	UBP_EquipmentDisplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.ExecuteUbergraph_BP_EquipmentDisplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentDisplay_C::ExecuteUbergraph_BP_EquipmentDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.ExecuteUbergraph_BP_EquipmentDisplay");

	UBP_EquipmentDisplay_C_ExecuteUbergraph_BP_EquipmentDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
