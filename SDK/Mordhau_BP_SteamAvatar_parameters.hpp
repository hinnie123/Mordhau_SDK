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

// Function BP_SteamAvatar.BP_SteamAvatar_C.Update
struct UBP_SteamAvatar_C_Update_Params
{
	struct FSteamID                                    SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SteamAvatar.BP_SteamAvatar_C.PreConstruct
struct UBP_SteamAvatar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SteamAvatar.BP_SteamAvatar_C.ExecuteUbergraph_BP_SteamAvatar
struct UBP_SteamAvatar_C_ExecuteUbergraph_BP_SteamAvatar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
