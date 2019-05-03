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

// Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseGoreMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.UserConstructionScript");

	ABP_BaseGoreMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BaseGoreMesh_C::BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature");

	ABP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.ExecuteUbergraph_BP_BaseGoreMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGoreMesh_C::ExecuteUbergraph_BP_BaseGoreMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.ExecuteUbergraph_BP_BaseGoreMesh");

	ABP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
