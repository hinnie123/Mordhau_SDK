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

// Function BP_Crosshair.BP_Crosshair_C.TriggerDamageIndicator
struct UBP_Crosshair_C_TriggerDamageIndicator_Params
{
	float                                              Render_Angle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crosshair.BP_Crosshair_C.UpdateCrosshair
struct UBP_Crosshair_C_UpdateCrosshair_Params
{
};

// Function BP_Crosshair.BP_Crosshair_C.PlayHitmarkerAnimation
struct UBP_Crosshair_C_PlayHitmarkerAnimation_Params
{
	class UWidgetAnimation*                            Anim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crosshair.BP_Crosshair_C.ClampAngleToSide
struct UBP_Crosshair_C_ClampAngleToSide_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSideLeft;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClampedAngle;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crosshair.BP_Crosshair_C.ShowHitMarker
struct UBP_Crosshair_C_ShowHitMarker_Params
{
	int                                                HitZoneParam;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crosshair.BP_Crosshair_C.ClampAngleToDirectionalZone
struct UBP_Crosshair_C_ClampAngleToDirectionalZone_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClampedAngle;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crosshair.BP_Crosshair_C.Get_Crosshair_Visibility_1
struct UBP_Crosshair_C_Get_Crosshair_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Crosshair.BP_Crosshair_C.Tick
struct UBP_Crosshair_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crosshair.BP_Crosshair_C.On Hitmarker Animation Finish
struct UBP_Crosshair_C_On_Hitmarker_Animation_Finish_Params
{
};

// Function BP_Crosshair.BP_Crosshair_C.ExecuteUbergraph_BP_Crosshair
struct UBP_Crosshair_C_ExecuteUbergraph_BP_Crosshair_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
