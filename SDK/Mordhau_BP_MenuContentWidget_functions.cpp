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

// Function BP_MenuContentWidget.BP_MenuContentWidget_C.OnHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MenuContentWidget_C::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuContentWidget.BP_MenuContentWidget_C.OnHidden");

	UBP_MenuContentWidget_C_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuContentWidget.BP_MenuContentWidget_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MenuContentWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuContentWidget.BP_MenuContentWidget_C.OnShown");

	UBP_MenuContentWidget_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
