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

// Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.RefreshStats
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerStatsMenu_C::RefreshStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.RefreshStats");

	UBP_PlayerStatsMenu_C_RefreshStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerStatsMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.OnShown");

	UBP_PlayerStatsMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.ExecuteUbergraph_BP_PlayerStatsMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerStatsMenu_C::ExecuteUbergraph_BP_PlayerStatsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.ExecuteUbergraph_BP_PlayerStatsMenu");

	UBP_PlayerStatsMenu_C_ExecuteUbergraph_BP_PlayerStatsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
