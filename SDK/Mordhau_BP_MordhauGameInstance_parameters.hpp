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

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningText
struct UBP_MordhauGameInstance_C_GetJoiningText_Params
{
	bool                                               bIsFull;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningTextOld
struct UBP_MordhauGameInstance_C_GetJoiningTextOld_Params
{
	struct FServerSearchResult                         Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_EC1BED794FBBC103AFC74FAD71124461
struct UBP_MordhauGameInstance_C_OnFailure_EC1BED794FBBC103AFC74FAD71124461_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_EC1BED794FBBC103AFC74FAD71124461
struct UBP_MordhauGameInstance_C_OnSuccess_EC1BED794FBBC103AFC74FAD71124461_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_E564B5624B7FDB47DBB2E08126C636D7
struct UBP_MordhauGameInstance_C_OnFailure_E564B5624B7FDB47DBB2E08126C636D7_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_E564B5624B7FDB47DBB2E08126C636D7
struct UBP_MordhauGameInstance_C_OnSuccess_E564B5624B7FDB47DBB2E08126C636D7_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_4643A5C64229EB24E86C05B71625BDC1
struct UBP_MordhauGameInstance_C_OnFailure_4643A5C64229EB24E86C05B71625BDC1_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFull_4643A5C64229EB24E86C05B71625BDC1
struct UBP_MordhauGameInstance_C_OnFull_4643A5C64229EB24E86C05B71625BDC1_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_4643A5C64229EB24E86C05B71625BDC1
struct UBP_MordhauGameInstance_C_OnSuccess_4643A5C64229EB24E86C05B71625BDC1_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordOKClicked
struct UBP_MordhauGameInstance_C_OnPasswordOKClicked_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordCancelClicked
struct UBP_MordhauGameInstance_C_OnPasswordCancelClicked_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordTextEntered
struct UBP_MordhauGameInstance_C_OnPasswordTextEntered_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           Commit_Method;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowPasswordDialog
struct UBP_MordhauGameInstance_C_ShowPasswordDialog_Params
{
	struct FServerSearchResult*                        SearchResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowNetworkErrorDialog
struct UBP_MordhauGameInstance_C_ShowNetworkErrorDialog_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnErrorOkClicked
struct UBP_MordhauGameInstance_C_OnErrorOkClicked_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreatePasswordDialog
struct UBP_MordhauGameInstance_C_CreatePasswordDialog_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateNetworkErrorDialog
struct UBP_MordhauGameInstance_C_CreateNetworkErrorDialog_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateJoiningDialog
struct UBP_MordhauGameInstance_C_CreateJoiningDialog_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowJoiningDialog
struct UBP_MordhauGameInstance_C_ShowJoiningDialog_Params
{
	struct FServerSearchResult*                        SearchResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnJoiningCancelClick
struct UBP_MordhauGameInstance_C_OnJoiningCancelClick_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.Join
struct UBP_MordhauGameInstance_C_Join_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ExecuteUbergraph_BP_MordhauGameInstance
struct UBP_MordhauGameInstance_C_ExecuteUbergraph_BP_MordhauGameInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
