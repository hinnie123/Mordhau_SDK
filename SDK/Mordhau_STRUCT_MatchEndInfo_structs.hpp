#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRUCT_MatchEndInfo.STRUCT_MatchEndInfo
// 0x0015
struct FSTRUCT_MatchEndInfo
{
	class ABP_MordhauPlayerState_C*                    Winner_15_17FF977E4C40F157A0FEC18A7933F7AD;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                WinnerTeam_5_6B8C38034236451E9947B38150AA1481;            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WinnerScore_13_331EE3BA462DAC5934FA9392910F16A5;          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OtherScore_14_8459FEF04EA4D73DE697A79922872164;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Draw_12_BAB292B74DAFD342C6E4CABF28902219;                 // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
