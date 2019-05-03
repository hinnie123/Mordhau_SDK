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

// Function BP_MapVote.BP_MapVote_C.UpdateVoteCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapVote_C::UpdateVoteCount(unsigned char Count, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.UpdateVoteCount");

	UBP_MapVote_C_UpdateVoteCount_Params params;
	params.Count = Count;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapVote.BP_MapVote_C.OnEntrySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapEntry_C*          Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MapVote_C::OnEntrySelected(class UBP_MapEntry_C* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.OnEntrySelected");

	UBP_MapVote_C_OnEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapVote.BP_MapVote_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 GameModeMapName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UGameModeMetadata*       GameModeMetadata               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMapMetadata*            MapMetadata                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapVote_C::AddEntry(const struct FString& GameModeMapName, class UGameModeMetadata* GameModeMetadata, class UMapMetadata* MapMetadata)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.AddEntry");

	UBP_MapVote_C_AddEntry_Params params;
	params.GameModeMapName = GameModeMapName;
	params.GameModeMetadata = GameModeMetadata;
	params.MapMetadata = MapMetadata;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapVote.BP_MapVote_C.ClearEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MapVote_C::ClearEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.ClearEntries");

	UBP_MapVote_C_ClearEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapVote.BP_MapVote_C.Voted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MapVote_C::Voted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.Voted__DelegateSignature");

	UBP_MapVote_C_Voted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
