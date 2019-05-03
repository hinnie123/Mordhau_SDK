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

// Function BP_RidersHosen.BP_RidersHosen_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_RidersHosen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RidersHosen.BP_RidersHosen_C.UserConstructionScript");

	UBP_RidersHosen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
