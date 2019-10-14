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

// WidgetBlueprintGeneratedClass BP_RankIcon.BP_RankIcon_C
// 0x011C (0x0324 - 0x0208)
class UBP_RankIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Rank_Index;                                               // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ImageSize;                                                // 0x021C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	struct FSlateBrush                                 RankImage;                                                // 0x0228(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               RankNames;                                                // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSlateBrush>                         RankImages;                                               // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       Rank_Title;                                               // 0x02D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 Division_Color;                                           // 0x02E8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSlateColor>                         TitleColors;                                              // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Rank_MMR;                                                 // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RankIcon.BP_RankIcon_C");
		return ptr;
	}


	void GetRankIndexFromMMR(int MMR, int* Rank_Index);
	void Update_Widget_with_Rank_Index(int Rank_Index_, const struct FVector2D& Image_Size);
	void UpdateRankIndexFromMMR(int MMR, int* Rank_Index);
	void GetRankDivisionColorFromIndex(int Rank_Index, struct FSlateColor* Text_Color);
	void Update_Widget_with_MMR(int Rank_MMR, const struct FVector2D& Image_Size);
	void Construct();
	void ExecuteUbergraph_BP_RankIcon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
