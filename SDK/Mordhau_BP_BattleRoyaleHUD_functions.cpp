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

// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ShowBattleRoyaleEndScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::ShowBattleRoyaleEndScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ShowBattleRoyaleEndScreen");

	ABP_BattleRoyaleHUD_C_ShowBattleRoyaleEndScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UserConstructionScript");

	ABP_BattleRoyaleHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ReceiveBeginPlay");

	ABP_BattleRoyaleHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UseMinimalHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::UseMinimalHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UseMinimalHUD");

	ABP_BattleRoyaleHUD_C_UseMinimalHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UseFullHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::UseFullHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.UseFullHUD");

	ABP_BattleRoyaleHUD_C_UseFullHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.OnGameStateReplicated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::OnGameStateReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.OnGameStateReplicated");

	ABP_BattleRoyaleHUD_C_OnGameStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.HideMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleHUD_C::HideMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.HideMainMenu");

	ABP_BattleRoyaleHUD_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ShowMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ArmoryStates>*   Armory_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleHUD_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates>* Armory_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ShowMainMenu");

	ABP_BattleRoyaleHUD_C_ShowMainMenu_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ExecuteUbergraph_BP_BattleRoyaleHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleHUD_C::ExecuteUbergraph_BP_BattleRoyaleHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C.ExecuteUbergraph_BP_BattleRoyaleHUD");

	ABP_BattleRoyaleHUD_C_ExecuteUbergraph_BP_BattleRoyaleHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
