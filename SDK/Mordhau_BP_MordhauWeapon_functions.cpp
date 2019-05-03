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

// Function BP_MordhauWeapon.BP_MordhauWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauWeapon.BP_MordhauWeapon_C.UserConstructionScript");

	ABP_MordhauWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauWeapon.BP_MordhauWeapon_C.StartThrownTrail
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauWeapon_C::StartThrownTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauWeapon.BP_MordhauWeapon_C.StartThrownTrail");

	ABP_MordhauWeapon_C_StartThrownTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauWeapon.BP_MordhauWeapon_C.StopThrownTrail
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauWeapon_C::StopThrownTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauWeapon.BP_MordhauWeapon_C.StopThrownTrail");

	ABP_MordhauWeapon_C_StopThrownTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauWeapon.BP_MordhauWeapon_C.ExecuteUbergraph_BP_MordhauWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauWeapon_C::ExecuteUbergraph_BP_MordhauWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauWeapon.BP_MordhauWeapon_C.ExecuteUbergraph_BP_MordhauWeapon");

	ABP_MordhauWeapon_C_ExecuteUbergraph_BP_MordhauWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
