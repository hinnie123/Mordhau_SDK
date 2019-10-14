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

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentDownloadProgress
struct UBP_ModDownloadDialog_C_UpdateCurrentDownloadProgress_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentlyInstalledMods
struct UBP_ModDownloadDialog_C_UpdateCurrentlyInstalledMods_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetButtonText
struct UBP_ModDownloadDialog_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetTitleText
struct UBP_ModDownloadDialog_C_SetTitleText_Params
{
	struct FText                                       TitleText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_FE40CED94C733BBDC41CDF97C272F977
struct UBP_ModDownloadDialog_C_OnFailure_FE40CED94C733BBDC41CDF97C272F977_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_FE40CED94C733BBDC41CDF97C272F977
struct UBP_ModDownloadDialog_C_OnSuccess_FE40CED94C733BBDC41CDF97C272F977_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_99E14CA94D8CA1A6DAC86791F6ECCCFE
struct UBP_ModDownloadDialog_C_OnFailure_99E14CA94D8CA1A6DAC86791F6ECCCFE_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModioMod>                           Mods;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_99E14CA94D8CA1A6DAC86791F6ECCCFE
struct UBP_ModDownloadDialog_C_OnSuccess_99E14CA94D8CA1A6DAC86791F6ECCCFE_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModioMod>                           Mods;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_994852F543C45337860BB697EC32C733
struct UBP_ModDownloadDialog_C_OnFailure_994852F543C45337860BB697EC32C733_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModioMod                                   Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_994852F543C45337860BB697EC32C733
struct UBP_ModDownloadDialog_C_OnSuccess_994852F543C45337860BB697EC32C733_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModioMod                                   Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_58DC14C24C711AD987B2748E428D6989
struct UBP_ModDownloadDialog_C_OnFailure_58DC14C24C711AD987B2748E428D6989_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_58DC14C24C711AD987B2748E428D6989
struct UBP_ModDownloadDialog_C_OnSuccess_58DC14C24C711AD987B2748E428D6989_Params
{
	struct FModioResponse                              response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature
struct UBP_ModDownloadDialog_C_BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Show
struct UBP_ModDownloadDialog_C_Show_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Hide
struct UBP_ModDownloadDialog_C_Hide_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Tick
struct UBP_ModDownloadDialog_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SubscriptionsFailed
struct UBP_ModDownloadDialog_C_SubscriptionsFailed_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.ExecuteUbergraph_BP_ModDownloadDialog
struct UBP_ModDownloadDialog_C_ExecuteUbergraph_BP_ModDownloadDialog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadFailed__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadFailed__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCanceled__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadCanceled__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCompleted__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
