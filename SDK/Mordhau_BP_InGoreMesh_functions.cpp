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

// Function BP_InGoreMesh.BP_InGoreMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InGoreMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGoreMesh.BP_InGoreMesh_C.UserConstructionScript");

	ABP_InGoreMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGoreMesh.BP_InGoreMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InGoreMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGoreMesh.BP_InGoreMesh_C.ReceiveBeginPlay");

	ABP_InGoreMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGoreMesh.BP_InGoreMesh_C.ExecuteUbergraph_BP_InGoreMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_InGoreMesh_C::ExecuteUbergraph_BP_InGoreMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGoreMesh.BP_InGoreMesh_C.ExecuteUbergraph_BP_InGoreMesh");

	ABP_InGoreMesh_C_ExecuteUbergraph_BP_InGoreMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
