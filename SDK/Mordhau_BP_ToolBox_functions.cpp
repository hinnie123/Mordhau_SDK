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

// Function BP_ToolBox.BP_ToolBox_C.CycleObjectType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ToolBox_C::CycleObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.CycleObjectType");

	ABP_ToolBox_C_CycleObjectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.SetupMeshPreview
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ToolBox_C::SetupMeshPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.SetupMeshPreview");

	ABP_ToolBox_C_SetupMeshPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.DestroyMeshPreview
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ToolBox_C::DestroyMeshPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.DestroyMeshPreview");

	ABP_ToolBox_C_DestroyMeshPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.AddStaticMeshPreviewIfNone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ToolBox_C::AddStaticMeshPreviewIfNone(class UStaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.AddStaticMeshPreviewIfNone");

	ABP_ToolBox_C_AddStaticMeshPreviewIfNone_Params params;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.AddSkeletalMeshPreviewIfNone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ToolBox_C::AddSkeletalMeshPreviewIfNone(class USkeletalMesh* SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.AddSkeletalMeshPreviewIfNone");

	ABP_ToolBox_C_AddSkeletalMeshPreviewIfNone_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.RequestPlant
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// unsigned char                  ObjectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ToolBox_C::RequestPlant(const struct FVector& Location, const struct FRotator& Rotation, unsigned char ObjectType, class USceneComponent* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.RequestPlant");

	ABP_ToolBox_C_RequestPlant_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.ObjectType = ObjectType;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.ValidateSpot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlanterLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                CameraRotation1P               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ToolBox_C::ValidateSpot(const struct FVector& PlanterLocation, const struct FRotator& CameraRotation1P, const struct FVector& Offset, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.ValidateSpot");

	ABP_ToolBox_C_ValidateSpot_Params params;
	params.PlanterLocation = PlanterLocation;
	params.CameraRotation1P = CameraRotation1P;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (AttachToComponent != nullptr)
		*AttachToComponent = params.AttachToComponent;
}


// Function BP_ToolBox.BP_ToolBox_C.OnRequestModeSwitch
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ToolBox_C::OnRequestModeSwitch(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.OnRequestModeSwitch");

	ABP_ToolBox_C_OnRequestModeSwitch_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ToolBox.BP_ToolBox_C.OnRequestFire
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ToolBox_C::OnRequestFire(class AMordhauCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.OnRequestFire");

	ABP_ToolBox_C_OnRequestFire_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ToolBox.BP_ToolBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ToolBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.UserConstructionScript");

	ABP_ToolBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.UpdateEquipmentState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ToolBox_C::UpdateEquipmentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.UpdateEquipmentState");

	ABP_ToolBox_C_UpdateEquipmentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.LocalPlayerLateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ToolBox_C::LocalPlayerLateTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.LocalPlayerLateTick");

	ABP_ToolBox_C_LocalPlayerLateTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.ServerRequestPlant
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// unsigned char                  ObjectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ToolBox_C::ServerRequestPlant(const struct FVector& Location, const struct FRotator& Rotation, unsigned char ObjectType, class USceneComponent* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.ServerRequestPlant");

	ABP_ToolBox_C_ServerRequestPlant_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.ObjectType = ObjectType;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ToolBox.BP_ToolBox_C.ExecuteUbergraph_BP_ToolBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ToolBox_C::ExecuteUbergraph_BP_ToolBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ToolBox.BP_ToolBox_C.ExecuteUbergraph_BP_ToolBox");

	ABP_ToolBox_C_ExecuteUbergraph_BP_ToolBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
