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

// Function BP_CharacterDoll.BP_CharacterDoll_C.AssumePreviewPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Random                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterDoll_C::AssumePreviewPose(int Random)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterDoll.BP_CharacterDoll_C.AssumePreviewPose");

	ABP_CharacterDoll_C_AssumePreviewPose_Params params;
	params.Random = Random;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterDoll.BP_CharacterDoll_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterDoll_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterDoll.BP_CharacterDoll_C.UserConstructionScript");

	ABP_CharacterDoll_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
