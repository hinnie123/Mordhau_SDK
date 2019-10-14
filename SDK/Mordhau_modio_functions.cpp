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

// Function modio.CallbackProxy_AddMetadataKVP.AddMetadataKVP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString> MetadataKVP                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_AddMetadataKVP* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddMetadataKVP* UCallbackProxy_AddMetadataKVP::STATIC_AddMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddMetadataKVP.AddMetadataKVP");

	UCallbackProxy_AddMetadataKVP_AddMetadataKVP_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.MetadataKVP = MetadataKVP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddMod.AddMod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FModioModCreator        ModCreator                     (Parm)
// class UCallbackProxy_AddMod*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddMod* UCallbackProxy_AddMod::STATIC_AddMod(class UObject* WorldContext, const struct FModioModCreator& ModCreator)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddMod.AddMod");

	UCallbackProxy_AddMod_AddMod_Params params;
	params.WorldContext = WorldContext;
	params.ModCreator = ModCreator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModDependencies.AddModDependencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Dependencies                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_AddModDependencies* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddModDependencies* UCallbackProxy_AddModDependencies::STATIC_AddModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModDependencies.AddModDependencies");

	UCallbackProxy_AddModDependencies_AddModDependencies_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Dependencies = Dependencies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModImages.AddModImages
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ImagePaths                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_AddModImages* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddModImages* UCallbackProxy_AddModImages::STATIC_AddModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModImages.AddModImages");

	UCallbackProxy_AddModImages_AddModImages_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ImagePaths = ImagePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModLogo.AddModLogo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LogoPath                       (Parm, ZeroConstructor)
