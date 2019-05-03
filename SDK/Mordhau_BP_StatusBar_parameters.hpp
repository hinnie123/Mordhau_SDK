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

// Function BP_StatusBar.BP_StatusBar_C.Get_VehicleNameText_Text_1
struct UBP_StatusBar_C_Get_VehicleNameText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_StatusBar.BP_StatusBar_C.GetVisibility_1
struct UBP_StatusBar_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.Get_VehicleHealthBar_Percent_1
struct UBP_StatusBar_C_Get_VehicleHealthBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.createDynamicMaterial
struct UBP_StatusBar_C_createDynamicMaterial_Params
{
	class UMaterialInterface*                          Parent_Material;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                Progress_Bar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       Parameter_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstanceDymanicReference;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.SetObservedCharacter
struct UBP_StatusBar_C_SetObservedCharacter_Params
{
	class AMordhauCharacter*                           NewObserved;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.getDelayedStaminaPercentage
struct UBP_StatusBar_C_getDelayedStaminaPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.getDelayedHealthPercentage
struct UBP_StatusBar_C_getDelayedHealthPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetageText
struct UBP_StatusBar_C_getStaminaPercetageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_StatusBar.BP_StatusBar_C.getHealthPercentageText
struct UBP_StatusBar_C_getHealthPercentageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetage
struct UBP_StatusBar_C_getStaminaPercetage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.getHealthPercentage
struct UBP_StatusBar_C_getHealthPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.Construct
struct UBP_StatusBar_C_Construct_Params
{
};

// Function BP_StatusBar.BP_StatusBar_C.Tick
struct UBP_StatusBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StatusBar.BP_StatusBar_C.ExecuteUbergraph_BP_StatusBar
struct UBP_StatusBar_C_ExecuteUbergraph_BP_StatusBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
