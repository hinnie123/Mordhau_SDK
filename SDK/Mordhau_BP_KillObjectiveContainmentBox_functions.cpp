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

// Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KillObjectiveContainmentBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.UserConstructionScript");

	ABP_KillObjectiveContainmentBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillObjectiveContainmentBox_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ReceiveActorEndOverlap");

	ABP_KillObjectiveContainmentBox_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillObjectiveContainmentBox_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ReceiveActorBeginOverlap");

	ABP_KillObjectiveContainmentBox_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ExecuteUbergraph_BP_KillObjectiveContainmentBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillObjectiveContainmentBox_C::ExecuteUbergraph_BP_KillObjectiveContainmentBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillObjectiveContainmentBox.BP_KillObjectiveContainmentBox_C.ExecuteUbergraph_BP_KillObjectiveContainmentBox");

	ABP_KillObjectiveContainmentBox_C_ExecuteUbergraph_BP_KillObjectiveContainmentBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
