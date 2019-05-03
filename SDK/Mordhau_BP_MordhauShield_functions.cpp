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

// Function BP_MordhauShield.BP_MordhauShield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauShield.BP_MordhauShield_C.UserConstructionScript");

	ABP_MordhauShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauShield.BP_MordhauShield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MordhauShield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauShield.BP_MordhauShield_C.ReceiveBeginPlay");

	ABP_MordhauShield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauShield.BP_MordhauShield_C.ExecuteUbergraph_BP_MordhauShield
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauShield_C::ExecuteUbergraph_BP_MordhauShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauShield.BP_MordhauShield_C.ExecuteUbergraph_BP_MordhauShield");

	ABP_MordhauShield_C_ExecuteUbergraph_BP_MordhauShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
