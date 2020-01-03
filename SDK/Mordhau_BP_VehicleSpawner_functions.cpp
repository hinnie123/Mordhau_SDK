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

// Function BP_VehicleSpawner.BP_VehicleSpawner_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawner_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.Activate");

	ABP_VehicleSpawner_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.TrySpawnVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawner_C::TrySpawnVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.TrySpawnVehicle");

	ABP_VehicleSpawner_C_TrySpawnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawner_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.Deactivate");

	ABP_VehicleSpawner_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.UserConstructionScript");

	ABP_VehicleSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.ReceiveBeginPlay");

	ABP_VehicleSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.SpawnVehicle
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleSpawner_C::SpawnVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.SpawnVehicle");

	ABP_VehicleSpawner_C_SpawnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSpawner_C::ExecuteUbergraph_BP_VehicleSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner");

	ABP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
