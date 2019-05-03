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

// Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_BastardSword_WiredHandle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.UserConstructionScript");

	UBP_BastardSword_WiredHandle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_BastardSword_WiredHandle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.ReceiveBeginPlay");

	UBP_BastardSword_WiredHandle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BastardSword_WiredHandle_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.ReceiveActorBeginOverlap");

	UBP_BastardSword_WiredHandle_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BastardSword_WiredHandle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.ReceiveTick");

	UBP_BastardSword_WiredHandle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.ExecuteUbergraph_BP_BastardSword_WiredHandle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BastardSword_WiredHandle_C::ExecuteUbergraph_BP_BastardSword_WiredHandle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BastardSword_WiredHandle.BP_BastardSword_WiredHandle_C.ExecuteUbergraph_BP_BastardSword_WiredHandle");

	UBP_BastardSword_WiredHandle_C_ExecuteUbergraph_BP_BastardSword_WiredHandle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
