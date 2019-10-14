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

// Function BP_VeteransBarbuteRaised.BP_VeteransBarbuteRaised_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_VeteransBarbuteRaised_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeteransBarbuteRaised.BP_VeteransBarbuteRaised_C.UserConstructionScript");

	UBP_VeteransBarbuteRaised_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
