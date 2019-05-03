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

// Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationItemEntry_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.Initialize");

	UBP_CustomizationItemEntry_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationItemEntry_C::OnClick__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.OnClick__DelegateSignature");

	UBP_CustomizationItemEntry_C_OnClick__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizationItemEntry_C::OnHover__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.OnHover__DelegateSignature");

	UBP_CustomizationItemEntry_C_OnHover__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
