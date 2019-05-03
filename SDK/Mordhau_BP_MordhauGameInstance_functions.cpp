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

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Text                           (Parm, OutParm)

void UBP_MordhauGameInstance_C::GetJoiningText(const struct FServerSearchResult& Session, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningText");

	UBP_MordhauGameInstance_C_GetJoiningText_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_DE35634440D2DAD6E6ED319296DF3606
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MordhauGameInstance_C::OnFailure_DE35634440D2DAD6E6ED319296DF3606(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_DE35634440D2DAD6E6ED319296DF3606");

	UBP_MordhauGameInstance_C_OnFailure_DE35634440D2DAD6E6ED319296DF3606_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_DE35634440D2DAD6E6ED319296DF3606
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult     Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MordhauGameInstance_C::OnSuccess_DE35634440D2DAD6E6ED319296DF3606(const struct FServerSearchResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_DE35634440D2DAD6E6ED319296DF3606");

	UBP_MordhauGameInstance_C_OnSuccess_DE35634440D2DAD6E6ED319296DF3606_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_EC1BED794FBBC103AFC74FAD71124461
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::OnFailure_EC1BED794FBBC103AFC74FAD71124461()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_EC1BED794FBBC103AFC74FAD71124461");

	UBP_MordhauGameInstance_C_OnFailure_EC1BED794FBBC103AFC74FAD71124461_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_EC1BED794FBBC103AFC74FAD71124461
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::OnSuccess_EC1BED794FBBC103AFC74FAD71124461()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_EC1BED794FBBC103AFC74FAD71124461");

	UBP_MordhauGameInstance_C_OnSuccess_EC1BED794FBBC103AFC74FAD71124461_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_E564B5624B7FDB47DBB2E08126C636D7
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::OnFailure_E564B5624B7FDB47DBB2E08126C636D7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_E564B5624B7FDB47DBB2E08126C636D7");

	UBP_MordhauGameInstance_C_OnFailure_E564B5624B7FDB47DBB2E08126C636D7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_E564B5624B7FDB47DBB2E08126C636D7
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::OnSuccess_E564B5624B7FDB47DBB2E08126C636D7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_E564B5624B7FDB47DBB2E08126C636D7");

	UBP_MordhauGameInstance_C_OnSuccess_E564B5624B7FDB47DBB2E08126C636D7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordOKClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::OnPasswordOKClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordOKClicked");

	UBP_MordhauGameInstance_C_OnPasswordOKClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordCancelClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::OnPasswordCancelClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordCancelClicked");

	UBP_MordhauGameInstance_C_OnPasswordCancelClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordTextEntered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>       Commit_Method                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauGameInstance_C::OnPasswordTextEntered(const struct FText& Text, TEnumAsByte<ETextCommit> Commit_Method)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordTextEntered");

	UBP_MordhauGameInstance_C_OnPasswordTextEntered_Params params;
	params.Text = Text;
	params.Commit_Method = Commit_Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowPasswordDialog
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult*    SearchResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MordhauGameInstance_C::ShowPasswordDialog(struct FServerSearchResult* SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowPasswordDialog");

	UBP_MordhauGameInstance_C_ShowPasswordDialog_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowNetworkErrorDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::ShowNetworkErrorDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowNetworkErrorDialog");

	UBP_MordhauGameInstance_C_ShowNetworkErrorDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnErrorOkClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::OnErrorOkClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnErrorOkClicked");

	UBP_MordhauGameInstance_C_OnErrorOkClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreatePasswordDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::CreatePasswordDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreatePasswordDialog");

	UBP_MordhauGameInstance_C_CreatePasswordDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateNetworkErrorDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::CreateNetworkErrorDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateNetworkErrorDialog");

	UBP_MordhauGameInstance_C_CreateNetworkErrorDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateJoiningDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::CreateJoiningDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateJoiningDialog");

	UBP_MordhauGameInstance_C_CreateJoiningDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowJoiningDialog
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSearchResult*    SearchResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MordhauGameInstance_C::ShowJoiningDialog(struct FServerSearchResult* SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowJoiningDialog");

	UBP_MordhauGameInstance_C_ShowJoiningDialog_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnJoiningCancelClick
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::OnJoiningCancelClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnJoiningCancelClick");

	UBP_MordhauGameInstance_C_OnJoiningCancelClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.Join
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauGameInstance_C::Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.Join");

	UBP_MordhauGameInstance_C_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ExecuteUbergraph_BP_MordhauGameInstance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauGameInstance_C::ExecuteUbergraph_BP_MordhauGameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ExecuteUbergraph_BP_MordhauGameInstance");

	UBP_MordhauGameInstance_C_ExecuteUbergraph_BP_MordhauGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
