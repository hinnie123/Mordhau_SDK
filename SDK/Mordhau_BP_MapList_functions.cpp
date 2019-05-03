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

// Function BP_MapList.BP_MapList_C.GetSelectedEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapEntryLocalPlay_C* SelectedEntry                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MapList_C::GetSelectedEntry(class UBP_MapEntryLocalPlay_C** SelectedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.GetSelectedEntry");

	UBP_MapList_C_GetSelectedEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedEntry != nullptr)
		*SelectedEntry = params.SelectedEntry;
}


// Function BP_MapList.BP_MapList_C.SelectFirstEntry
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MapList_C::SelectFirstEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.SelectFirstEntry");

	UBP_MapList_C_SelectFirstEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapList.BP_MapList_C.OnEntrySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapEntryLocalPlay_C* Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MapList_C::OnEntrySelected(class UBP_MapEntryLocalPlay_C* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.OnEntrySelected");

	UBP_MapList_C_OnEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapList.BP_MapList_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 GameModeMapName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UMapMetadata*            MetaData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapList_C::AddEntry(const struct FString& GameModeMapName, class UMapMetadata* MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.AddEntry");

	UBP_MapList_C_AddEntry_Params params;
	params.GameModeMapName = GameModeMapName;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapList.BP_MapList_C.ClearEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MapList_C::ClearEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.ClearEntries");

	UBP_MapList_C_ClearEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
