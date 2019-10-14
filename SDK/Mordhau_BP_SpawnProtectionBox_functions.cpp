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

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Disable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnProtectionBox_C::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Disable");

	ABP_SpawnProtectionBox_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Enable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnProtectionBox_C::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Enable");

	ABP_SpawnProtectionBox_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnProtectionBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.UserConstructionScript");

	ABP_SpawnProtectionBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnProtectionBox_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorBeginOverlap");

	ABP_SpawnProtectionBox_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnProtectionBox_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorEndOverlap");

	ABP_SpawnProtectionBox_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ExecuteUbergraph_BP_SpawnProtectionBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnProtectionBox_C::ExecuteUbergraph_BP_SpawnProtectionBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ExecuteUbergraph_BP_SpawnProtectionBox");

	ABP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
