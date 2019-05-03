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

// Function BP_SubField.BP_SubField_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubField_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.UserConstructionScript");

	ABP_SubField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubField.BP_SubField_C.BeginSubFieldDeactivation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubField_C::BeginSubFieldDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.BeginSubFieldDeactivation");

	ABP_SubField_C_BeginSubFieldDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubField.BP_SubField_C.SetSubFieldHidden
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubField_C::SetSubFieldHidden(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.SetSubFieldHidden");

	ABP_SubField_C_SetSubFieldHidden_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubField.BP_SubField_C.DeactivateSubField
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubField_C::DeactivateSubField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.DeactivateSubField");

	ABP_SubField_C_DeactivateSubField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubField.BP_SubField_C.ExecuteUbergraph_BP_SubField
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubField_C::ExecuteUbergraph_BP_SubField(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.ExecuteUbergraph_BP_SubField");

	ABP_SubField_C_ExecuteUbergraph_BP_SubField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
