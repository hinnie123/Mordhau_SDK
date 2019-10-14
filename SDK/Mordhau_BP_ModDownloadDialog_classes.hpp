#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_ModDownloadDialog.BP_ModDownloadDialog_C
// 0x00D9 (0x02E1 - 0x0208)
class UBP_ModDownloadDialog_C : public UMordhauDialog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UBP_OneButtonDialog_C*                       BP_OneButtonDialog;                                       // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCircularThrobber*                           Loading;                                                  // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_1;                                              // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int>                                        AllModsRequired;                                          // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        NewModsRequired;                                          // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    DownloadCompleted;                                        // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CurrentDownloaded;                                        // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDownloadSize;                                        // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RemainingDownload;                                        // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	TArray<int>                                        CurrentInstalledMods;                                     // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AllModsInstalled;                                         // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Finished;                                                 // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Canceled;                                                 // 0x0282(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0283(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    DownloadCanceled;                                         // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<int>                                        ModsToUnsubscribe;                                        // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    DownloadFailed;                                           // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               DOWNLOADING;                                              // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	TArray<int>                                        SubscriptionProcessQueue;                                 // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SubscribedMods;                                           // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DownloadedAnything;                                       // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ModDownloadDialog.BP_ModDownloadDialog_C");
		return ptr;
	}


	void UpdateCurrentDownloadProgress();
	void UpdateCurrentlyInstalledMods();
	void SetButtonText(const struct FText& ButtonText);
	void SetTitleText(const struct FText& TitleText);
	void OnFailure_FE40CED94C733BBDC41CDF97C272F977(const struct FModioResponse& response);
	void OnSuccess_FE40CED94C733BBDC41CDF97C272F977(const struct FModioResponse& response);
	void OnFailure_99E14CA94D8CA1A6DAC86791F6ECCCFE(const struct FModioResponse& response, TArray<struct FModioMod> Mods);
	void OnSuccess_99E14CA94D8CA1A6DAC86791F6ECCCFE(const struct FModioResponse& response, TArray<struct FModioMod> Mods);
	void OnFailure_994852F543C45337860BB697EC32C733(const struct FModioResponse& response, const struct FModioMod& Mod);
	void OnSuccess_994852F543C45337860BB697EC32C733(const struct FModioResponse& response, const struct FModioMod& Mod);
	void OnFailure_58DC14C24C711AD987B2748E428D6989(const struct FModioResponse& response);
	void OnSuccess_58DC14C24C711AD987B2748E428D6989(const struct FModioResponse& response);
	void BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature();
	void Show();
	void Hide();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void SubscriptionsFailed();
	void ExecuteUbergraph_BP_ModDownloadDialog(int EntryPoint);
	void DownloadFailed__DelegateSignature();
	void DownloadCanceled__DelegateSignature();
	void DownloadCompleted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
