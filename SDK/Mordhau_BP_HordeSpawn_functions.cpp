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

// Function BP_HordeSpawn.BP_HordeSpawn_C.OnRep_SpawnActivatedCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeSpawn_C::OnRep_SpawnActivatedCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeSpawn.BP_HordeSpawn_C.OnRep_SpawnActivatedCounter");

	ABP_HordeSpawn_C_OnRep_SpawnActivatedCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeSpawn.BP_HordeSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeSpawn.BP_HordeSpawn_C.UserConstructionScript");

	ABP_HordeSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeSpawn.BP_HordeSpawn_C.HideFloaterDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_HordeSpawn_C::HideFloaterDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeSpawn.BP_HordeSpawn_C.HideFloaterDelayed");

	ABP_HordeSpawn_C_HideFloaterDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeSpawn.BP_HordeSpawn_C.ExecuteUbergraph_BP_HordeSpawn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeSpawn_C::ExecuteUbergraph_BP_HordeSpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeSpawn.BP_HordeSpawn_C.ExecuteUbergraph_BP_HordeSpawn");

	ABP_HordeSpawn_C_ExecuteUbergraph_BP_HordeSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
