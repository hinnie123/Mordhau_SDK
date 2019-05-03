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

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Banner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPartyLeader                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowKickButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowPromoteButton              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowJoinButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyMembersEntry_C::Update(const struct FSteamID& SteamID, int Rank, int Banner, bool IsPartyLeader, bool ShowKickButton, bool ShowPromoteButton, bool ShowJoinButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.Update");

	UBP_PartyMembersEntry_C_Update_Params params;
	params.SteamID = SteamID;
	params.Rank = Rank;
	params.Banner = Banner;
	params.IsPartyLeader = IsPartyLeader;
	params.ShowKickButton = ShowKickButton;
	params.ShowPromoteButton = ShowPromoteButton;
	params.ShowJoinButton = ShowJoinButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnFailure_10991A754B7F75B1C3A772A4D170C5CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PartyMembersEntry_C::OnFailure_10991A754B7F75B1C3A772A4D170C5CE(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnFailure_10991A754B7F75B1C3A772A4D170C5CE");

	UBP_PartyMembersEntry_C_OnFailure_10991A754B7F75B1C3A772A4D170C5CE_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnSuccess_10991A754B7F75B1C3A772A4D170C5CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PartyMembersEntry_C::OnSuccess_10991A754B7F75B1C3A772A4D170C5CE(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnSuccess_10991A754B7F75B1C3A772A4D170C5CE");

	UBP_PartyMembersEntry_C_OnSuccess_10991A754B7F75B1C3A772A4D170C5CE_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyMembersEntry_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyMembersEntry_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyMembersEntry_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyMembersEntry_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyMembersEntry_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyMembersEntry_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.ExecuteUbergraph_BP_PartyMembersEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyMembersEntry_C::ExecuteUbergraph_BP_PartyMembersEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.ExecuteUbergraph_BP_PartyMembersEntry");

	UBP_PartyMembersEntry_C_ExecuteUbergraph_BP_PartyMembersEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
