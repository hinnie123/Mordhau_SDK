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

// Function BP_Federschwert.BP_Federschwert_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Federschwert_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Federschwert.BP_Federschwert_C.UserConstructionScript");

	ABP_Federschwert_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Federschwert.BP_Federschwert_C.OnLoadedChanged
// (Event, Public, BlueprintEvent)

void ABP_Federschwert_C::OnLoadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Federschwert.BP_Federschwert_C.OnLoadedChanged");

	ABP_Federschwert_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Federschwert.BP_Federschwert_C.ExecuteUbergraph_BP_Federschwert
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Federschwert_C::ExecuteUbergraph_BP_Federschwert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Federschwert.BP_Federschwert_C.ExecuteUbergraph_BP_Federschwert");

	ABP_Federschwert_C_ExecuteUbergraph_BP_Federschwert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
