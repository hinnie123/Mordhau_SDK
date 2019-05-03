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

// Function BP_Crosshair.BP_Crosshair_C.TriggerDamageIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Render_Angle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Crosshair_C::TriggerDamageIndicator(float Render_Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.TriggerDamageIndicator");

	UBP_Crosshair_C_TriggerDamageIndicator_Params params;
	params.Render_Angle = Render_Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crosshair.BP_Crosshair_C.UpdateCrosshair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Crosshair_C::UpdateCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.UpdateCrosshair");

	UBP_Crosshair_C_UpdateCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crosshair.BP_Crosshair_C.PlayHitmarkerAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUMGSequencePlayMode> PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Crosshair_C::PlayHitmarkerAnimation(class UWidgetAnimation* Anim, float Speed, TEnumAsByte<EUMGSequencePlayMode> PlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.PlayHitmarkerAnimation");

	UBP_Crosshair_C_PlayHitmarkerAnimation_Params params;
	params.Anim = Anim;
	params.Speed = Speed;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crosshair.BP_Crosshair_C.ClampAngleToSide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSideLeft                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ClampedAngle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Crosshair_C::ClampAngleToSide(float Angle, bool isSideLeft, float* ClampedAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.ClampAngleToSide");

	UBP_Crosshair_C_ClampAngleToSide_Params params;
	params.Angle = Angle;
	params.isSideLeft = isSideLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClampedAngle != nullptr)
		*ClampedAngle = params.ClampedAngle;
}


// Function BP_Crosshair.BP_Crosshair_C.ShowHitMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HitZoneParam                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Crosshair_C::ShowHitMarker(int HitZoneParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.ShowHitMarker");

	UBP_Crosshair_C_ShowHitMarker_Params params;
	params.HitZoneParam = HitZoneParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crosshair.BP_Crosshair_C.ClampAngleToDirectionalZone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ClampedAngle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Crosshair_C::ClampAngleToDirectionalZone(float Angle, float* ClampedAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.ClampAngleToDirectionalZone");

	UBP_Crosshair_C_ClampAngleToDirectionalZone_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClampedAngle != nullptr)
		*ClampedAngle = params.ClampedAngle;
}


// Function BP_Crosshair.BP_Crosshair_C.Get_Crosshair_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_Crosshair_C::Get_Crosshair_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.Get_Crosshair_Visibility_1");

	UBP_Crosshair_C_Get_Crosshair_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crosshair.BP_Crosshair_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Crosshair_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.Tick");

	UBP_Crosshair_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crosshair.BP_Crosshair_C.On Hitmarker Animation Finish
// (BlueprintCallable, BlueprintEvent)

void UBP_Crosshair_C::On_Hitmarker_Animation_Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.On Hitmarker Animation Finish");

	UBP_Crosshair_C_On_Hitmarker_Animation_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crosshair.BP_Crosshair_C.ExecuteUbergraph_BP_Crosshair
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Crosshair_C::ExecuteUbergraph_BP_Crosshair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.ExecuteUbergraph_BP_Crosshair");

	UBP_Crosshair_C_ExecuteUbergraph_BP_Crosshair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
