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

// Function BP_Catapult.BP_Catapult_C.PostProcessCameraPOV
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPOV*                   InPOV                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPOV                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPOV ABP_Catapult_C::PostProcessCameraPOV(struct FPOV* InPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.PostProcessCameraPOV");

	ABP_Catapult_C_PostProcessCameraPOV_Params params;
	params.InPOV = InPOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Catapult.BP_Catapult_C.AdjustArm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::AdjustArm(int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.AdjustArm");

	ABP_Catapult_C_AdjustArm_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)

void ABP_Catapult_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.OnRep_State");

	ABP_Catapult_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Catapult_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.UserConstructionScript");

	ABP_Catapult_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Catapult_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2");

	ABP_Catapult_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.InpActEvt_Fire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Catapult_C::InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_Fire_K2Node_InputActionEvent_1");

	ABP_Catapult_C_InpActEvt_Fire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Catapult_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2");

	ABP_Catapult_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Catapult_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1");

	ABP_Catapult_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.UpdateFPCameraFor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRotationOnly                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::UpdateFPCameraFor(class AMordhauCharacter** Character, float* DeltaSeconds, bool* bRotationOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.UpdateFPCameraFor");

	ABP_Catapult_C_UpdateFPCameraFor_Params params;
	params.Character = Character;
	params.DeltaSeconds = DeltaSeconds;
	params.bRotationOnly = bRotationOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.FireCatapult
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Catapult_C::FireCatapult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.FireCatapult");

	ABP_Catapult_C_FireCatapult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.ReceiveUnpossessed");

	ABP_Catapult_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.BPLODTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::BPLODTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.BPLODTick");

	ABP_Catapult_C_BPLODTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.RaiseArm
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Catapult_C::RaiseArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.RaiseArm");

	ABP_Catapult_C_RaiseArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.LowerArm
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Catapult_C::LowerArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.LowerArm");

	ABP_Catapult_C_LowerArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.OnDied");

	ABP_Catapult_C_OnDied_Params params;
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


// Function BP_Catapult.BP_Catapult_C.OnCosmeticHit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMordhauDamageType*            DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.OnCosmeticHit");

	ABP_Catapult_C_OnCosmeticHit_Params params;
	params.DamageType = DamageType;
	params.SubType = SubType;
	params.Hit = Hit;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Move Right_K2Node_InputAxisEvent_21
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::InpAxisEvt_Move_Right_K2Node_InputAxisEvent_21(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Move Right_K2Node_InputAxisEvent_21");

	ABP_Catapult_C_InpAxisEvt_Move_Right_K2Node_InputAxisEvent_21_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_36
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::InpAxisEvt_Look_Up_K2Node_InputAxisEvent_36(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_36");

	ABP_Catapult_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_36_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_7");

	ABP_Catapult_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Catapult_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.ReceiveBeginPlay");

	ABP_Catapult_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.OnStartedDriving
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::OnStartedDriving(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.OnStartedDriving");

	ABP_Catapult_C_OnStartedDriving_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.OnStoppedDriving
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::OnStoppedDriving(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.OnStoppedDriving");

	ABP_Catapult_C_OnStoppedDriving_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Catapult.BP_Catapult_C.ExecuteUbergraph_BP_Catapult
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Catapult_C::ExecuteUbergraph_BP_Catapult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.ExecuteUbergraph_BP_Catapult");

	ABP_Catapult_C_ExecuteUbergraph_BP_Catapult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
