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

// Function BP_SocialMediaMenu.BP_SocialMediaMenu_C.BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SocialMediaMenu_C::BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialMediaMenu.BP_SocialMediaMenu_C.BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_SocialMediaMenu_C_BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialMediaMenu.BP_SocialMediaMenu_C.ExecuteUbergraph_BP_SocialMediaMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SocialMediaMenu_C::ExecuteUbergraph_BP_SocialMediaMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialMediaMenu.BP_SocialMediaMenu_C.ExecuteUbergraph_BP_SocialMediaMenu");

	UBP_SocialMediaMenu_C_ExecuteUbergraph_BP_SocialMediaMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
