#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetGoldAndRankUnlockRequirement
struct UBP_MordhauUtilityLibrary_C_GetGoldAndRankUnlockRequirement_Params
{
	TArray<int>                                        ItemDefIDs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Gold;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetUnlockTooltipText
struct UBP_MordhauUtilityLibrary_C_GetUnlockTooltipText_Params
{
	TArray<int>                                        ItemDefIDs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ToolTipText;                                              // (Parm, OutParm)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateInformationDialog
struct UBP_MordhauUtilityLibrary_C_CreateInformationDialog_Params
{
	class APlayerController*                           OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InformationText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_InformationDialog_C*                     InformationDialog;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateChoiceDialog
struct UBP_MordhauUtilityLibrary_C_CreateChoiceDialog_Params
{
	class APlayerController*                           OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ChoiceText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       LeftButtonText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       RightButtonText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_ChoiceDialog_C*                          ChoiceDialog;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateTextInputDialog
struct UBP_MordhauUtilityLibrary_C_CreateTextInputDialog_Params
{
	class APlayerController*                           OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       HintText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       LeftButtonText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       RightButtonText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsPassword;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_TextInputDialog_C*                       TextInputDialog;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.ComputeRagdollForce
struct UBP_MordhauUtilityLibrary_C_ComputeRagdollForce_Params
{
	class AActor*                                      Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DamageSubType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomByte;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Force;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetSelectedIndex
struct UBP_MordhauUtilityLibrary_C_GetSelectedIndex_Params
{
	class UComboBoxText*                               ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectFirstComboBoxOption
struct UBP_MordhauUtilityLibrary_C_SelectFirstComboBoxOption_Params
{
	class UComboBoxText*                               ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsProfileNameValid
struct UBP_MordhauUtilityLibrary_C_IsProfileNameValid_Params
{
	struct FText                                       ProfiletName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsFirstOptionSelected
struct UBP_MordhauUtilityLibrary_C_IsFirstOptionSelected_Params
{
	class UComboBoxText*                               ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectLastComboBoxOption
struct UBP_MordhauUtilityLibrary_C_SelectLastComboBoxOption_Params
{
	class UComboBoxText*                               ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLastComboBoxOption
struct UBP_MordhauUtilityLibrary_C_GetLastComboBoxOption_Params
{
	class UComboBoxText*                               ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Option;                                                   // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
