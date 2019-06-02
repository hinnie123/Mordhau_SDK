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

// Function BP_ServerBrowser.BP_ServerBrowser_C.GetMatchmakingCheckboxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ServerBrowser_C::GetMatchmakingCheckboxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.GetMatchmakingCheckboxVisibility");

	UBP_ServerBrowser_C_GetMatchmakingCheckboxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_BBC3547C49248E80E0006694F0879DC3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ServerBrowser_C::OnFailure_BBC3547C49248E80E0006694F0879DC3(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_BBC3547C49248E80E0006694F0879DC3");

	UBP_ServerBrowser_C_OnFailure_BBC3547C49248E80E0006694F0879DC3_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_BBC3547C49248E80E0006694F0879DC3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FServerSearchResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ServerBrowser_C::OnSuccess_BBC3547C49248E80E0006694F0879DC3(TArray<struct FServerSearchResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_BBC3547C49248E80E0006694F0879DC3");

	UBP_ServerBrowser_C_OnSuccess_BBC3547C49248E80E0006694F0879DC3_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_0D81799A475BE46000BC0A8D4385A93C
// (BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::OnFailure_0D81799A475BE46000BC0A8D4385A93C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_0D81799A475BE46000BC0A8D4385A93C");

	UBP_ServerBrowser_C_OnFailure_0D81799A475BE46000BC0A8D4385A93C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_0D81799A475BE46000BC0A8D4385A93C
// (BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::OnSuccess_0D81799A475BE46000BC0A8D4385A93C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_0D81799A475BE46000BC0A8D4385A93C");

	UBP_ServerBrowser_C_OnSuccess_0D81799A475BE46000BC0A8D4385A93C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ServerBrowser_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.Construct");

	UBP_ServerBrowser_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.Refresh");

	UBP_ServerBrowser_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.Join
// (BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.Join");

	UBP_ServerBrowser_C_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__AllButton_K2Node_ComponentBoundEvent_289_OnSelected__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__AllButton_K2Node_ComponentBoundEvent_289_OnSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__AllButton_K2Node_ComponentBoundEvent_289_OnSelected__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__AllButton_K2Node_ComponentBoundEvent_289_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_290_OnSelected__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__FriendsButton_K2Node_ComponentBoundEvent_290_OnSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_290_OnSelected__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_290_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_294_OnSelected__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_294_OnSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_294_OnSelected__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_294_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RecentButton_K2Node_ComponentBoundEvent_299_OnSelected__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__RecentButton_K2Node_ComponentBoundEvent_299_OnSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RecentButton_K2Node_ComponentBoundEvent_299_OnSelected__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__RecentButton_K2Node_ComponentBoundEvent_299_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__LanButton_K2Node_ComponentBoundEvent_305_OnSelected__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__LanButton_K2Node_ComponentBoundEvent_305_OnSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__LanButton_K2Node_ComponentBoundEvent_305_OnSelected__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__LanButton_K2Node_ComponentBoundEvent_305_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__NotFullCheckbox_K2Node_ComponentBoundEvent_178_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowser_C::BndEvt__NotFullCheckbox_K2Node_ComponentBoundEvent_178_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__NotFullCheckbox_K2Node_ComponentBoundEvent_178_OnCheckStateChanged__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__NotFullCheckbox_K2Node_ComponentBoundEvent_178_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__HasPlayersCheckbox_K2Node_ComponentBoundEvent_186_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowser_C::BndEvt__HasPlayersCheckbox_K2Node_ComponentBoundEvent_186_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__HasPlayersCheckbox_K2Node_ComponentBoundEvent_186_OnCheckStateChanged__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__HasPlayersCheckbox_K2Node_ComponentBoundEvent_186_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__NoPasswordCheckbox_K2Node_ComponentBoundEvent_195_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowser_C::BndEvt__NoPasswordCheckbox_K2Node_ComponentBoundEvent_195_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__NoPasswordCheckbox_K2Node_ComponentBoundEvent_195_OnCheckStateChanged__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__NoPasswordCheckbox_K2Node_ComponentBoundEvent_195_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__DevBuildCheckbox_K2Node_ComponentBoundEvent_308_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowser_C::BndEvt__DevBuildCheckbox_K2Node_ComponentBoundEvent_308_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__DevBuildCheckbox_K2Node_ComponentBoundEvent_308_OnCheckStateChanged__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__DevBuildCheckbox_K2Node_ComponentBoundEvent_308_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.CreateMismatchDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::CreateMismatchDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.CreateMismatchDialog");

	UBP_ServerBrowser_C_CreateMismatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.HideMismatchDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::HideMismatchDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.HideMismatchDialog");

	UBP_ServerBrowser_C_HideMismatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.ShowMismatchDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::ShowMismatchDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ShowMismatchDialog");

	UBP_ServerBrowser_C_ShowMismatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.ContinueJoin
// (BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::ContinueJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ContinueJoin");

	UBP_ServerBrowser_C_ContinueJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnPartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamID>        PartyMembers                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ServerBrowser_C::OnPartyUpdated(TArray<struct FSteamID> PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnPartyUpdated");

	UBP_ServerBrowser_C_OnPartyUpdated_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RentServerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ServerBrowser_C::BndEvt__RentServerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RentServerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__RentServerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ServerBrowser_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.OnShown");

	UBP_ServerBrowser_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowser_C::BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowser_C::BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__MaxPingEntry_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowser_C::BndEvt__MaxPingEntry_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__MaxPingEntry_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBP_ServerBrowser_C_BndEvt__MaxPingEntry_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerBrowser_C::ExecuteUbergraph_BP_ServerBrowser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser");

	UBP_ServerBrowser_C_ExecuteUbergraph_BP_ServerBrowser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
