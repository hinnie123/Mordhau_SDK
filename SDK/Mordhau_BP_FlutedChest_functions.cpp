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

// Function BP_FlutedChest.BP_FlutedChest_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_FlutedChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlutedChest.BP_FlutedChest_C.UserConstructionScript");

	UBP_FlutedChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
