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

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Get_ALL_Text_1
struct UBP_ChatBoxEntry_C_Get_ALL_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry
struct UBP_ChatBoxEntry_C_SetupEntry_Params
{
	struct FText                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                NameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
