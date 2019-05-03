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

// Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ThrowableEquipment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.UserConstructionScript");

	ABP_ThrowableEquipment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.AssignCustomizationToProjectile
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauProjectile**     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ThrowableEquipment_C::AssignCustomizationToProjectile(class AMordhauProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.AssignCustomizationToProjectile");

	ABP_ThrowableEquipment_C_AssignCustomizationToProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.ExecuteUbergraph_BP_ThrowableEquipment
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ThrowableEquipment_C::ExecuteUbergraph_BP_ThrowableEquipment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.ExecuteUbergraph_BP_ThrowableEquipment");

	ABP_ThrowableEquipment_C_ExecuteUbergraph_BP_ThrowableEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
