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

// Function BP_HordeHUD.BP_HordeHUD_C.ShowSkillTree
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeHUD_C::ShowSkillTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.ShowSkillTree");

	ABP_HordeHUD_C_ShowSkillTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.CreateSkillTree
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeHUD_C::CreateSkillTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.CreateSkillTree");

	ABP_HordeHUD_C_CreateSkillTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.UserConstructionScript");

	ABP_HordeHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordeHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.ReceiveBeginPlay");

	ABP_HordeHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.UseMinimalHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeHUD_C::UseMinimalHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.UseMinimalHUD");

	ABP_HordeHUD_C_UseMinimalHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.UseFullHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeHUD_C::UseFullHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.UseFullHUD");

	ABP_HordeHUD_C_UseFullHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.OnGameStateReplicated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeHUD_C::OnGameStateReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.OnGameStateReplicated");

	ABP_HordeHUD_C_OnGameStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.HideMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeHUD_C::HideMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.HideMainMenu");

	ABP_HordeHUD_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.ShowMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ArmoryStates>*   Armory_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeHUD_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates>* Armory_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.ShowMainMenu");

	ABP_HordeHUD_C_ShowMainMenu_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeHUD.BP_HordeHUD_C.ExecuteUbergraph_BP_HordeHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeHUD_C::ExecuteUbergraph_BP_HordeHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.ExecuteUbergraph_BP_HordeHUD");

	ABP_HordeHUD_C_ExecuteUbergraph_BP_HordeHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
