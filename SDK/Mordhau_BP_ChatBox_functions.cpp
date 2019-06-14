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

// Function BP_ChatBox.BP_ChatBox_C.Repopulate Muted Player List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ChatBox_C::Repopulate_Muted_Player_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Repopulate Muted Player List");

	UBP_ChatBox_C_Repopulate_Muted_Player_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.RemovePlayerFromMutedMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SteamID_Index                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBox_C::RemovePlayerFromMutedMap(const struct FString& SteamID, int* SteamID_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.RemovePlayerFromMutedMap");

	UBP_ChatBox_C_RemovePlayerFromMutedMap_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SteamID_Index != nullptr)
		*SteamID_Index = params.SteamID_Index;
}


// Function BP_ChatBox.BP_ChatBox_C.IsPlayerMuted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<E_ChatMuteTypes>   Mute_Type                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isMuted                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBox_C::IsPlayerMuted(const struct FString& SteamID, TEnumAsByte<E_ChatMuteTypes>* Mute_Type, bool* isMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.IsPlayerMuted");

	UBP_ChatBox_C_IsPlayerMuted_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mute_Type != nullptr)
		*Mute_Type = params.Mute_Type;
	if (isMuted != nullptr)
		*isMuted = params.isMuted;
}


// Function BP_ChatBox.BP_ChatBox_C.AddPlayerToMutedMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<E_ChatMuteTypes>   Mute_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Player_Name                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChatBox_C::AddPlayerToMutedMap(const struct FString& SteamID, TEnumAsByte<E_ChatMuteTypes> Mute_Type, const struct FText& Player_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddPlayerToMutedMap");

	UBP_ChatBox_C_AddPlayerToMutedMap_Params params;
	params.SteamID = SteamID;
	params.Mute_Type = Mute_Type;
	params.Player_Name = Player_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.Get Keys From Value
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UBP_ChatBoxEntry_C*, struct FString> PreviousMessagesMap            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Value__SteamID_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<class UBP_ChatBoxEntry_C*> Keys                           (Parm, OutParm, ZeroConstructor)

void UBP_ChatBox_C::Get_Keys_From_Value(TMap<class UBP_ChatBoxEntry_C*, struct FString> PreviousMessagesMap, const struct FString& Value__SteamID_, TArray<class UBP_ChatBoxEntry_C*>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Get Keys From Value");

	UBP_ChatBox_C_Get_Keys_From_Value_Params params;
	params.PreviousMessagesMap = PreviousMessagesMap;
	params.Value__SteamID_ = Value__SteamID_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;
}


// Function BP_ChatBox.BP_ChatBox_C.UnMutePlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_ChatBox_C::UnMutePlayer(const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.UnMutePlayer");

	UBP_ChatBox_C_UnMutePlayer_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.MutePlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ChatMuteTypes>   MuteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChatBox_C::MutePlayer(TEnumAsByte<E_ChatMuteTypes> MuteType, const struct FString& SteamID, const struct FText& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.MutePlayer");

	UBP_ChatBox_C_MutePlayer_Params params;
	params.MuteType = MuteType;
	params.SteamID = SteamID;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ChatBox_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetVisibility_1");

	UBP_ChatBox_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBox.BP_ChatBox_C.ResetThreshold
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ChatBox_C::ResetThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.ResetThreshold");

	UBP_ChatBox_C_ResetThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ChatBox_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetText_1");

	UBP_ChatBox_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBox.BP_ChatBox_C.AddViewModeEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ChatBoxEntry_C*      Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_ChatBox_C::AddViewModeEntry(class UBP_ChatBoxEntry_C* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddViewModeEntry");

	UBP_ChatBox_C_AddViewModeEntry_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.AddEntriesEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ChatBoxEntry_C*      Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_ChatBox_C::AddEntriesEntry(class UBP_ChatBoxEntry_C* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddEntriesEntry");

	UBP_ChatBox_C_AddEntriesEntry_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.GetEntriesVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ChatBox_C::GetEntriesVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetEntriesVisibility");

	UBP_ChatBox_C_GetEntriesVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBox.BP_ChatBox_C.GetChatBoxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ChatBox_C::GetChatBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetChatBoxVisibility");

	UBP_ChatBox_C_GetChatBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBox.BP_ChatBox_C.OnEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ChatBox_C::OnEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnEscape");

	UBP_ChatBox_C_OnEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.OnMessageReceived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerState*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChatBox_C::OnMessageReceived(const struct FText& Message, class APlayerState* Player, const struct FText& Prefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnMessageReceived");

	UBP_ChatBox_C_OnMessageReceived_Params params;
	params.Message = Message;
	params.Player = Player;
	params.Prefix = Prefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.OnEnter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ChatBox_C::OnEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnEnter");

	UBP_ChatBox_C_OnEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.GoToChatMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBox_C::GoToChatMode(bool Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GoToChatMode");

	UBP_ChatBox_C_GoToChatMode_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.GetViewModeVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ChatBox_C::GetViewModeVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetViewModeVisibility");

	UBP_ChatBox_C_GetViewModeVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBox.BP_ChatBox_C.GetInputContainerVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ChatBox_C::GetInputContainerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetInputContainerVisibility");

	UBP_ChatBox_C_GetInputContainerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBox.BP_ChatBox_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_ChatBox_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnPreviewKeyDown");

	UBP_ChatBox_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBox.BP_ChatBox_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            NameColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_ChatBox_C::AddEntry(const struct FText& PlayerName, const struct FText& Message, const struct FLinearColor& NameColor, const struct FText& Prefix, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddEntry");

	UBP_ChatBox_C_AddEntry_Params params;
	params.PlayerName = PlayerName;
	params.Message = Message;
	params.NameColor = NameColor;
	params.Prefix = Prefix;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBox_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Tick");

	UBP_ChatBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ChatBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Construct");

	UBP_ChatBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ChatBox_C::BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	UBP_ChatBox_C_BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.GoToViewMode
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBox_C::GoToViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GoToViewMode");

	UBP_ChatBox_C_GoToViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.GoToViewModeCallback
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBox_C::GoToViewModeCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GoToViewModeCallback");

	UBP_ChatBox_C_GoToViewModeCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ChatBox_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnMouseLeave");

	UBP_ChatBox_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ChatBox_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnMouseEnter");

	UBP_ChatBox_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBox.BP_ChatBox_C.ExecuteUbergraph_BP_ChatBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBox_C::ExecuteUbergraph_BP_ChatBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.ExecuteUbergraph_BP_ChatBox");

	UBP_ChatBox_C_ExecuteUbergraph_BP_ChatBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
