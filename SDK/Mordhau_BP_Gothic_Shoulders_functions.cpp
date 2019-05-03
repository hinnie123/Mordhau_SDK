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

// Function BP_Gothic_Shoulders.BP_Gothic_Shoulders_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_Gothic_Shoulders_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gothic_Shoulders.BP_Gothic_Shoulders_C.UserConstructionScript");

	UBP_Gothic_Shoulders_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
