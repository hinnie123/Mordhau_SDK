#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MordhauSingleton.BP_MordhauSingleton_C
// 0x00A0 (0x05B0 - 0x0510)
class UBP_MordhauSingleton_C : public UMordhauSingleton
{
public:
	TMap<struct FString, TEnumAsByte<E_ChatMuteTypes>> ChatMutedPlayers;                                         // 0x0510(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FText>                 ChatMutedPlayerNames;                                     // 0x0560(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauSingleton.BP_MordhauSingleton_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
