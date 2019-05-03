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

// Function BP_Longsword.BP_Longsword_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Longsword_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Longsword.BP_Longsword_C.UserConstructionScript");

	ABP_Longsword_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Longsword.BP_Longsword_C.OnLoadedChanged
// (Event, Public, BlueprintEvent)

void ABP_Longsword_C::OnLoadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Longsword.BP_Longsword_C.OnLoadedChanged");

	ABP_Longsword_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Longsword.BP_Longsword_C.ExecuteUbergraph_BP_Longsword
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Longsword_C::ExecuteUbergraph_BP_Longsword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Longsword.BP_Longsword_C.ExecuteUbergraph_BP_Longsword");

	ABP_Longsword_C_ExecuteUbergraph_BP_Longsword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
