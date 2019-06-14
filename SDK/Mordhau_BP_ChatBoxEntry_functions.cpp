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

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetToolTipText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ChatBoxEntry_C::GetToolTipText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetToolTipText_1");

	UBP_ChatBoxEntry_C_GetToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.UpdateEntryMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   New_Message                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Text_Color                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_ChatBoxEntry_C::UpdateEntryMessage(const struct FText& New_Message, const struct FLinearColor& Text_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.UpdateEntryMessage");

	UBP_ChatBoxEntry_C_UpdateEntryMessage_Params params;
	params.New_Message = New_Message;
	params.Text_Color = Text_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ChatBoxEntry_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetVisibility_1");

	UBP_ChatBoxEntry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Get_ALL_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ChatBoxEntry_C::Get_ALL_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Get_ALL_Text_1");

	UBP_ChatBoxEntry_C_Get_ALL_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            NameColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_ChatBoxEntry_C::SetupEntry(const struct FText& PlayerName, const struct FText& Message, const struct FText& Prefix, const struct FLinearColor& NameColor, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry");

	UBP_ChatBoxEntry_C_SetupEntry_Params params;
	params.PlayerName = PlayerName;
	params.Message = Message;
	params.Prefix = Prefix;
	params.NameColor = NameColor;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ChatBoxEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UBP_ChatBoxEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBoxEntry_C::ContextButtonClicked(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked");

	UBP_ChatBoxEntry_C_ContextButtonClicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBoxEntry_C::ContextButtonClicked2(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked2");

	UBP_ChatBoxEntry_C_ContextButtonClicked2_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBoxEntry_C::ContextButtonClicked3(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked3");

	UBP_ChatBoxEntry_C_ContextButtonClicked3_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ExecuteUbergraph_BP_ChatBoxEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChatBoxEntry_C::ExecuteUbergraph_BP_ChatBoxEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ExecuteUbergraph_BP_ChatBoxEntry");

	UBP_ChatBoxEntry_C_ExecuteUbergraph_BP_ChatBoxEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
