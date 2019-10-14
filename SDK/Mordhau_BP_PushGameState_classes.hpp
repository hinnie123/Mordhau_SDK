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

// BlueprintGeneratedClass BP_PushGameState.BP_PushGameState_C
// 0x0004 (0x0764 - 0x0760)
class ABP_PushGameState_C : public ABP_FrontlineGameState_C
{
public:
	float                                              ForwardSpawnUntil;                                        // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushGameState.BP_PushGameState_C");
		return ptr;
	}


	void GetScoreboardTimeInProgress(struct FTimespan* Time);
	void GetScoreboardObjectiveName(struct FText* NewParam);
	void GetScoreboardTeamObjectiveValue(int* Team, struct FString* Output);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
