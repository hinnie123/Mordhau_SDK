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

// Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Get_SlotNumber_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ChoiceMenuEntry_C::Get_SlotNumber_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Get_SlotNumber_Text_1");

	UBP_ChoiceMenuEntry_C_Get_SlotNumber_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ChoiceMenuEntry_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetVisibility_1");

	UBP_ChoiceMenuEntry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ChoiceMenuEntry_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetText_1");

	UBP_ChoiceMenuEntry_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
