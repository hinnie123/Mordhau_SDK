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

// Function BP_PommelProjectile.BP_PommelProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PommelProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PommelProjectile.BP_PommelProjectile_C.UserConstructionScript");

	ABP_PommelProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PommelProjectile.BP_PommelProjectile_C.OnProjectileFired
// (Event, Public, BlueprintEvent)

void ABP_PommelProjectile_C::OnProjectileFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PommelProjectile.BP_PommelProjectile_C.OnProjectileFired");

	ABP_PommelProjectile_C_OnProjectileFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PommelProjectile.BP_PommelProjectile_C.ExecuteUbergraph_BP_PommelProjectile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PommelProjectile_C::ExecuteUbergraph_BP_PommelProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PommelProjectile.BP_PommelProjectile_C.ExecuteUbergraph_BP_PommelProjectile");

	ABP_PommelProjectile_C_ExecuteUbergraph_BP_PommelProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
