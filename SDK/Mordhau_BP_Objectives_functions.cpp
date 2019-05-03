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

// Function BP_Objectives.BP_Objectives_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Objectives_C::Show(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Show");

	UBP_Objectives_C_Show_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Objectives.BP_Objectives_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_Objectives_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Hide");

	UBP_Objectives_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Objectives.BP_Objectives_C.FadeOutDone
// (BlueprintCallable, BlueprintEvent)

void UBP_Objectives_C::FadeOutDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.FadeOutDone");

	UBP_Objectives_C_FadeOutDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Objectives_C::ExecuteUbergraph_BP_Objectives(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives");

	UBP_Objectives_C_ExecuteUbergraph_BP_Objectives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
