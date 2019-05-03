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

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.GetProfileWrapper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterProfileBPWrapper* Wrapper                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::GetProfileWrapper(class UCharacterProfileBPWrapper** Wrapper)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.GetProfileWrapper");

	ABP_MordhauCustomizationPlatform_C_GetProfileWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wrapper != nullptr)
		*Wrapper = params.Wrapper;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateEquipmentDollRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::UpdateEquipmentDollRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateEquipmentDollRotation");

	ABP_MordhauCustomizationPlatform_C_UpdateEquipmentDollRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDollRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::UpdateCharacterDollRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDollRotation");

	ABP_MordhauCustomizationPlatform_C_UpdateCharacterDollRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.TryUpdateCharacterDollInternal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCustomizationPlatform_C::TryUpdateCharacterDollInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.TryUpdateCharacterDollInternal");

	ABP_MordhauCustomizationPlatform_C_TryUpdateCharacterDollInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterProfile       Profile                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           OnlyUpdateMaterials            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantEquipmentSwitch         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DoPreviewPose                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviewPoseRandom              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::UpdateCharacterDoll(const struct FCharacterProfile& Profile, bool OnlyUpdateMaterials, bool InstantEquipmentSwitch, bool DoPreviewPose, int PreviewPoseRandom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDoll");

	ABP_MordhauCustomizationPlatform_C_UpdateCharacterDoll_Params params;
	params.Profile = Profile;
	params.OnlyUpdateMaterials = OnlyUpdateMaterials;
	params.InstantEquipmentSwitch = InstantEquipmentSwitch;
	params.DoPreviewPose = DoPreviewPose;
	params.PreviewPoseRandom = PreviewPoseRandom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::UpdateCamera(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCamera");

	ABP_MordhauCustomizationPlatform_C_UpdateCamera_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomCharacterDoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::ZoomCharacterDoll(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomCharacterDoll");

	ABP_MordhauCustomizationPlatform_C_ZoomCharacterDoll_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomEquipmentDoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::ZoomEquipmentDoll(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomEquipmentDoll");

	ABP_MordhauCustomizationPlatform_C_ZoomEquipmentDoll_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateCharacterDoll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Smooth                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::RotateCharacterDoll(float Delta, bool Smooth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateCharacterDoll");

	ABP_MordhauCustomizationPlatform_C_RotateCharacterDoll_Params params;
	params.Delta = Delta;
	params.Smooth = Smooth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyCharacterDoll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCustomizationPlatform_C::DestroyCharacterDoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyCharacterDoll");

	ABP_MordhauCustomizationPlatform_C_DestroyCharacterDoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyEquipmentDoll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCustomizationPlatform_C::DestroyEquipmentDoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyEquipmentDoll");

	ABP_MordhauCustomizationPlatform_C_DestroyEquipmentDoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateEquipmentDoll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Smooth                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::RotateEquipmentDoll(float Delta, bool Smooth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateEquipmentDoll");

	ABP_MordhauCustomizationPlatform_C_RotateEquipmentDoll_Params params;
	params.Delta = Delta;
	params.Smooth = Smooth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnCharacterDollIfNone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCustomizationPlatform_C::SpawnCharacterDollIfNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnCharacterDollIfNone");

	ABP_MordhauCustomizationPlatform_C_SpawnCharacterDollIfNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyDolls
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCustomizationPlatform_C::DestroyDolls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyDolls");

	ABP_MordhauCustomizationPlatform_C_DestroyDolls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnEquipment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EquipmentIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMordhauEquipment*       Equipment                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::SpawnEquipment(int EquipmentIndex, class AMordhauEquipment** Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnEquipment");

	ABP_MordhauCustomizationPlatform_C_SpawnEquipment_Params params;
	params.EquipmentIndex = EquipmentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Equipment != nullptr)
		*Equipment = params.Equipment;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCustomizationPlatform_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.Init");

	ABP_MordhauCustomizationPlatform_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCustomizationPlatform_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UserConstructionScript");

	ABP_MordhauCustomizationPlatform_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MordhauCustomizationPlatform_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveBeginPlay");

	ABP_MordhauCustomizationPlatform_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveTick");

	ABP_MordhauCustomizationPlatform_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ExecuteUbergraph_BP_MordhauCustomizationPlatform
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCustomizationPlatform_C::ExecuteUbergraph_BP_MordhauCustomizationPlatform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ExecuteUbergraph_BP_MordhauCustomizationPlatform");

	ABP_MordhauCustomizationPlatform_C_ExecuteUbergraph_BP_MordhauCustomizationPlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
