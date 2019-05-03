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

// Function BP_OutGoreMesh.BP_OutGoreMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OutGoreMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OutGoreMesh.BP_OutGoreMesh_C.UserConstructionScript");

	ABP_OutGoreMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OutGoreMesh.BP_OutGoreMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OutGoreMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OutGoreMesh.BP_OutGoreMesh_C.ReceiveBeginPlay");

	ABP_OutGoreMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OutGoreMesh.BP_OutGoreMesh_C.ExecuteUbergraph_BP_OutGoreMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OutGoreMesh_C::ExecuteUbergraph_BP_OutGoreMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OutGoreMesh.BP_OutGoreMesh_C.ExecuteUbergraph_BP_OutGoreMesh");

	ABP_OutGoreMesh_C_ExecuteUbergraph_BP_OutGoreMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
