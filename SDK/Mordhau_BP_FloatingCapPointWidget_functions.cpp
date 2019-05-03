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

// Function BP_FloatingCapPointWidget.BP_FloatingCapPointWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*      InPoint                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FloatingCapPointWidget_C::Initialize(class ABP_CapturePoint_C* InPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FloatingCapPointWidget.BP_FloatingCapPointWidget_C.Initialize");

	UBP_FloatingCapPointWidget_C_Initialize_Params params;
	params.InPoint = InPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
