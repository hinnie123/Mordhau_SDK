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

// Function BP_Medpack.BP_Medpack_C.CanHeldInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Medpack_C::CanHeldInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Medpack.BP_Medpack_C.CanHeldInteract");

	ABP_Medpack_C_CanHeldInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Medpack.BP_Medpack_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Medpack_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Medpack.BP_Medpack_C.CanInteract");

	ABP_Medpack_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Medpack.BP_Medpack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Medpack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Medpack.BP_Medpack_C.UserConstructionScript");

	ABP_Medpack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Medpack.BP_Medpack_C.FireProjectile
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator*               Orientation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            OwningController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ExpectedDelay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Medpack_C::FireProjectile(struct FVector* Origin, struct FRotator* Orientation, class AController** OwningController, float* ExpectedDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Medpack.BP_Medpack_C.FireProjectile");

	ABP_Medpack_C_FireProjectile_Params params;
	params.Origin = Origin;
	params.Orientation = Orientation;
	params.OwningController = OwningController;
	params.ExpectedDelay = ExpectedDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Medpack.BP_Medpack_C.OnLoadedChanged
// (Event, Public, BlueprintEvent)

void ABP_Medpack_C::OnLoadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Medpack.BP_Medpack_C.OnLoadedChanged");

	ABP_Medpack_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Medpack.BP_Medpack_C.OnHeldInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Medpack_C::OnHeldInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Medpack.BP_Medpack_C.OnHeldInteractionStart");

	ABP_Medpack_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Medpack.BP_Medpack_C.ExecuteUbergraph_BP_Medpack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Medpack_C::ExecuteUbergraph_BP_Medpack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Medpack.BP_Medpack_C.ExecuteUbergraph_BP_Medpack");

	ABP_Medpack_C_ExecuteUbergraph_BP_Medpack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
