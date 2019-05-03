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

// Function BP_KilledByPanelGearEntry.BP_KilledByPanelGearEntry_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             Background_Color               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_KilledByPanelGearEntry_C::Initialize(const struct FText& Text, const struct FSlateColor& Background_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelGearEntry.BP_KilledByPanelGearEntry_C.Initialize");

	UBP_KilledByPanelGearEntry_C_Initialize_Params params;
	params.Text = Text;
	params.Background_Color = Background_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
