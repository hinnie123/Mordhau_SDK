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

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Get_ALL_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ChatBoxEntry_C::Get_ALL_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Get_ALL_Text_1");

	UBP_ChatBoxEntry_C_Get_ALL_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            NameColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_ChatBoxEntry_C::SetupEntry(const struct FText& CharacterName, const struct FText& Message, const struct FText& Prefix, const struct FLinearColor& NameColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry");

	UBP_ChatBoxEntry_C_SetupEntry_Params params;
	params.CharacterName = CharacterName;
	params.Message = Message;
	params.Prefix = Prefix;
	params.NameColor = NameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
