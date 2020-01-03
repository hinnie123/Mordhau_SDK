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

// Function BP_MordhauProjectile.BP_MordhauProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauProjectile.BP_MordhauProjectile_C.UserConstructionScript");

	ABP_MordhauProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauProjectile.BP_MordhauProjectile_C.OnProjectileDamagedCharacter
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWillKill                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WorldLocation                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauProjectile_C::OnProjectileDamagedCharacter(class AAdvancedCharacter** Character, bool* bWillKill, struct FVector* WorldLocation, struct FName* bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauProjectile.BP_MordhauProjectile_C.OnProjectileDamagedCharacter");

	ABP_MordhauProjectile_C_OnProjectileDamagedCharacter_Params params;
	params.Character = Character;
	params.bWillKill = bWillKill;
	params.WorldLocation = WorldLocation;
	params.bone = bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauProjectile.BP_MordhauProjectile_C.ExecuteUbergraph_BP_MordhauProjectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauProjectile_C::ExecuteUbergraph_BP_MordhauProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauProjectile.BP_MordhauProjectile_C.ExecuteUbergraph_BP_MordhauProjectile");

	ABP_MordhauProjectile_C_ExecuteUbergraph_BP_MordhauProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
