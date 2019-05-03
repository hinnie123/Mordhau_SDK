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

// Function BP_PurchaseEffect.BP_PurchaseEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PurchaseEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PurchaseEffect.BP_PurchaseEffect_C.UserConstructionScript");

	ABP_PurchaseEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PurchaseEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveBeginPlay");

	ABP_PurchaseEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PurchaseEffect_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveTick");

	ABP_PurchaseEffect_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ExecuteUbergraph_BP_PurchaseEffect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PurchaseEffect_C::ExecuteUbergraph_BP_PurchaseEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PurchaseEffect.BP_PurchaseEffect_C.ExecuteUbergraph_BP_PurchaseEffect");

	ABP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