// class UCallbackProxy_AddModLogo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddModLogo* UCallbackProxy_AddModLogo::STATIC_AddModLogo(class UObject* WorldContext, int ModId, const struct FString& LogoPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModLogo.AddModLogo");

	UCallbackProxy_AddModLogo_AddModLogo_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.LogoPath = LogoPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModRating.AddModRating
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRatingPositive               (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_AddModRating* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddModRating* UCallbackProxy_AddModRating::STATIC_AddModRating(class UObject* WorldContext, int ModId, bool IsRatingPositive)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModRating.AddModRating");

	UCallbackProxy_AddModRating_AddModRating_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.IsRatingPositive = IsRatingPositive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModSketchfabLinks.AddModSketchfabLinks
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SketchfabLinks                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_AddModSketchfabLinks* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddModSketchfabLinks* UCallbackProxy_AddModSketchfabLinks::STATIC_AddModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModSketchfabLinks.AddModSketchfabLinks");

	UCallbackProxy_AddModSketchfabLinks_AddModSketchfabLinks_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.SketchfabLinks = SketchfabLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModTags.AddModTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_AddModTags* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddModTags* UCallbackProxy_AddModTags::STATIC_AddModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModTags.AddModTags");

	UCallbackProxy_AddModTags_AddModTags_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_AddModYoutubeLinks.AddModYoutubeLinks
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         YoutubeLinks                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_AddModYoutubeLinks* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_AddModYoutubeLinks* UCallbackProxy_AddModYoutubeLinks::STATIC_AddModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModYoutubeLinks.AddModYoutubeLinks");

	UCallbackProxy_AddModYoutubeLinks_AddModYoutubeLinks_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.YoutubeLinks = YoutubeLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteMetadataKVP.DeleteMetadataKVP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString> MetadataKVP                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_DeleteMetadataKVP* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_DeleteMetadataKVP* UCallbackProxy_DeleteMetadataKVP::STATIC_DeleteMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteMetadataKVP.DeleteMetadataKVP");

	UCallbackProxy_DeleteMetadataKVP_DeleteMetadataKVP_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.MetadataKVP = MetadataKVP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModDependencies.DeleteModDependencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Dependencies                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_DeleteModDependencies* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_DeleteModDependencies* UCallbackProxy_DeleteModDependencies::STATIC_DeleteModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModDependencies.DeleteModDependencies");

	UCallbackProxy_DeleteModDependencies_DeleteModDependencies_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Dependencies = Dependencies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModImages.DeleteModImages
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ImagePaths                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_DeleteModImages* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_DeleteModImages* UCallbackProxy_DeleteModImages::STATIC_DeleteModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModImages.DeleteModImages");

	UCallbackProxy_DeleteModImages_DeleteModImages_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ImagePaths = ImagePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModSketchfabLinks.DeleteModSketchfabLinks
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SketchfabLinks                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_DeleteModSketchfabLinks* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_DeleteModSketchfabLinks* UCallbackProxy_DeleteModSketchfabLinks::STATIC_DeleteModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModSketchfabLinks.DeleteModSketchfabLinks");

	UCallbackProxy_DeleteModSketchfabLinks_DeleteModSketchfabLinks_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.SketchfabLinks = SketchfabLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModTags.DeleteModTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_DeleteModTags* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_DeleteModTags* UCallbackProxy_DeleteModTags::STATIC_DeleteModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModTags.DeleteModTags");

	UCallbackProxy_DeleteModTags_DeleteModTags_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_DeleteModYoutubeLinks.DeleteModYoutubeLinks
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         YoutubeLinks                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCallbackProxy_DeleteModYoutubeLinks* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_DeleteModYoutubeLinks* UCallbackProxy_DeleteModYoutubeLinks::STATIC_DeleteModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModYoutubeLinks.DeleteModYoutubeLinks");

	UCallbackProxy_DeleteModYoutubeLinks_DeleteModYoutubeLinks_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.YoutubeLinks = YoutubeLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_EditMod.EditMod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FModioModEditor         ModEditor                      (Parm)
// class UCallbackProxy_EditMod*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_EditMod* UCallbackProxy_EditMod::STATIC_EditMod(class UObject* WorldContext, int ModId, const struct FModioModEditor& ModEditor)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_EditMod.EditMod");

	UCallbackProxy_EditMod_EditMod_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ModEditor = ModEditor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_EmailExchange.EmailExchange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SecurityCode                   (Parm, ZeroConstructor)
// class UCallbackProxy_EmailExchange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_EmailExchange* UCallbackProxy_EmailExchange::STATIC_EmailExchange(class UObject* WorldContext, const struct FString& SecurityCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_EmailExchange.EmailExchange");

	UCallbackProxy_EmailExchange_EmailExchange_Params params;
	params.WorldContext = WorldContext;
	params.SecurityCode = SecurityCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_EmailRequest.EmailRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Email                          (Parm, ZeroConstructor)
// class UCallbackProxy_EmailRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_EmailRequest* UCallbackProxy_EmailRequest::STATIC_EmailRequest(class UObject* WorldContext, const struct FString& Email)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_EmailRequest.EmailRequest");

	UCallbackProxy_EmailRequest_EmailRequest_Params params;
	params.WorldContext = WorldContext;
	params.Email = Email;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GalaxyAuth.GalaxyAuth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Appdata                        (Parm, ZeroConstructor)
// class UCallbackProxy_GalaxyAuth* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GalaxyAuth* UCallbackProxy_GalaxyAuth::STATIC_GalaxyAuth(class UObject* WorldContext, const struct FString& Appdata)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GalaxyAuth.GalaxyAuth");

	UCallbackProxy_GalaxyAuth_GalaxyAuth_Params params;
	params.WorldContext = WorldContext;
	params.Appdata = Appdata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllMetadataKVP.GetAllMetadataKVP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetAllMetadataKVP* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetAllMetadataKVP* UCallbackProxy_GetAllMetadataKVP::STATIC_GetAllMetadataKVP(class UObject* WorldContext, int ModId)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllMetadataKVP.GetAllMetadataKVP");

	UCallbackProxy_GetAllMetadataKVP_GetAllMetadataKVP_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllModDependencies.GetAllModDependencies
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetAllModDependencies* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetAllModDependencies* UCallbackProxy_GetAllModDependencies::STATIC_GetAllModDependencies(class UObject* WorldContext, int ModId)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllModDependencies.GetAllModDependencies");

	UCallbackProxy_GetAllModDependencies_GetAllModDependencies_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllMods.GetAllMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FModioFilterCreator     Filter                         (Parm)
// TArray<struct FString>         ModTags                        (Parm, ZeroConstructor)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetAllMods* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetAllMods* UCallbackProxy_GetAllMods::STATIC_GetAllMods(class UObject* WorldContext, const struct FModioFilterCreator& Filter, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllMods.GetAllMods");

	UCallbackProxy_GetAllMods_GetAllMods_Params params;
	params.WorldContext = WorldContext;
	params.Filter = Filter;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAllModTags.GetAllModTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetAllModTags* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetAllModTags* UCallbackProxy_GetAllModTags::STATIC_GetAllModTags(class UObject* WorldContext, int ModId)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllModTags.GetAllModTags");

	UCallbackProxy_GetAllModTags_GetAllModTags_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetAuthenticatedUser.GetAuthenticatedUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetAuthenticatedUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetAuthenticatedUser* UCallbackProxy_GetAuthenticatedUser::STATIC_GetAuthenticatedUser(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAuthenticatedUser.GetAuthenticatedUser");

	UCallbackProxy_GetAuthenticatedUser_GetAuthenticatedUser_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserEvents.GetUserEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetUserEvents* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetUserEvents* UCallbackProxy_GetUserEvents::STATIC_GetUserEvents(class UObject* WorldContext, int Limit, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserEvents.GetUserEvents");

	UCallbackProxy_GetUserEvents_GetUserEvents_Params params;
	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserModfiles.GetUserModfiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetUserModfiles* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetUserModfiles* UCallbackProxy_GetUserModfiles::STATIC_GetUserModfiles(class UObject* WorldContext, int Limit, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserModfiles.GetUserModfiles");

	UCallbackProxy_GetUserModfiles_GetUserModfiles_Params params;
	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserMods.GetUserMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FModioFilterCreator     FilterCreator                  (Parm)
// TArray<struct FString>         ModTags                        (Parm, ZeroConstructor)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetUserMods* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetUserMods* UCallbackProxy_GetUserMods::STATIC_GetUserMods(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserMods.GetUserMods");

	UCallbackProxy_GetUserMods_GetUserMods_Params params;
	params.WorldContext = WorldContext;
	params.FilterCreator = FilterCreator;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserRatings.GetUserRatings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetUserRatings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetUserRatings* UCallbackProxy_GetUserRatings::STATIC_GetUserRatings(class UObject* WorldContext, int Limit, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserRatings.GetUserRatings");

	UCallbackProxy_GetUserRatings_GetUserRatings_Params params;
	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_GetUserSubscriptions.GetUserSubscriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FModioFilterCreator     FilterCreator                  (Parm)
// TArray<struct FString>         ModTags                        (Parm, ZeroConstructor)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_GetUserSubscriptions* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_GetUserSubscriptions* UCallbackProxy_GetUserSubscriptions::STATIC_GetUserSubscriptions(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserSubscriptions.GetUserSubscriptions");

	UCallbackProxy_GetUserSubscriptions_GetUserSubscriptions_Params params;
	params.WorldContext = WorldContext;
	params.FilterCreator = FilterCreator;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_OculusAuth.OculusAuth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Nonce                          (Parm, ZeroConstructor)
// struct FString                 OculusUserId                   (Parm, ZeroConstructor)
// struct FString                 AccessToken                    (Parm, ZeroConstructor)
// struct FString                 Email                          (Parm, ZeroConstructor)
// int                            DateExpires                    (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_OculusAuth* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_OculusAuth* UCallbackProxy_OculusAuth::STATIC_OculusAuth(class UObject* WorldContext, const struct FString& Nonce, const struct FString& OculusUserId, const struct FString& AccessToken, const struct FString& Email, int DateExpires)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_OculusAuth.OculusAuth");

	UCallbackProxy_OculusAuth_OculusAuth_Params params;
	params.WorldContext = WorldContext;
	params.Nonce = Nonce;
	params.OculusUserId = OculusUserId;
	params.AccessToken = AccessToken;
	params.Email = Email;
	params.DateExpires = DateExpires;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SetModDownloadListener.SetModDownloadListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_SetModDownloadListener* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_SetModDownloadListener* UCallbackProxy_SetModDownloadListener::STATIC_SetModDownloadListener(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SetModDownloadListener.SetModDownloadListener");

	UCallbackProxy_SetModDownloadListener_SetModDownloadListener_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SetModfileUploadListener.SetModfileUploadListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_SetModfileUploadListener* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_SetModfileUploadListener* UCallbackProxy_SetModfileUploadListener::STATIC_SetModfileUploadListener(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SetModfileUploadListener.SetModfileUploadListener");

	UCallbackProxy_SetModfileUploadListener_SetModfileUploadListener_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SteamAuth.SteamAuth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Base64Ticket                   (Parm, ZeroConstructor)
// class UCallbackProxy_SteamAuth* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_SteamAuth* UCallbackProxy_SteamAuth::STATIC_SteamAuth(class UObject* WorldContext, const struct FString& Base64Ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SteamAuth.SteamAuth");

	UCallbackProxy_SteamAuth_SteamAuth_Params params;
	params.WorldContext = WorldContext;
	params.Base64Ticket = Base64Ticket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_SubscribeToMod.SubscribeToMod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_SubscribeToMod* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_SubscribeToMod* UCallbackProxy_SubscribeToMod::STATIC_SubscribeToMod(class UObject* WorldContext, int ModId)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SubscribeToMod.SubscribeToMod");

	UCallbackProxy_SubscribeToMod_SubscribeToMod_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.CallbackProxy_UnsubscribeFromMod.UnsubscribeFromMod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCallbackProxy_UnsubscribeFromMod* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCallbackProxy_UnsubscribeFromMod* UCallbackProxy_UnsubscribeFromMod::STATIC_UnsubscribeFromMod(class UObject* WorldContext, int ModId)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_UnsubscribeFromMod.UnsubscribeFromMod");

	UCallbackProxy_UnsubscribeFromMod_UnsubscribeFromMod_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function modio.ModioFunctionLibrary.ModioSetUserEventsPollInterval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntervalInSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioSetUserEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioSetUserEventsPollInterval");

	UModioFunctionLibrary_ModioSetUserEventsPollInterval_Params params;
	params.WorldContextObject = WorldContextObject;
	params.IntervalInSeconds = IntervalInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function modio.ModioFunctionLibrary.ModioSetModEventsPollInterval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntervalInSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioSetModEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioSetModEventsPollInterval");

	UModioFunctionLibrary_ModioSetModEventsPollInterval_Params params;
	params.WorldContextObject = WorldContextObject;
	params.IntervalInSeconds = IntervalInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function modio.ModioFunctionLibrary.ModioProcess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioProcess(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioProcess");

	UModioFunctionLibrary_ModioProcess_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function modio.ModioFunctionLibrary.ModioPrioritizeModDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioPrioritizeModDownload(class UObject* WorldContextObject, int ModId)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioPrioritizeModDownload");

	UModioFunctionLibrary_ModioPrioritizeModDownload_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function modio.ModioFunctionLibrary.ModioLogout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioLogout(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioLogout");

	UModioFunctionLibrary_ModioLogout_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function modio.ModioFunctionLibrary.ModioIsLoggedIn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLoggedIn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioIsLoggedIn(class UObject* WorldContextObject, bool* IsLoggedIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioIsLoggedIn");

	UModioFunctionLibrary_ModioIsLoggedIn_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLoggedIn != nullptr)
		*IsLoggedIn = params.IsLoggedIn;
}


// Function modio.ModioFunctionLibrary.ModioInstallDownloadedMods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioInstallDownloadedMods(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioInstallDownloadedMods");

	UModioFunctionLibrary_ModioInstallDownloadedMods_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function modio.ModioFunctionLibrary.ModioGetUserModRating
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ModRating                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioGetUserModRating(class UObject* WorldContextObject, int ModId, unsigned char* ModRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetUserModRating");

	UModioFunctionLibrary_ModioGetUserModRating_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModRating != nullptr)
		*ModRating = params.ModRating;
}


// Function modio.ModioFunctionLibrary.ModioGetModState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ModState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UModioFunctionLibrary::STATIC_ModioGetModState(class UObject* WorldContextObject, int ModId, unsigned char* ModState)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetModState");

	UModioFunctionLibrary_ModioGetModState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModState != nullptr)
		*ModState = params.ModState;
}


// Function modio.ModioFunctionLibrary.ModioGetModfileUploadQueue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FModioQueuedModfileUpload> UploadQueue                    (Parm, OutParm, ZeroConstructor)

void UModioFunctionLibrary::STATIC_ModioGetModfileUploadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModfileUpload>* UploadQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetModfileUploadQueue");

	UModioFunctionLibrary_ModioGetModfileUploadQueue_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UploadQueue != nullptr)
		*UploadQueue = params.UploadQueue;
}


// Function modio.ModioFunctionLibrary.ModioGetModDownloadQueue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FModioQueuedModDownload> QueuedMods                     (Parm, OutParm, ZeroConstructor)

void UModioFunctionLibrary::STATIC_ModioGetModDownloadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModDownload>* QueuedMods)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetModDownloadQueue");

	UModioFunctionLibrary_ModioGetModDownloadQueue_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueuedMods != nullptr)
		*QueuedMods = params.QueuedMods;
}


