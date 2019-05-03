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

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Consume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DeliverableEquipment_C::Consume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Consume");

	ABP_DeliverableEquipment_C_Consume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeliverableEquipment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.UserConstructionScript");

	ABP_DeliverableEquipment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnThud
// (Event, Public, BlueprintEvent)

void ABP_DeliverableEquipment_C::OnThud()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnThud");

	ABP_DeliverableEquipment_C_OnThud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.FireProjectile
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator*               Orientation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            OwningController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ExpectedDelay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeliverableEquipment_C::FireProjectile(struct FVector* Origin, struct FRotator* Orientation, class AController** OwningController, float* ExpectedDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.FireProjectile");

	ABP_DeliverableEquipment_C_FireProjectile_Params params;
	params.Origin = Origin;
	params.Orientation = Orientation;
	params.OwningController = OwningController;
	params.ExpectedDelay = ExpectedDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeliverableEquipment_C::OnPickedUp(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnPickedUp");

	ABP_DeliverableEquipment_C_OnPickedUp_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.ExecuteUbergraph_BP_DeliverableEquipment
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeliverableEquipment_C::ExecuteUbergraph_BP_DeliverableEquipment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.ExecuteUbergraph_BP_DeliverableEquipment");

	ABP_DeliverableEquipment_C_ExecuteUbergraph_BP_DeliverableEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
