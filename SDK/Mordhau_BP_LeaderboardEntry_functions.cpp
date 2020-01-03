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

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.RefreshAvatar
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LeaderboardEntry_C::RefreshAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.RefreshAvatar");

	UBP_LeaderboardEntry_C_RefreshAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMRText_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_LeaderboardEntry_C::Get_MMRText_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMRText_ColorAndOpacity_1");

	UBP_LeaderboardEntry_C_Get_MMRText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.GetToolTipText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_LeaderboardEntry_C::GetToolTipText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.GetToolTipText_1");

	UBP_LeaderboardEntry_C_GetToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            RankPos                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MMR                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSteamID                SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LeaderboardEntry_C::Update(const struct FString& Name, int RankPos, int MMR, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Update");

	UBP_LeaderboardEntry_C_Update_Params params;
	params.Name = Name;
	params.RankPos = RankPos;
	params.MMR = MMR;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMR_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_LeaderboardEntry_C::Get_MMR_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMR_Text_1");

	UBP_LeaderboardEntry_C_Get_MMR_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_Rank_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_LeaderboardEntry_C::Get_Rank_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_Rank_Text_1");

	UBP_LeaderboardEntry_C_Get_Rank_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LeaderboardEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_LeaderboardEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ContextButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LeaderboardEntry_C::ContextButtonClicked(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ContextButtonClicked");

	UBP_LeaderboardEntry_C_ContextButtonClicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ExecuteUbergraph_BP_LeaderboardEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LeaderboardEntry_C::ExecuteUbergraph_BP_LeaderboardEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ExecuteUbergraph_BP_LeaderboardEntry");

	UBP_LeaderboardEntry_C_ExecuteUbergraph_BP_LeaderboardEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
