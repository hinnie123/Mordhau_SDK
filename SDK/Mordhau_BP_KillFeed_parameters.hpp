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

// Function BP_KillFeed.BP_KillFeed_C.AddEntry
struct UBP_KillFeed_C_AddEntry_Params
{
	class APlayerState*                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KilledBy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillFeed.BP_KillFeed_C.OnMessageReceived
struct UBP_KillFeed_C_OnMessageReceived_Params
{
	class APlayerState*                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KilledBy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KillFeed.BP_KillFeed_C.Construct
struct UBP_KillFeed_C_Construct_Params
{
};

// Function BP_KillFeed.BP_KillFeed_C.HideAfterSomeTime
struct UBP_KillFeed_C_HideAfterSomeTime_Params
{
};

// Function BP_KillFeed.BP_KillFeed_C.HideCallback
struct UBP_KillFeed_C_HideCallback_Params
{
};

// Function BP_KillFeed.BP_KillFeed_C.ExecuteUbergraph_BP_KillFeed
struct UBP_KillFeed_C_ExecuteUbergraph_BP_KillFeed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
