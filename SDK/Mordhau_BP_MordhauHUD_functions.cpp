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

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateContextPopupWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper");

	ABP_MordhauHUD_C_CreateContextPopupWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.HideVoteKickMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::HideVoteKickMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.HideVoteKickMenu");

	ABP_MordhauHUD_C_HideVoteKickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoteKickMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowVoteKickMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoteKickMenu");

	ABP_MordhauHUD_C_ShowVoteKickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoteKickMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateVoteKickMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoteKickMenu");

	ABP_MordhauHUD_C_CreateVoteKickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMatchResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVictory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   MainText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Subtext                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauHUD_C::ShowMatchResult(bool IsVictory, const struct FText& MainText, const struct FText& Subtext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMatchResult");

	ABP_MordhauHUD_C_ShowMatchResult_Params params;
	params.IsVictory = IsVictory;
	params.MainText = MainText;
	params.Subtext = Subtext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowPostMatchScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowPostMatchScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowPostMatchScreen");

	ABP_MordhauHUD_C_ShowPostMatchScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreatePostMatchScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreatePostMatchScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreatePostMatchScreen");

	ABP_MordhauHUD_C_CreatePostMatchScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowKilledBy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauHUD_C::ShowKilledBy(class AMordhauPlayerState* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowKilledBy");

	ABP_MordhauHUD_C_ShowKilledBy_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKilledByPanelWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateKilledByPanelWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKilledByPanelWidget");

	ABP_MordhauHUD_C_CreateKilledByPanelWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowObjectiveWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowObjectiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowObjectiveWidget");

	ABP_MordhauHUD_C_ShowObjectiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateObjectiveWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Objectives_C*        Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MordhauHUD_C::CreateObjectiveWidget(class UBP_Objectives_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateObjectiveWidget");

	ABP_MordhauHUD_C_CreateObjectiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.HideSpawnScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::HideSpawnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.HideSpawnScreen");

	ABP_MordhauHUD_C_HideSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowSpawnScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowSpawnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowSpawnScreen");

	ABP_MordhauHUD_C_ShowSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateSpawnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnScreen");

	ABP_MordhauHUD_C_CreateSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoiceMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowVoiceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoiceMenu");

	ABP_MordhauHUD_C_ShowVoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoiceMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateVoiceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoiceMenu");

	ABP_MordhauHUD_C_CreateVoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentInfoDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateEquipmentInfoDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentInfoDisplay");

	ABP_MordhauHUD_C_CreateEquipmentInfoDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateScoreFeed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateScoreFeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateScoreFeed");

	ABP_MordhauHUD_C_CreateScoreFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTips
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTips");

	ABP_MordhauHUD_C_ShowTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTips
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTips");

	ABP_MordhauHUD_C_CreateTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEquipment
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEquipment");

	ABP_MordhauHUD_C_ShowEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateEquipmentDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentDisplay");

	ABP_MordhauHUD_C_CreateEquipmentDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateNetIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateNetIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateNetIndicator");

	ABP_MordhauHUD_C_CreateNetIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateSpawnInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnInfo");

	ABP_MordhauHUD_C_CreateSpawnInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMainMenu");

	ABP_MordhauHUD_C_CreateMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.IsMainMenuVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsVisible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauHUD_C::IsMainMenuVisible(bool* bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.IsMainMenuVisible");

	ABP_MordhauHUD_C_IsMainMenuVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsVisible != nullptr)
		*bIsVisible = params.bIsVisible;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.HideMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::HideMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.HideMainMenu");

	ABP_MordhauHUD_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ProcessQueuedDialogs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ProcessQueuedDialogs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ProcessQueuedDialogs");

	ABP_MordhauHUD_C_ProcessQueuedDialogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMordhauDialog*          Dialog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MordhauHUD_C::EnqueueDialog(class UMordhauDialog* Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueDialog");

	ABP_MordhauHUD_C_EnqueueDialog_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateWatermark
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateWatermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateWatermark");

	ABP_MordhauHUD_C_CreateWatermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Subtext                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauHUD_C::ShowAnnouncement(const struct FText& Text, const struct FText& Subtext, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowAnnouncement");

	ABP_MordhauHUD_C_ShowAnnouncement_Params params;
	params.Text = Text;
	params.Subtext = Subtext;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateAnnouncement");

	ABP_MordhauHUD_C_CreateAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEmoteMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowEmoteMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEmoteMenu");

	ABP_MordhauHUD_C_ShowEmoteMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEmoteMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateEmoteMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEmoteMenu");

	ABP_MordhauHUD_C_CreateEmoteMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTeamSelect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowTeamSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTeamSelect");

	ABP_MordhauHUD_C_ShowTeamSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTeamSelect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateTeamSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTeamSelect");

	ABP_MordhauHUD_C_CreateTeamSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowProfileSelect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowProfileSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowProfileSelect");

	ABP_MordhauHUD_C_ShowProfileSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateProfileSelect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateProfileSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateProfileSelect");

	ABP_MordhauHUD_C_CreateProfileSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateChatBox
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateChatBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateChatBox");

	ABP_MordhauHUD_C_CreateChatBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateStatusBar
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateStatusBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateStatusBar");

	ABP_MordhauHUD_C_CreateStatusBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateCrosshair
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateCrosshair");

	ABP_MordhauHUD_C_CreateCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKillFeed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateKillFeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKillFeed");

	ABP_MordhauHUD_C_CreateKillFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTargetInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::CreateTargetInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTargetInfo");

	ABP_MordhauHUD_C_CreateTargetInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.UseFullHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::UseFullHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.UseFullHUD");

	ABP_MordhauHUD_C_UseFullHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.UseMinimalHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::UseMinimalHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.UseMinimalHUD");

	ABP_MordhauHUD_C_UseMinimalHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ArmoryStates>    Armory_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauHUD_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates> Armory_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMainMenu");

	ABP_MordhauHUD_C_ShowMainMenu_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToKillFeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   KilledBy                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerState*            Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauHUD_C::SendMessageToKillFeed(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToKillFeed");

	ABP_MordhauHUD_C_SendMessageToKillFeed_Params params;
	params.Killer = Killer;
	params.KilledBy = KilledBy;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToChatbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauHUD_C::SendMessageToChatbox(const struct FText& CharacterName, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToChatbox");

	ABP_MordhauHUD_C_SendMessageToChatbox_Params params;
	params.CharacterName = CharacterName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowChatBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauHUD_C::ShowChatBox(bool Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowChatBox");

	ABP_MordhauHUD_C_ShowChatBox_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.HideScoreboard
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::HideScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.HideScoreboard");

	ABP_MordhauHUD_C_HideScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowScoreboard
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::ShowScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowScoreboard");

	ABP_MordhauHUD_C_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.UserConstructionScript");

	ABP_MordhauHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MordhauHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveBeginPlay");

	ABP_MordhauHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauHUD_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveTick");

	ABP_MordhauHUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.Spawn CustomizationPlatform
// (BlueprintCallable, BlueprintEvent)

void ABP_MordhauHUD_C::Spawn_CustomizationPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.Spawn CustomizationPlatform");

	ABP_MordhauHUD_C_Spawn_CustomizationPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueMordhauDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMordhauDialog**         Dialog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MordhauHUD_C::EnqueueMordhauDialog(class UMordhauDialog** Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueMordhauDialog");

	ABP_MordhauHUD_C_EnqueueMordhauDialog_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauHUD.BP_MordhauHUD_C.ExecuteUbergraph_BP_MordhauHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauHUD_C::ExecuteUbergraph_BP_MordhauHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ExecuteUbergraph_BP_MordhauHUD");

	ABP_MordhauHUD_C_ExecuteUbergraph_BP_MordhauHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
