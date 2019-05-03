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

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_SlotNumber_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentDisplayEntry_C::Get_SlotNumber_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_SlotNumber_Text");

	UBP_EquipmentDisplayEntry_C_Get_SlotNumber_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_EquipmentDisplayEntry_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetColorAndOpacity_1");

	UBP_EquipmentDisplayEntry_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetEntryTypeAndName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)

void UBP_EquipmentDisplayEntry_C::GetEntryTypeAndName(int* Type, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetEntryTypeAndName");

	UBP_EquipmentDisplayEntry_C_GetEntryTypeAndName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_EquipmentName_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentDisplayEntry_C::Get_EquipmentName_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_EquipmentName_Text");

	UBP_EquipmentDisplayEntry_C_Get_EquipmentName_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentDisplayEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Tick");

	UBP_EquipmentDisplayEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.ExecuteUbergraph_BP_EquipmentDisplayEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentDisplayEntry_C::ExecuteUbergraph_BP_EquipmentDisplayEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.ExecuteUbergraph_BP_EquipmentDisplayEntry");

	UBP_EquipmentDisplayEntry_C_ExecuteUbergraph_BP_EquipmentDisplayEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
