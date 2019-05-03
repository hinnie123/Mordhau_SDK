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

// Function BP_TeamSelect.BP_TeamSelect_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_TeamSelect_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.OnKeyDown");

	UBP_TeamSelect_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TeamSelect.BP_TeamSelect_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TeamSelect_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.Hide");

	UBP_TeamSelect_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamSelect.BP_TeamSelect_C.GetMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewParam                       (Parm, OutParm, ZeroConstructor)

void UBP_TeamSelect_C::GetMapName(struct FString* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.GetMapName");

	UBP_TeamSelect_C_GetMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_TeamSelect.BP_TeamSelect_C.GetGameModeName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UBP_TeamSelect_C::GetGameModeName(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.GetGameModeName");

	UBP_TeamSelect_C_GetGameModeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_TeamSelect.BP_TeamSelect_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TeamSelect_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.Show");

	UBP_TeamSelect_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeamSelect.BP_TeamSelect_C.SelectTeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TeamSelect_C::SelectTeam(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.SelectTeam");

	UBP_TeamSelect_C_SelectTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
