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

// Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_Greatsword_AcademyHandle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.UserConstructionScript");

	UBP_Greatsword_AcademyHandle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_Greatsword_AcademyHandle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.ReceiveBeginPlay");

	UBP_Greatsword_AcademyHandle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Greatsword_AcademyHandle_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.ReceiveActorBeginOverlap");

	UBP_Greatsword_AcademyHandle_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Greatsword_AcademyHandle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.ReceiveTick");

	UBP_Greatsword_AcademyHandle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.ExecuteUbergraph_BP_Greatsword_AcademyHandle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Greatsword_AcademyHandle_C::ExecuteUbergraph_BP_Greatsword_AcademyHandle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Greatsword_AcademyHandle.BP_Greatsword_AcademyHandle_C.ExecuteUbergraph_BP_Greatsword_AcademyHandle");

	UBP_Greatsword_AcademyHandle_C_ExecuteUbergraph_BP_Greatsword_AcademyHandle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
