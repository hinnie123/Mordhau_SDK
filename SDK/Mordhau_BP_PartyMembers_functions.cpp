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

// Function BP_PartyMembers.BP_PartyMembers_C.Update
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamID>        Members                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_PartyMembers_C::Update(TArray<struct FSteamID>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMembers.BP_PartyMembers_C.Update");

	UBP_PartyMembers_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Members != nullptr)
		*Members = params.Members;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
