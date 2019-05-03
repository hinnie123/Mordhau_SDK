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

// Function BP_KillFeedEntry.BP_KillFeedEntry_C.Setup
struct UBP_KillFeedEntry_C_Setup_Params
{
	struct FText                                       Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       KilledBy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                KillerColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                KilledColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
