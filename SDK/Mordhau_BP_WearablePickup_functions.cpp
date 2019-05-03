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

// Function BP_WearablePickup.BP_WearablePickup_C.EquipIfUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WearablePickup_C::EquipIfUpgrade(class AMordhauCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.EquipIfUpgrade");

	ABP_WearablePickup_C_EquipIfUpgrade_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WearablePickup.BP_WearablePickup_C.Equip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WearablePickup_C::Equip(class AMordhauCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.Equip");

	ABP_WearablePickup_C_Equip_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WearablePickup.BP_WearablePickup_C.IsAnUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_BattleRoyaleCharacter_C* Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WearablePickup_C::IsAnUpgrade(class ABP_BattleRoyaleCharacter_C* Char, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.IsAnUpgrade");

	ABP_WearablePickup_C_IsAnUpgrade_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_WearablePickup.BP_WearablePickup_C.AssignToCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACustomizationReplicationActor* CustomizatonReplicationActor   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WearablePickup_C::AssignToCharacter(class AMordhauCharacter* Character, class ACustomizationReplicationActor* CustomizatonReplicationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.AssignToCharacter");

	ABP_WearablePickup_C_AssignToCharacter_Params params;
	params.Character = Character;
	params.CustomizatonReplicationActor = CustomizatonReplicationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WearablePickup.BP_WearablePickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WearablePickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.UserConstructionScript");

	ABP_WearablePickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WearablePickup.BP_WearablePickup_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WearablePickup_C::OnInteractionStart(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.OnInteractionStart");

	ABP_WearablePickup_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WearablePickup.BP_WearablePickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WearablePickup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.ReceiveBeginPlay");

	ABP_WearablePickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WearablePickup.BP_WearablePickup_C.ExecuteUbergraph_BP_WearablePickup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WearablePickup_C::ExecuteUbergraph_BP_WearablePickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.ExecuteUbergraph_BP_WearablePickup");

	ABP_WearablePickup_C_ExecuteUbergraph_BP_WearablePickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
