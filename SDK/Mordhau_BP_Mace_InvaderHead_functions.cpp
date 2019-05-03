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

// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_Mace_InvaderHead_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.UserConstructionScript");

	UBP_Mace_InvaderHead_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_Mace_InvaderHead_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveBeginPlay");

	UBP_Mace_InvaderHead_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Mace_InvaderHead_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveActorBeginOverlap");

	UBP_Mace_InvaderHead_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Mace_InvaderHead_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ReceiveTick");

	UBP_Mace_InvaderHead_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ExecuteUbergraph_BP_Mace_InvaderHead
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Mace_InvaderHead_C::ExecuteUbergraph_BP_Mace_InvaderHead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mace_InvaderHead.BP_Mace_InvaderHead_C.ExecuteUbergraph_BP_Mace_InvaderHead");

	UBP_Mace_InvaderHead_C_ExecuteUbergraph_BP_Mace_InvaderHead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
