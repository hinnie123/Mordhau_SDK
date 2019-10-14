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

// WidgetBlueprintGeneratedClass BP_SteamAvatar.BP_SteamAvatar_C
// 0x0020 (0x0228 - 0x0208)
class UBP_SteamAvatar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      AvatarImage;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  DefaultAvatar;                                            // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Image_Size;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SteamAvatar.BP_SteamAvatar_C");
		return ptr;
	}


	void Update(const struct FSteamID& SteamID);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_BP_SteamAvatar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
