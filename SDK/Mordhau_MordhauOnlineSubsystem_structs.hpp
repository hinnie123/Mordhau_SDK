#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MordhauOnlineSubsystem.ERequestMethod
enum class ERequestMethod : uint8_t
{
	GET                            = 0,
	HEAD                           = 1,
	POST                           = 2,
	ERequestMethod_MAX             = 3
};


// Enum MordhauOnlineSubsystem.EServerList
enum class EServerList : uint8_t
{
	Internet                       = 0,
	Favorites                      = 1,
	History                        = 2,
	Spectator                      = 3,
	LAN                            = 4,
	Friends                        = 5,
	EServerList_MAX                = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MordhauOnlineSubsystem.SteamID
// 0x0008
struct FSteamID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MordhauOnlineSubsystem.HTTPResponse
// 0x0068
struct FHTTPResponse
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
