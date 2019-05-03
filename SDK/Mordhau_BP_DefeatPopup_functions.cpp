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

// Function BP_DefeatPopup.BP_DefeatPopup_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_DefeatPopup_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.GetVisibility_1");

	UBP_DefeatPopup_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DefeatPopup.BP_DefeatPopup_C.Timer Done
// (BlueprintCallable, BlueprintEvent)

void UBP_DefeatPopup_C::Timer_Done()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.Timer Done");

	UBP_DefeatPopup_C_Timer_Done_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefeatPopup.BP_DefeatPopup_C.On Animation Finished
// (BlueprintCallable, BlueprintEvent)

void UBP_DefeatPopup_C::On_Animation_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.On Animation Finished");

	UBP_DefeatPopup_C_On_Animation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefeatPopup.BP_DefeatPopup_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Main_Text                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Sub_Text                       (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DefeatPopup_C::Show(const struct FText& Main_Text, const struct FText& Sub_Text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.Show");

	UBP_DefeatPopup_C_Show_Params params;
	params.Main_Text = Main_Text;
	params.Sub_Text = Sub_Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefeatPopup.BP_DefeatPopup_C.ExecuteUbergraph_BP_DefeatPopup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DefeatPopup_C::ExecuteUbergraph_BP_DefeatPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.ExecuteUbergraph_BP_DefeatPopup");

	UBP_DefeatPopup_C_ExecuteUbergraph_BP_DefeatPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
