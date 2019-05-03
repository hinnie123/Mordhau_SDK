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

// Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseCustomizationSpot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.UserConstructionScript");

	ABP_BaseCustomizationSpot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseCustomizationSpot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.ReceiveBeginPlay");

	ABP_BaseCustomizationSpot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.ExecuteUbergraph_BP_BaseCustomizationSpot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseCustomizationSpot_C::ExecuteUbergraph_BP_BaseCustomizationSpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.ExecuteUbergraph_BP_BaseCustomizationSpot");

	ABP_BaseCustomizationSpot_C_ExecuteUbergraph_BP_BaseCustomizationSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
