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

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1
struct UBP_SpawnInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName
struct UBP_SpawnInfo_C_GetSpawnCharacterName_Params
{
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnText
struct UBP_SpawnInfo_C_GetSpawnText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
