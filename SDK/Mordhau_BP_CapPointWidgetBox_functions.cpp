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

// Function BP_CapPointWidgetBox.BP_CapPointWidgetBox_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AControlPoint*>   Points                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           is_Base_Point                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CapPointWidgetBox_C::Initialize(bool is_Base_Point, TArray<class AControlPoint*>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapPointWidgetBox.BP_CapPointWidgetBox_C.Initialize");

	UBP_CapPointWidgetBox_C_Initialize_Params params;
	params.is_Base_Point = is_Base_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
