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

// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipmentSkin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::InitializeFromEquipmentSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipmentSkin");

	UBP_GenericItemEntry_C_InitializeFromEquipmentSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetItemToUnlock
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemNeeded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GenericItemEntry_C::GetItemToUnlock(int* ItemNeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetItemToUnlock");

	UBP_GenericItemEntry_C_GetItemToUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemNeeded != nullptr)
		*ItemNeeded = params.ItemNeeded;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::InitializeFromItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromItem");

	UBP_GenericItemEntry_C_InitializeFromItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromWearable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::InitializeFromWearable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromWearable");

	UBP_GenericItemEntry_C_InitializeFromWearable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromNothing
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::InitializeFromNothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromNothing");

	UBP_GenericItemEntry_C_InitializeFromNothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::InitializeFromEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipment");

	UBP_GenericItemEntry_C_InitializeFromEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetRemoveIconBoxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GenericItemEntry_C::GetRemoveIconBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetRemoveIconBoxVisibility");

	UBP_GenericItemEntry_C_GetRemoveIconBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ToolTipText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_GenericItemEntry_C::Get_CostText_ToolTipText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ToolTipText_1");

	UBP_GenericItemEntry_C_Get_CostText_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_GenericItemEntry_C::Get_CostText_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ColorAndOpacity_1");

	UBP_GenericItemEntry_C_Get_CostText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_NameText_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_GenericItemEntry_C::Get_NameText_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_NameText_ColorAndOpacity_1");

	UBP_GenericItemEntry_C_Get_NameText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.Initialize");

	UBP_GenericItemEntry_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_GenericItemEntry_C::BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UBP_GenericItemEntry_C_BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.RequestUnlock
// (BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::RequestUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.RequestUnlock");

	UBP_GenericItemEntry_C_RequestUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseConfirm
// (BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::PurchaseConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseConfirm");

	UBP_GenericItemEntry_C_PurchaseConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseCancel
// (BlueprintCallable, BlueprintEvent)

void UBP_GenericItemEntry_C::PurchaseCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseCancel");

	UBP_GenericItemEntry_C_PurchaseCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.ItemsUnlocked
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSteamID                SteamID                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FItemStack>      ItemStacks                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_GenericItemEntry_C::ItemsUnlocked(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.ItemsUnlocked");

	UBP_GenericItemEntry_C_ItemsUnlocked_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.SteamID = SteamID;
	params.ItemStacks = ItemStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_GenericItemEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UBP_GenericItemEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_GenericItemEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBP_GenericItemEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenericItemEntry.BP_GenericItemEntry_C.ExecuteUbergraph_BP_GenericItemEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GenericItemEntry_C::ExecuteUbergraph_BP_GenericItemEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.ExecuteUbergraph_BP_GenericItemEntry");

	UBP_GenericItemEntry_C_ExecuteUbergraph_BP_GenericItemEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
