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

// Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeEnemy_Shield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.UserConstructionScript");

	ABP_HordeEnemy_Shield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.BPLODTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_Shield_C::BPLODTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.BPLODTick");

	ABP_HordeEnemy_Shield_C_BPLODTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.ExecuteUbergraph_BP_HordeEnemy_Shield
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordeEnemy_Shield_C::ExecuteUbergraph_BP_HordeEnemy_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.ExecuteUbergraph_BP_HordeEnemy_Shield");

	ABP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
