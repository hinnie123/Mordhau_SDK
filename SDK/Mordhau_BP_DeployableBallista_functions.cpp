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

// Function BP_DeployableBallista.BP_DeployableBallista_C.ClearFireEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DeployableBallista_C::ClearFireEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.ClearFireEffects");

	ABP_DeployableBallista_C_ClearFireEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_Fire
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DeployableBallista_C::OnRep_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_Fire");

	ABP_DeployableBallista_C_OnRep_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_Ammo
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DeployableBallista_C::OnRep_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_Ammo");

	ABP_DeployableBallista_C_OnRep_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_InitialRegeneration
// (BlueprintCallable, BlueprintEvent)

void ABP_DeployableBallista_C::OnRep_InitialRegeneration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_InitialRegeneration");

	ABP_DeployableBallista_C_OnRep_InitialRegeneration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.CanDrive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DeployableBallista_C::CanDrive(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.CanDrive");

	ABP_DeployableBallista_C_CanDrive_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.PostProcessCameraPOV
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPOV*                   InPOV                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPOV                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPOV ABP_DeployableBallista_C::PostProcessCameraPOV(struct FPOV* InPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.PostProcessCameraPOV");

	ABP_DeployableBallista_C_PostProcessCameraPOV_Params params;
	params.InPOV = InPOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_State
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DeployableBallista_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_State");

	ABP_DeployableBallista_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeployableBallista_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.UserConstructionScript");

	ABP_DeployableBallista_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Fire_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeployableBallista_C::InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Fire_K2Node_InputActionEvent_2");

	ABP_DeployableBallista_C_InpActEvt_Fire_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeployableBallista_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1");

	ABP_DeployableBallista_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeployableBallista_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveBeginPlay");

	ABP_DeployableBallista_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.FireBallista
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_DeployableBallista_C::FireBallista(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.FireBallista");

	ABP_DeployableBallista_C_FireBallista_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.UpdateAnimationFor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMordhauAnimInstance**   AnimInst                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::UpdateAnimationFor(class AMordhauCharacter** Character, class UMordhauAnimInstance** AnimInst, float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.UpdateAnimationFor");

	ABP_DeployableBallista_C_UpdateAnimationFor_Params params;
	params.Character = Character;
	params.AnimInst = AnimInst;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.UpdateFPCameraFor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRotationOnly                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::UpdateFPCameraFor(class AMordhauCharacter** Character, float* DeltaSeconds, bool* bRotationOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.UpdateFPCameraFor");

	ABP_DeployableBallista_C_UpdateFPCameraFor_Params params;
	params.Character = Character;
	params.DeltaSeconds = DeltaSeconds;
	params.bRotationOnly = bRotationOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.OnDied");

	ABP_DeployableBallista_C_OnDied_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.OnCosmeticHit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMordhauDamageType*            DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.OnCosmeticHit");

	ABP_DeployableBallista_C_OnCosmeticHit_Params params;
	params.DamageType = DamageType;
	params.SubType = SubType;
	params.Hit = Hit;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.BPLODTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::BPLODTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.BPLODTick");

	ABP_DeployableBallista_C_BPLODTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_19
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::InpAxisEvt_Look_Up_K2Node_InputAxisEvent_19(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_19");

	ABP_DeployableBallista_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_19_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_5");

	ABP_DeployableBallista_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveAnyDamage");

	ABP_DeployableBallista_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.ReplenishAmmo
// (BlueprintCallable, BlueprintEvent)

void ABP_DeployableBallista_C::ReplenishAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.ReplenishAmmo");

	ABP_DeployableBallista_C_ReplenishAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_DeployableBallista_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveDestroyed");

	ABP_DeployableBallista_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableBallista.BP_DeployableBallista_C.ExecuteUbergraph_BP_DeployableBallista
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableBallista_C::ExecuteUbergraph_BP_DeployableBallista(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableBallista.BP_DeployableBallista_C.ExecuteUbergraph_BP_DeployableBallista");

	ABP_DeployableBallista_C_ExecuteUbergraph_BP_DeployableBallista_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
