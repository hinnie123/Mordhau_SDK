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

// UserDefinedStruct STRUCT_HordeMatchInfo.STRUCT_HordeMatchInfo
// 0x0008
struct FSTRUCT_HordeMatchInfo
{
	unsigned char                                      Wave_8_DA412AC2491458B6B77F2DB0E3CA63A5;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnemiesRemaining_7_485031864BC24142FA6FD19C21852FDF;      // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              NextWaveStartTime_2_1D7024D84D0CB9150698CC932DD16332;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
