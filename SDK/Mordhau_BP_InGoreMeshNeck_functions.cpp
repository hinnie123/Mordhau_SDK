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

// Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InGoreMeshNeck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.UserConstructionScript");

	ABP_InGoreMeshNeck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InGoreMeshNeck_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.ReceiveBeginPlay");

	ABP_InGoreMeshNeck_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.ExecuteUbergraph_BP_InGoreMeshNeck
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_InGoreMeshNeck_C::ExecuteUbergraph_BP_InGoreMeshNeck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.ExecuteUbergraph_BP_InGoreMeshNeck");

	ABP_InGoreMeshNeck_C_ExecuteUbergraph_BP_InGoreMeshNeck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
