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

// Function BP_KillFeedEntry.BP_KillFeedEntry_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Killer                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   KilledBy                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Victim                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            KillerColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            KilledColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_KillFeedEntry_C::Setup(const struct FText& Killer, const struct FText& KilledBy, const struct FText& Victim, const struct FLinearColor& KillerColor, const struct FLinearColor& KilledColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillFeedEntry.BP_KillFeedEntry_C.Setup");

	UBP_KillFeedEntry_C_Setup_Params params;
	params.Killer = Killer;
	params.KilledBy = KilledBy;
	params.Victim = Victim;
	params.KillerColor = KillerColor;
	params.KilledColor = KilledColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
