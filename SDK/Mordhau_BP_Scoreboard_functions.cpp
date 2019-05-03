// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Scoreboard.BP_Scoreboard_C.GetMaxPlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            DivideBy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Text                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::GetMaxPlayers(int DivideBy, int* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetMaxPlayers");

	UBP_Scoreboard_C_GetMaxPlayers_Params params;
	params.DivideBy = DivideBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetServerName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetServerName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetServerName");

	UBP_Scoreboard_C_GetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetMapName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetMapName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetMapName");

	UBP_Scoreboard_C_GetMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamObjectiveValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeamObjectiveValue(int Team, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamObjectiveValue");

	UBP_Scoreboard_C_GetTeamObjectiveValue_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2ObjectiveValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam2ObjectiveValue(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2ObjectiveValue");

	UBP_Scoreboard_C_GetTeam2ObjectiveValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1ObjectiveValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam1ObjectiveValue(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1ObjectiveValue");

	UBP_Scoreboard_C_GetTeam1ObjectiveValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetObjectiveName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetObjectiveName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetObjectiveName");

	UBP_Scoreboard_C_GetObjectiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetGameModeName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetGameModeName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetGameModeName");

	UBP_Scoreboard_C_GetGameModeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Players
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam2Players(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Players");

	UBP_Scoreboard_C_GetTeam2Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Players
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam1Players(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Players");

	UBP_Scoreboard_C_GetTeam1Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamPlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeamPlayers(int Team, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamPlayers");

	UBP_Scoreboard_C_GetTeamPlayers_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam2Name(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Name");

	UBP_Scoreboard_C_GetTeam2Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeamName(int Team, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamName");

	UBP_Scoreboard_C_GetTeamName_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_Scoreboard_C::GetTeam1Name(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Name");

	UBP_Scoreboard_C_GetTeam1Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetScoreboardTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Time                           (Parm, OutParm)

void UBP_Scoreboard_C::GetScoreboardTime(struct FText* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetScoreboardTime");

	UBP_Scoreboard_C_GetScoreboardTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Scoreboard_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Hide");

	UBP_Scoreboard_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Scoreboard_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Show");

	UBP_Scoreboard_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Scoreboard_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Refresh");

	UBP_Scoreboard_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Scoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Construct");

	UBP_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::ExecuteUbergraph_BP_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard");

	UBP_Scoreboard_C_ExecuteUbergraph_BP_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
