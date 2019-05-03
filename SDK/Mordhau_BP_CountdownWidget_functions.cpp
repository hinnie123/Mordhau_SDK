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

// Function BP_CountdownWidget.BP_CountdownWidget_C.Get_CountdownText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_CountdownWidget_C::Get_CountdownText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountdownWidget.BP_CountdownWidget_C.Get_CountdownText_Text_1");

	UBP_CountdownWidget_C_Get_CountdownText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CountdownWidget.BP_CountdownWidget_C.PlayCountdownAnim
// (BlueprintCallable, BlueprintEvent)

void UBP_CountdownWidget_C::PlayCountdownAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountdownWidget.BP_CountdownWidget_C.PlayCountdownAnim");

	UBP_CountdownWidget_C_PlayCountdownAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountdownWidget.BP_CountdownWidget_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UBP_CountdownWidget_C::OnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountdownWidget.BP_CountdownWidget_C.OnAnimFinished");

	UBP_CountdownWidget_C_OnAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CountdownWidget.BP_CountdownWidget_C.ExecuteUbergraph_BP_CountdownWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CountdownWidget_C::ExecuteUbergraph_BP_CountdownWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountdownWidget.BP_CountdownWidget_C.ExecuteUbergraph_BP_CountdownWidget");

	UBP_CountdownWidget_C_ExecuteUbergraph_BP_CountdownWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
