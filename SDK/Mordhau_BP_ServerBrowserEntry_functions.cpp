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

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ServerBrowserEntry_C::Update(const struct FServerSearchResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Update");

	UBP_ServerBrowserEntry_C_Update_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
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
