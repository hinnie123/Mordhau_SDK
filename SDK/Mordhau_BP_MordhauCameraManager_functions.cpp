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

// Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCameraManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.UserConstructionScript");

	ABP_MordhauCameraManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.OnHitFlash
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsDirectional                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCameraManager_C::OnHitFlash(bool* bIsDirectional, class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.OnHitFlash");

	ABP_MordhauCameraManager_C_OnHitFlash_Params params;
	params.bIsDirectional = bIsDirectional;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.ExecuteUbergraph_BP_MordhauCameraManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCameraManager_C::ExecuteUbergraph_BP_MordhauCameraManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.ExecuteUbergraph_BP_MordhauCameraManager");

	ABP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
