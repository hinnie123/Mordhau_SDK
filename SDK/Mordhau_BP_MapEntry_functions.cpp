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

// Function BP_MapEntry.BP_MapEntry_C.SetVoteCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   VoteCount                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MapEntry_C::SetVoteCount(const struct FText& VoteCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.SetVoteCount");

	UBP_MapEntry_C_SetVoteCount_Params params;
	params.VoteCount = VoteCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 GameModeMapName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UGameModeMetadata*       GameModeMetadata               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMapMetadata*            MapMetadata                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapEntry_C::Update(const struct FString& GameModeMapName, class UGameModeMetadata* GameModeMetadata, class UMapMetadata* MapMetadata)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.Update");

	UBP_MapEntry_C_Update_Params params;
	params.GameModeMapName = GameModeMapName;
	params.GameModeMetadata = GameModeMetadata;
	params.MapMetadata = MapMetadata;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.SetGameModeName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   GameModeName                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MapEntry_C::SetGameModeName(const struct FText& GameModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.SetGameModeName");

	UBP_MapEntry_C_SetGameModeName_Params params;
	params.GameModeName = GameModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.SetThumbnail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Thumbnail                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapEntry_C::SetThumbnail(class UTexture2D* Thumbnail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.SetThumbnail");

	UBP_MapEntry_C_SetThumbnail_Params params;
	params.Thumbnail = Thumbnail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.SetMapName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MapName                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MapEntry_C::SetMapName(const struct FText& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.SetMapName");

	UBP_MapEntry_C_SetMapName_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.Deselect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_MapEntry_C::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.Deselect");

	UBP_MapEntry_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_MapEntry_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.Select");

	UBP_MapEntry_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MapEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.Construct");

	UBP_MapEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MapEntry_C::BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");

	UBP_MapEntry_C_BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MapEntry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBP_MapEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MapEntry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBP_MapEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.ExecuteUbergraph_BP_MapEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapEntry_C::ExecuteUbergraph_BP_MapEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.ExecuteUbergraph_BP_MapEntry");

	UBP_MapEntry_C_ExecuteUbergraph_BP_MapEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEntry.BP_MapEntry_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapEntry_C*          Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MapEntry_C::Selected__DelegateSignature(class UBP_MapEntry_C* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEntry.BP_MapEntry_C.Selected__DelegateSignature");

	UBP_MapEntry_C_Selected__DelegateSignature_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