// Function modio.ModioFunctionLibrary.ModioGetInstalledMod
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)
// struct FModioMod               Mod                            (Parm, OutParm)

void UModioFunctionLibrary::STATIC_ModioGetInstalledMod(class UObject* WorldContextObject, int ModId, struct FString* Path, struct FModioMod* Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetInstalledMod");

	UModioFunctionLibrary_ModioGetInstalledMod_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function modio.ModioFunctionLibrary.ModioGetAllInstalledMods
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FModioInstalledMod> InstalledMods                  (Parm, OutParm, ZeroConstructor)

void UModioFunctionLibrary::STATIC_ModioGetAllInstalledMods(class UObject* WorldContextObject, TArray<struct FModioInstalledMod>* InstalledMods)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetAllInstalledMods");

	UModioFunctionLibrary_ModioGetAllInstalledMods_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstalledMods != nullptr)
		*InstalledMods = params.InstalledMods;
}


// Function modio.ModioFunctionLibrary.ModioGetAllDownloadedMods
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    DownloadedMods                 (Parm, OutParm, ZeroConstructor)

void UModioFunctionLibrary::STATIC_ModioGetAllDownloadedMods(class UObject* WorldContextObject, TArray<int>* DownloadedMods)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetAllDownloadedMods");

	UModioFunctionLibrary_ModioGetAllDownloadedMods_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownloadedMods != nullptr)
		*DownloadedMods = params.DownloadedMods;
}


// Function modio.ModioFunctionLibrary.ModioCurrentUser
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FModioUser              user                           (Parm, OutParm)

void UModioFunctionLibrary::STATIC_ModioCurrentUser(class UObject* WorldContextObject, struct FModioUser* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioCurrentUser");

	UModioFunctionLibrary_ModioCurrentUser_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (user != nullptr)
		*user = params.user;
}


// Function modio.ModioFunctionLibrary.ModioAddModfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FModioModfileCreator    ModfileCreator                 (Parm)

void UModioFunctionLibrary::STATIC_ModioAddModfile(class UObject* WorldContextObject, int ModId, const struct FModioModfileCreator& ModfileCreator)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioAddModfile");

	UModioFunctionLibrary_ModioAddModfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;
	params.ModfileCreator = ModfileCreator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function modio.ModioFunctionLibrary.AuthenticateViaToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AccessToken                    (Parm, ZeroConstructor)

void UModioFunctionLibrary::STATIC_AuthenticateViaToken(class UObject* WorldContextObject, const struct FString& AccessToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.AuthenticateViaToken");

	UModioFunctionLibrary_AuthenticateViaToken_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AccessToken = AccessToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
