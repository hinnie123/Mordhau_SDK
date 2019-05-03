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

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetTextColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_ServerBrowserEntry_C::GetTextColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetTextColorAndOpacity");

	UBP_ServerBrowserEntry_C_GetTextColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetPasswordVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ServerBrowserEntry_C::GetPasswordVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetPasswordVisibility");

	UBP_ServerBrowserEntry_C_GetPasswordVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetVacVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ServerBrowserEntry_C::GetVacVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetVacVisibility");

	UBP_ServerBrowserEntry_C_GetVacVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetOfficialVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ServerBrowserEntry_C::GetOfficialVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetOfficialVisibility");

	UBP_ServerBrowserEntry_C_GetOfficialVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerBrowser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ServerBrowser_C*     ServerBrowser                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_ServerBrowserEntry_C::GetServerBrowser(class UBP_ServerBrowser_C** ServerBrowser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerBrowser");

	UBP_ServerBrowserEntry_C_GetServerBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerBrowser != nullptr)
		*ServerBrowser = params.ServerBrowser;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowserEntry_C::Select(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Select");

	UBP_ServerBrowserEntry_C_Select_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetGameModeText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ServerBrowserEntry_C::GetGameModeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetGameModeText");

	UBP_ServerBrowserEntry_C_GetGameModeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetMapText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ServerBrowserEntry_C::GetMapText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetMapText");

	UBP_ServerBrowserEntry_C_GetMapText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ServerBrowserEntry_C::GetServerNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerNameText");

	UBP_ServerBrowserEntry_C_GetServerNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetPingText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ServerBrowserEntry_C::GetPingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetPingText");

	UBP_ServerBrowserEntry_C_GetPingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetMaxPlayersText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ServerBrowserEntry_C::GetMaxPlayersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetMaxPlayersText");

	UBP_ServerBrowserEntry_C_GetMaxPlayersText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetCurrentPlayersText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ServerBrowserEntry_C::GetCurrentPlayersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetCurrentPlayersText");

	UBP_ServerBrowserEntry_C_GetCurrentPlayersText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ServerBrowserEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Construct");

	UBP_ServerBrowserEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowserEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature");

	UBP_ServerBrowserEntry_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.ExecuteUbergraph_BP_ServerBrowserEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowserEntry_C::ExecuteUbergraph_BP_ServerBrowserEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.ExecuteUbergraph_BP_ServerBrowserEntry");

	UBP_ServerBrowserEntry_C_ExecuteUbergraph_BP_ServerBrowserEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
