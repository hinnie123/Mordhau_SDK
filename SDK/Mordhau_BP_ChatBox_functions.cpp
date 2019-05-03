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
// struct FText                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            NameColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChatBox_C::AddEntry(const struct FText& CharacterName, const struct FText& Message, const struct FLinearColor& NameColor, const struct FText& Prefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddEntry");

	UBP_ChatBox_C_AddEntry_Params params;
	params.CharacterName = CharacterName;
	params.Message = Message;
	params.NameColor = NameColor;
	params.Prefix = Prefix;

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
