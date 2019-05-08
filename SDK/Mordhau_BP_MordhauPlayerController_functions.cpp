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

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRep_ReplicatedAmmoBoxCooldown
// (BlueprintCallable, BlueprintEvent)

void ABP_MordhauPlayerController_C::OnRep_ReplicatedAmmoBoxCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRep_ReplicatedAmmoBoxCooldown");

	ABP_MordhauPlayerController_C_OnRep_ReplicatedAmmoBoxCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::WipePlaceables(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceables");

	ABP_MordhauPlayerController_C_WipePlaceables_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RemoveFromPlaceableArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NameKey                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::RemoveFromPlaceableArray(const struct FName& NameKey, class AActor* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RemoveFromPlaceableArray");

	ABP_MordhauPlayerController_C_RemoveFromPlaceableArray_Params params;
	params.NameKey = NameKey;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PlaceInPlaceableArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NameKey                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ToPlace                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxOfSame                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  RemovedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::PlaceInPlaceableArray(const struct FName& NameKey, class AActor* ToPlace, int MaxOfSame, class AActor** RemovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PlaceInPlaceableArray");

	ABP_MordhauPlayerController_C_PlaceInPlaceableArray_Params params;
	params.NameKey = NameKey;
	params.ToPlace = ToPlace;
	params.MaxOfSame = MaxOfSame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemovedActor != nullptr)
		*RemovedActor = params.RemovedActor;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFireOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewOnFireValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewNearFireValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ChangeFireOverlay(float NewOnFireValue, float NewNearFireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFireOverlay");

	ABP_MordhauPlayerController_C_ChangeFireOverlay_Params params;
	params.NewOnFireValue = NewOnFireValue;
	params.NewNearFireValue = NewNearFireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeSmokeOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ChangeSmokeOverlay(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeSmokeOverlay");

	ABP_MordhauPlayerController_C_ChangeSmokeOverlay_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateViewTargetEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauPlayerController_C::UpdateViewTargetEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateViewTargetEffects");

	ABP_MordhauPlayerController_C_UpdateViewTargetEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFadeToBlackCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ChangeFadeToBlackCounter(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFadeToBlackCounter");

	ABP_MordhauPlayerController_C_ChangeFadeToBlackCounter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UserConstructionScript");

	ABP_MordhauPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Main Menu_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Main_Menu_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Main Menu_K2Node_InputActionEvent_14");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Main_Menu_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Chat_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Chat_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Chat_K2Node_InputActionEvent_13");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Chat_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_12");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_11");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_10");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Team_Select_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_9");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Team_Select_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_8");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Chat_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Team_Chat_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Chat_K2Node_InputActionEvent_7");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Team_Chat_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_6");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Battlecry_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_5");

	ABP_MordhauPlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Mute Target_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Mute_Target_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Mute Target_K2Node_InputActionEvent_4");

	ABP_MordhauPlayerController_C_InpActEvt_Mute_Target_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote Yes_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Vote_Yes_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote Yes_K2Node_InputActionEvent_3");

	ABP_MordhauPlayerController_C_InpActEvt_Vote_Yes_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote No_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Vote_No_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote No_K2Node_InputActionEvent_2");

	ABP_MordhauPlayerController_C_InpActEvt_Vote_No_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Toggle UI Markers_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauPlayerController_C::InpActEvt_Toggle_UI_Markers_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Toggle UI Markers_K2Node_InputActionEvent_1");

	ABP_MordhauPlayerController_C_InpActEvt_Toggle_UI_Markers_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MordhauPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveBeginPlay");

	ABP_MordhauPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveTick");

	ABP_MordhauPlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RequestChatMessage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::RequestChatMessage(const struct FString& Message, bool Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RequestChatMessage");

	ABP_MordhauPlayerController_C_RequestChatMessage_Params params;
	params.Message = Message;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::OnHighlightStart(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightStart");

	ABP_MordhauPlayerController_C_OnHighlightStart_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::OnHighlightEnd(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightEnd");

	ABP_MordhauPlayerController_C_OnHighlightEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorAction
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::OnSpectatorAction(unsigned char* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorAction");

	ABP_MordhauPlayerController_C_OnSpectatorAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           SenderPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                S                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MsgLifeTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::DisplayMessage(class APlayerState** SenderPlayerState, struct FString* S, struct FName* Type, float* MsgLifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayMessage");

	ABP_MordhauPlayerController_C_DisplayMessage_Params params;
	params.SenderPlayerState = SenderPlayerState;
	params.S = S;
	params.Type = Type;
	params.MsgLifeTime = MsgLifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowEquipment
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauPlayerController_C::ShowEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowEquipment");

	ABP_MordhauPlayerController_C_ShowEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowTips
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauPlayerController_C::ShowTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowTips");

	ABP_MordhauPlayerController_C_ShowTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChoiceMenuOptionSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ChoiceMenuOptionSelected(int* Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChoiceMenuOptionSelected");

	ABP_MordhauPlayerController_C_ChoiceMenuOptionSelected_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ClientReceiveScoreBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EScoreFeedReason*              Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 ReasonParam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMordhauPlayerState**    AssociatedPlayer               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ClientReceiveScoreBP(EScoreFeedReason* Reason, unsigned char* ReasonParam, float* ScoreAmount, class AMordhauPlayerState** AssociatedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ClientReceiveScoreBP");

	ABP_MordhauPlayerController_C_ClientReceiveScoreBP_Params params;
	params.Reason = Reason;
	params.ReasonParam = ReasonParam;
	params.ScoreAmount = ScoreAmount;
	params.AssociatedPlayer = AssociatedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAfterPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  APawn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::OnAfterPossess(class APawn** APawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAfterPossess");

	ABP_MordhauPlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnActionFailed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_MordhauPlayerController_C::OnActionFailed(struct FName* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnActionFailed");

	ABP_MordhauPlayerController_C_OnActionFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_MordhauPlayerController_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveDestroyed");

	ABP_MordhauPlayerController_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnMordhauCharacterSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      SpawnedCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::OnMordhauCharacterSpawned(class AMordhauCharacter** SpawnedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnMordhauCharacterSpawned");

	ABP_MordhauPlayerController_C_OnMordhauCharacterSpawned_Params params;
	params.SpawnedCharacter = SpawnedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorCmd
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Cmd                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MordhauPlayerController_C::OnSpectatorCmd(struct FString* Cmd, struct FString* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorCmd");

	ABP_MordhauPlayerController_C_OnSpectatorCmd_Params params;
	params.Cmd = Cmd;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnIsAnythingRestockableChanged
// (Event, Public, BlueprintEvent)

void ABP_MordhauPlayerController_C::OnIsAnythingRestockableChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnIsAnythingRestockableChanged");

	ABP_MordhauPlayerController_C_OnIsAnythingRestockableChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAFKTimeExceededMaximum
// (Event, Public, BlueprintEvent)

void ABP_MordhauPlayerController_C::OnAFKTimeExceededMaximum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAFKTimeExceededMaximum");

	ABP_MordhauPlayerController_C_OnAFKTimeExceededMaximum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PerformAFKKick
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MordhauPlayerController_C::PerformAFKKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PerformAFKKick");

	ABP_MordhauPlayerController_C_PerformAFKKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAmmoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauEquipment**      Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmmoDifference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::OnAmmoChanged(class AMordhauEquipment** Equipment, int* AmmoDifference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAmmoChanged");

	ABP_MordhauPlayerController_C_OnAmmoChanged_Params params;
	params.Equipment = Equipment;
	params.AmmoDifference = AmmoDifference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestVoteKick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState**    TargetPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::OnRequestVoteKick(class AMordhauPlayerState** TargetPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestVoteKick");

	ABP_MordhauPlayerController_C_OnRequestVoteKick_Params params;
	params.TargetPlayer = TargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestVoteKick
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauPlayerState*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ServerRequestVoteKick(class AMordhauPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestVoteKick");

	ABP_MordhauPlayerController_C_ServerRequestVoteKick_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestCancelVoteKick
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauPlayerController_C::OnRequestCancelVoteKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestCancelVoteKick");

	ABP_MordhauPlayerController_C_OnRequestCancelVoteKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestCancelVoteKick
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MordhauPlayerController_C::ServerRequestCancelVoteKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestCancelVoteKick");

	ABP_MordhauPlayerController_C_ServerRequestCancelVoteKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerVoteKickVote
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           VotedYes                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ServerVoteKickVote(bool VotedYes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerVoteKickVote");

	ABP_MordhauPlayerController_C_ServerVoteKickVote_Params params;
	params.VotedYes = VotedYes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ExecuteUbergraph_BP_MordhauPlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauPlayerController_C::ExecuteUbergraph_BP_MordhauPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ExecuteUbergraph_BP_MordhauPlayerController");

	ABP_MordhauPlayerController_C_ExecuteUbergraph_BP_MordhauPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
