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

// Function BP_EmoteMenu.BP_EmoteMenu_C.DoEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EmoteMenu_C::DoEmote(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.DoEmote");

	UBP_EmoteMenu_C_DoEmote_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EmoteMenu.BP_EmoteMenu_C.OptionChosen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EmoteMenu_C::OptionChosen(int* Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.OptionChosen");

	UBP_EmoteMenu_C_OptionChosen_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EmoteMenu.BP_EmoteMenu_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EmoteMenu_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.Show");

	UBP_EmoteMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EmoteMenu.BP_EmoteMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EmoteMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.Tick");

	UBP_EmoteMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EmoteMenu.BP_EmoteMenu_C.ExecuteUbergraph_BP_EmoteMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EmoteMenu_C::ExecuteUbergraph_BP_EmoteMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.ExecuteUbergraph_BP_EmoteMenu");

	UBP_EmoteMenu_C_ExecuteUbergraph_BP_EmoteMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
