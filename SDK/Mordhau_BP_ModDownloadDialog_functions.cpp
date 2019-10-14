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

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentDownloadProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ModDownloadDialog_C::UpdateCurrentDownloadProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentDownloadProgress");

	UBP_ModDownloadDialog_C_UpdateCurrentDownloadProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentlyInstalledMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ModDownloadDialog_C::UpdateCurrentlyInstalledMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentlyInstalledMods");

	UBP_ModDownloadDialog_C_UpdateCurrentlyInstalledMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModDownloadDialog_C::SetButtonText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetButtonText");

	UBP_ModDownloadDialog_C_SetButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModDownloadDialog_C::SetTitleText(const struct FText& TitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetTitleText");

	UBP_ModDownloadDialog_C_SetTitleText_Params params;
	params.TitleText = TitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_FE40CED94C733BBDC41CDF97C272F977
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModDownloadDialog_C::OnFailure_FE40CED94C733BBDC41CDF97C272F977(const struct FModioResponse& response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_FE40CED94C733BBDC41CDF97C272F977");

	UBP_ModDownloadDialog_C_OnFailure_FE40CED94C733BBDC41CDF97C272F977_Params params;
	params.response = response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_FE40CED94C733BBDC41CDF97C272F977
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModDownloadDialog_C::OnSuccess_FE40CED94C733BBDC41CDF97C272F977(const struct FModioResponse& response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_FE40CED94C733BBDC41CDF97C272F977");

	UBP_ModDownloadDialog_C_OnSuccess_FE40CED94C733BBDC41CDF97C272F977_Params params;
	params.response = response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_99E14CA94D8CA1A6DAC86791F6ECCCFE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModioMod>       Mods                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ModDownloadDialog_C::OnFailure_99E14CA94D8CA1A6DAC86791F6ECCCFE(const struct FModioResponse& response, TArray<struct FModioMod> Mods)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_99E14CA94D8CA1A6DAC86791F6ECCCFE");

	UBP_ModDownloadDialog_C_OnFailure_99E14CA94D8CA1A6DAC86791F6ECCCFE_Params params;
	params.response = response;
	params.Mods = Mods;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_99E14CA94D8CA1A6DAC86791F6ECCCFE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModioMod>       Mods                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ModDownloadDialog_C::OnSuccess_99E14CA94D8CA1A6DAC86791F6ECCCFE(const struct FModioResponse& response, TArray<struct FModioMod> Mods)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_99E14CA94D8CA1A6DAC86791F6ECCCFE");

	UBP_ModDownloadDialog_C_OnSuccess_99E14CA94D8CA1A6DAC86791F6ECCCFE_Params params;
	params.response = response;
	params.Mods = Mods;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_994852F543C45337860BB697EC32C733
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModioMod               Mod                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModDownloadDialog_C::OnFailure_994852F543C45337860BB697EC32C733(const struct FModioResponse& response, const struct FModioMod& Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_994852F543C45337860BB697EC32C733");

	UBP_ModDownloadDialog_C_OnFailure_994852F543C45337860BB697EC32C733_Params params;
	params.response = response;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_994852F543C45337860BB697EC32C733
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModioMod               Mod                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModDownloadDialog_C::OnSuccess_994852F543C45337860BB697EC32C733(const struct FModioResponse& response, const struct FModioMod& Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_994852F543C45337860BB697EC32C733");

	UBP_ModDownloadDialog_C_OnSuccess_994852F543C45337860BB697EC32C733_Params params;
	params.response = response;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_58DC14C24C711AD987B2748E428D6989
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModDownloadDialog_C::OnFailure_58DC14C24C711AD987B2748E428D6989(const struct FModioResponse& response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_58DC14C24C711AD987B2748E428D6989");

	UBP_ModDownloadDialog_C_OnFailure_58DC14C24C711AD987B2748E428D6989_Params params;
	params.response = response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_58DC14C24C711AD987B2748E428D6989
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModDownloadDialog_C::OnSuccess_58DC14C24C711AD987B2748E428D6989(const struct FModioResponse& response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_58DC14C24C711AD987B2748E428D6989");

	UBP_ModDownloadDialog_C_OnSuccess_58DC14C24C711AD987B2748E428D6989_Params params;
	params.response = response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBP_ModDownloadDialog_C::BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature");

	UBP_ModDownloadDialog_C_BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_ModDownloadDialog_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Show");

	UBP_ModDownloadDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_ModDownloadDialog_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Hide");

	UBP_ModDownloadDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ModDownloadDialog_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Tick");

	UBP_ModDownloadDialog_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SubscriptionsFailed
// (BlueprintCallable, BlueprintEvent)

void UBP_ModDownloadDialog_C::SubscriptionsFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SubscriptionsFailed");

	UBP_ModDownloadDialog_C_SubscriptionsFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.ExecuteUbergraph_BP_ModDownloadDialog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ModDownloadDialog_C::ExecuteUbergraph_BP_ModDownloadDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.ExecuteUbergraph_BP_ModDownloadDialog");

	UBP_ModDownloadDialog_C_ExecuteUbergraph_BP_ModDownloadDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ModDownloadDialog_C::DownloadFailed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadFailed__DelegateSignature");

	UBP_ModDownloadDialog_C_DownloadFailed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ModDownloadDialog_C::DownloadCanceled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCanceled__DelegateSignature");

	UBP_ModDownloadDialog_C_DownloadCanceled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ModDownloadDialog_C::DownloadCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCompleted__DelegateSignature");

	UBP_ModDownloadDialog_C_DownloadCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
