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

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowObjectives
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineHUD_C::ShowObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowObjectives");

	ABP_FrontlineHUD_C_ShowObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineHUD.BP_FrontlineHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.UserConstructionScript");

	ABP_FrontlineHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrontlineHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.ReceiveBeginPlay");

	ABP_FrontlineHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseMinimalHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineHUD_C::UseMinimalHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseMinimalHUD");

	ABP_FrontlineHUD_C_UseMinimalHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseFullHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineHUD_C::UseFullHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseFullHUD");

	ABP_FrontlineHUD_C_UseFullHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineHUD.BP_FrontlineHUD_C.OnGameStateReplicated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineHUD_C::OnGameStateReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.OnGameStateReplicated");

	ABP_FrontlineHUD_C_OnGameStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineHUD.BP_FrontlineHUD_C.HideMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineHUD_C::HideMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.HideMainMenu");

	ABP_FrontlineHUD_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ArmoryStates>*   Armory_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineHUD_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates>* Armory_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowMainMenu");

	ABP_FrontlineHUD_C_ShowMainMenu_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ExecuteUbergraph_BP_FrontlineHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontlineHUD_C::ExecuteUbergraph_BP_FrontlineHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.ExecuteUbergraph_BP_FrontlineHUD");

	ABP_FrontlineHUD_C_ExecuteUbergraph_BP_FrontlineHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
