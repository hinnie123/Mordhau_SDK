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

// Function BP_ContextPopup.BP_ContextPopup_C.Clear Entries
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ContextPopup_C::Clear_Entries()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopup.BP_ContextPopup_C.Clear Entries");

	UBP_ContextPopup_C_Clear_Entries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContextPopup.BP_ContextPopup_C.Add Button Entry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Hover_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ContextPopup_C::Add_Button_Entry(const struct FText& ButtonLabel, int ButtonIndex, const struct FText& Hover_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextPopup.BP_ContextPopup_C.Add Button Entry");

	UBP_ContextPopup_C_Add_Button_Entry_Params params;
	params.ButtonLabel = ButtonLabel;
	params.ButtonIndex = ButtonIndex;
	params.Hover_Text = Hover_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
