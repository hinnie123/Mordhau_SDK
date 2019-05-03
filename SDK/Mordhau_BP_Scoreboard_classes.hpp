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

// WidgetBlueprintGeneratedClass BP_Scoreboard.BP_Scoreboard_C
// 0x0038 (0x0240 - 0x0208)
class UBP_Scoreboard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	TArray<class UBP_ScoreboardTeamEntries_C*>         TeamEntries;                                              // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UHorizontalBox*>                      TeamBoxes;                                                // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        PlayerCounts;                                             // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Scoreboard.BP_Scoreboard_C");
		return ptr;
	}


	void GetMaxPlayers(int DivideBy, int* Text);
	void GetServerName(struct FText* Text);
	void GetMapName(struct FText* Text);
	void GetTeamObjectiveValue(int Team, struct FText* Text);
	void GetTeam2ObjectiveValue(struct FText* Text);
	void GetTeam1ObjectiveValue(struct FText* Text);
	void GetObjectiveName(struct FText* Text);
	void GetGameModeName(struct FText* Text);
	void GetTeam2Players(struct FText* Text);
	void GetTeam1Players(struct FText* Text);
	void GetTeamPlayers(int Team, struct FText* Text);
	void GetTeam2Name(struct FText* Text);
	void GetTeamName(int Team, struct FText* Text);
	void GetTeam1Name(struct FText* Text);
	void GetScoreboardTime(struct FText* Time);
	void Hide();
	void Show();
	void Refresh();
	void Construct();
	void ExecuteUbergraph_BP_Scoreboard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
