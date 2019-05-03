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

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.GetProfileWrapper
struct ABP_MordhauCustomizationPlatform_C_GetProfileWrapper_Params
{
	class UCharacterProfileBPWrapper*                  Wrapper;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateEquipmentDollRotation
struct ABP_MordhauCustomizationPlatform_C_UpdateEquipmentDollRotation_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDollRotation
struct ABP_MordhauCustomizationPlatform_C_UpdateCharacterDollRotation_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.TryUpdateCharacterDollInternal
struct ABP_MordhauCustomizationPlatform_C_TryUpdateCharacterDollInternal_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDoll
struct ABP_MordhauCustomizationPlatform_C_UpdateCharacterDoll_Params
{
	struct FCharacterProfile                           Profile;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OnlyUpdateMaterials;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantEquipmentSwitch;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DoPreviewPose;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviewPoseRandom;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCamera
struct ABP_MordhauCustomizationPlatform_C_UpdateCamera_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomCharacterDoll
struct ABP_MordhauCustomizationPlatform_C_ZoomCharacterDoll_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomEquipmentDoll
struct ABP_MordhauCustomizationPlatform_C_ZoomEquipmentDoll_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateCharacterDoll
struct ABP_MordhauCustomizationPlatform_C_RotateCharacterDoll_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Smooth;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyCharacterDoll
struct ABP_MordhauCustomizationPlatform_C_DestroyCharacterDoll_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyEquipmentDoll
struct ABP_MordhauCustomizationPlatform_C_DestroyEquipmentDoll_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateEquipmentDoll
struct ABP_MordhauCustomizationPlatform_C_RotateEquipmentDoll_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Smooth;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnCharacterDollIfNone
struct ABP_MordhauCustomizationPlatform_C_SpawnCharacterDollIfNone_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyDolls
struct ABP_MordhauCustomizationPlatform_C_DestroyDolls_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnEquipment
struct ABP_MordhauCustomizationPlatform_C_SpawnEquipment_Params
{
	int                                                EquipmentIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           Equipment;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.Init
struct ABP_MordhauCustomizationPlatform_C_Init_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UserConstructionScript
struct ABP_MordhauCustomizationPlatform_C_UserConstructionScript_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveBeginPlay
struct ABP_MordhauCustomizationPlatform_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveTick
struct ABP_MordhauCustomizationPlatform_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ExecuteUbergraph_BP_MordhauCustomizationPlatform
struct ABP_MordhauCustomizationPlatform_C_ExecuteUbergraph_BP_MordhauCustomizationPlatform_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
