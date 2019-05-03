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

// Function BP_HelmetPickup.BP_HelmetPickup_C.IsAnUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_BattleRoyaleCharacter_C** Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HelmetPickup_C::IsAnUpgrade(class ABP_BattleRoyaleCharacter_C** Char, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelmetPickup.BP_HelmetPickup_C.IsAnUpgrade");

	ABP_HelmetPickup_C_IsAnUpgrade_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_HelmetPickup.BP_HelmetPickup_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HelmetPickup_C::CanInteract(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelmetPickup.BP_HelmetPickup_C.CanInteract");

	ABP_HelmetPickup_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HelmetPickup.BP_HelmetPickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HelmetPickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelmetPickup.BP_HelmetPickup_C.UserConstructionScript");

	ABP_HelmetPickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelmetPickup.BP_HelmetPickup_C.AssignToCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACustomizationReplicationActor** CustomizatonReplicationActor   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HelmetPickup_C::AssignToCharacter(class AMordhauCharacter** Character, class ACustomizationReplicationActor** CustomizatonReplicationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelmetPickup.BP_HelmetPickup_C.AssignToCharacter");

	ABP_HelmetPickup_C_AssignToCharacter_Params params;
	params.Character = Character;
	params.CustomizatonReplicationActor = CustomizatonReplicationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HelmetPickup.BP_HelmetPickup_C.ExecuteUbergraph_BP_HelmetPickup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HelmetPickup_C::ExecuteUbergraph_BP_HelmetPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HelmetPickup.BP_HelmetPickup_C.ExecuteUbergraph_BP_HelmetPickup");

	ABP_HelmetPickup_C_ExecuteUbergraph_BP_HelmetPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
