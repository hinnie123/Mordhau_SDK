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

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetGoldAndRankUnlockRequirement
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ItemDefIDs                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Gold                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_GetGoldAndRankUnlockRequirement(class UObject* __WorldContext, TArray<int>* ItemDefIDs, int* Gold, int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetGoldAndRankUnlockRequirement");

	UBP_MordhauUtilityLibrary_C_GetGoldAndRankUnlockRequirement_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDefIDs != nullptr)
		*ItemDefIDs = params.ItemDefIDs;
	if (Gold != nullptr)
		*Gold = params.Gold;
	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetUnlockTooltipText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ItemDefIDs                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ToolTipText                    (Parm, OutParm)

void UBP_MordhauUtilityLibrary_C::STATIC_GetUnlockTooltipText(class UObject* __WorldContext, TArray<int>* ItemDefIDs, struct FText* ToolTipText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetUnlockTooltipText");

	UBP_MordhauUtilityLibrary_C_GetUnlockTooltipText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDefIDs != nullptr)
		*ItemDefIDs = params.ItemDefIDs;
	if (ToolTipText != nullptr)
		*ToolTipText = params.ToolTipText;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateInformationDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   InformationText                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_InformationDialog_C* InformationDialog              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_CreateInformationDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& InformationText, const struct FText& ButtonText, class UObject* __WorldContext, class UBP_InformationDialog_C** InformationDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateInformationDialog");

	UBP_MordhauUtilityLibrary_C_CreateInformationDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.InformationText = InformationText;
	params.ButtonText = ButtonText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InformationDialog != nullptr)
		*InformationDialog = params.InformationDialog;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateChoiceDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ChoiceText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   LeftButtonText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   RightButtonText                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_ChoiceDialog_C*      ChoiceDialog                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_CreateChoiceDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& ChoiceText, const struct FText& LeftButtonText, const struct FText& RightButtonText, class UObject* __WorldContext, class UBP_ChoiceDialog_C** ChoiceDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateChoiceDialog");

	UBP_MordhauUtilityLibrary_C_CreateChoiceDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.ChoiceText = ChoiceText;
	params.LeftButtonText = LeftButtonText;
	params.RightButtonText = RightButtonText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChoiceDialog != nullptr)
		*ChoiceDialog = params.ChoiceDialog;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateTextInputDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   HintText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   LeftButtonText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   RightButtonText                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsPassword                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_TextInputDialog_C*   TextInputDialog                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_CreateTextInputDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& HintText, const struct FText& LeftButtonText, const struct FText& RightButtonText, bool bIsPassword, class UObject* __WorldContext, class UBP_TextInputDialog_C** TextInputDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateTextInputDialog");

	UBP_MordhauUtilityLibrary_C_CreateTextInputDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.HintText = HintText;
	params.LeftButtonText = LeftButtonText;
	params.RightButtonText = RightButtonText;
	params.bIsPassword = bIsPassword;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextInputDialog != nullptr)
		*TextInputDialog = params.TextInputDialog;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.ComputeRagdollForce
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  DamageSubType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RandomByte                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Force                          (Parm, OutParm, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_ComputeRagdollForce(class AActor* Agent, unsigned char DamageType, unsigned char DamageSubType, unsigned char RandomByte, class AActor* Receiver, class UObject* __WorldContext, struct FVector* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.ComputeRagdollForce");

	UBP_MordhauUtilityLibrary_C_ComputeRagdollForce_Params params;
	params.Agent = Agent;
	params.DamageType = DamageType;
	params.DamageSubType = DamageSubType;
	params.RandomByte = RandomByte;
	params.Receiver = Receiver;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Force != nullptr)
		*Force = params.Force;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetSelectedIndex
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_GetSelectedIndex(class UComboBoxText* ComboBox, class UObject* __WorldContext, int* SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetSelectedIndex");

	UBP_MordhauUtilityLibrary_C_GetSelectedIndex_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectFirstComboBoxOption
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_SelectFirstComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectFirstComboBoxOption");

	UBP_MordhauUtilityLibrary_C_SelectFirstComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsProfileNameValid
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ProfiletName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_IsProfileNameValid(const struct FText& ProfiletName, class UObject* __WorldContext, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsProfileNameValid");

	UBP_MordhauUtilityLibrary_C_IsProfileNameValid_Params params;
	params.ProfiletName = ProfiletName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsFirstOptionSelected
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MordhauUtilityLibrary_C::STATIC_IsFirstOptionSelected(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsFirstOptionSelected");

	UBP_MordhauUtilityLibrary_C_IsFirstOptionSelected_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectLastComboBoxOption
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MordhauUtilityLibrary_C::STATIC_SelectLastComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectLastComboBoxOption");

	UBP_MordhauUtilityLibrary_C_SelectLastComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLastComboBoxOption
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxText*           ComboBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Option                         (Parm, OutParm)

void UBP_MordhauUtilityLibrary_C::STATIC_GetLastComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext, struct FText* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLastComboBoxOption");

	UBP_MordhauUtilityLibrary_C_GetLastComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Option != nullptr)
		*Option = params.Option;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
