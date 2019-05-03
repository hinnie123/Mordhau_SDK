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

// Function BP_SteamAvatar.BP_SteamAvatar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SteamAvatar_C::Update(const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SteamAvatar.BP_SteamAvatar_C.Update");

	UBP_SteamAvatar_C_Update_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
