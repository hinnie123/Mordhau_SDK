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

// Function BP_MordhauCameraComponent.BP_MordhauCameraComponent_C.ComputeCameraPOV
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPOV                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPOV UBP_MordhauCameraComponent_C::ComputeCameraPOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCameraComponent.BP_MordhauCameraComponent_C.ComputeCameraPOV");

	UBP_MordhauCameraComponent_C_ComputeCameraPOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
