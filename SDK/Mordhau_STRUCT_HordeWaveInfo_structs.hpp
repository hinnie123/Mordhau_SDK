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

// UserDefinedStruct STRUCT_HordeWaveInfo.STRUCT_HordeWaveInfo
// 0x0018
struct FSTRUCT_HordeWaveInfo
{
	int                                                CompletionReward_2_FA51CC944B0201EBC96F3A985D2C7542;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FSTRUCT_HordeEnemyArray>             WaveVariants_12_A13CD2DC46FE272411E9ACAD3C259A2F;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
