#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MapVote.BP_MapVote_C.UpdateVoteCount
struct UBP_MapVote_C_UpdateVoteCount_Params
{
	unsigned char                                      Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapVote.BP_MapVote_C.OnEntrySelected
struct UBP_MapVote_C_OnEntrySelected_Params
{
	class UBP_MapEntry_C*                              Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MapVote.BP_MapVote_C.AddEntry
struct UBP_MapVote_C_AddEntry_Params
{
	struct FString                                     GameModeMapName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UGameModeMetadata*                           GameModeMetadata;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMapMetadata*                                MapMetadata;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapVote.BP_MapVote_C.ClearEntries
struct UBP_MapVote_C_ClearEntries_Params
{
};

// Function BP_MapVote.BP_MapVote_C.Voted__DelegateSignature
struct UBP_MapVote_C_Voted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
