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

// UserDefinedStruct STRUCT_HordeEnemyInfo.STRUCT_HordeEnemyInfo
// 0x0040
struct FSTRUCT_HordeEnemyInfo
{
	class UClass*                                      CharacterType_2_5721345B46BD7DC637DE349DB3078BFC;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FCharacterProfile>                   CustomizationVariants_23_31DB99B94B1F6227210491866A0F123E;// 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              Equipment_11_BD95AB304279FF03F33A978E9F8E607D;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UClass*>                              SecondaryEquipment_21_41B43839487F1DEAE504F3A6EE037FE4;   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UClass*                                      Behavior_17_17DA00BC43E92F34F02452B328DB82BF;             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
