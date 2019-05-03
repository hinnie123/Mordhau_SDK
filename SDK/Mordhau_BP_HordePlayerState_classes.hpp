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

// BlueprintGeneratedClass BP_HordePlayerState.BP_HordePlayerState_C
// 0x0004 (0x045C - 0x0458)
class ABP_HordePlayerState_C : public ABP_MordhauPlayerState_C
{
public:
	int                                                Coins;                                                    // 0x0458(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePlayerState.BP_HordePlayerState_C");
		return ptr;
	}


	void OnRep_Coins();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
