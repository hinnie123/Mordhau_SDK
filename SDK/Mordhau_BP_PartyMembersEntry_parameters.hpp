#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.Update
struct UBP_PartyMembersEntry_C_Update_Params
{
	struct FSteamID                                    SteamID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Banner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPartyLeader;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowKickButton;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowPromoteButton;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowJoinButton;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnFailure_10991A754B7F75B1C3A772A4D170C5CE
struct UBP_PartyMembersEntry_C_OnFailure_10991A754B7F75B1C3A772A4D170C5CE_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnSuccess_10991A754B7F75B1C3A772A4D170C5CE
struct UBP_PartyMembersEntry_C_OnSuccess_10991A754B7F75B1C3A772A4D170C5CE_Params
{
	struct FServerSearchResult                         Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_PartyMembersEntry_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_PartyMembersEntry_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_PartyMembersEntry_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.ExecuteUbergraph_BP_PartyMembersEntry
struct UBP_PartyMembersEntry_C_ExecuteUbergraph_BP_PartyMembersEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
