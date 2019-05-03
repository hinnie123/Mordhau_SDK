#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ToolBox.BP_ToolBox_C.CycleObjectType
struct ABP_ToolBox_C_CycleObjectType_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.SetupMeshPreview
struct ABP_ToolBox_C_SetupMeshPreview_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.DestroyMeshPreview
struct ABP_ToolBox_C_DestroyMeshPreview_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.AddStaticMeshPreviewIfNone
struct ABP_ToolBox_C_AddStaticMeshPreviewIfNone_Params
{
	class UStaticMesh*                                 StaticMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ToolBox.BP_ToolBox_C.AddSkeletalMeshPreviewIfNone
struct ABP_ToolBox_C_AddSkeletalMeshPreviewIfNone_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ToolBox.BP_ToolBox_C.RequestPlant
struct ABP_ToolBox_C_RequestPlant_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	unsigned char                                      ObjectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ToolBox.BP_ToolBox_C.ValidateSpot
struct ABP_ToolBox_C_ValidateSpot_Params
{
	struct FVector                                     PlanterLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    CameraRotation1P;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ToolBox.BP_ToolBox_C.OnRequestModeSwitch
struct ABP_ToolBox_C_OnRequestModeSwitch_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ToolBox.BP_ToolBox_C.OnRequestFire
struct ABP_ToolBox_C_OnRequestFire_Params
{
	class AMordhauCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ToolBox.BP_ToolBox_C.UserConstructionScript
struct ABP_ToolBox_C_UserConstructionScript_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.UpdateEquipmentState
struct ABP_ToolBox_C_UpdateEquipmentState_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.LocalPlayerLateTick
struct ABP_ToolBox_C_LocalPlayerLateTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ToolBox.BP_ToolBox_C.ServerRequestPlant
struct ABP_ToolBox_C_ServerRequestPlant_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	unsigned char                                      ObjectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ToolBox.BP_ToolBox_C.ExecuteUbergraph_BP_ToolBox
struct ABP_ToolBox_C_ExecuteUbergraph_BP_ToolBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
