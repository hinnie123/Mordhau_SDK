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

// Function BP_CustomizationTab.BP_CustomizationTab_C.CreateSimpleItemEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_CustomizationItemEntry_C* SelectedEntry                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_CustomizationTab_C::CreateSimpleItemEntries(int Selected, TArray<class UClass*>* Items, class UBP_CustomizationItemEntry_C** SelectedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.CreateSimpleItemEntries");

	UBP_CustomizationTab_C_CreateSimpleItemEntries_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (SelectedEntry != nullptr)
		*SelectedEntry = params.SelectedEntry;
}


// Function BP_CustomizationTab.BP_CustomizationTab_C.ClearCustomizationItemEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationTab_C::ClearCustomizationItemEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.ClearCustomizationItemEntries");

	UBP_CustomizationTab_C_ClearCustomizationItemEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationTab.BP_CustomizationTab_C.GetCustomizationPlatform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MordhauCustomizationPlatform_C* Platform                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationTab_C::GetCustomizationPlatform(class ABP_MordhauCustomizationPlatform_C** Platform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.GetCustomizationPlatform");

	UBP_CustomizationTab_C_GetCustomizationPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Platform != nullptr)
		*Platform = params.Platform;
}


// Function BP_CustomizationTab.BP_CustomizationTab_C.OnCharacterDollUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationTab_C::OnCharacterDollUpdated(class AMordhauCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.OnCharacterDollUpdated");

	UBP_CustomizationTab_C_OnCharacterDollUpdated_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationTab.BP_CustomizationTab_C.OnProfileChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationTab_C::OnProfileChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.OnProfileChanged");

	UBP_CustomizationTab_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationTab.BP_CustomizationTab_C.CompareItemEntries
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CustomizationItemEntry_C* A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBP_CustomizationItemEntry_C* B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           AIsLess                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationTab_C::CompareItemEntries(class UBP_CustomizationItemEntry_C* A, class UBP_CustomizationItemEntry_C* B, bool* AIsLess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.CompareItemEntries");

	UBP_CustomizationTab_C_CompareItemEntries_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AIsLess != nullptr)
		*AIsLess = params.AIsLess;
}


// Function BP_CustomizationTab.BP_CustomizationTab_C.SortItemEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationTab_C::SortItemEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.SortItemEntries");

	UBP_CustomizationTab_C_SortItemEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationTab.BP_CustomizationTab_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationTab_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.SetActive");

	UBP_CustomizationTab_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
