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

// Function BP_PlayerWidget.BP_PlayerWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID_                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Player_Name                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Casual_Rank                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Banner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank_MMR                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           showCompRank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerWidget_C::Update(const struct FSteamID& SteamID_, const struct FText& Player_Name, int Casual_Rank, int Banner, int Rank_MMR, bool showCompRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerWidget.BP_PlayerWidget_C.Update");

	UBP_PlayerWidget_C_Update_Params params;
	params.SteamID_ = SteamID_;
	params.Player_Name = Player_Name;
	params.Casual_Rank = Casual_Rank;
	params.Banner = Banner;
	params.Rank_MMR = Rank_MMR;
	params.showCompRank = showCompRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
