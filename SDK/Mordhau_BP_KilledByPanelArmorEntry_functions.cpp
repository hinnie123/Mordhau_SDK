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

// Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Flash
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KilledByPanelArmorEntry_C::Flash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Flash");

	UBP_KilledByPanelArmorEntry_C_Flash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.SetArmorClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewArmorClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KilledByPanelArmorEntry_C::SetArmorClass(int NewArmorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.SetArmorClass");

	UBP_KilledByPanelArmorEntry_C_SetArmorClass_Params params;
	params.NewArmorClass = NewArmorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_KilledByPanelArmorEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Construct");

	UBP_KilledByPanelArmorEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.ExecuteUbergraph_BP_KilledByPanelArmorEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KilledByPanelArmorEntry_C::ExecuteUbergraph_BP_KilledByPanelArmorEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.ExecuteUbergraph_BP_KilledByPanelArmorEntry");

	UBP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
