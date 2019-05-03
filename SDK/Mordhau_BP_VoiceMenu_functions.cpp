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

// Function BP_VoiceMenu.BP_VoiceMenu_C.DoVoiceCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceMenu_C::DoVoiceCommand(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.DoVoiceCommand");

	UBP_VoiceMenu_C_DoVoiceCommand_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceMenu.BP_VoiceMenu_C.OptionChosen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceMenu_C::OptionChosen(int* Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.OptionChosen");

	UBP_VoiceMenu_C_OptionChosen_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceMenu.BP_VoiceMenu_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VoiceMenu_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.Show");

	UBP_VoiceMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceMenu.BP_VoiceMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.Tick");

	UBP_VoiceMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceMenu.BP_VoiceMenu_C.ExecuteUbergraph_BP_VoiceMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceMenu_C::ExecuteUbergraph_BP_VoiceMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.ExecuteUbergraph_BP_VoiceMenu");

	UBP_VoiceMenu_C_ExecuteUbergraph_BP_VoiceMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
