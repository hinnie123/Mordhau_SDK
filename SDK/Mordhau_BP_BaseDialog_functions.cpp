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

// Function BP_BaseDialog.BP_BaseDialog_C.GetTitleText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_BaseDialog_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseDialog.BP_BaseDialog_C.GetTitleText");

	UBP_BaseDialog_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BaseDialog.BP_BaseDialog_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_BaseDialog_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseDialog.BP_BaseDialog_C.OnMouseButtonDown_1");

	UBP_BaseDialog_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BaseDialog.BP_BaseDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BaseDialog_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseDialog.BP_BaseDialog_C.Show");

	UBP_BaseDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseDialog.BP_BaseDialog_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BaseDialog_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseDialog.BP_BaseDialog_C.Hide");

	UBP_BaseDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseDialog.BP_BaseDialog_C.ExecuteUbergraph_BP_BaseDialog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BaseDialog_C::ExecuteUbergraph_BP_BaseDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseDialog.BP_BaseDialog_C.ExecuteUbergraph_BP_BaseDialog");

	UBP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
